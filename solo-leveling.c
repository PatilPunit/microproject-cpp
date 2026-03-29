#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Global Variables
char name[50],gender[2];
int age,dun,p,b,t,a,c,j=0,i=0,crystals=0,megagems=0,coins=100000,sword=0,hppotion=0,armor=0,dpotion;
myhp=100,win,heal,myexpr,score=0,khp=100,ahp=100,bsword=0,barmor=0;
int myexp=0,staycasino=0;
int choice,q,req,gamer,attempts,bet,guess;
int ehp,h,z,p1,p2,p3,st;
char *enemy,*meet;
char *coun[5]= {"null","America 🇺🇸","India 🇮🇳","Japan 🇯🇵","Russia 🇷🇺","Etheopia 🇪🇹"};
int guildJoined = 0;
char **currentGroup;
int guildchoose=0,contract=0;
int guildChoice;
int bank_balance = 0;
char *group1[20]= {
    "Liam", "Noah", "Oliver", "Elijah", "James",
    "William", "Benjamin", "Lucas", "Henry", "Alexander",
    "Mason", "Michael", "Ethan", "Daniel", "Jacob",
    "Logan", "Jackson", "Levi", "Sebastian", "Mateo"
};

char *group2[20] = {
    "Sophia", "Emma", "Olivia", "Ava", "Isabella",
    "Mia", "Amelia", "Harper", "Evelyn", "Abigail",
    "Ella", "Scarlett", "Grace", "Chloe", "Victoria",
    "Penelope", "Layla", "Lily", "Riley", "Nora"
};

char *group3[20]= {
    "Kaito", "Akira", "Ren", "Haruki", "Takeshi",
    "Souta", "Yuki", "Daichi", "Hinata", "Kenshin",
    "Toru", "Kazuki", "Reiji", "Riku", "Sho",
    "Yamato", "Ryota", "Tomo", "Koji", "Sora"
};

char *group4[20] = {
    "Arya", "Alexanderia", "Zara", "Vladimir", "Stalin",
    "Lenin", "Leo", "Nina", "Sage", "Luna",
    "River", "Wren", "Raya", "Jude", "Sky",
    "Asa", "Remy", "Lyra", "Indigo", "Cleo"
};

char *group5[20][30] = {
    "Aditya", "Rohan", "Sneha", "Aarav", "Ishaan",
    "Anaya", "Priya", "Neha", "Omkar", "Disha",
    "Prem", "Rehan", "Vedant", "Piyush", "Saanvi",
    "Aayush", "Raghav", "Pratham", "Tanaya", "Shruti"
};

char *drank[10] = {
    "Shadowfang Wolf",
    "Kobold Warrior",
    "Goblin Assassin",
    "Lava Golem ",
    "Bone Imp",
    "Steel-Fanged Lizardman",
    "Rotten Orc Brute",
    "Obsidian Beetle",
    "Wailing Shade",
    "Blood-Eye Harpy"
};

char *crank[10] = {
    "Giant Ant",
    "Ice Elves",
    "Hellhound",
    "Lesser Fire Dragon",
    "Orc General",
    "Red-Horned Beetle",
    "Black Ogre",
    "Lesser Dark Knight",
    "Basilisk",
    "Storm Golem"
};

char *brank[10] = {
    "Troll King",
    "High Ogre",
    "Dark Knight Commander",
    "Giant Minotaur",
    "King of the Dead",
    "Cursed Bear",
    "Kirin",
    "Giant Spider",
    "Infernal Dragon",
    "Giant Snake"
};

char *arank[10] = {
    "Ice Dragon",
    "Red Dragon",
    "Demon Monarch",
    "Emperor of the Dead",
    "Greater Demon",
    "Archmage",
    "Devil",
    "Giant Reaper",
    "Kaisel",
    "Dragon Knight"
};

