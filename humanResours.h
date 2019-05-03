#ifndef HUMANRESOURS_H
#define HUMANRESOURS_H


class humanResours

{
    public:
        humanResours();
        void sendWarning () ;
        void viewReports () ;
        virtual ~humanResours();
        string warneduser  ;

    protected:


    private:

        char warntext [10000] ;


};

#endif // HUMANRESOURS_H
