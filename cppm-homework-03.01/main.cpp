//
//  main.cpp
//  cppm-homework-03.01
//
//  Created by a1ex on 6/18/23.
//

#include <iostream>
#include <string>

class Calculator
{
  public:
    double num1;
    double num2;
    
//private:
    double add ()
    {
        double sum = num1 + num2;
        return sum;
    }
    double multyply ()
    {
        double multyply = num1 * num2;
        return multyply;
    }
    double subtract_1_2 ()
    {
        double subtract_1 = num2 - num1;
        return subtract_1;
    }
    double subtract_2_1 ()
    {
        double subtract_2 = num1 - num2;
        return subtract_2;
    }
    double divide_1_2 ()
    {
        double divide_1 = num1/num2;
        return divide_1;
    }
    double divide_2_1 ()
    {
        double divide_2 = num2/num1;
        return divide_2;
    }
    bool set_num1 (double num1)
    {
        if (num1 != 0){
            this-> num1 = num1;
            return true;
        } else return false;
    }
    bool set_num2 (double num2)
    {
        if (num2 != 0){
            this-> num2 = num2;
            return true;
        } else return false;
    }
};







int main(int argc, const char * argv[]) {
   
    Calculator calculator;
    
    for  ( ; ; )
    {
        std::cout << "Please enter num1: ";
        std::cin  >> calculator.num1;
        
        
        for (calculator.set_num1(0);calculator.num1 == 0;)
        {
            std::cout << "Wrong number!" << '\n';
            std::cout << "Please enter num1: ";
            std::cin  >> calculator.num1;
            
        };
        
        
        std::cout << "Please enter num2: ";
        std::cin  >> calculator.num2;
      
        
        for (calculator.set_num2(0);calculator.num2 == 0;)
        {
            std::cout << "Wrong number!" << '\n';
            std::cout << "Please enter num2: ";
            std::cin  >> calculator.num2;
         
        };
       
        
        
        std::cout << "num1 + num 2 = " << calculator.add() << '\n';
        std::cout << "num1 - num 2 = " << calculator.subtract_2_1() << '\n';
        std::cout << "num2 - num 1 = " << calculator.subtract_1_2() << '\n';
        std::cout << "num1 * num 2 = " << calculator.multyply() << '\n';
        std::cout << "num1 / num 2 = " << calculator.divide_1_2() << '\n';
        std::cout << "num2 / num 1 = " << calculator.divide_2_1() << '\n';
    }
    
    return 0;
}
