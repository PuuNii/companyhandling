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


security::security()
{
 cout<<"\n============================"<<endl;
    cout<<"\n Time now is : ";system("Time /t");
    cout<<"\n Date now is : " ;system("date /t");
    cout<<"\n============================"<<endl;
    cout<<"== Here is some options for you == " <<endl ;
    cout<<"1 : view Today's Vistros   " <<endl ;
    cout<<"2 : show notes    " <<endl ;
    cout<<"5 : Logout         " <<endl ;
    int secchoice ;
    cout<<"Your Choice : " ;
cin>>secchoice;
switch (secchoice)
{
case 1 :
vistors() ;
    break ;
case 2 :
viewnotes() ;
    break ;
case 5 :
    {
    Login b1 ;
    }
default :
    cout<<"Wrong Choice , Choose again " <<endl ;
    security() ;
    break ;
}
}

security::~security()
{
    //dtor
}
void security::vistors()
{
    cout<<"here's a list of Vistors of Today "<<endl  ;
    ifstream vistorslists  ;
     vistorslists.open ("vistors.txt") ;
     vistorslists.getline(vistorslist,10000,'|') ;
     cout<<vistorslist ;
     security () ;
}
void security::viewnotes()
{
    ifstream notes ;
     notes.open ("notes.txt" , ios :: app ) ;
     notes.getline(note,10000,'|') ;
     cout<<"Lastes Notes From Manager : "<<endl ;
     cout<<note ;
     security ();
}
