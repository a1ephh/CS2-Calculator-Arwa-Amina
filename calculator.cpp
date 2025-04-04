double parsing(){
    string input;   // eg: (2+1)*5
    cout << "Enter an arithmetic expression: ";
    cin >> input;
    stack<string> operators;
    queue <string> output;
    string currentNb;



    for(int i=0;i < input.length(); ++i){

        if(isdigit(input[i])){ //checking if its a number
        currentNb+=input[i];}
        else if (input[i] == ' ') { 
            if (!currentNb.empty()) {
                output.push(currentNb);
                currentNb = ""; //reset
        }} else if (input[i] == '(') {
            operators.push(string(1, input[i]));}
            else if(input[i] == ')'){
                        if(!currentNb.empty()){ // if a current nb exists then push it into output queue and reset
                            output.push(currentNb);
                            currentNb="";
                        } 
                        while(!operators.empty() && operators.top() !="("){
                            string opTop=operators.top();
                            output.push(opTop);
                            operators.pop();
                        } 
                        if(operators.empty()){
                            cout << "Error: Unbalanced Parantheses";
                            return -1;
                        }
                        operators.pop(); // pop the opening (
            }
            else if (input[i] == '+' || input[i] == '-' ){ 
                if(!currentNb.empty()){     // 1+3*(5-3) current nb=1 so push into output then push + 
                    output.push(currentNb);
                    currentNb="";
                }
                
                if(!operators.empty()){
                while(operators.top()== "*" || operators.top()=="/"){
                    string opTop=operators.top();
                    output.push(opTop);
                    operators.pop();
                }}
                output.push(string(1, input[i])); // now push the +
                
            }
            else if (input[i] == '*' || input[i] == '/' ){ 
                if(!currentNb.empty()){     
                    output.push(currentNb);
                    currentNb="";
                }
                
                output.push(string(1, input[i])); 
                
            }
        else{
            cout << endl << "Error: input is not exclusively numbers and operators";
            return -1;
        }}
        while(!operators.empty()){
            output.push(operators.top());
            operators.pop();
        }
        //////// now we do postfix evalulation
stack<double> evaluation_stack;
    while (!output.empty()) {
        string token = output.front();
        output.pop();

        if (isdigit(token[0]) || (token.length() > 1 && isdigit(token[1]))) {
            try {
                evaluation_stack.push(stod(token));
            } catch (const std::invalid_argument& e) {
                cout << endl << "Error: Invalid number in RPN output." << endl;
                return -1.0;
            } catch (const std::out_of_range& e) {
                cout << endl << "Error: Number out of range." << endl;
                return -1.0;
            }
        } else if (token.length() == 1) {
            char op = token[0];
            if (evaluation_stack.size() < 2) {
                cout << endl << "Error: Not enough operands for operator '" << op << "'." << endl;
                return -1.0;
            }
            double operand2 = evaluation_stack.top();
            evaluation_stack.pop();
            double operand1 = evaluation_stack.top();
            evaluation_stack.pop();
            double result;
            switch (op) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/':
                    if (operand2 == 0) {
                        cout << endl << "Error: Division by zero." << endl;
                        return -1.0;
                    }
                    result = operand1 / operand2;
                    break;
                default:
                    cout << endl << "Error: Invalid operator in RPN output: '" << op << "'." << endl;
                    return -1.0;
            }
            evaluation_stack.push(result);
        } else {
            cout << endl << "Error: Invalid token in RPN output: '" << token << "'." << endl;
            return -1.0;
        }
    }

    if (evaluation_stack.size() != 1) {
        cout << endl << "Error: Too many operands or operators." << endl;
        return -1.0;
    }

    return evaluation_stack.top();
}
