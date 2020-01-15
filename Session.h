
using namespace std;
class Session
{
	vector<TeamPart> Lobby;
	vector<TeamPart> TeamS1mple;
	vector<TeamPart> TeamDev1ce;
	time_t StartTime = 0;

	int winner = -1;

	void chooseWinner() {
		int hpS1mple = 0, hpDev1ce = 0, damageS1mple = 0, damageDev1ce = 0;
		for (size_t i = 0; i < TeamS1mple.size(); i++) {
			hpS1mple += TeamS1mple[i].getHP();
			damageS1mple += TeamS1mple[i].getDamage();
		}
		for (size_t i = 0; i < TeamDev1ce.size(); i++) {
			hpDev1ce += TeamDev1ce[i].getHP();
			damageDev1ce += TeamDev1ce[i].getDev1ce();
		}

		if (hpS1mple - damageDev1ce > hpDev1ce - damageS1mple) {
			winner = 1;//S1mple
		}
		else if (hpS1mple - damageDev1ce == hpDev1ce - damageS1mple) {
			winner = 0;//Tie
		}
		else {
			winner = 2;//Dev1ce
		}
	}

	void AnnounceTheWinner() {
		if (winner > 0) {
			cout << arr[winner] << " won this game" << endl;
		}
		else {
			cout << arr[winner] << endl;
		}
	}

	void ChangeRank(vector<Player>& players) {
		for (size_t i = 0; i < TeamS1mple.size(); i++) {

			int idS1mple = TeamS1mple[i].player.getID();
			int idDev1ce = TeamDev1ce[i].player.getID();

			for (size_t j = 0; j < players.size(); j++)
			{
				switch (winner) {
				case 1:
					// Blue
					if (players[j].getID() == idS1mple) players[j].addRank();
					if (players[j].getID() == idDev1ce) players[j].subRank();
					break;
				case 2:
					// Dev1ce
					if (players[j].getID() == idDev1ce) players[j].addRank();
					if (players[j].getID() == idS1mple) players[j].subRank();
					break;
				}
			}
		}
	}

	void AddTeamPart() {
		for (size_t i = 0; i < Lobby.size(); i++) {
			if (i < 5) {
				TeamS1mple.push_back(Lobby[i]);
			}
			else {
				TeamDev1ce.push_back(Lobby[i]);
			}
		}
	}

	bool checkTeams() {
		int eloDev1ce = 0, eloS1mple = 0;
		for (size_t i = 0; i < TeamDev1ce.size(); i++) {
			eloDev1ce += TeamDev1ce[i].player.getRank();
			eloS1mple += TeamS1mple[i].player.getRank();
		}
		if (fabs(eloS1mple - eloDev1ce) >= 100)	return false;
		return true;
	}

	bool checkPlayers() {
		int maxS1mple = 5, maxDev1ce = 5, minS1mple = 55555, minDev1ce = 55555;

		for (size_t i = 0; i < TeamS1mple.size(); i++)
		{
			if (TeamS1mple[i].player.getRank() > maxS1mple) maxS1mple = TeamS1mple[i].player.getRank();
			if (TeamS1mple[i].player.getRank() < minS1mple) minS1mple = TeamS1mple[i].player.getRank();

			if (TeamDev1ce[i].player.getRank() > maxDev1ce) maxDev1ce = TeamDev1ce[i].player.getRank();
			if (TeamDev1ce[i].player.getRank() < minDev1ce) minDev1ce = TeamDev1ce[i].player.getRank();
		}

		if (maxS1mple - minS1mple >= 50 || maxDev1ce - minDev1ce >= 50) return false;

		return true;
	}

public:
	string arr[3] = { "Tie", "S1mple", "Dev1ce" }
		//Add players  to the Lobby
		for (size_t i = 0; i < 10; i++) {
				if (i < 5) {
					TeamPart tp = TeamPart(players[i]);
					Lobby.push_back(tp);
				}
				else {
					TeamPart tp = TeamPart(players[i]);
					Lobby.push_back(tp);
				}
			}
			else {
				TeamPart tp = TeamPart(players[i]);
				Lobby.push_back(tp);
			}
		}

		AddTeamPart();
		//Lim 10 000
		for (int i = 0; (!checkTeams() || !checkPlayers()) && i < 10000; i++)
		{
			randVector(Lobby);
			TeamS1mple.clear();
			TeamDev1ce.clear();
			AddTeamPart();
		}
		//For randomizing
		Sleep(1000);
	}
	~Session() {
		TeamDev1ce.clear();
		TeamS1mple.clear();
		Lobby.clear();
	}

	void showTeamDev1ce() {
		cout << endl
			<< "                  Team Dev1ce" << endl << endl
			<< "================================================" << endl << endl;
		for (size_t i = 0; i < TeamDev1ce.size(); i++)
		{
			//Show player info
			cout << "Name: " << TeamDev1ce[i].player.getName()
				<< "\tID: " << TeamDev1ce[i].player.getID()
				<< "\tRank: " << TeamDev1ce[i].player.getRank()
				<< endl;

	void showTeamS1mple() {
		cout << endl
			<< "                  Team S1mple" << endl << endl
			<< "================================================" << endl << endl;
		for (size_t i = 0; i < TeamS1mple.size(); i++)
		{
			//Show player info
			cout << "Name: " << TeamS1mple[i].player.getName()
				<< "\tID: " << TeamS1mple[i].player.getID()
				<< "\tRank: " << TeamS1mple[i].player.getRank()
				<< endl;
	void gameStart(vector<Player>& players) {
		StartTime = time(0);
		chooseWinner();
		AnnounceTheWinner();
		ChangeRank(players);
	}

	time_t getTime() {
		return StartTime;
	}

	void showTime() {
		tm* ltm = localtime(&StartTime);
		cout << "Date: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << "\t"
			<< "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
	}

	int getWinner() {
		return winner;
	}

	void saveLog() {
		ofstream fout;
		fout.open("log.txt", ofstream::app);

		fout << endl << endl << "New Game" << endl << endl;

		//Save time
		tm* ltm = localtime(&StartTime);
		fout << "Date: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << "\t"
			<< "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

		//Save winner
		int winner = getWinner();
		fout << arr[winner] << " won" << endl;

		//Save team Dev1ce
		fout << endl
			<< "                  Team Dev1ce" << endl << endl
			<< "================================================" << endl << endl;
		for (size_t i = 0; i < TeamDev1ce.size(); i++)
		{
			//Show player info
			fout << "Name: " << TeamDev1ce[i].player.getName()
				<< "\tID: " << TeamDev1ce[i].player.getID()
				<< "\tRank: " << TeamDev1ce[i].player.getRank()
				<< endl;
		//Save team blue
		fout << endl
			<< "                  Team Blue" << endl << endl
			<< "================================================" << endl << endl;
		for (size_t i = 0; i < TeamBlue.size(); i++)
		{
			//Show player info
			fout << "Name: " << TeamS1mple[i].player.getName()
				<< "\tID: " << TeamS1mple[i].player.getID()
				<< "\tRank: " << TeamS1mple[i].player.getRank()
				<< endl;
			
		fout << "================================================" << endl << endl;

		fout.close();
	}
};
