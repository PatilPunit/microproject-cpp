
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Move {
public:
    string name;
    int damage;

    Move(string n, int d) {
        name = n;
        damage = d;
    }

};

class Pokemon {
public:
    string name;
    string type;
    int hp;
    int level;
    int exp;
    vector<Move> moves;
    int max_exp=100;

    Pokemon(string n, string t, int health, int lvl, int e, vector<Move> m) {
        name = n;
        type = t;
        hp = health;
        level = lvl;
        exp = e;
        moves = m;
    }

    bool isFainted() {
        return hp <= 0;
    }
    void takeDamage(int dmg) {
        hp = max(0, hp - dmg);
    }
    void check_evolve(Pokemon &pokem);
    void level_up(Pokemon &pokem);
};

void Pokemon::level_up(Pokemon &pokem) {
    pokem.exp += 50;

    if(pokem.exp >= pokem.max_exp) {
        pokem.level++;
        pokem.hp += 5;
        pokem.exp -= pokem.max_exp;
        pokem.max_exp *= 1.5;
        cout << pokem.name << " leveled up! New level: " << pokem.level << endl;
        cout << "Your Pokemon hp is having" <<pokem.hp<< endl;
        check_evolve(pokem);
    }
}

void Pokemon::check_evolve(Pokemon &poke) {

    if (poke.name == "Charmander" && poke.level >= 16) {
        cout << "Congratulations 🎉🎉 your Charmander evolved into Charmeleon!" << endl;
        poke.name = "Charmeleon";
    }
    else if (poke.name == "Charmeleon" && poke.level >= 36) {
        cout << "Congratulations 🎉🎉 your Charmeleon evolved into Charizard!" << endl;
        poke.name = "Charizard";
    }
    else if (poke.name == "Bulbasaur" && poke.level >= 16) {
        cout << "Congratulations 🎉🎉 your Bulbasaur evolved into Ivysaur!" << endl;
        poke.name = "Ivysaur";
    }
    else if (poke.name == "Ivysaur" && poke.level >= 32) {
        cout << "Congratulations 🎉🎉 your Ivysaur evolved into Venusaur!" << endl;
        poke.name = "Venusaur";
    }
    else if (poke.name == "Squirtle" && poke.level >= 16) {
        cout << "Congratulations 🎉🎉 your Squirtle evolved into Wartortle!" << endl;
        poke.name = "Wartortle";
    }
    else if (poke.name == "Wartortle" && poke.level >= 36) {
        cout << "Congratulations 🎉🎉 your Wartortle evolved into Blastoise!" << endl;
        poke.name = "Blastoise";
    }
    else if (poke.name == "Pikachu" && poke.level >= 20 ) {
        cout << "Congratulations 🎉🎉 your Pikachu evolved into Raichu!" << endl;
        poke.name = "Raichu";
    }
    else if (poke.name == "Meowth" && poke.level >= 28) {
        cout << "Congratulations 🎉🎉 your Meowth evolved into Persian!" << endl;
        poke.name = "Persian";
    }
    else if (poke.name == "Psyduck" && poke.level >= 33) {
        cout << "Congratulations 🎉🎉 your Psyduck evolved into Golduck!" << endl;
        poke.name = "Golduck";
    }
    else if (poke.name == "Machop" && poke.level >= 28) {
        cout << "Congratulations 🎉🎉 your Machop evolved into Machoke!" << endl;
        poke.name = "Machoke";
    }
    else if (poke.name == "Geodude" && poke.level >= 25) {
        cout << "Congratulations 🎉🎉 your Geodude evolved into Graveler!" << endl;
        poke.name = "Graveler";
    }
    else if (poke.name == "Gastly" && poke.level >= 25) {
        cout << "Congratulations 🎉🎉 your Gastly evolved into Haunter!" << endl;
        poke.name = "Haunter";
    }
    else if (poke.name == "Haunter" && poke.level >= 40) {
        cout << "Congratulations 🎉🎉 your Haunter evolved into Gengar!" << endl;
        poke.name = "Gengar";
    }
    else if (poke.name == "Eevee" && poke.level >= 20 ) {
        cout << "Congratulations 🎉🎉 your Eevee evolved into Vaporeon!" << endl;
        poke.name = "Vaporeon";
    }


}




