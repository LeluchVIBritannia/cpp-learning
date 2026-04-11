#include <iostream>
#include <vector> // need for type def

typedef std::vector<std::pair<std::string, int>> pairlist_t;  
using text_t = std::string; //using also works for typedef

int main()
{
    using std::cin;
    using std::cout;    // usind is like namespace so now if we print  smth we can do it withoug using std::cout but be creful 
    using std::string; //  becaue std had lot of other functionso can be error
    
    string name = "Zoro"; 
    cout <<"Good Moring "<<name <<'\n';

    //Typedef is a way we can make a new name of datadype, to reduce errors and improve readability. It is used outside main
    std::vector<std::pair<std::string, int>> parilist;
    pairlist_t pairlist;   
    text_t a = "haha";
    cout <<a <<'\n';
    
    //Type conversion = converting datatype. Impliset = automatics, Explecit = predence byalue with new dt
    int coretc = 8;
    int total = 10;
    double score = coretc / (double) total * 100;
    cout <<score <<"%" <<'\n';

    // user input 
    string name2 = "";
    string anyting = "";

    cout <<"Enter Name ";
    cin >>name2;
    cout <<"Enter anything ";  // when our string has spaces than cin will not read after space so getline() is used.
    std::getline(cin >>std::ws, name); //std::ws wil ignore white space.


    cout <<'\n' <<name2 <<'\n';
    cout <<anyting <<'\n';

    return 0;
}