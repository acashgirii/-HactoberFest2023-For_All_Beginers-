//Aakash Aditya Giri, 09/05/2023, 0100 hrs - 0530 hrs 
//SC Archives.

#include<iostream>
using namespace std;

int printArr(char a[3][3])
{
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
}

int userInput(char a[3][3], int x, int y)
{
    if(x>2 || y>2)
    {
        cout<<"Error"<<endl;
    }
    else
    {
        a[x][y]='x';
        printArr(a); 
    }
}

bool userWins(char a[3][3])
{
    bool flag=false;
            if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x')
            {
                flag = true;
            }
            else if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x')
            {
                flag=true;
            }
            else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x')
            {
                flag=true;
            }
            else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x')
            {
                flag=true;
            }
            else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x')
            {
                flag=true;
            }
            else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x')
            {
                flag = true;
            }
            else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x')
            {
                flag=true;
            }
            else
            {
                flag=false;
            }
        return flag;
}

int user2(char a[3][3], int m, int n)
{   
    if(m>2 || n>2)
    {
        cout<<"Error"<<endl;
    }
    else
    {
        a[m][n]='o';
        cout<<endl;
        printArr(a);
    }
}

bool user2Wins(char a[3][3])
{
    bool flag2=false;
            if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o')
            {
                flag2 = true;
            }
            else if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o')
            {
                flag2=true;
            }
            else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o')
            {
                flag2=true;
            }
            else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o')
            {
                flag2=true;
            }
            else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o')
            {
                flag2=true;
            }
            else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o')
            {
                flag2 = true;
            }
            else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o')
            {
                flag2=true;
            }
            else
            {
                flag2=false;
            }
        return flag2;
    
}

int actual(char mat[3][3], int x, int y, int m, int n)
{
    bool flagstaff = false;
    bool flag =userWins(mat);
    bool flag2=user2Wins(mat);
    while(flagstaff!=true)
        {
            cout<<"User1 Turn:"<<endl;
            cin>>x>>y;
            userInput(mat,x,y);
            flag=userWins(mat);
            cout<<"Logical status of User 1's game: "<<flag<<endl;
            if(flag==true)
            {   
                flagstaff=true;
                break;
            }
            cout<<"User2 Turn:"<<endl;
            cin>>m>>n;
            user2(mat,m,n);
            flag2=user2Wins(mat);
            cout<<"Logical status of User 2's game: "<<flag2<<endl;
            if(flag2==true)
            {
                flagstaff=true;
                break;
            }
        } 
    if(flag==true)
    {
        cout<<"GAME OVER: User One Wins!"<<endl;
        cout<<"Thank you for playing!"<<endl;
    }
    else if(flag2==true)
    {
        cout<<"GAME OVER: User Two Wins!"<<endl;
        cout<<"Thank you for playing!"<<endl;
    }
    else if(flag==false && flag2==false)
    {
        cout<<"GAME OVER: It Is A Tie!"<<endl;
        cout<<"Thank you for playing!"<<endl;
    }
}

int main()
{
  
  char mat[3][3]={
                    {'-','-','-'},
                    {'-','-','-'},
                    {'-','-','-'}
                 };

    int x,y,m,n;

    cout<<"Initial Table: "<<endl;
    printArr(mat);

    actual(mat,x,y,m,n);

    return 0;
}