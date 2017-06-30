#include"Model.h"

Model::Model(){

}

Model::~Model(){

}
int Model::setView(View *pView){
    this.view=pView;
    return true;
}
int Model::notifyView(){
    view.update();
}
