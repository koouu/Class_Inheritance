#include "modebase.h"

class SelectMode :public ModeBase
{
private:
int music_num;
int max_music_num=10;
public:

	SelectMode(int music_num);
	~SelectMode();
	EGameModeStatus Process();
	bool Draw();
    int getMusicNum();
};

