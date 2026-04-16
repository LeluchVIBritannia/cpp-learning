#include <iostream>

int main()
{   
    //row col
    std::string car[3][3] = {{"Ford  " , " Mustang" , " F-150 "} ,
                             {"Toyota" , " GR-GT-3" , " Celica"} ,
                             {"Nissan" , "    S13    " , " GTR   "}};

    std::cout << "Brand   Car1     Car2\n";

    for(int row = 0 ; row < 3 ; row++)
    {
        for(int col = 0 ; col < 3 ; col++)
        {
            std::cout << car[row][col] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}