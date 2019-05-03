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


headMangaer::headMangaer()

{
    cout<<"\n============================"<<endl;
    cout<<"\n Time now is : ";system("Time /t");
    cout<<"\n Date now is : " ;system("date /t");
    cout<<"\n============================"<<endl;
    cout<<"== Here is some options for you == " <<endl ;
    cout<<"1 : Today's appointments  " <<endl ;
    cout<<"2 : Check who log in today   " <<endl ;
    cout<<"3 : To do List   " <<endl ;
    cout<<"4 : Leave notes for others  " <<endl ;
    cout<<"5 : Logout         " <<endl ;

  int headcoice ;
  cout<<" Your choice : " ;
cin>>headcoice ;
switch (headcoice)
{
case 1 :
    appoints() ;
    break ;
case 2 :
    whoLoggend() ;
    break ;
case 3 :
    toDo() ;
    break ;
case 4 :
    sentNotes() ;
    break ;
    case 5 :
    {
    Login b1 ;
    }
default :
    cout<<"Wrong Choice , Choose again " <<endl ;
    headMangaer() ;
}
}

headMangaer::~headMangaer()
{
    //dtor
}
void headMangaer ::appoints()
{
fstream appoint ;
appoint.open("headapp.txt", ios :: in | ios::app) ;
appoint.getline(app,10000,'|') ;
cout<<"================" <<endl ;
cout<<app ;
cout<<endl<<"================" <<endl ;
headMangaer() ;
}
 void headMangaer ::  whoLoggend ()
 {
     ifstream whologged ;
     whologged.open ("logged.txt") ;
     cout<<"Here's who logged today " <<endl  ;
     while (whologged>>loggeduser)
     {

         cout<<"* "<<loggeduser<<" has logged in "<<endl ;
     }
     headMangaer() ;

 }
 void headMangaer::sentNotes()
 {
     cout<<"Please Write Down Your Note : " ;
    cin.ignore() ;
    cin.getline(wnote , 1000) ;
    ofstream notefile ;
    notefile.open ("notes.txt" , ios::app ) ;
    notefile<<wnote<<"|" ;
     cout<<"DONE ! " <<endl ;
     headMangaer() ;
 }
void headMangaer :: toDo ()
{
fstream todoo ;
todoo.open("todo.txt", ios :: in | ios::app) ;
todoo.getline(showlist ,10000,'|') ;
cout<<showlist<<endl<<endl ;
headMangaer() ;
}
