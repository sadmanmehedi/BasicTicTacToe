///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE-SWE'19)
///STARTING DAY:22/6/2020

#include<bits/stdc++.h>
#include<windows.h>

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
    cout<<"WELCOME TO TIC TAC TOE!"<<endl;
    cout<<"PREPARED BY MD SADMAN MEHEDI SIVAN.."<<endl<<endl;;

    cout<<"ENTER THE NAME OF THE PLAYER 1:"<<endl;
    cin>>p;
    cout<<endl;
    cout<<"ENTER THE NAME OF THE PLAYER 2:"<<endl;
    cin>>q;
    cout<<endl;

    cout<<"THE GAME WILL BE PLAYED BETWEEN "<<p<<" AND "<<q;
    cout<<endl;
    cout<<endl;
    cout<<"WHO WANTS TO START THE GAME?"<<endl;
    cout<<"PRESS 1 FOR "<<p<<" AND PRESS 2 FOR "<<q<<endl;
    cout<<"YOUR ANSWER :"<<endl;
    ll x;


    ///CHECKING THE RIGHT INPUT


    while(1)
    {
        cin>>x;

        if(x<1 || x>2)
        {
            cout<<"INVALID INPUT!PRESS THE RIGHT BUTTON"<<endl<<"TRY AGAIN-> "<<endl;
            continue;
        }
        else
            break;
    }

    if(x==1)
        cout<<p<<" WILL START THE GAME"<<endl;
    else
        cout<<q<<" WILL START THE GAME"<<endl;

    cout<<"TO INPUT PRESS BUTTON BETWEEN(1-9) AND IF ITS ALREADY TAKEN THEN INPUT SOMETHING DIFFERENT.."<<endl;

    cout<<p<<"'S "<<"OUTPUT WILL BE SHOWN AS 1 AND "<<q<<"'S OUTPUT WILL BE SHOWN AS 2.."<<endl<<endl;




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
                cout<<"THE MATCH IS DRAW!!"<<endl;
                return 0;
            }
            cout<<endl;
            print(c);


            if(count%2==1)
            {
                cout<<p<<" PRESS YOUR ANSWER:"<<endl;

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
                        cout<<"INVALID INPUT!PRESS THE RIGHT BUTTON"<<endl<<"TRY AGAIN: "<<endl;
                        continue;
                    }

                }








                if(r==1)
                {
                    c[0][0]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=1;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=1;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=1;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=1;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
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
                    cout<<"THE MATCH IS DRAW!!"<<endl;
                    return 0;
                }


                cout<<q<<" PRESS YOUR ANSWER :"<<endl;
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
                        cout<<"INVALID INPUT!PRESS THE RIGHT BUTTON"<<endl<<"TRY AGAIN-> "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=2;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=2;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=2;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=2;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
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
                cout<<"THE MATCH IS DRAW!!"<<endl;
                return 0;
            }
            ///SECOND PERSON GIVING HIS SHOT

            if(count%2==1)
            {

                cout<<q<<" PRESS YOUR ANSWER :"<<endl;
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
                        cout<<"INVALID INPUT!PRESS THE RIGHT BUTTON"<<endl<<"TRY AGAIN-> "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=2;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=2;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=2;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=2;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {

                        print(c);
                        cout<<"CONGRATULATIONS "<<q<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

            }
            else
            {


                if(count==10)
                {
                    print(c);
                    cout<<"THE MATCH IS DRAW"<<endl;
                    return 0;
                }
                cout<<p<<" PRESS YOUR ANSWER"<<endl;
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
                        cout<<"INVALID INPUT!PRESS THE RIGHT BUTTON"<<endl<<"TRY AGAIN-> "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=1;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        print(c);
                        cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
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
                            cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
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
                                cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                                return 0;
                            }

                        }
                        if(r==7)
                        {
                            c[2][0]=1;

                            if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                            {
                                print(c);
                                cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                                return 0;
                            }

                        }
                        if(r==8)
                        {
                            c[2][1]=1;

                            if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                            {
                                print(c);
                                cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
                                return 0;
                            }
                        }

                        if(r==9)
                        {
                            print(c);
                            c[2][2]=1;

                            if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                            {
                                cout<<"CONGRATULATIONS "<<p<<"!!YOU WON THE GAME!!"<<endl;
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
