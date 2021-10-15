#include "modebase.h"

class PlayMode :public ModeBase
{
private:

public:

	PlayMode();
	~PlayMode();
	EGameModeStatus Process(int music_num);
	bool Draw();
};

