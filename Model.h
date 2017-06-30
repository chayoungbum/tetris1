#ifdef MODEL_H
#define MODEL_H

#include "View.h"

class Model{
    private:
        View *view;
        //Map map;
        //Score score;
    public:
        Model();
        ~Model();
        int setView(View *pView);
        int notifyView();   //Notify view when some datas are changed;
};


#endif
