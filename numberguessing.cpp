#include <iostream>
#include <ctime>
int main() {

    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num = rand() % 100 +1;
    std::cout << "****** NUMBER GUESSING GAME ******" << std::endl;

    do{

        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        
        tries=tries+1;

        if(guess > num){
            std::cout << "Too high!" << std::endl;
        }
        else if(guess < num){
            std::cout << "Too low!" << std::endl;
        }
        else{
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!" << std::endl;
        }
    
    }while(guess != num);
    

    return 0;
}