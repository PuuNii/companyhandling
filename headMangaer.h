#ifndef HEADMANGAER_H
#define HEADMANGAER_H


class headMangaer

{
    public:
        headMangaer();
        void sentNotes () ;
        void appoints () ;

        void toDo () ;
        virtual ~headMangaer();

    protected:
void whoLoggend () ;
    private:
        char app [10000] ;
        char wnote [1000] ;
        char showlist [10000] ;
        string loggeduser ;
};


#endif // HEADMANGAER_H
