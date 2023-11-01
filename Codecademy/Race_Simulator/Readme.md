# <img src="https://github.com/phuongtrieu97coder/Readme_Content_Structure/assets/82598726/9eb1b72c-1de1-4949-80bc-70c12d483ece" alt="C" width="40px" height="40px">



<img src="https://github.com/phuongtrieu97coder/C_projects/assets/82598726/c276198a-1475-4fd7-93dc-92280934114c" alt="C_poster" width="400px" height="300px"> <a type="button" title="Codecademy_Learn_C_Course_button" href="https://www.codecademy.com/paths/c/tracks/functions-and-structures-in-c-sp/modules/structures-c-sp/projects/learn-c-race-simulator" target="_blank" data-CodecademyLearnCCourseButt="CodecademyLearnCCourseButt_data"><img src="https://user-images.githubusercontent.com/82598726/175697552-f960b057-9e97-4c3e-a3e2-f2b5f7876de9.png" alt="Codecademy_Learn_C_Course_button" width="400px" height="300px"></a>


<br><br>


# Race Simulator

# 1. Introduction:

![Alt text](image.png)


# 2/ Notices:
> I'm not sure if I got the logic from step 11 to 13 right or not since the document doesn't provide enough details for it. In general, the program run well. 

# 3. Output:
![Alt text](image-22.png)

![Alt text](image-23.png)



# 4. Prompts:

![Alt text](image-1.png)

![Alt text](image-2.png)

```c
struct Race{
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};
```

![Alt text](image-3.png)
```c
struct RaceCar{
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};
```

![Alt text](image-4.png)

```c
void printIntro(void){
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n\n");
}
```
![Alt text](image-5.png)


```c
void printCountDown(void){
  printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n");
}
```

![Alt text](image-6.png)

![Alt text](image-7.png)

```c
void printFirstPlaceAfterLap(struct Race race){
  printf("Current lap number: %d.\nFirst Place is: %s in the %s race car.\n",race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race){
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}
```

![Alt text](image-8.png)

![Alt text](image-9.png)

```c
int calculateTimeToComplateLap(void){
  int speed,acceleration, nerves;
  speed = (rand() % 3) + 1;
  acceleration = (rand() % 3) + 1;
  nerves = (rand() % 3) + 1;   return speed+acceleration+nerves;

}
```

![Alt text](image-10.png)

![Alt text](image-11.png)

```c
void updateRaceCar(struct RaceCar* raceCar){
  raceCar->totalLapTime+=calculateTimeToComplateLap();
}
```

![Alt text](image-12.png)

![Alt text](image-13.png)

```c
void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  if(raceCar1->totalLapTime<=raceCar2->totalLapTime){

    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;

  }else{

    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;

  }
}
```

![Alt text](image-14.png)

![Alt text](image-15.png)

![Alt text](image-16.png)

```c
void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  struct Race race = {5,1,"",""};
}
```

![Alt text](image-17.png)

![Alt text](image-18.png)

![Alt text](image-19.png)

![Alt text](image-20.png)

![Alt text](image-21.png)


```c

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
```