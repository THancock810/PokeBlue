#include "Pokemon.h";
#include <stdlib.h>
#include <time.h>
#pragma once



Pokemon::Pokemon(short _dexNum, short _level, string _nickname) {
	srand(time(0));
	switch (_dexNum) {
		case 1:
			//bulbasaur
			this->name = "Bulbasaur";
			this->baseStats = { 45, 49, 49, 65, 65, 45 };
			this->yieldEVs = { 0, 0, 0, 1, 0 , 0 };
			this->expGiven = 64;
			this->expGroup = "medSlow";
			this->evoLvl = 16;
			this->typePrimary = "Grass";
			this->typeSecondary = "Poison";
			break;
		case 2:
			//ivysaur
			this->name = "Ivysaur";
			this->baseStats = { 60, 62, 63, 80, 80, 60 };
			this->yieldEVs = { 0, 0, 0, 1, 1, 0 };
			this->expGiven = 142;
			this->expGroup = "medSlow";
			this->evoLvl = 32;
			this->typePrimary = "Grass";
			this->typeSecondary = "Poison";
			break;
		case 3:
			//venusaur
			this->name = "Venusaur";
			this->baseStats = { 80, 82, 83, 100, 100, 80 };
			this->yieldEVs = { 0, 0, 0, 2, 1, 0 };
			this->expGiven = 263;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->typePrimary = "Grass";
			this->typeSecondary = "Poison";
			break;
		case 4:
			//charmander
			this->name = "Charmander";
			this->baseStats = { 39, 52, 43, 60, 50, 65 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 1 };
			this->expGiven = 62;
			this->expGroup = "medSlow";
			this->evoLvl = 16;
			this->typePrimary = "Fire";
			this->typeSecondary = "None";
			break;
		case 5:
			//charmeleon
			this->name = "Charmeleon";
			this->baseStats = { 58, 64, 58, 80, 65, 80 };
			this->yieldEVs = { 0, 0, 0, 1, 0, 1 };
			this->expGiven = 142;
			this->expGroup = "medSlow";
			this->evoLvl = 36;
			this->typePrimary = "Fire";
			this->typeSecondary = "None";
			break;
		case 6:
			//charizard
			this->name = "Charizard";
			this->baseStats = { 78, 84, 78, 109, 85, 100 };
			this->yieldEVs = { 0, 0, 0, 3, 0, 0 };
			this->expGiven = 267;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->typePrimary = "Fire";
			this->typeSecondary = "Flying";
			break;
		case 7:
			//squirtle
			this->name = "Squirtle";
			this->baseStats = { 44, 48, 65, 50, 64, 43 };
			this->yieldEVs = { 0, 0, 1, 0, 0, 0 };
			this->expGiven = 63;
			this->expGroup = "medSlow";
			this->evoLvl = 16;
			this->typePrimary = "Water";
			this->typeSecondary = "None";
			break;
		case 8:
			//wartortle
			this->name = "Wartortle";
			this->baseStats = { 59, 63, 80, 65, 80, 58 };
			this->yieldEVs = { 0, 0, 1, 0, 1, 0 };
			this->expGiven = 142;
			this->expGroup = "medSlow";
			this->evoLvl = 36;
			this->typePrimary = "Water";
			this->typeSecondary = "None";
			break;
		case 9:
			//blastoise
			this->name = "Blastoise";
			this->baseStats = { 79, 83, 100, 85, 105, 78 };
			this->yieldEVs = { 0, 0, 0, 0, 3, 0 };
			this->expGiven = 265;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->typePrimary = "Water";
			this->typeSecondary = "None";
			break;
		case 16:
			//pidgey
			this->name = "Pidgey";
			this->baseStats = { 40, 45, 40, 35, 35, 56 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 1 };
			this->expGiven = 50;
			this->expGroup = "medSlow";
			this->evoLvl = 18;
			this->typePrimary = "Normal";
			this->typeSecondary = "Flying";
			break;
		case 17:
			//pidgeotto
			this->name = "Pidgeotto";
			this->baseStats = { 63, 60, 55, 50, 50, 71 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 2 };
			this->expGiven = 122;
			this->expGroup = "medSlow";
			this->evoLvl = 36;
			this->typePrimary = "Normal";
			this->typeSecondary = "Flying";
			break;
		case 18:
			//pidgeot
			this->name = "Pidgeot";
			this->baseStats = { 83, 80, 75, 70, 70, 101 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 3 };
			this->expGiven = 240;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->typePrimary = "Normal";
			this->typeSecondary = "Flying";
			break;
		case 19:
			//rattata
			this->name = "Rattata";
			this->baseStats = { 30, 56, 35, 25, 35, 72 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 1 };
			this->expGiven = 51;
			this->expGroup = "medFast";
			this->evoLvl = 20;
			this->typePrimary = "Normal";
			this->typeSecondary = "None";
			break;
		case 20:
			//raticate
			this->name = "Raticate";
			this->baseStats = { 55, 81, 60, 50, 70, 97 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 2 };
			this->expGiven = 145;
			this->expGroup = "medFast";
			this->evoLvl = 999;
			this->typePrimary = "Normal";
			this->typeSecondary = "None";
			break;
	}

	this->dexNum = _dexNum;
	if (_nickname.compare(" ") == 0)
		this->nickname = name;
	else
		this->nickname = _nickname;

	this->level = _level;
	this->IVs = { (short)(rand() % 32), (short)(rand() % 32), (short)(rand() % 32), (short)(rand() % 32), (short)(rand() % 32), (short)(rand() % 32) };

	vector<string> naturesPossible = { "Hardy", "Lonely", "Brave", "Adamant", "Naughty", "Bold", "Docile", "Relaxed", "Impish", "Lax", "Timid",
									   "Hasty", "Serious", "Jolly", "Naive", "Modest", "Mild", "Quiet", "Bashful", "Rash", "Calm", "Gentle", 
									   "Sassy", "Careful", "Quirky" };
	this->nature = naturesPossible[rand() % 24];

	this->updateStats(); // sets up their stats

	this->currHP = this->stats[0];

	//exp groups: "medFast", "medSlow", "Fast", "Slow" (only 4 bc its gen1)

	if (this->expGroup.compare("medFast") == 0) {
		this->expCurr = this->level * this->level * this->level;
		this->expNeeded = (this->level + 1) * (this->level + 1) * (this->level + 1);
	}
	else if (this->expGroup.compare("medSlow") == 0) {
		this->expCurr = ((6 / 5) * (this->level * this->level * this->level)) - (15 * (this->level * this->level)) + (100 * this->level) - 140;
		this->expNeeded = ((6 / 5) * ((this->level + 1) * (this->level + 1) * (this->level + 1))) - (15 * ((this->level + 1) * (this->level + 1))) + (100 * (this->level + 1)) - 140;
	}
	else if (this->expGroup.compare("Fast") == 0) {
		this->expCurr = (4 * (this->level * this->level * this->level)) / 5;
		this->expNeeded = (4 * ((this->level + 1) * (this->level + 1) * (this->level + 1))) / 5;
	}
	else if (expGroup.compare("Slow") == 0) {
		this->expCurr = (5 * (this->level * this->level * this->level)) / 4;
		this->expNeeded = (5 * ((this->level + 1) * (this->level + 1) * (this->level + 1))) / 4;
	}
}

