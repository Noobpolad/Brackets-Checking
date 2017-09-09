#include <iostream>
#include <fstream>

using namespace std;

void bracketsChecking();

int main()
{

    bracketsChecking();

    return 0;
}


void bracketsChecking(){

   ifstream read ("Example.txt");

   int openBrackets = 0;
   int closingBrakets = 0;

   do{

        string sentence;

        getline(read,sentence);

        for(int a = 0;a < sentence.length();a++){

            char character = sentence.at(a);

            if(character == '('
            || character == '{'
            || character == '['){

                openBrackets++;

            }
            else if(character == ')'
            || character == '}'
            || character == ']'){

                closingBrakets++;

            }

        }

   }while(read);

   if(openBrackets == closingBrakets){

        cout << "The correct brackets number.";

   }
   else{

        cout << "Wrong brackets number.";

   }

}
