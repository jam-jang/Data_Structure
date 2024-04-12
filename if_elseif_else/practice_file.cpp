#include<iostream>
#include<string>
#include<cctype>

int main()
{
    //if elseif else 연습

    // int num;
    // std::cout << "input number: ";
    // std::cin >> num ;
    // if(num%3==0)
    // {
    //     std::cout << "3 " << std::endl;
    // }
    // if(num%5==0)
    // {
    //     std::cout << "5 " << std::endl;
    // }
    // if(num%7==0)
    // {
    //     std::cout << "7 " << std::endl;
    // }
    

    //대,소문자 문자 문제
    char ch;
    std::cout << "input character or string: ";
    std::cin >> ch;
    
    if(ch>='A' && ch<='Z')
    {
        std::cout << "Uppercase letter" << std::endl;
    }
    else if(ch>='a' && ch<='z')
    {
        std::cout << "small letter" << std::endl;
    }
    else if(std::isdigit(ch))//문자가 숫자일 경우 숫자를 출력한다. 
    {   
        int num=ch;
        std::cout << num << std::endl;
    }
    else
    {
        std::cout << "기타" << std::endl;
    }

    


    return 0;
}