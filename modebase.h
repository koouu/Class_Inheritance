#pragma once
enum EGameModeStatus {
	eSelectMode, ePlayMode, eRankingMode, eEnd, eErrEnd
};

class ModeBase
{
	//playとselect
public:
	ModeBase() {};
	virtual ~ModeBase() {};

	virtual EGameModeStatus Process() = 0;
	virtual bool Draw() = 0;


private:

};