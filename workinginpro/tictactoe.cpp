///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE-SWE'19)
///STARTING DAY:22/6/2020

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void print(ll c[4][4])
{
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3; j++)
        {
            cout<<c [i][j]<<" ";
            if(j%3==0 || j%3==1)
                cout<<"| ";
        }
        cout<<endl;
        if(i%3==0 || i%3==1)
        {
            cout<<"_   _   _";

        }
        cout<<endl;
        cout<<endl;
    }
}

int main()
{
    ll c[4][4];


    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3; j++)
        {
            c [i][j]=0;
        }
    }



    ///PRE START FORMALITIES

    ll count=0;
    string p,q;
    cout<<"WELCOME TO TIC TAC TOE"<<endl;
    cout<<"PREPARED BY MD SADMAN MEHEDI SIVAN"<<endl<<endl;;
    cout<<"Type the name of the player 1"<<endl;
    cin>>p;
    cout<<"Type the name of the player 2"<<endl;
    cin>>q;


    cout<<"Who wants to start the game?"<<endl;
    cout<<"Press 1 for "<<p<<" AND Press 2 for "<<q<<endl;
    cout<<"Your answer:"<<endl;
    ll x;

    ///CHECKING THE RIGHT INPUT


    while(1)
    {
        cin>>x;

        if(x<1 || x>2)
        {
            cout<<"Invalid Input!"<<endl<<"Press again-> "<<endl;
            continue;
        }
        else
            break;
    }


    ///MATCH START
    map<ll,ll>mp;

    while(1)
    {


        ///IF THE FIRST PERSON START THE MATCH

        if(x==1)
        {

            count++;

            if(count==10)
            {
                print(c);
                cout<<"The match is Draw!!"<<endl;
                return 0;
            }
            cout<<endl;
            print(c);


            if(count%2==1)
            {
                cout<<p<<" give your input->"<<endl;

                ll r;

                while(1)
                {
                    cin>>r;

                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }

                    else
                    {
                        cout<<"Invalid Input!"<<endl<<"Press again-> "<<endl;
                        continue;
                    }

                }








                if(r==1)
                {
                    c[0][0]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=1;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=1;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=1;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=1;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

            }


            ///WHEN SECOND PERSON IS GIVING SHOT


            else
            {

                if(count==10)
                {
                    print(c);
                    cout<<"The match is Draw!!"<<endl;
                    return 0;
                }


                cout<<q<<" give your input"<<endl;
                ll r;



                while(1)
                {
                    cin>>r;


                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }

                    else
                    {
                        cout<<"Invalid Input!"<<endl<<"Press again-> "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=2;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=2;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=2;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=2;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }


            }



        }

        ///IF THE SECOND PERSONT START THE MATCH


        else
        {

            count++;

            if(count==10)
            {
                print(c);
                cout<<"The match is Draw!!"<<endl;
                return 0;
            }
            ///SECOND PERSON GIVING HIS SHOT

            if(count%2==1)
            {

                cout<<"Player "<<q<<" give your input"<<endl;
                ll r;


                print(c);


                while(1)
                {
                    cin>>r;

                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl<<"Press again: "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=2;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=2;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=2;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=2;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {

                        print(c);
                        cout<<"Congratulations "<<q<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

            }
            else
            {


                if(count==10)
                {
                    print(c);
                    cout<<"The match is Draw"<<endl;
                    return 0;
                }
                cout<<"Player "<<p<<" give your input"<<endl;
                ll r;

                print(c);
                ///PERSON 1 GIVING HIS SHOT
                while(1)
                {
                    cin>>r;

                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl<<"Press again: "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=1;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=1;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            print(c);
                            cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                            return 0;
                        }

                    }

                    if(r==6)
                    {
                        c[1][2]=1;

                        if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                        {
                            for(int i=0; i<3; i++)
                            {
                                print(c);
                                cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                                return 0;
                            }

                        }
                        if(r==7)
                        {
                            c[2][0]=1;

                            if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                            {
                                print(c);
                                cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                                return 0;
                            }

                        }
                        if(r==8)
                        {
                            c[2][1]=1;

                            if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                            {
                                print(c);
                                cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                                return 0;
                            }
                        }

                        if(r==9)
                        {
                            print(c);
                            c[2][2]=1;

                            if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                            {
                                cout<<"Congratulations "<<p<<"!!You won the game!!"<<endl;
                                return 0;
                            }

                        }

                    }




                }


            }


        }


    }
    return 0;
}
