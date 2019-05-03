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

humanResours::humanResours()
{
   cout<<"\n============================"<<endl;
    cout<<"\n Time now is : ";system("Time /t");
    cout<<"\n Date now is : " ;system("date /t");
    cout<<"\n============================"<<endl;
    cout<<"== Here is some options for you == " <<endl ;
    cout<<"1 : view reports  " <<endl ;
    cout<<"2 : Check who log in today   " <<endl ;
    cout<<"3 : interview's of today   " <<endl ;
    cout<<"4 : send warnings   " <<endl ;
    cout<<"5 : Logout         " <<endl ;
    int hrcoice ;
cin>>hrcoice ;
switch (hrcoice)
{
case 1 :

    break ;
case 2 :
 void whoLogged () ;
    break ;
case 3 :

    break ;
case 4 :
 sendWarning() ;
    break ;
    case 5 :
    {
    Login b1 ;
    }
    default :
        cout<<"Wrong Choice , Choose again " <<endl ;
        humanResours() ;
}
}

humanResours::~humanResours()
{

}
void humanResours ::viewReports()
{

}
void humanResours::sendWarning()
{    system("cls") ;
    cout<<"Please Enter Username/ID that you want to send your warning to "<<endl ;
    cout<<"username : " ; cin>>warneduser ;
    cout<<"Now please Write your Warning " <<endl ;
    cout<<"To "<<warneduser<<" : " ;
    cin.ignore() ;
    cin.getline(warntext , 10000) ;
    ofstream warnfile ;
    warnfile.open ("warn.txt" , ios::app ) ;
    warnfile<<warntext<<"|" ;
    cout<<"DONE! "<<endl ;
    humanResours() ;
}
