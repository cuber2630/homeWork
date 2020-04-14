
typedef struct{
	char userMode;
	char a2;
	char a3;
	short rate_set;	
	short max_bet_order;
	short bet_order;
	int big_bet;
	long long totalbet;
	long long totalIn30;
	long long totalOut30;	
	long long userModeIn;
	long long userModeOut;
	long long a9;
	long long a10;
}SYSTEM_DATA;

class GameBase
{
	public:
		GameBase();
		GameBase(int num);
		~GameBase();
		int GameLoop(SYSTEM_DATA *sys_data);
	private:

	public:
	  int showNumber;
};