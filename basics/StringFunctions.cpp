#include <iostream>

int main()
{
    std::string name;

    std::cout <<"Entert your name ";
    std::getline(std::cin , name);

    //length of string 
    std::cout <<name.length() <<'\n';
    std::cout <<name.empty() <<'\n'; // willreturn if the string is empty or not 
    //name.clear(); // it clear the string
    name.append(" Hello"); // With this we can add this to string 
    std::cout <<"your name is " <<name <<'\n';
    //to return what character is in srring at() some posito we use at
    std::cout <<name.at(0) <<'\n';
    //std::cout <<name.insert(1,'N');//can insert a value at posiotn
    std::cout <<name.find(' ') <<'\n'; //Will check if thes character is therr
    //name.erase(0,3); // we can remove part of thing in string
    

    return 0;
}