char *srank[10] = {
    "Demon King",
    "True Dragon",
    "The Gatekeeper",
    "Monarch of Destruction",
    "Ancient Giant",
    "Dragon Emperor",
    "Shadow Monarch",
    "The Black Dragon",
    "The Great Emperor",
    "The Queen of the Abyss"
};
//Functions Prototype
void profile();
void dungeon();
void battle();
void result();
void bag();
void store();
void sell();
void seepro();
void game();
void slotMachine();
void number();
void school();
void mathsLecture();
void mathsQuiz();
void weaponsLecture();
void weaponsQuiz();
void scienceLecture();
void scienceQuiz();
void demonologyLecture();
void demonologyQuiz();
void chooseGuild();
void fight();
void fstranger();
void fresult();
void country();
void saveGame();
void loadGame();
void newGame();
void bank();
void ksword();
void nsword();
void karmor();
void narmor();
//start
int main()
{
    srand(time(0));
    printf("🤗Welcome To the World 🌎 of Dungeons🤗\n");
    printf("You have to become a Demon 👿 Hunter 🏹 \n");
    printf("Kill the Demons and Find crystals 🔮\n");
    loadGame();
    while(h!=19) {
        printf("\n1.Profile 👤\n2.Dungeon 🕳️\n3.Bag 🎒\n4.Store 🏪\n5.Sell Crystal 🔮\n6.See Profile 📱\n7.Casino 🎰\n8.School 🏫\n9.Country✈️\n10.Save game\n11.Exit\n12.New Game\n13.Bank\n");
        printf("Enter Your Choice : ");
        scanf("%d",&h);
        switch(h) {
        case 1:
            profile();
            break;

        case 2:
            dungeon();
            break;

        case 3:
            bag();
            break;

        case 4:
            store();
            break;

        case 5:
            sell();
            break;

        case 6:
            seepro();
            break;

        case 7:
            game();
            break;

        case 8:
            school();
            break;

        case 9:
            country();
            break;

        case 10:
            saveGame();
            break;

        case 11:
            saveGame();
            break;

        case 12:
            newGame();
            break;

        case 13:
            bank();
            break;

        }
        i++;
    }


}

//Profile
void profile() {
    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your Gender: ");
    scanf("%s",gender);
    printf("\n👋🏽 Name: %s",name);
    printf("\n🎂 Age: %d",age);
    printf("\n♂️ Gender: %s",gender);
    printf("\n");
}

void dungeon() {
    printf("Are you ready knight💪🏽? Here are dungeons🕳️ Go and hunt🏹 the demons 👿\n");
    printf("1.D rank\n2.C rank\n3.B rank\n4.A rank\n5.S rank\n");
    printf("Choose dungeon\n");
    scanf("%d", &dun);

    int stayInDungeon = 1;
    while (stayInDungeon) {
        printf("\nYou are in the dungeon... What do you want to do?\n");
        printf("1. Fight\n2. Heal\n3. Bag\n4. Run (Exit Dungeon)\nEnter your choice: ");
        scanf("%d", &b);

        if (b == 1) {
            if ((dun == 1 && myexp >= 0) ||
                    (dun == 2 && myexp >= 1000) ||
                    (dun == 3 && myexp >= 3000) ||
                    (dun == 4 && myexp >= 5000) ||
                    (dun == 5 && myexp >= 10000)) {

                switch (dun) {
                case 1:
                    p = rand() % 10;
                    enemy = drank[p];
                    ehp = 100;
                    battle();
                    result(drank, 2, 0, 20);
                    break;
                case 2:
                    p = rand() % 10;
                    enemy = crank[p];
                    ehp = 400;
                    battle();
                    result(crank, 5, 0, 40);
                    break;
                case 3:
                    p = rand() % 10;
                    enemy = brank[p];
                    ehp = 800;
                    battle();
                    result(brank, 8, 1, 60);
                    break;
                case 4:
                    p = rand() % 10;
                    enemy = arank[p];
                    ehp = 1500;
                    battle();
                    result(arank, 10, 3, 80);
                    break;
                case 5:
                    p = rand() % 10;
                    enemy = srank[p];
                    ehp = 2000;
                    battle();
                    result(srank, 15, 5, 100);
                    break;
                }
            } else {
                printf("You don't attain that rank 😓. Increase your experience 📈\n");
            }
        } else if (b == 2) {
            if (hppotion > 0) {
                printf("You used an HP Potion. You healed 50 HP.\n");
                myhp += 50;
                hppotion--;
            } else {
                printf("You don't have any HP potions. Visit the store.\n");
            }
        } else if (b == 3) {
            printf("HP potion : %d\n",hppotion);
            printf("Crystals 🔮 : %d\n",crystals);
        } else if (b==4) {
            printf("You decided to leave the dungeon and return to base.\n");
            stayInDungeon = 0;
        }
    }

}



//Battle

