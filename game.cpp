#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int player1(int num)
{
    int p1;
    cout<<"player1 enter your number:"<<endl;
    cin>>p1;
    int d1=abs(num-p1);
    return d1;
}

int player2(int num)
{
    int p2;
    cout<<"player2 enter your number:"<<endl;
    cin>>p2;
    int d2= abs(num-p2);
    return d2;
}
int player3(int num)
{
    int p3;
    cout<<"player3 enter your number:"<<endl;
    cin>>p3;
    int d3= abs(num-p3);
    return d3;
}
void comparision(int num)
{
    int d1=player1(num);
    int d2=player2(num);
    int d3=player3(num);
    while (d1!=0 or d2!=0 or d3!=0)
    {
        
    
    
        if ((d1< d2)&&(d1<d3))

        {
            if (d1==0)
            {
                    cout<<"Hurrah! player1 won the game 🥳"<<endl;
                    break;
            }
            d1=player1(num);
            if (d2<d3)
            {
                d2=player2(num);
                d3=player3(num);
            }
            else{
                    d3=player3(num);
                    d2=player2(num);
            }
            
            
        }

        if ((d2< d1) && (d2<d3))
        {
            if (d2==0)
            {
                cout<<"Hurrah! player2 won the game 🥳"<<endl;
                break;
            }
            d2=player2(num);
            if (d1<d3)
            {
                d1=player1(num);
                d3=player3(num);
            }
            else
                {
                    d3=player3(num);
                    d1=player1(num);
                }
            
        }
        if ((d3< d2) && (d3<d1))
        {
            if (d3==0)
            {
                cout<<"Hurrah! player3 won the game 🥳"<<endl;
                break;
            }
            d3=player3(num);
            if (d1<d2)
            {
                d1=player1(num);
                d2=player2(num);
            }
            else
                {
                    d2=player2(num);
                    d1=player1(num);
                }
            
        }
    }


}


int main()
{
    cout<<"players choose a number between 1 and 100."<<endl;
    srand(time(0));
    int min=1;
    int max=100;
    int number=rand()%(max-min+1)+min;
    comparision(number);
}

