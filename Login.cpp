#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <chrono>
#include "Login.h"
#include "headMangaer.h"
#include "humanResours.h"
#include "security.h"
#include "developer.h"
using namespace std ;

Login::Login ()
{

        cout<<"***********************************************************************\n\n";
        cout<<"                     Welcome to login/signup page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"                    ==>   1.LOGIN    <==" <<endl;
        cout<<"                    ==>  2.REGISTER  <=="<<endl;
        cout<<"              * or just press any key to Exit *"<<endl;
        cout<<"\nEnter your choice :";
 cin>>choice ;
 switch (choice)
{
case 1 :
    isloged() ;
    break ;
case 2 :
    signup() ;
    break ;
default :
    cout<<"Hope to see you again , BYE !"<<endl ;
    system("pause") ;
}
}
void Login::signup ()
{
cout<<"-Rigister A New Account : "<<endl ;
 cout<<"Please Enter User Name :"  ;
 cin>>username ;
 ifstream alreadyexist ("logindb.txt") ;
 while (alreadyexist>>searchuser>>searchpass>>searchpostion)
{
    if(username == searchuser  )
    {
cout<<"Sorry ! username already exist " <<endl ;
cout<<"If you want to login press 1 , and 2  for  register a new one : "<<endl ;
cout<<"or press any key to exit  " <<endl ;
char logchoice ;
cin>>logchoice ;

if (logchoice == '1')
{
    isloged() ;
}
if (logchoice == '2')
{
    signup() ;
}
else
{
    system("pause") ;
}

    }
}
 cout<<"Now Enter A Password : " ;
 cin>>password ;
 cout<<"What is your postion here ? " ;
cout<<"1  : for Headmangaer  , 2 : for HR , 3 : for Developer , 4 : for Security , 5 : for secretary " <<endl ;
cin>>position ;
 ofstream store ("logindb.txt" , ios :: app) ;
store<<username<<" "<<password<<" "<<position << endl ;
store.close()  ;
system("cls") ;
cout<<" You have successfully registered And ready to Login " <<endl ;
Login () ;
}

Login::~Login()
{

}
void Login ::isloged()
{

system("cls") ;
cout<<"please enter the following details \n\n"<<endl;


cout<<"==> Username : " ;
cin>>user ;

cout<<"==> Password : " ;
cin>>pass ;
ifstream islogged("logindb.txt") ;
int lol=0 ;
int p ;
while (islogged>>username>>password>>position)
{

    if(username == user && password == pass )
    {

        lol = 1 ;
 system("cls") ;
 cout<<"***********************************************************************\n\n";
        cout<<"             Hello  "<<username<<" , nice to see you again .   \n\n";
        cout<<"***********************************************************************";
      ofstream logged("logged.txt" , ios::app) ;
       logged<<username<<endl ;
       logged.close() ;

if (position == '1')
    {
     headMangaer b1 ;
     break ;
    }
    else if (position == '2')
    {
       humanResours b2 ;
       break ;
    }

else if (position == '3')
{
    developer b3 ;
    break ;
}
else if (position == '4')
{
    security b4 ;
    break ;
}

    }


}
if(lol == 0 )
{
cout<<"please check your username and password . " <<endl ;
Login() ;


}




}