void Pokemon::updateStats() {
	this->stats = {
					(short)((((2 * baseStats[0] + IVs[0] + (EVs[0] / 4)) * level) / 100) + level + 10), // hp
					(short)((((2 * baseStats[1] + IVs[1] + (EVs[0] / 4)) * level) / 100) + 5), // atk
					(short)((((2 * baseStats[2] + IVs[2] + (EVs[0] / 4)) * level) / 100) + 5), // def
					(short)((((2 * baseStats[3] + IVs[3] + (EVs[0] / 4)) * level) / 100) + 5), // spatk
					(short)((((2 * baseStats[4] + IVs[4] + (EVs[0] / 4)) * level) / 100) + 5), // spdef
					(short)((((2 * baseStats[5] + IVs[5] + (EVs[0] / 4)) * level) / 100) + 5), // speed
	};
	// dont need to check: Hardy, Docile, Serious, Bashful, Quirky (neutral nature)

	if (nature.compare("Lonely") == 0) {
		// +atk -def
		this->stats[1] *= 1.1;
		this->stats[2] *= 0.9;
	}
	else if (nature.compare("Brave") == 0) {
		// +atk -speed
		this->stats[1] *= 1.1;
		this->stats[5] *= 0.9;
	}
	else if (nature.compare("Adamant") == 0) {
		// +atk -spatk
		this->stats[1] *= 1.1;
		this->stats[3] *= 0.9;
	}
	else if (nature.compare("Naughty") == 0) {
		// +atk -spdef
		this->stats[1] *= 1.1;
		this->stats[4] *= 0.9;
	}
	else if (nature.compare("Bold") == 0) {
		// +def -atk
		this->stats[2] *= 1.1;
		this->stats[1] *= 0.9;
	}
	else if (nature.compare("Relaxed") == 0) {
		// +def -speed
		this->stats[2] *= 1.1;
		this->stats[5] *= 0.9;
	}
	else if (nature.compare("Impish") == 0) {
		// +def -spatk
		stats[2] *= 1.1;
		this->stats[3] *= 0.9;
	}
	else if (nature.compare("Lax") == 0) {
		// +def -spdef
		this->stats[2] *= 1.1;
		this->stats[4] *= 0.9;
	}
	else if (nature.compare("Timid") == 0) {
		// +speed -atk
		this->stats[5] *= 1.1;
		this->stats[1] *= 0.9;
	}
	else if (nature.compare("Hasty") == 0) {
		// +speed -def
		this->stats[5] *= 1.1;
		this->stats[2] *= 0.9;
	}
	else if (nature.compare("Jolly") == 0) {
		// +speed -spatk
		this->stats[5] *= 1.1;
		this->stats[3] *= 0.9;
	}
	else if (nature.compare("Naive") == 0) {
		// +speed -spdef
		this->stats[5] *= 1.1;
		this->stats[4] *= 0.9;
	}
	else if (nature.compare("Modest") == 0) {
		// +spatk -atk
		this->stats[3] *= 1.1;
		this->stats[1] *= 0.9;
	}
	else if (nature.compare("Mild") == 0) {
		// +spatk -def
		this->stats[3] *= 1.1;
		this->stats[2] *= 0.9;
	}
	else if (nature.compare("Quiet") == 0) {
		// +spatk -speed
		this->stats[3] *= 1.1;
		this->stats[5] *= 0.9;
	}
	else if (nature.compare("Rash") == 0) {
		// +spatk -spdef
		this->stats[3] *= 1.1;
		this->stats[4] *= 0.9;
	}
	else if (nature.compare("Calm") == 0) {
		// +spdef -atk
		this->stats[4] *= 1.1;
		this->stats[1] *= 0.9;
	}
	else if (nature.compare("Gentle") == 0) {
		// +spdef -def
		this->stats[4] *= 1.1;
		this->stats[2] *= 0.9;
	}
	else if (nature.compare("Sassy") == 0) {
		// +spdef -speed
		this->stats[4] *= 1.1;
		this->stats[5] *= 0.9;
	}
	else if (nature.compare("Careful") == 0) {
		// +spdef -spatk
		this->stats[4] *= 1.1;
		this->stats[3] *= 0.9;
	}
}