void battle() {
    while(ehp > 0 && myhp > 0) {
        printf("\nEnemy : %d\t Your HP: %d\n", ehp, myhp);
        printf("1.Sword smash\n2.Knife crush\n3.Power ball\n4.Run\n5.Bag\n");
        scanf("%d", &t);

        if(t == 1 ) {
            if(bsword==1) {
                ksword();
                narmor();
            }
            else if(barmor==1) {
                karmor();
                nsword();
            }
            else if (bsword==1&&barmor==1) {
                ksword();
                karmor();
            }
            else {
                nsword();
                narmor();
            }
        }
        else if(t == 2) {


            if(bsword==1) {
                ksword();

            } else {
                nsword();
            }

        }
        else if(t == 3) {


            if(bsword==1) {
                ksword();

            } else {
                nsword();
            }
        }
        else if(t == 4) {
            printf("You escaped the battle.\n");
            break;
        }
        else if(t == 5) {
            bag();
            printf("Select your option:\n");
            printf("1.Use HP Potion\n2.Use Damage Potion\n3.Exit\n");
            scanf("%d", &z);

            if(z == 1) {
                if(hppotion > 0) {
                    printf("You used an HP Potion. You healed 50 HP.\n");
                    myhp += 50;
                    hppotion--;
                } else {
                    printf("You don't have any HP potions.\n");
                }
            }
            else if(z == 2) {
                if(dpotion > 0) {
                    printf("You used a Damage Potion. You dealt 50 damage to the enemy.\n");
                    ehp -= 50;
                    dpotion--; // Decrease the number of Damage potions
                } else {
                    printf("You don't have any Damage potions.\n");
                }
            }
        }

        if(ehp <= 0) {
            printf("You defeated the enemy!\n");
        } else if(myhp <= 0) {
            printf("You were defeated by the enemy.\n");
        }
    }
}

//Bag
void bag() {
    printf("1.You have 💲%d Auerues 💵\n",coins);
    printf("2.You have %d crystals 🔮\n ",crystals);
    printf("3.You have %d megagems 💠\n",megagems);
    printf("4.You have %d HP potion 🏺\n",hppotion);
    printf("5.You have %d King sword\n ",sword);
    printf("6.You have %d Armor\n",armor);
    printf("7.You have %d Damge Potion 🏺\n",dpotion);
    printf("8.Your sword has %d hp\n",khp);

}

// Result
void result (char *rank,int crystalsr,int megagemsr,int myexpr) {

    if(ehp<=0) {
        if(guildchoose!=0) {
            printf("You are guild member You got 20 more exp ✨\n");
            myexp+=20;
            printf("Amazing 🤩 You are the best Hunter\n ");
            printf("You got %d crystals 🔮 and %d megagems 💠\n",crystalsr,megagemsr);
            crystals+=crystalsr;
            megagems+=megagemsr;
            printf("You got %d experience ✨ in battle\n",myexpr);
            myexp += myexpr;
        }
        else {
            printf("Amazing 🤩 You are the best Hunter\n ");
            printf("You got %d crystals 🔮 and %d megagems 💠\n",crystalsr,megagemsr);
            crystals+=crystalsr;
            megagems+=megagemsr;
            printf("You got %d experience ✨ in battle\n",myexpr);
            myexp += myexpr;
        }

    } else if(myhp<=0) {
        printf("Demon 👿 is stronger 💪🏽 than you, Try next time\n");
    } else {
        printf(".");

    }
}

//Store
void store() {
    printf("Welcome 🤗 To our Store 🏪 \n");
    printf("1.Medicines - 500💵\n2.HP potion - 200💵\n3.King Sword - 1000💵\n4.Armor - 2000💵\n5.Damage Potion - 200💵\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        if(coins < 500) {
            printf("You don't have enough money\n");
        } else {
            printf("How many medicines do you want? ");
            scanf("%d", &q);
            req = 500 * q;
            if(req > coins) {
                printf("You can't afford that much\n");
            } else {
                printf("You got %d medicines 💊\n", q);
                heal = q * 50;
                myhp+=heal;
                coins -= req;
                printf("your hp %d",myhp);
            }
        }
        break;
    case 2:
        if(coins < 200) {
            printf("You don't have enough money\n");
        } else {
            printf("How many HP potions do you want? ");
            scanf("%d", &q);
            req = 200 * q;
            if(req > coins) {
                printf("You can't afford that much\n");
            } else {
                printf("You got %d HP potions 🏺. Drink it during a fight\n", q);
                hppotion += q;
                coins -= req;
            }
        }
        break;

    case 3:
        if(coins < 1000) {
            printf("You don't have enough money\n");
        } else {
            printf("You got a King Sword ⚔️\n");
            sword++;
            bsword=1;
            khp+=20;
            coins -= 1000;
        }
        break;


    case 4:
        if(coins < 2000) {
            printf("You don't have enough money\n");
        } else {
            printf("You got Armor 🛡️\n");
            armor++;
            barmor=1;
            ahp+=100;
            coins -= 2000;
        }
        break;


    case 5:
        if(coins < 200) {
            printf("You don't have enough money\n");
        } else {
            printf("How many damage potions do you want? ");
            scanf("%d", &q);
            req = 200 * q;
            if(req > coins) {
                printf("You can't afford that much\n");
            } else {
                printf("You got %d Damage potions 🏺. Drink it during a fight\n", q);
                dpotion += q;
                coins -= req;
            }
            break;
        }
    }
}
void sell() {
    printf("Hey 👋🏽 I am Brandon 👱🏽 What you have to sell?\n");
    if (crystals == 0 && megagems == 0) {
        printf("You have no Crystals or Mega Gems to sell! Come back later.\n");
        return;
    }

    printf("1.Crystals - 500💵\n");
    printf("2.Mega Gems - 1000💵\n");
    printf("Select an option: ");
    scanf("%d", &b);

    switch(b) {
    case 1:
        if (crystals == 0) {
            printf("You have no Crystals to sell!\n");
        } else {
            printf("You have %d Crystals. How many would you like to sell? (Max %d): ", crystals, crystals);
            scanf("%d", &c);

            if (c > crystals) {
                printf("You don't have enough Crystals. Try again.\n");
            } else {
                crystals -= c;
                coins += 500 * c;
                printf("You sold %d Crystals and earned %d💵. You now have %d Crystals and %d💵.\n", c, 500 * c, crystals, coins);
            }
        }
        break;

    case 2:
        if (megagems == 0) {
            printf("You have no Mega Gems to sell!\n");
        } else {
            printf("You have %d Mega Gems. How many would you like to sell? (Max %d): ", megagems, megagems);
            scanf("%d", &c);

            if (c > megagems) {
                printf("You don't have enough Mega Gems. Try again.\n");
            } else {
                megagems -= c;
                coins += 1000 * c;
                printf("You sold %d Mega Gems and earned %d💵. You now have %d Mega Gems and %d💵.\n", c, 1000 * c, megagems, coins);
            }
        }
        break;

    default:
        printf("Invalid option selected.\n");
        break;
    }
}

