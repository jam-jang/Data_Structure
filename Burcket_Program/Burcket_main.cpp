#include "Burcket.h"

int main()
{
    ArrayStack stack;
    std::string text = "";
    char ch='\0', prev='\0'; //null

    getline(std::cin,text);
    //std::cout << text << std::endl;

    int i;
    for(i=0; i<text.length(); i++)
    {
        ch=text[i];
        switch(ch)
        {
            case '[': case '{': case '(':
                stack.push(ch);
                break;
            case ']': case '}': case ')':
                if(stack.isEmpty())
                {
                    std::cout << "ERROR" << std::endl;
                    return -1;
                }
                else
                {
                    prev = stack.pop();
                }

                if((ch ==']' && prev !='[') || (ch == '}' && prev!='{')||(ch==')' && prev != '('))
                {
                    std::cout << "ERROR" << std::endl;
                    return -1;
                }
                break;

            default:
                std::cout << " [], {}, () You must insert! " << std::endl;
                break;

        }
    }
    std::cout << "SUCCESS" << std::endl;


    return 0;
}