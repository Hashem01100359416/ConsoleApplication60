#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a1[4][4] = {
                      {"    @    ","    $    ","  #  ","  W  "},
                      {"    $    ","    @    ","  #  ","  &  "},
                      {"    H    ","    A    ","  B  ","  &  "},
                      {"    A    ","    H    ","  W  ","  B  "} };

    string a2[4][2] = { {" * (0,0) "," * (0,1) "},
                        {" * (1,0) "," * (1,1) "},
    {" * (2,0) "," * (2,1) "}, 
    {" * (3,0) "," * (3,1) "}, };
                    
    
    while (true)
    {
        int a , b,c,d;
        cout << "                                                                           |$$$$| Hello whis you in my first Game by C++ |$$$$|" << endl;
      cout << endl<<endl<<endl<<endl;
      cout << "                                                                                       _____________________" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "                                                                                       |";
            for (int j = 0; j < 2; j++)
            {
                cout <<a2[i][j]<< "|";
            }
           
           cout << endl;
        }

        int l = 0;
        for (int k = 0; k < 4; k++)
        {
            for (int j1 = 0; j1 < 2; j1++)
            {
                if (a2[k][j1] == a1[k][j1])
                {
                    l++;
                }
                else
                {
                    k = 5;
                    break;
                }
            }
        }

        if (l == 8)
        {
            cout << endl << "                                                                                       ||     YOU WIN     ||                    " << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            break;
        }


        cout <<endl<<endl<<"                                                                Enter Tow number for eche star ( * )   this Game Please .....----> :: ";
        cin >> a >> b>>c>>d;
        if (a1[a][b] == a1[c][d])
        {
            a2[a][b] = a1[a][b];
            a2[c][d] = a1[c][d];
        }
       
        cout << endl<<endl<<endl<<endl<<endl<<endl<<"=============================================================================================================================================================================================================="
        << "========================================================================================================================================================================================================================" << endl;

    }
}