void seepro() {
    printf("Your name : %s\n",name);
    printf("Your age : %d\n",age);
    printf("Your gender : %s\n",gender);
    printf("Your hp : %d\n",myhp);
    printf("Your exp : %d\n",myexp);
    if(exp>=0) {
        printf("Your rank is D rank\number");
    } else if(myexp>=1000) {
        printf("Your rank is C rank\n");
    } else if(myexp>=3000) {
        printf("Your rank is B rank\n");
    } else if(myexp>=5000) {
        printf("Your rank is A rank\n");
    } else if(myexp>=10000) {
        printf("Your rank is S rank\n");
    }
}


void game() {
    while(staycasino!=1){
    printf("\n1.Random Number\n2.Lottery\n3.Exit : ");
    scanf("%d",&gamer);
    printf("You have %d Money 💰\n",coins);
    switch(gamer) {
    case 1:
        number();
        staycasino=0;
        break ;

    case 2:
        slotMachine();
        staycasino=0;
        break;
        
    case 3:
        staycasino=1;
    }
    }
}

void slotMachine() {
    const char* slots[] = {"null","🏆", "🍋", "🔔", "💎", "7️⃣"};
    printf("👯‍♂️ Welcome To our Slot Machine 🎰\n");
    printf("💸Here you can Win the Grand Prize 🏆\n");
    printf("What is your bet💰 : ");
    scanf("%d",&bet);

    if(bet>coins||bet==0) {
        printf("🤡You don't have enough money to bet. 🚫Invalid bet");
    } else {
        p1=rand()%5+1;
        p2=rand()%5+1;
        p3=rand()%5+1;

        printf("Your spinned💫 . Game is started🕹️\n");
        printf("[ %s || %s || %s ]",slots[p1],slots[p2],slots[p3]);

        if(p1==p2&&p2==p3) {
            win = bet * 10;
            printf("\n🎉! JACKPOT !🎉 You won the grand prize\n ");
            printf("You won the %d 💸 \n",win);
            coins += win;
        } else if(p1==p2 || p2 == p3 || p1 == p3 ) {
            win = bet * 2 ;
            printf("\n🏆You won the prize 💰\n ");
            printf("You won the %d prize 💸",win);

            coins += win;
        } else {
            printf("😭You lost the spin . But don't worry try again👍🏽! \n");
            coins -= bet;
        }
        printf("Your have the %d money ",coins);

    }
}


void number() {

    printf("👋🏽You choose The Random Number Guess Game🎲\n ");
    printf("Enter your bet 💵 : ");
    scanf("%d",&bet);
    if(bet>coins) {
        printf("🙅🏽You don't have enough money💵 .🚫 Invalid bet\n");
    } else {
        p=rand()%100+1;
        printf("Here is a Random number 🎲 you have to guess(1-100)\n");
        while(guess!=p) {
            printf("Enter your guess: ");
            scanf("%d",&guess);
            attempts++;
            if(guess>p) {
                printf("📈Your guess is higher . Guess some lower\n");
            } else if (guess<p) {
                printf("📉Your guess is lower . Guess some higher\n");
            }
        }
        printf("🏆You correctly guessed it in %d attempts😁\n",attempts);
        if(attempts<=10) {
            printf("🏅You correctly guessed it🎉\n");
            win = bet * 2;
            coins += win;
        } else {
            printf("😭You lose\n");
            win = bet;
            coins -= win;
        }

        printf("You have %d Money💵\n",coins);
    }
}