vector<Pokemon> allPokemons;
vector<Pokemon> catchedPokemons;
vector<Pokemon> gymPokemon;
class Game {
protected:
    struct Player {
        string name;
        string gender;
        int money = 1000, npoke = 0, level = 1;
    } p;

    struct Items {
        int pokeball = 6, preball = 0, masterball = 0, hball = 0;
        int boulder = 0, rainbow = 0, fire = 0, earth = 0, marsh = 0, cascade = 0, thunder = 0, soul = 0;
        int hpotion = 0, dpotion = 0;
        int candy = 0, berry = 0, pokefood = 0;
        int megastone = 0, firestone = 0, thunderstone = 0, grasstone = 0, waterstone = 0;
    } i;
    int activePokemonIndex = 0;

public:
    void menu();
    void battle(Pokemon &player, Pokemon &wild);
    Pokemon catchPokemon(Pokemon &player);
    void bag();
    void detail();
    void store();
    Pokemon searchPokemon(Pokemon& player);
    void catchPokemonDuringBattle(Pokemon& wildPokemon);
    void switchPokemon();
    void Pokemon_center();
    void city();



};


void Game::battle(Pokemon &player, Pokemon &wild) {
    cout << "\n⚔️ Battle starts: " << player.name << " VS " << wild.name << "!\n";

    while (!player.isFainted() && !wild.isFainted()) {
        cout << "\n" << player.name << "'s HP: " << player.hp
             << " | " << wild.name << "'s HP: " << wild.hp << endl;

        cout << "1. Fight\n2. Bag\n3. Change Pokémon\n4. Run\n5. Catch\n";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << player.name << "'s moves:\n";
            for (int i = 0; i < player.moves.size(); i++) {
                cout << i + 1 << ". " << player.moves[i].name
                     << " (Damage: " << player.moves[i].damage << ")\n";
            }

            int moveChoice;
            cout << "Choose move: ";
            cin >> moveChoice;
            if (moveChoice < 1 || moveChoice > player.moves.size())
                moveChoice = 1;

            Move chosen = player.moves[moveChoice - 1];
            cout << player.name << " used " << chosen.name << "!\n";
            wild.takeDamage(chosen.damage);

            if (wild.isFainted()) {
                cout << wild.name << " fainted! 🎉 You win!\n";
                cout << "You got 50 exp" << endl;
                player.exp+=50;
                player.level_up(player);
                return;
            }


            int randMove = rand() % wild.moves.size();
            Move enemyMove = wild.moves[randMove];
            cout << wild.name << " used " << enemyMove.name << "!\n";
            player.takeDamage(enemyMove.damage);

            if (player.isFainted()) {
                cout << player.name << " fainted! 💀 You lost...\n";
                return;
            }
            break;
        }

        case 2:
            bag();
            break;

        case 3:
            switchPokemon();
            player = catchedPokemons[activePokemonIndex];
            break;

        case 4:
            cout << "You ran away safely!\n";
            return;

        case 5:
            catchPokemonDuringBattle(wild);
            if (wild.isFainted()) return;
            break;

        default:
            cout << "Invalid choice!\n";
        }
    }
}

void Game::catchPokemonDuringBattle(Pokemon& wildPokemon) {
    if (i.pokeball <= 0) {
        cout << "No Pokéballs left!\n";
        return;
    }

    i.pokeball--;
    int chance = rand() % 100;
    int catchRate = 0;


    if (wildPokemon.hp < 20) catchRate = 70;
    else if (wildPokemon.hp < 50) catchRate = 50;
    else if (wildPokemon.hp < 100) catchRate = 30;
    else catchRate = 10;

    if (chance < catchRate) {
        cout << "🎉 You caught " << wildPokemon.name << "!\n";
        catchedPokemons.push_back(wildPokemon);
        wildPokemon.takeDamage(wildPokemon.hp);
    } else {
        cout << wildPokemon.name << " broke free!\n";
    }

    cout << "Pokéballs remaining: " << i.pokeball << "\n";
}

