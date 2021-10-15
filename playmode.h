#include "modebase.h"

class PlayMode :public ModeBase
{
private:
int music_num;
public:

	PlayMode(int music_num);
	~PlayMode();
	EGameModeStatus Process();
	bool Draw();
};