void demonologyLecture() {
    printf("📚 WELCOME TO DEMONOLOGY - Solo Leveling Edition 👿\n\n");

    printf("🕳️ Demonology in Solo Leveling is the study of demonic creatures\n");
    printf("found inside the gates. Especially dangerous is the Demon Castle Dungeon,\n");
    printf("a 100-floor tower filled with demons of increasing strength.\n\n");

    printf("🎭 Demon Types by Rank:\n");
    printf("1. D-Rank: Lesser Demons - Weak, mindless attackers.\n");
    printf("2. C-Rank: Fire Horn Demons - Use flame attacks.\n");
    printf("3. B-Rank: Shield Demons - High defense, fight in groups.\n");
    printf("4. A-Rank: Magic-Wielding Demons - Use teleportation, spells.\n");
    printf("5. S-Rank: Baran (Demon King) - Holds Demon Heart, monarch-level power.\n\n");
    printf("💡 Hunters study demonology to survive, understand demon behavior,\n");
    printf("weaknesses, and defeat them in high-level dungeons.\n\n");

    printf("🧠 Let's test your knowledge with a quick MCQ quiz!\n");
}

void demonologyQuiz() {
    int ans;

    // Q1
    printf("\n❓ Q1: How many floors are in the Demon Castle Dungeon?\n");
    printf("1. 10\n2. 50\n3. 100\n4. 150\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) {
        printf("✅ Correct!\n");
        score++;
    }
    else printf("❌ Wrong! Correct answer: 3. 100\n");

    // Q2
    printf("\n ❓ Q2: What is the name of the S-rank demon boss?\n");
    printf("1. Beru\n2. Baran\n3. Vulcan\n4. Igneel\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 2) {
        printf("✅ Correct!\n");
        score++;
    }
    else printf("❌ Wrong! Correct answer: 2. Baran\n");

    // Q3
    printf("\n❓ Q3: Which rank uses flame attacks?\n");
    printf("1. C-Rank\n2. A-Rank\n3. D-Rank\n4. S-Rank\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 1) {
        printf("✅ Correct!\n");
        score++;
    }
    else printf("❌ Wrong! Correct answer: 1. C-Rank\n");

    // Q4
    printf("\n❓ Q4: Why is demonology important for hunters?\n");
    printf("1. To eat demons\n2. For research only\n3. To understand weaknesses and survive\n4. For decoration\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) {
        printf("✅ Correct!\n");
        score++;
    }
    else printf("❌ Wrong! Correct answer: 3. To understand weaknesses and survive\n");

    // Q5
    printf("\n❓ Q5: Which demon rank uses teleportation and spells?\n");
    printf("1. B-Rank\n2. D-Rank\n3. A-Rank\n4. C-Rank\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) {
        printf("✅ Correct!\n");
        score++;
    }
    else printf("❌ Wrong! Correct answer: 3. A-Rank\n");

    printf("\n🎯 QUIZ COMPLETE! You scored %d/5\n", score);

    if (score == 5) {
        printf("👑 Demonology Master! You are ready to hunt demons!\n");
        printf("You got 10 exp✨");
        myexp+=10;
    } else if (score >= 3) {
        printf("⚔️ Good effort! Train more and rise!\n");
        printf("You got 5 exp✨");
        myexp+=5;
    } else {
        printf("😓 Study harder, rookie. The demons won today.\n");
    }
}

void scienceLecture() {
    printf("\n📚 SCIENCE of Solo Leveling: Magic, Gates & Mana 🌌\n");
    printf("In the Solo Leveling universe, magical energy is known as 'Mana'.\n");
    printf("Mana flows through humans, monsters, and the environment.\n");
    printf("🔬 Dimensional Gates open between worlds, letting monsters enter Earth.\n");
    printf("Mana crystals found in dungeons power technology and society.\n");
    printf("The energy system blends science and magic, monitored by Hunter Associations.\n");
}
void scienceQuiz() {
    int ans;
    printf("\n❓ Science Quiz Time!\n");

    printf("\nQ1: What is the energy source called in Solo Leveling?\n1. Chakra\n2. Aura\n3. Mana\n4. Spirit\n");
    scanf("%d", &ans);
    if(ans == 3) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf(" ❌its mana.\n");

    printf("\nQ2: What opens portals between Earth and monster world?\n1. Spellbooks\n2. Gates\n3. Rifts\n4. Portals\n");
    scanf("%d", &ans);
    if(ans == 2) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ It's Gates.\n");


    printf("\nQ3: What do mana crystals do?\n1. Explode\n2. Create monsters\n3. Power society\n4. Are useless\n");
    scanf("%d", &ans);
    if(ans == 3) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ They power society!\n");


    printf("\n🔬 Science Score: %d/3\n", score);
}

