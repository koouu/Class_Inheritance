#include "selectmode.h"

SelectMode::SelectMode(int music_num){
    this->music_num=music_num;
}
SelectMode::~SelectMode(){

}

EGameModeStatus SelectMode::Process(){
    /*
        セレクト画面の処理を書く
    */
    //曲が選ばれたら
    return ePlayMode;

    //終了が選ばれたら
    return eEnd;

    //入力がなければ
    return eSelectMode
}

bool SelectMode::Draw(){

}

int SelectMode::getMusicNum(){return music_num;}