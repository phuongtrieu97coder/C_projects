#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race{
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar{
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};
// Print functions section
void printIntro(void){
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n\n");
}

void printCountDown(void){
  printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n");
}

void printFirstPlaceAfterLap(struct Race race){
  printf("Current lap number: %d.\nFirst Place is: %s in the %s race car.\n",race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race){
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}
// Logic functions section
int calculateTimeToComplateLap(void){
  int speed,acceleration,nerves;
  speed = (rand() % 3) + 1;
  acceleration = (rand() % 3) + 1;
  nerves = (rand() % 3) + 1;
  return speed+acceleration+nerves;
}

void updateRaceCar(struct RaceCar* raceCar){
  raceCar->totalLapTime+=calculateTimeToComplateLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  if(raceCar1->totalLapTime<=raceCar2->totalLapTime){

    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;

  }else{

    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;

  }
}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2){

  struct Race race = {5,1,"",""};
  struct Race* getRace = &race;

  for(int i=0; i<race.numberOfLaps; i++){

    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);

    updateFirstPlace(getRace,raceCar1,raceCar2);

    printFirstPlaceAfterLap(race);
  }
  printCongratulation(race);
}


int main() {
  struct RaceCar raceCar1 = {"Frank","Blue",6};
  struct RaceCar raceCar2 = {"Terry","Red",4};    

	srand(time(0));
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);
  
};