void mathsLecture() {
    printf("\n📚 MATHS in Solo Leveling: Stats, Scaling & Combat Calculations 📊\n");
    printf("Hunters level up by gaining experience points (EXP).\n");
    printf("Their stats like Strength, Agility, and Intelligence grow with level-ups.\n");
    printf("Each stat affects battle: Agility boosts speed, Strength boosts damage.\n");
    printf("Sung Jinwoo uses math to analyze enemy HP, damage dealt, cooldowns, and timing.\n");
}

void mathsQuiz() {
    int ans;
    printf("\n❓ Maths Quiz Time!\n");

    printf("\nQ1: If Jinwoo's strength is 80 and he levels up adding +10, what’s his new strength?\n1. 90\n2. 85\n3. 95\n4. 100\n");
    scanf("%d", &ans);
    if(ans == 1) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ It's 90.\n");

    printf("\nQ2: What stat boosts movement speed?\n1. Strength\n2. Agility\n3. Defense\n4. Luck\n");
    scanf("%d", &ans);
    if(ans == 2) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ It's Agility.\n");

    printf("\nQ3: What happens if damage > enemy HP?\n1. Nothing\n2. HP increases\n3. Monster dies\n4. Monster runs away\n");
    scanf("%d", &ans);
    if(ans == 3) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ Monster dies!\n");

    printf("\n📊 Maths Score: %d/3\n", score);
}

void weaponsLecture() {
    printf("\n📚 WEAPONS of Solo Leveling: Arm Yourself for War 🗡️🛡️\n");
    printf("Weapons enhance a hunter’s abilities. They can be:\n");
    printf("- Swords, Daggers, Bows, Magic Staffs\n");
    printf("- Ranked: from E to SSS depending on rarity & power\n");
    printf("Sung Jinwoo uses dual daggers and shadow magic.\n");
    printf("Weapon bonuses include +crit, +speed, lifesteal, and mana regen.\n");
    printf("Artifacts and sets also boost power massively.\n");
}
void weaponsQuiz() {
    int ans;
    printf("\n❓ Weapons Quiz Time!\n");

    printf("\nQ1: What kind of weapons does Jinwoo use the most?\n1. Sword\n2. Axe\n3. Dual Daggers\n4. Gun\n");
    scanf("%d", &ans);
    if(ans == 3) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ Dual Daggers are his favorite.\n");

    printf("\nQ2: What rank is the strongest gear?\n1. D\n2. A\n3. S\n4. SSS\n");
    scanf("%d", &ans);
    if(ans == 4) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ SSS is top-tier!\n");

    printf("\nQ3: What ability might a weapon give?\n1. Homework skill\n2. Lifesteal\n3. Flying car\n4. Phone call\n");
    scanf("%d", &ans);
    if(ans == 2) {
        printf("✅ Correct!\n");
        score++;
        printf("You got 2 exp✨");
        myexp+=2;
    }
    else printf("❌ Lifesteal is right.\n");

    printf("\n🗡️ Weapons Score: %d/3\n", score);
}



void school() {
    printf("Hi 👋🏽 Your welcome 🤗 in our Demon Hunter School 🏫\n");
    printf("Learn for experience ✨\n");
    printf("Here are your Chapeters\n");
    printf("1.Demonology\n2.Science\n3.Chemistry\n4.Weapons : ");
    scanf("%d",&p);
    switch(p) {
    case 1:
        demonologyLecture();
        demonologyQuiz();
        break;

    case 2:
        scienceLecture();
        scienceQuiz();
        break;

    case 3 :
        mathsLecture();
        mathsQuiz();
        break;

    case 4:
        weaponsLecture();
        weaponsQuiz();
        break;

    }
}