void Pokemon::addEXP(int newExp) {
	if (this->level < 100) {
		this->expCurr += newExp;
		if (this->expCurr > this->expNeeded) {
			this->level++;
			if (this->level >= evoLvl) {
				this->evolve();
			}
			if (this->expGroup.compare("medFast") == 0) {
				this->expNeeded = (this->level + 1) * (this->level + 1) * (this->level + 1);
			}
			else if (this->expGroup.compare("medSlow") == 0) {
				this->expNeeded = ((6 / 5) * ((this->level + 1) * (this->level + 1) * (this->level + 1))) - (15 * ((this->level + 1) * (this->level + 1))) + (100 * (this->level + 1)) - 140;
			}
			else if (this->expGroup.compare("Fast") == 0) {
				this->expNeeded = (4 * ((this->level + 1) * (this->level + 1) * (this->level + 1))) / 5;
			}
			else if (this->expGroup.compare("Slow") == 0) {
				this->expNeeded = (5 * ((this->level + 1) * (this->level + 1) * (this->level + 1))) / 4;
			}
			this->updateStats();
		}
	}
}

void Pokemon::evolve() {
	// I think for this, the process will be as follows:
	// take in the pokemon's IVs, EVs, currHp%, current status, currentexp

	// scratch that, I think I am going to keep the Pokemon itself the same and just update its stuff
	// take in stuff above, and updateDexNum on them. then, scale their currHP down to currHP%, apply statuses and currentexp ( shouldnt those stay anyway?)

	float hpPercent = float(this->currHP) / (this->stats[0]);

	this->updateNameNum(this->dexNum);
	this->updateStats();

	this->currHP = this->stats[0] * hpPercent;

}

