#include "selectmode.h"
#include "playmode.h"

int main(){
    ModeBase *mode=new SelectMode(10);
    EGameModeStatus state=eSelectMode;
    bool gameflag=1;
    while(gameflag){
        state=mode->Process();
        mode->Draw();

        delete mode;mode = nullptr;
        switch (state)
        {
        case eSelectMode:		mode = new SelectMode(10); break;
        case ePlayMode:		    mode = new PlayMode(1); break;
        case eEnd:				gameflag=0; break;
        default:				gameflag=0; break;
        }
    }
}