void chooseGuild() {
    if(myexp<1000 ) {
        printf("You are D rank Hunter . Go and rank up first . Then you will can choose the guild. Or collect more crystals\n\n");
    } else if (myexp>=1000) {
        printf("\n🏰 You are now eligible to join a Guild! 💼\n");
        printf("Choose your guild:\n");
        printf("1. 🐉 Dragon's Roar - Offensive Power\n");
        printf("2. 🛡️ Shield of Dawn - Defensive Tactics\n");
        printf("3. 🧠 Mind Seekers - Magic Experts\n");
        printf("4. 🌑 Shadow Syndicate - Stealth & Assassins\n");
        printf("Enter your guild number: ");
        scanf("%d", &guildChoice);

        switch(guildChoice) {
        case 1:
            printf("🔥 You joined Dragon's Roar! Now you gain 20 more exp.\n");
            guildchoose = 1;
            break;
        case 2:
            printf("🛡️ You joined Shield of Dawn! Now you gain 20 more exp.\n");
            guildchoose = 2;

            break;
        case 3:
            printf("✨ You joined Mind Seekers! Now you gain 20 more exp. \n");
            guildchoose = 3;
            break;
        case 4:
            printf("🌑 You joined Shadow Syndicate! Now you gain 20 more exp. .\n");
            guildchoose=4;
            break;
        default:
            printf("❌ Invalid choice. Guild joining cancelled.\n");
        }
    }
}


void country() {
    printf("1.America🇺🇸\n2.India🇮🇳\n3.Japan🇯🇵\n4.Russia🇷🇺\n5.Ethiopia🇪🇹");
    printf("\nWhich Country you want to Travel 🧳 : ");
    scanf("%d",&a);

    switch(a) {
    case 1:
        currentGroup = group1;
        break;
    case 2:
        currentGroup = group5;
        break;
    case 3:
        currentGroup = group3;
        break;
    case 4:
        currentGroup = group2;
        break;
    case 5:
        currentGroup = group4;
        break;
    default:
        printf("Invalid country!\n");
        return;
    }
    if(coins<3000) {
        printf("You can't Travel this country. Don't have enough money 💵");
    } else {
        printf("Wow 😲 You will Travel 🧳 to %s \n", coun[a]);
        printf("3000 💵 deduct from your wallet as Flight Ticket🎫\n");
        coins-=3000;
        printf("Now you are in plane ✈️\n");
        printf("👨🏽‍✈️ We have successfully landed in %s\n", coun[a]);

        while(b!=6) {
            printf("1.Fight🥷🏽\n2.Guild🫂\n3.Home\n4.Bag\n");
            printf("Enter your choice : ");
            scanf("%d",&b);

            switch(b) {
            case 1:
                fstranger();
                break;
            case 2:
                chooseGuild();
                break;
            case 3:
                if(coins<3000) {
                    printf("You can't travel 🧳  to home . You don't have enough money 💵");
                }
                else {
                    printf("You landed in your Home Town🏠");
                    coins-=3000;
                    return;
                }
            case 4:
                bag();
                break;

            }
            i++;
        }
    }
}
void fight() {
    while(ehp > 0 && myhp > 0) {

        printf("\nEnemy : %d\t Your HP: %d\n", ehp, myhp);
        printf("1.Sword smash\n2.Knife crush\n3.Power ball\n4.Run\n");
        scanf("%d", &t);

        if(t == 1) {
            a = rand() % 50;
            ehp -= a;
            printf("You dealt %d damage to %s\n", a, enemy);
            c = rand() % 50;
            myhp -= c;
            printf("You received %d damage from %s\n", c, enemy);
        }
        else if(t == 2) {
            a = rand() % 50;
            ehp -= a;
            printf("You dealt %d damage to %s\n", a, enemy);
            c = rand() % 50;
            myhp -= c;
            printf("You received %d damage from %s\n", c, enemy);
        }
        else if(t == 3) {
            a = rand() % 50;
            ehp -= a;
            printf("You dealt %d damage to %s\n", a, enemy);
            c = rand() % 50;
            myhp -= c;
            printf("You received %d damage from %s\n", c, enemy);
        }
        if(ehp <= 0) {
            printf("You defeated the enemy!\n");
        } else if(myhp <= 0) {
            printf("You were defeated by the enemy.\n");
        }


    }
}