void Pokemon::updateNameNum(short currNum) {
	
	switch (currNum) {
		case 1:
			// bulbasaur into ivysaur
			this->name = "Ivysaur";
			this->baseStats = { 60, 62, 63, 80, 80, 60 };
			this->yieldEVs = { 0, 0, 0, 1, 1, 0 };
			this->expGiven = 142;
			this->expGroup = "medSlow";
			this->evoLvl = 32;
			this->dexNum = 2;
			this->typePrimary = "Grass";
			this->typeSecondary = "Poison";
			break;
			
		case 2:
			// ivysaur into venusaur
			this->name = "Venusaur";
			this->baseStats = { 80, 82, 83, 100, 100, 80 };
			this->yieldEVs = { 0, 0, 0, 2, 1, 0 };
			this->expGiven = 263;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->dexNum = 3;
			this->typePrimary = "Grass";
			this->typeSecondary = "Poison";
			break;
		case 3:
			// venu into nothing
			cout << "Invalid evolution!" << endl;
			break;
		case 4:
			// charmander into charmeleon
			this->name = "Charmeleon";
			this->baseStats = { 58, 64, 58, 80, 65, 80 };
			this->yieldEVs = { 0, 0, 0, 1, 0, 1 };
			this->expGiven = 142;
			this->expGroup = "medSlow";
			this->evoLvl = 36;
			this->dexNum = 5;
			this->typePrimary = "Fire";
			this->typeSecondary = "None";
			break;
			
		case 5:
			// charmeleon into charizard
			this->name = "Charizard";
			this->baseStats = { 78, 84, 78, 109, 85, 100 };
			this->yieldEVs = { 0, 0, 0, 3, 0, 0 };
			this->expGiven = 267;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->dexNum = 6;
			this->typePrimary = "Fire";
			this->typeSecondary = "Flying";
			break;
		case 6:
			// charizard into nothing
			cout << "Invalid evolution!" << endl;
			break;
		case 7:
			// squirtle into wartortle
			this->name = "Wartortle";
			this->baseStats = { 59, 63, 80, 65, 80, 58 };
			this->yieldEVs = { 0, 0, 1, 0, 1, 0 };
			this->expGiven = 142;
			this->expGroup = "medSlow";
			this->evoLvl = 36;
			this->dexNum = 8;
			this->typePrimary = "Water";
			this->typeSecondary = "None";
			break;
		case 8:
			// wartortle into blastoise
			this->name = "Blastoise";
			this->baseStats = { 79, 83, 100, 85, 105, 78 };
			this->yieldEVs = { 0, 0, 0, 0, 3, 0 };
			this->expGiven = 265;
			this->expGroup = "medSlow";
			this->evoLvl = 999;
			this->dexNum = 9;
			this->typePrimary = "Water";
			this->typeSecondary = "None";
			break;
		case 9:
			// blastoise
			cout << "Invalid evolution!" << endl;
			break;
		case 16:
			// pidgey into pidgeotto
			this->name = "Pidgeotto";
			this->baseStats = { 63, 60, 55, 50, 50, 71 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 2 };
			this->expGiven = 122;
			this->expGroup = "medSlow";
			this->evoLvl = 36;
			this->dexNum = 17;
			this->typePrimary = "Normal";
			this->typeSecondary = "Flying";
			break;
		case 17:
			// pidgeotto into pidgeot
			this->name = "Pidgeot";
			this->baseStats = { 83, 80, 75, 70, 70, 101 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 3 };
			this->expGiven = 240;
			this->expGroup = "medSlow";
			this->evoLvl = 999; this->typePrimary = "Normal";
			this->typeSecondary = "Flying";
			this->dexNum = 18;
			break;
		case 18:
			// pidgeot into nothing
			cout << "Invalid evolution!" << endl;
			break;
		case 19:
			// rattata into raticate
			this->name = "Raticate";
			this->baseStats = { 55, 81, 60, 50, 70, 97 };
			this->yieldEVs = { 0, 0, 0, 0, 0, 2 };
			this->expGiven = 145;
			this->expGroup = "medFast";
			this->evoLvl = 999;
			this->dexNum = 20;
			this->typePrimary = "Normal";
			this->typeSecondary = "Flying";
			break;
		case 20:
			// raticate into nothing
			cout << "Invalid evolution!" << endl;
			break;
	}
}

void Pokemon::addEVs(vector<short> toAdd) {

	for (int i = 0; i < this->EVs.size(); i++) {
		this->EVs[i] += toAdd[i];
	}
}

string Pokemon::getName() {
	return this->name;
}

short Pokemon::getLevel() {
	return this->level;
}

short Pokemon::getHP() {
	return this->currHP;
}

short Pokemon::getBaseStats() {
	return this->baseStats[0];
}

string Pokemon::getNature() {
	return this->nature;
}

string Pokemon::getTypeOne() {
	return this->typePrimary;
}

string Pokemon::getTypeTwo() {
	return this->typeSecondary;
}

short Pokemon::getHpIV() {
	return this->IVs[0];
}