void Game::switchPokemon() {
    if (catchedPokemons.empty()) {
        cout << "No Pokémon to switch to!\n";


    }


    cout << "Choose a Pokémon to switch to:\n";
    for (size_t i = 0; i < catchedPokemons.size(); ++i)
        cout << i << ". " << catchedPokemons[i].name << " (HP: " << catchedPokemons[i].hp << ")\n";

    int choice;
    cin >> choice;
    if (choice >= 0 && choice < catchedPokemons.size()) {
        activePokemonIndex = choice;
        cout << "Switched to " << catchedPokemons[activePokemonIndex].name << "!\n";
    } else {
        cout << "Invalid choice.\n";
    }
    if (catchedPokemons[choice].isFainted()) {
        cout << "That Pokémon has fainted and cannot battle!\n";
    } else {
        activePokemonIndex = choice;
        cout << "Switched to " << catchedPokemons[activePokemonIndex].name << "!\n";
    }
}


Pokemon Game::catchPokemon(Pokemon &player) {
    cout << "Where do you want to search?\n1. Forest 🌳\n2. Cave 🕳️\n3. Lake 💧\n";
    int c;
    cin >> c;

    vector<int> index;
    if (c == 1) index = {0, 1, 2, 4, 5, 9, 10};
    else if (c == 2) index = {7, 8, 11, 16, 14};
    else index = {6, 3, 12, 13, 18};

    int rindex = index[rand() % index.size()];
    Pokemon wild = allPokemons[rindex];

    cout << "A wild " << wild.name << " appeared! 🎯\n";
    battle(player, wild);
    return wild;
}

void Game :: menu() {
    cout << "Welcome🤗 to this fantastic 😍 Pokemon world 🌍\n";
    cout << "🧑🏼 Let's create your character 👨🏽\n";
    cout << "Enter your name : ";
    cin >> p.name;
    cout << "Enter your Gender : ";
    cin >> p.gender;

    cout << "Choose your starter:\n1. Pikachu\n2. Charmander\n3. Bulbasaur\n4. Squirtle\n";
    int start;
    cin >> start;

    Pokemon player = allPokemons[start - 1];


    int k;
    cout << "Welcome🤗 to this fanastic 😍 Pokemon world 🌍" << endl;
    while(1) {
        cout << "1.PERSONAL DETAILS\n2.CATCH\n3.BAG\n4.city\n" << endl;
        cout << "Enter your choice : ";
        cin >> k;
        switch(k) {
        case 1:
            detail();
            break;
        case 2:
            catchPokemon(player);
            break;
        case 3:
            bag();
            break;
        case 4:
            city();
            break;
        }
    }

}





