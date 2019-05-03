#ifndef SECURITY_H
#define SECURITY_H


class security
{
    public:
        security();
        void viewnotes () ;
        void vistors () ;
        virtual ~security();

    protected:

    private:
        char vistorslist [10000] ;
        char note [10000]  ;
 };

#endif // SECURITY_H
