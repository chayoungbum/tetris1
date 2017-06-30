#include"View.h"
#include<pthread.h>
View::View(){
    //Make an UI thread
    
}

View::~View(){
    //Free thread resources

}

int View::setController(Controller *pController){
    this.controller=pController;
    return true;
}   
int View::SetModel(Model *pModel){
    this.model=pModel;
    return true;
}

int View::update(){
    //Get datas from model and draw changed map and score

}
