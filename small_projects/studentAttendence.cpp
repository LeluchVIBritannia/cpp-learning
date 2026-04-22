#include <iostream>

using std::cin; using std::cout; using std::string;  


class Student {     
    public:         
        string name;         
        int roll;         
        bool isPresent;  
        
        void markPresent() { isPresent = true; }  
        void markAbsent()  { isPresent = false; }  
        
        void display() {                
            cout << "\nStudent name: " << name << " roll number : " << roll;             
            if(isPresent) 
            {
                cout << "\nPresent"; 
            }             
            else
            { 
                cout << "\nAbsent\n"; 
            }         
        }  
        
        Student(string name , int roll) {             
            this->name = name;             
            this->roll = roll;         
        } 
};  
//void getStudent(string &name , string id , int sizeName);
//void getInput(string &name , int &roll , int studentNum , int size);

int main()
{
    string name[5] = {"name1" , "name2" , "name3" , "name4" , "name5"};
    int roll[5]   = {1 , 2 , 3 , 4 , 5};
    int num = 1;
    char status;

    Student student1(name[0] , roll[0]);
    Student student2(name[1] , roll[1]);
    Student student3(name[2] , roll[2]);
    Student student4(name[3] , roll[3]);
    Student student5(name[4] , roll[4]);

    

    for(int i = 0 ; i < 5 ; i++) 
    {         
        cout << "\nEnter student roll number (1-5): ";         
        cin >> num;                  
        
        switch(num) 
        {  
            case 1: 
                cout << "Is " << student1.name << " present?(y/n): ";                 
                cin >> status;                  
                if(status == 'y') 
                { 
                    student1.markPresent();  
                }               
                else 
                {
                    student1.markAbsent();  
                }               
                student1.display();  
                break;             
            case 2: 
                cout << "Is " << student2.name << " present?(y/n): ";                 
                cin >> status; 

                if(status == 'y')
                {
                    student2.markPresent();    
                }             
                else
                {
                    student2.markAbsent();      
                }           
                student2.display(); 
                break;             
            case 3: 
                cout << "Is " << student3.name << " present?(y/n): ";                 
                cin >> status; 

                if(status == 'y')
                {
                    student3.markPresent();    
                }             
                else
                {
                    student3.markAbsent();      
                }           
                student3.display(); 
                break;          
            case 4: 
                cout << "Is " << student4.name << " present?(y/n): ";                 
                cin >> status; 

                if(status == 'y')
                {
                    student4.markPresent();    
                }             
                else
                {
                    student4.markAbsent();      
                }           
                student4.display(); 
                break; 
            case 5:
                cout << "Is " << student5.name << " present?(y/n): ";                 
                cin >> status; 

                if(status == 'y')
                {
                    student5.markPresent();    
                }             
                else
                {
                    student5.markAbsent();      
                }           
                student5.display(); 
                break; 
            default: 
                cout << "Invalid roll number!\n"; break;
        }     
    }  
    return 0;
}

/*void getStudent(string &name , string &id, int sizeName)
{
    string Name;
    string ID;

    for(int i = 0 ; i < sizeName ; i ++)
    {
        cout << "Enter a name ";
        cin  >> Name;
        cout << "Enter a Id ";
        cin  >> ID;

        name[i] = Name; 
        id[i]   = ID;
    }

}*/

/*void getInput(string &name , int &roll , int studentNum , int size)
{
    int num;

    cout << "Enter student roll number.(1-5)";
    cin  >> num;

    switch(num)
    {
       case 1: 
            cout << "Is " << student1.name << " present?(y/n)";
            cin  >> status;

            if(status == 'y')
            {
                student1.markPresent();
            }
            else 
            {
                student1.markAbsent();
            }
            break;
        case 2: 
            cout << "Is " << student2.name << " present?(y/n)";
            cin  >> status;

            if(status == 'y')
            {
                student2.markPresent();
            }
            else 
            {
                student2.markAbsent();
            }
            break;
        case 3: 
            cout << "Is " << student3.name << " present?(y/n)";
            cin  >> status;

            if(status == 'y')
            {
                student3.markPresent();
            }
            else 
            {
                student3.markAbsent();
            }
            break;
        case 4: 
            cout << "Is " << student4.name << " present?(y/n)";
            cin  >> status;

            if(status == 'y')
            {
                student4.markPresent();
            }
            else 
            {
                student4.markAbsent();
            }
            break;
        case 5: 
            cout << "Is " << student5.name << " present?(y/n)";
            cin  >> status;

            if(status == 'y')
            {
                student5.markPresent();
            }
            else 
            {
                student5.markAbsent();
            }
            break;
    }

}*/