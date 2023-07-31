if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }