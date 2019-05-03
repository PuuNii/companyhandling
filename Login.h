#ifndef LOGIN_H
#define LOGIN_H

using namespace std;
class Login
 {
    public:
        Login () ;
      void signup  () ;
      void isloged () ;
        virtual ~Login();

    protected:

    private:
        bool logcond = 0 ;
        int po ;
int choice ;
string username ;
string password ;
string user ;
string pass ;
char position ;
string userpos ;
string searchuser ;
string searchpass ;
string searchpostion ;
int logtrials = 0 ;
};

#endif // LOGIN_H
