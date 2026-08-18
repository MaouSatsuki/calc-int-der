#include <iostream>
#include <math.h>

//pra compilar como exe e rodar em todos os pcs
//g++ calcintder.cpp -o calcintder.exe -static -static-libgcc -static-libstdc++

int main()
{
    while(true)
    {
    int opcao1, opcao2, opcao3;
    float a, b, c, d, e, f, g, h, i, j;

    std::cout << "\n";

    std::cout << "Derivada (1) ou Integral (2): ";
    std::cin >> opcao1;

    switch(opcao1)
    {
        case 1:

        std::cout << "Sozinha (0), Soma(1), Subtracao (2), Multiplicacao (3) , Divisao (4):  ";
        std::cout << "\n";
        std::cin >> opcao2;

        switch(opcao2)
        {
        case 0:
 
            std::cout << "A: ";
            std::cin >> a;
            std::cout << "\n";
            std::cout << "N: ";
            std::cin >> b;
            std::cout << "\n";
            std::cout << a * b << "x^" << b - 1;
            std::cout << "\n";
            std::cout << "\n";
            break;
 
        case 1:
 
        std::cout << "A1: ";
        std::cin >> a;
        std::cout << "\n";
        std::cout << "N1: ";
        std::cin >> b;
        std::cout << "\n";
        std::cout << "A2: ";
        std::cin >> c;
        std::cout << "\n";
        std::cout << "N2: ";
        std::cin >> d;
        std::cout << "\n";
        std::cout << a * b << "x^" << b - 1 << " + " << c * d << "x^" << d - 1;
        std::cout << "\n";
        std::cout << "\n";
        break;
       
        case 2:
 
        std::cout << "A1: ";
        std::cin >> a;
        std::cout << "\n";
        std::cout << "N1: ";
        std::cin >> b;
        std::cout << "\n";
        std::cout << "A2: ";
        std::cin >> c;
        std::cout << "\n";
        std::cout << "N2: ";
        std::cin >> d;
        std::cout << "\n";
        std::cout << a * b << "x^" << b - 1 << " - " << c * d << "x^" << d - 1;
        std::cout << "\n";
        std::cout << "\n";
        break;
 
        case 3:
 
        std::cout << "A1: ";
        std::cin >> a;
        std::cout << "\n";
        std::cout << "N1: ";
        std::cin >> b;
        std::cout << "\n";
        std::cout << "A2: ";
        std::cin >> c;
        std::cout << "\n";
        std::cout << "N1: ";
        std::cin >> d;
        std::cout << "\n";
        std::cout << a * b << "x^" << b - 1 << " . " << c << "x^" << d << " + " << a << "x^" << b << " . " << c * d << "x^" << d - 1;
        std::cout << "\n";
        std::cout << "\n";
        break;
 
        case 4:
 
        std::cout << "A1: ";
        std::cin >> a;
        std::cout << "\n";
        std::cout << "N1: ";
        std::cin >> b;
        std::cout << "\n";
        std::cout << "A2: ";
        std::cin >> c;
        std::cout << "\n";
        std::cout << "N1: ";
        std::cin >> d;
        std::cout << "\n";
        std::cout << "( " << a * b << "x^" << b - 1 << " . " << c << "x^" << d << " - " << a << "x^" << b << " . " << c * d << "x^" << d - 1 << " ) / " << "(" << c << "x^" << d << ")^2";
        std::cout << "\n";
        std::cout << "\n";
        break;
        }
 
        break;

        case 2:
                
        std::cout << "Sozinha (0), Soma(1), Subtracao (2), Definida (3)";
        std::cout << "\n";
        std::cin >> opcao2;

        switch(opcao2)
        {
        case 0:
 
            std::cout << "A: ";
            std::cin >> a;
            std::cout << "\n";
            std::cout << "N: ";
            std::cin >> b;
            std::cout << "\n";
            std::cout << "( " << a << "x^" << b + 1 << " )" << " / " << b + 1 << " + C";
            std::cout << "\n";
            break;
 
        case 1:
 
            std::cout << "A1: ";
            std::cin >> a;
            std::cout << "\n";
            std::cout << "N1: ";
            std::cin >> b;
            std::cout << "\n";
            std::cout << "A2: ";
            std::cin >> c;
            std::cout << "\n";
            std::cout << "N2: ";
            std::cin >> d;
            std::cout << "( " << a << "x^" << b + 1 << " )" << " / " << b + 1 << " + " << "( " << c  << "x^" << d + 1 << " )" << " / " << d + 1 << " + C";
            std::cout << "\n";
            break;
 
          case 2:
 
            std::cout << "A1: ";
            std::cin >> a;
            std::cout << "\n";
            std::cout << "N1: ";
            std::cin >> b;
            std::cout << "\n";
            std::cout << "A2: ";
            std::cin >> c;
            std::cout << "\n";
            std::cout << "N2: ";
            std::cin >> d;
            std::cout << "( " << a << "x^" << b + 1 << " )" << " / " << b + 1 << " - " << "( " << c  << "x^" << d + 1 << " )" << " / " << d + 1 << " + C";
            std::cout << "\n";
            break;

         case 3:

         std::cout << "A: ";
         std::cin >> a;
         std::cout << "N: ";
         std::cin >> b;
         std::cout << "De: ";
         std::cin >> c;
         std::cout << "Ate: ";
         std::cin >> d;
         e = b + 1;
         f = (a * pow(c, e))/e;
         g = (a * pow(d, e))/e;
         std::cout << g - f;
         break;

    }
    }

        std::cout << "\n";
        std::cout << "\n";
        system("pause");
        system("cls");

    }

    }
        


        


        





    
    