void Game :: detail() {
    cout << "Your name is : " <<p.name<< endl;
    cout << "Your level is : " <<p.level<< endl;
}
void Game :: bag() {
    int u,h;
    cout << "You have" <<p.money<<" in your bag 💰" << endl;
    while(u!=6) {
        cout << "1.Pokeballs\n2.Bagdges\n3.Poke items\n4.Poke food\n5.Exit" << endl;
        cout << "Enter : " ;
        cin >> u;
        if(u==1) {
            if(i.pokeball>0) {
                cout << "You have "<<i.pokeball << " pokeballs"<< endl;
            }
            if(i.masterball>0) {
                cout << "You have "<<i.masterball << " masterballs"<< endl;
            }
            if(i.preball>0) {
                cout << "You have "<<i.preball << " premium balls"<< endl;
            }
            if(i.hball>0) {
                cout << "You have "<<i.hball << " healballs"<< endl;
            }
            if(i.pokeball==0&&i.preball==0&&i.masterball==0&&i.hball==0) {
                cout << "You don't have any pokeballs" << endl;
            }

        }
        if(u==2) {
            if(i.boulder==1) {
                cout << "You have boulder🪨 badge" << endl;
            }
            if(i.fire==1) {
                cout << "You have fire 🔥 badge" << endl;
            }
            if(i.rainbow==1) {
                cout << "You have rainbow🌈 badge" << endl;
            }
            if(i.earth==1) {
                cout << "You have earth 🌎 badge" << endl;
            }
            if(i.marsh==1) {
                cout << "You have marsh ⛰️badge" << endl;
            }
            if(i.cascade==1) {
                cout << "You have cascade 🌋 badge" << endl;
            }

            if(i.thunder==1) {
                cout << "You have thunder ⚡ badge" << endl;
            }
            if(i.soul==1) {
                cout << "You have soul 👻 badge" << endl;
            }
            if(i.boulder==0&&i.fire==0&&i.rainbow==0&&i.earth==0&&i.marsh==0&&i.cascade==0&&i.thunder==0&&i.soul==0) {
                cout << "No badges yet go to badge" << endl;
            }
        }

        if(u==3) {
            if(i.hpotion==1) {
                cout << "You have " << i.hpotion << " hpotion🏺"<< endl;
            }
            if(i.dpotion==1) {
                cout << "You have " << i.dpotion << " hpotion🏺"<< endl;
            }
            if(i.hpotion==0&&i.dpotion==0) {
                cout << "You don't have any potions 🏺" << endl;
            }
        }
        if(u==4) {
            if(i.megastone==1) {
                cout << "You have "<< i.megastone << " megastone"<<endl;
            }
            if(i.firestone==1) {
                cout << "You have "<< i.firestone << "firestone"<<endl;
            }
            if(i.waterstone==1) {
                cout << "You have "<< i.waterstone<< "waterstone"<<endl;
            }
            if(i.grasstone==1) {
                cout << "You have " <<i.grasstone<< " grasstones" << endl;

            }
            if(i.thunderstone==1) {
                cout << "You have " <<i.thunderstone<< " thunderstones" << endl;
            }
            if(i.megastone==0&&i.firestone==0&&i.waterstone==0&&i.grasstone==0&&i.thunderstone==0) {
                cout << "You don't have any stone" << endl;
            }

        }
        if(u==5) {
            return;
        }
        h++;
    }
}
void Game :: store() {
    int u,y,need,h,total;
    cout << "How i can serve you?" << endl;
    while(u!=4) {
        cout << "1.Pokeballs\n2.Poke items\n3.Exit" << endl;
        cin >> u;
        if(u==1) {
            cout << "1.Pokeball=100\n2.Health ball=200\n3.Premium ball=500" << endl;
            cin >> y;
            if(y==1) {
                cout << "How many pokeballs you want?" << endl;
                cin >> need;
                total=need * 100;
                p.money-=total;
                i.pokeball+=need;
            }
            if(y==2) {
                cout << "How many health balls you want?" << endl;
                cin >> need;
                total=need * 200;
                p.money-=total;
                i.preball+=need;
            }
            if(y==3) {
                cout << "How many premium balls you want?" << endl;
                cin >> need;
                total=need * 500;
                p.money-=total;
                i.hball+=need;
            }
        }
        if(u==2) {
            cout << "1.Rare candy==1000\n2.Potion==500\n3.Damage potion==500\n4.Poke food==300" << endl;
            cin >> y;
            if(y==1) {
                cout << "How many rare candies 🍬 you want?" << endl;
                cin >> need;
                total=need*1000;
                p.money-=total;
                i.candy+=need;
            }
            if(y==2) {
                cout << "How many rare Hp potion 🏺 you want?" << endl;
                cin >> need;
                total=need*500;
                p.money-=total;
                i.hpotion+=need;
            }
            if(y==3) {
                cout << "How many rare Damage potion 🏺 you want?" << endl;
                cin >> need;
                total=need*500;
                p.money-=total;
                i.dpotion+=need;
            }
            if(y==4) {
                cout << "How many rare Poke food 🍲 you want?" << endl;
                cin >> need;
                total=need*500;
                p.money-=total;
                i.pokefood+=need;
            }
        }
        if(u==3) {
            return;
        }

        h++;

    }
}
class GymLeader : public Game {
public:
    virtual void gymbattle()=0;
    void detailSs() {
        int b;
        cout << "1. Gym\n2. Store" << endl;
        cin >> b;
        if (b == 1) {
            gymbattle();
        } else {
            store();
        }
    }
};

