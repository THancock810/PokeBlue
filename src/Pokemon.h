#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Pokemon
{
	private:
		// stats stuff
		// for all arrays, the indeces refer to: HP, Attack, Defense, Special Attack, Special Defense, Speed
		vector<short> baseStats = { 0, 0, 0, 0, 0, 0 };
		vector<short> IVs = { 0, 0, 0, 0, 0, 0 };
		vector<short> EVs = { 0, 0, 0, 0, 0, 0 };
		vector<short> yieldEVs = { 0, 0, 0, 0, 0, 0 };
		vector<short> stats = { 0, 0, 0, 0, 0, 0 };
		vector<float> statMods = { 0, 0, 0, 0, 0, 0 };
		string nature;

		string typePrimary;
		string typeSecondary;

		// exp/level stuff
		short level;
		short evoLvl;
		int expCurr;
		int expNeeded;
		int expGiven;
		string expGroup;

		// identifier stuff
		short dexNum;
		string name;
		string nickname;
		
		// misc + status
		short currHP = stats[0];
		bool isFainted = false;
		// only doing non-volatile rn
		bool isBurned = false;
		bool isPara = false;
		bool isPoison = false;
		bool isToxic = false;
		bool isSleep = false;
		bool isFrozen = false;
		
	public:

		Pokemon(short dexNum, short _level = 0, string _nickname = " ");
		void evolve(); //TODO
		void updateStats();
		void addEXP(int newExp);
		void updateNameNum(short newNum);
		void addEVs(vector<short> toAdd);
		void fullyHeal(); // TODO
		string getName();
		short getLevel();
		short getHP(); 
		short getBaseStats();
		string getNature();
		string getTypeOne();
		string getTypeTwo();
		short getHpIV();
		//bool isStatused();
		//bool checkStatus();
		


};

/*When a Pokémon grows a level, its stats will increase. For each level gained (ignoring Nature),
stats will increase by 1/50 the base stat value, and 1/100 the combined individual value and effort value*/