void fresult (char *rank, int betr, int myexpr) {
    if(ehp<=0) {
        printf("Oooff you lose me . You are a real hunter\n");
        printf("You got %d money💰\n", bet * betr);
        coins += bet * betr;
        printf("You got %d experience ✨ in battle\n", myexpr);
        myexp += myexpr;
    } else if(myhp<=0) {
        printf("Ha ha ha 😂. You rookie . You can't. Train yourself\n");
    } else {
        printf(".");
    }
}
void fstranger() {
    if(guildchoose==0) {
        printf("You are not guild member choose a guild first\n");
    }
    else {
        printf("Are you ready knight💪🏽? You will Fight a real warrior 🪖 \n");
        printf("1.D rank\n2.C rank\n3.B rank\n4.A rank\n5.S rank\n");
        printf("Choose Fighter: ");
        scanf("%d",&st);

        printf("Enter your bait 💰 amount: ");
        scanf("%d",&bet);
        if(bet>coins||bet==0) {
            printf("You don't have enough money 💵\n");
        } else {

            if(st==1 && myexp >= 0) {
                p = rand() % 20;
                enemy = currentGroup[p];
                ehp = 100;
                printf("You are fighting with %s . Hi I am %s!\n", enemy,enemy);
                fight();
                fresult("D", 1, 50);
            } else if(st==2 && myexp>=1000) {
                p = rand() % 20;
                enemy = currentGroup[p];
                ehp = 400;
                printf("You are fighting with %s . Kill it!\n", enemy);
                fight();
                fresult("C", 2, 80);
            } else if(st==3 && myexp >=3000) {
                p = rand() % 20;
                enemy = currentGroup[p];
                ehp = 800;
                printf("You are fighting with %s . Kill it!\n", enemy);
                fight();
                fresult("B", 3, 100);
            } else if(st==4 && myexp >= 5000) {
                p = rand() % 20;
                enemy = currentGroup[p];
                ehp = 1500;
                printf("You are fighting with %s . Kill it!\n", enemy);
                fight();
                fresult("A", 4, 150);
            } else if (st==5 && myexp >= 10000) {
                p = rand() % 10;
                enemy = currentGroup[p];
                ehp = 2000;
                printf("You are fighting with %s . Kill it!\n", enemy);
                fight();
                fresult("S", 5, 200);
            } else {
                printf("You don't Attain that rank 😓. Increase your experience 📈\n");
            }
        }
    }
}

void saveGame() {
    FILE *fp = fopen("save.dat", "w");
    if (fp == NULL) {
        printf("Error saving the game!\n");
        return;
    }

    fprintf(fp, "%s %d %d %d %d %d %d %d %d %d %d %d\n",
            name, myexp, myhp, coins, crystals, megagems, hppotion, sword, armor, dpotion, guildchoose,bank_balance);

    fclose(fp);
    printf("💾 Game progress saved!\n");
}
void loadGame() {
    FILE *fp = fopen("save.dat", "r");
    if (fp == NULL) {
        printf("No save file found. Starting a new game.\n");
        return;
    }

    fscanf(fp, "%s %d %d %d %d %d %d %d %d %d %d %d",
           name, &myexp, &myhp, &coins, &crystals, &megagems, &hppotion, &sword, &armor, &dpotion, &guildchoose, &bank_balance);

    fclose(fp);
    printf("🎮 Game progress loaded! Welcome back, %s!\n", name);
}
void newGame() {
    // Reset everything to initial values
    myhp = 100;
    myexp = 100000;
    crystals = 0;
    megagems = 0;
    coins = 100000;
    hppotion = 0;
    sword = 0;
    armor = 0;
    dpotion = 0;
    guildchoose = 0;

    // Ask for player profile again
    printf("🔁 Starting a New Game...\n");
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your Gender: ");
    scanf("%s", gender);

    printf("\n✨ Welcome, brave hunter %s!\n", name);
    printf("🎂 Age: %d | ⚧️ Gender: %s\n", age, gender);
    printf("🎮 Your adventure begins now with 100 HP and 1000 Coins.\n");

    // Optional: Save the new state immediately
    saveGame();
}

void bank() {
    int choice, amount;

    while (1) {
        printf("\n🏦 Welcome to Hunter Bank:\n");
        printf("1. Deposit 💰\n2. Withdraw 💵\n3. Check Bank Balance 🧮\n4. Exit\n");
        printf("Choose option: ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            if(coins >= amount) {
                coins -= amount;
                bank_balance += amount;
                printf("Deposited %d 💰. Bank Balance: %d\n", amount, bank_balance);
            } else {
                printf("Not enough coins!\n");
            }
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if(bank_balance >= amount) {
                coins += amount;
                bank_balance -= amount;
                printf("Withdrew %d 💵. Bank Balance: %d\n", amount, bank_balance);
            } else {
                printf("Not enough funds in bank!\n");
            }
            break;


        case 3:
            printf("Bank Balance: %d 💰\n", bank_balance);
            break;

        case 4:
            return;
        }
    }
}

void ksword() {

    a   = rand() % 100 + 50;
    ehp -= a;
    printf("You dealt %d damage to %s\n", a, enemy);
    khp-=10;
    if(khp<=0) {
        bsword=0;
        sword--;
        nsword();
        
    }
}

void nsword() {

    a = rand() % 50;
    ehp -= a;
    printf("You dealt %d damage to %s\n", a, enemy);

}
void karmor() {
    c = rand() % 30;
    myhp -= c;
    printf("You received %d damage from %s\n", c, enemy);
    ahp-=10;
    if(ahp<=0) {
        barmor=0;
        armor--;
        narmor();
    }
}

void narmor() {
    c = rand() % 50;
    myhp -= c;
    printf("You received %d damage from %s\n", c, enemy);
}

    

