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


developer::developer()
{
    cout<<"\n============================"<<endl;
    cout<<"\n Time now is : ";system("Time /t");
    cout<<"\n Date now is : " ;system("date /t");
    cout<<"\n============================"<<endl;
    cout<<"== Here is some options for you == " <<endl ;
    cout<<"1 : latest projects   " <<endl ;
    cout<<"2 : show notes    " <<endl ;
    cout<<"3 : upcoming events   " <<endl ;
    cout<<"4 : view warnings  " <<endl ;
    cout<<"5 : Logout         " <<endl ;
    int devchoice ;
    cout<<"Your Choice : " ;
cin>>devchoice;
switch (devchoice)
{
case 1 :
unfinishedProj() ;
    break ;
case 2 :
viewnotes() ;
    break ;
case 3 :
upcomingevnts()  ;
    break ;
case 4 :

case 5 :
    {
    Login b1 ;
    }
default :
    cout<<"Wrong Choice , Choose again " <<endl ;
    developer() ;
    break ;
}
}
developer::~developer()
{
    //dtor
}
void developer::unfinishedProj()
{
cout<<"Here's Some un Finished Projects " <<endl ;
fstream unfinishedprojs ;
unfinishedprojs.open("unfinishedproj.txt", ios :: in | ios::app) ;
unfinishedprojs.getline(proj,10000,'|') ;
cout<<proj ;
developer() ;
}
void developer::viewnotes()
{
    ifstream notes ;
     notes.open ("notes.txt") ;
     notes.getline(note,10000,'|') ;
     cout<<"Lastes Notes From Manager : "<<endl ;
     cout<<note ;
     developer() ;
}
void developer::upcomingevnts()
{
    cout<<"Here's A list with All upcoming Events : "<<endl ;
    ifstream upevents  ;
     upevents.open ("upcoming.txt" , ios :: app ) ;
     upevents.getline(events,10000,'|') ;
     cout<<events ;
     developer() ;
}
