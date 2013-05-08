#include "Library/include/Base.h"
#include <random>
#include <time.h>

struct PlayerData
{
	int playerID;
	string playerName;
};

typedef map<int, PlayerData> PlayerDataMap;
typedef PlayerDataMap::iterator PlayerDataMapIter;

typedef list<PlayerData> PlayerDataList;
typedef PlayerDataList::iterator PlayerDataListIter;

int main()
{
	cout << "Start UnitTest..." << endl;
	
	srand(time(NULL));

	PlayerDataMap playerDataMap;
	PlayerData newPlayer;
	for(int i = 0; i < 100; ++i)
	{
		newPlayer.playerID = i + 1;
		playerDataMap[newPlayer.playerID] = newPlayer;
	}

	for(PlayerDataMapIter it = playerDataMap.begin(); it != playerDataMap.end();)
	{
		int randNum = rand() % 100;
		if(randNum < 30)
		{
			//PlayerDataMapIter mapIt = playerDataMap.find()
			cout << "Remove PlayerDada With PlayerID : " << it->second.playerID << endl;
			it = playerDataMap.erase(it);
		}
		else
		{
			++it;
		}
	}

	cout << "********End of UnitTest*********" << endl;
	return 0;
}
