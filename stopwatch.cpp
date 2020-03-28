#include <iostream>
using namespace std;

#include <conio.h>
#include <windows.h>

int main()
{
    int ch1=0,ch2=0;
    do
    {
        int sec=0,min=0,m=0;

        system("cls");
        cout<<"\nWelcome To Shabby StopWatch!\n\nDuring Stopwatch is recording, press any key to stop!\n\nPlease Select Your Options!";
        cout<<"\n\n1. Start Sopwatch\n0. Exit\n\nYour CHoice: ";
        cin>>ch1;
        if(ch1==1)
        {
           do
            {
                sec++;
                m++;

                if(m==60)
                {
                    min++;
                    m=0;
                    sec=0;
                }
                system("cls");
                cout<<"Recording: "<<min<<":"<<sec;

                Sleep(1000);

            } while(!kbhit());

            cout<<"\nYour Total Time was: "<<min<<" (min)"<<":"<<sec<<" (sec)"<<endl;
            getch();

            cout<<"\n\nDo you want to:\n\n1. Continue\n0. Go to main menu to start a new trial!\n\nYour Choice: ";
            cin>>ch2;

            if(ch2==1)
            {
                do
                {
                    sec++;
                    m++;

                    if(m==60)
                    {
                        min++;
                        m=0;
                        sec=0;
                    }
                    system("cls");
                    cout<<"Recording: "<<min<<":"<<sec;

                    Sleep(1000);

                } while(!kbhit());

                cout<<"\nYour NEW Total Time was: "<<min<<" (min)"<<":"<<sec<<" (sec)"<<endl;
                getch();
                getch();
            }
            else if(ch2==0)
            {
                continue;
            }

        }
        else if(ch1!=0)
        {
            cout<<"\nWrong input!\nPress any key to continue!\n";
            getch();
        }
    }while(ch1!=0);

    return 0;
}
