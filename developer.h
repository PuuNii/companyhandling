#ifndef DEVELOPER_H
#define DEVELOPER_H


class developer
{
    public:
        void unfinishedProj () ;
       void viewnotes () ;
       void upcomingevnts () ;
        developer();
        virtual ~developer();

    protected:

    private:
        char proj [10000] ;
        char note [10000] ;
        char events [10000] ;
};

#endif // DEVELOPER_H