class Brock : public GymLeader {
public:
    void gymbattle() override {
        vector<int> index = {0,1};
        int rindex = index[rand() % index.size()];

        Pokemon enemy = gymPokemon[rindex];
        Pokemon &player = catchedPokemons[activePokemonIndex];

        cout << "👊 Brock sends out " << enemy.name << "! 🎯\n";
        battle(player, enemy);
    }
};


class Misty : public GymLeader {
public:
    void gymbattle() override {
        vector<int> index = {2,3};
        int rindex = index[rand() % index.size()];

        Pokemon enemy = gymPokemon[rindex];
        Pokemon &player = catchedPokemons[activePokemonIndex];

        cout << "💧 Misty sends out " << enemy.name << "! 🎯\n";
        battle(player, enemy);
    }
};

class Ltsurge : public GymLeader {
public:
    void gymbattle() override {
        vector<int> index = {4,5,6};
        int rindex = index[rand() % index.size()];

        Pokemon enemy = gymPokemon[rindex];
        Pokemon &player = catchedPokemons[activePokemonIndex];

        cout << "⚡ Lt. Surge sends out " << enemy.name << "! 🎯\n";
        battle(player, enemy);
    }
};

class Erika : public GymLeader {
public:
    void gymbattle() override {
        vector<int> index = {7,8,9};
        int rindex = index[rand() % index.size()];

        Pokemon enemy = gymPokemon[rindex];
        Pokemon &player = catchedPokemons[activePokemonIndex];

        cout << "🌿 Erika sends out " << enemy.name << "! 🎯\n";
        battle(player, enemy);
    }
};

void Game::city() {
    int c;
    cout << "Choose a city:\n";
    cout << "1. Pewter (Brock)\n2. Cerulean (Misty)\n3. Vermilion (Lt. Surge)\n4. Celadon (Erika)\n";
    cin >> c;

    switch(c) {
    case 1: {
        Brock brock;
        brock.detailSs();
        break;
    }
    case 2: {
        Misty misty;
        misty.detailSs();
        break;
    }
    case 3: {
        Ltsurge surge;
        surge.detailSs();
        break;
    }
    case 4: {
        Erika erika;
        erika.detailSs();
        break;
    }
    }
}

