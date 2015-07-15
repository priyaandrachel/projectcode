#include <iostream>
#include <string>
#include <random>
#include <fstream>
#include <vector>

using namespace std;

int main() {
   
    std::string name = "Dan";
    std::string CorrectName = "Iksha";
    string guesses[1];
    int count = 0;
    cout << "Welcome to Priya and Rachel's YSP challenge. Can you guess the YSPer?\n";

    while(1){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 39);
    //random description from 40 choices in names.txt
    dis(gen);
    std::ifstream namestream;
    namestream.open("names.txt");
    std::vector<string> names;
    std::vector<string> descriptions;
    if (namestream.is_open()){//validating user input, can you open the file?
      std::string currentItem;
          //Do more stuff
          while(!namestream.eof()){//is it over yet?
         
          std::getline(namestream, currentItem); //read line of the file
          names.push_back(currentItem); //add to the vector
          std::getline(namestream, currentItem); //read line of the file
          descriptions.push_back(currentItem); //add to the vector
         }   
      }
      int ran = dis(gen);
    
    std::cout<<descriptions[ran];
   
   
  
    for (int i = 0; i<1; i++){
        cin >> name;
        guesses[i] = name;
        count ++;
        if (name == names[ran]){
            cout << "You guessed it! You really know your YSPeople.\n";
            cout << "Now see if you can guess who this is:";
            break;
        }
        else
        cout << "\nThat is not the correct YSPer.\n";
        std::cout<<"The correct name of the YSPer is: ";
        std::cout<<"\n ";
        std::cout<<names[ran];
        std::cout<<"\nLet's see if you have better luck figuring out the name of this person:\n";
        }
        

   

}
    return 0;
}