int main() {
    srand(time(0));

    Move thunderbolt("Thunderbolt", 40);
    Move quickAttack("Quick Attack", 20);
    Move ironTail("Iron Tail", 30);
    Move electroBall("Electro Ball", 50);
    vector<Move> pikachuMoves = { thunderbolt, quickAttack, ironTail, electroBall };

    Move flamethrower("Flamethrower", 45);
    Move scratch("Scratch", 15);
    Move ember("Ember", 25);
    Move fireFang("Fire Fang", 35);
    vector<Move> charmanderMoves = { flamethrower, scratch, ember, fireFang };

    Move vineWhip("Vine Whip", 25);
    Move tackle("Tackle", 20);
    Move razorLeaf("Razor Leaf", 35);
    Move seedBomb("Seed Bomb", 40);
    vector<Move> bulbasaurMoves = { vineWhip, tackle, razorLeaf, seedBomb };

    Move waterGun("Water Gun", 25);
    Move bubble("Bubble", 30);
    Move bite("Bite", 35);
    vector<Move> squirtleMoves = { waterGun, tackle, bubble, bite };

    Move furySwipes("Fury Swipes", 30);
    Move slash("Slash", 35);
    vector<Move> meowthMoves = { scratch, bite, slash, furySwipes };

    Move confusion("Confusion", 35);
    Move zenHeadbutt("Zen Headbutt", 40);
    Move hydroPump("Hydro Pump", 55);
    vector<Move> psyduckMoves = { waterGun, confusion, zenHeadbutt, hydroPump };

    Move karateChop("Karate Chop", 30);
    Move lowKick("Low Kick", 25);
    Move seismicToss("Seismic Toss", 35);
    Move dynamicPunch("Dynamic Punch", 50);
    vector<Move> machopMoves = { karateChop, lowKick, seismicToss, dynamicPunch };

    Move rockThrow("Rock Throw", 30);
    Move magnitude("Magnitude", 40);
    Move earthquake("Earthquake", 60);
    vector<Move> geodudeMoves = { tackle, rockThrow, magnitude, earthquake };

    Move lick("Lick", 15);
    Move nightShade("Night Shade", 30);
    Move shadowBall("Shadow Ball", 45);
    Move hypnosis("Hypnosis", 0);
    vector<Move> gastlyMoves = { lick, nightShade, shadowBall, hypnosis };

    Move swift("Swift", 30);
    Move takeDown("Take Down", 40);
    vector<Move> eeveeMoves = { quickAttack, bite, swift, takeDown };

    Move rest("Rest", 0);
    Move hyperBeam("Hyper Beam", 60);
    vector<Move> snorlaxMoves = { tackle, rest, hyperBeam };

    Move bind("Bind", 20);
    Move slam("Slam", 35);
    vector<Move> onixMoves = { rockThrow, bind, slam, earthquake };

    Move dragonRage("Dragon Rage", 40);
    Move crunch("Crunch", 45);
    vector<Move> gyaradosMoves = { bite, hydroPump, dragonRage, crunch };

    Move extremeSpeed("Extreme Speed", 40);
    Move fireBlast("Fire Blast", 60);
    vector<Move> arcanineMoves = { flamethrower, bite, extremeSpeed, fireBlast };

    Move psybeam("Psybeam", 35);
    Move psychic("Psychic", 55);
    vector<Move> alakazamMoves = { confusion, psybeam, psychic, shadowBall };

    Move shadowPunch("Shadow Punch", 35);
    Move darkPulse("Dark Pulse", 45);
    Move dreamEater("Dream Eater", 50);
    vector<Move> gengarMoves = { lick, shadowPunch, darkPulse, dreamEater };

    Move dragonClaw("Dragon Claw", 45);
    Move wingAttack("Wing Attack", 35);
    Move outrage("Outrage", 65);
    vector<Move> dragoniteMoves = { dragonClaw, hyperBeam, wingAttack, outrage };

    Move iceBeam("Ice Beam", 45);
    Move surf("Surf", 50);
    vector<Move> laprasMoves = { iceBeam, surf, hydroPump };

    Move thunderShock("Thunder Shock", 30);
    Move drillPeck("Drill Peck", 45);
    Move thunder("Thunder", 65);
    vector<Move> zapdosMoves = { thunderShock, drillPeck, thunderbolt, thunder };



    Move recover("Recover", 0);
    Move bubbleBeam("Bubble Beam", 65);
    vector<Move> staryuMoves = { waterGun, swift, recover, bubbleBeam };

    Move waterPulse("Water Pulse", 60);

    Move rapidSpin("Rapid Spin", 20);

    vector<Move> starmieMoves = { waterPulse, psychic, rapidSpin, hydroPump };


    Move spark("Spark", 60);
    Move selfDestruct("Self Destruct", 200);
    Move rollout("Rollout", 30);
    vector<Move> voltorbMoves = { tackle, spark, selfDestruct, rollout };





    vector<Move> raichuMoves = { quickAttack, thunderbolt, slam, thunder };


    Move stunSpore("Stun Spore", 0);
    Move growth("Growth", 0);
    Move megaDrain("Mega Drain", 75);
    vector<Move> tangelaMoves = { vineWhip, stunSpore, growth, megaDrain };

    Move acid("Acid", 40);

    Move sleepPowder("Sleep Powder", 0);
    Move sludgeBomb("Sludge Bomb", 90);
    vector<Move> weepinbellMoves = { acid, razorLeaf, sleepPowder, sludgeBomb };

    Move absorb("Absorb", 30);
    Move poisonPowder("Poison Powder", 0);
    Move moonlight("Moonlight", 0);
    Move solarBeam("Solar Beam", 120);
    vector<Move> gloomMoves = { absorb, poisonPowder, moonlight, solarBeam };




    allPokemons = {
        Pokemon ("Pikachu", "Electric", 100, 5, 0, pikachuMoves),
        Pokemon ("Charmander", "Fire", 100, 5, 0, charmanderMoves),
        Pokemon ("Bulbasaur", "Grass", 100, 5, 0, bulbasaurMoves),
        Pokemon ("Squirtle", "Water", 100, 5, 0, squirtleMoves),
        Pokemon ("Meowth", "Normal", 100, 5, 0, meowthMoves),
        Pokemon ("Psyduck", "Water", 100, 5, 0, psyduckMoves),
        Pokemon ("Machop", "Fighting", 100, 5, 0, machopMoves),
        Pokemon ("Geodude", "Rock", 100, 5, 0, geodudeMoves),
        Pokemon ("Gastly", "Ghost", 100, 5, 0, gastlyMoves),
        Pokemon ("Eevee", "Normal", 100, 5, 0, eeveeMoves),
        Pokemon ("Snorlax", "Normal", 150, 5, 0, snorlaxMoves),
        Pokemon ("Onix", "Rock", 120, 5, 0, onixMoves),
        Pokemon ("Gyarados", "Water/Flying", 140, 5, 0, gyaradosMoves),
        Pokemon ("Arcanine", "Fire", 130, 5, 0, arcanineMoves),
        Pokemon ("Alakazam", "Psychic", 110, 5, 0, alakazamMoves),
        Pokemon ("Gengar", "Ghost/Poison", 120, 5, 0, gengarMoves),
        Pokemon ("Dragonite", "Dragon/Flying", 160, 5, 0, dragoniteMoves),
        Pokemon ("Lapras", "Water/Ice", 140, 5, 0, laprasMoves),
        Pokemon ("Zapdos", "Electric/Flying", 150, 5, 0, zapdosMoves),
        Pokemon("Staryu", "Water", 80, 5, 0, staryuMoves),
        Pokemon("Starmie", "Water/Psychic", 100, 5, 0, starmieMoves),
        Pokemon("Voltorb", "Electric", 70, 5, 0, voltorbMoves),
        Pokemon("Raichu", "Electric", 110, 5, 0, raichuMoves),
        Pokemon("Tangela", "Grass", 90, 5, 0, tangelaMoves),
        Pokemon("Weepinbell", "Grass/Poison", 95, 5, 0, weepinbellMoves),
        Pokemon("Gloom", "Grass/Poison", 100, 5, 0, gloomMoves)
    };
    gymPokemon = {
        Pokemon ("Geodude", "Rock", 180, 16, 0, geodudeMoves),
        Pokemon ("Onix", "Rock", 200, 18, 0, onixMoves),
        Pokemon("Staryu", "Water", 230, 23, 0, staryuMoves),
        Pokemon("Starmie", "Water/Psychic", 200, 24, 0, starmieMoves),
        Pokemon("Voltorb", "Electric", 300, 30, 0, voltorbMoves),
        Pokemon("Raichu", "Electric", 270, 26, 0, raichuMoves),
        Pokemon("Tangela", "Grass", 300, 33, 0, tangelaMoves),
        Pokemon("Weepinbell", "Grass/Poison", 390, 35, 0, weepinbellMoves),
        Pokemon("Gloom", "Grass/Poison", 400, 36, 0, gloomMoves)
    };


    Game g;
    g.menu();
}
    