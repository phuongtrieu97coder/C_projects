# <img src="https://github.com/phuongtrieu97coder/Readme_Content_Structure/assets/82598726/9eb1b72c-1de1-4949-80bc-70c12d483ece" alt="C" width="40px" height="40px">



<img src="https://github.com/phuongtrieu97coder/C_projects/assets/82598726/c276198a-1475-4fd7-93dc-92280934114c" alt="C_poster" width="400px" height="300px"> <a type="button" title="Codecademy_Learn_C_Course_button" href="https://www.codecademy.com/paths/c/tracks/functions-and-structures-in-c-sp/modules/functions-c-sp/projects/mini-calendar-c" target="_blank" data-CodecademyLearnCCourseButt="CodecademyLearnCCourseButt_data"><img src="https://user-images.githubusercontent.com/82598726/175697552-f960b057-9e97-4c3e-a3e2-f2b5f7876de9.png" alt="Codecademy_Learn_C_Course_button" width="400px" height="300px"></a>


<br><br>


# Mini-Calendar

# 1. Introduction:
![Alt text](image.png)

# 2. Notice:
> The program will ask the developer to build many ```else if``` condition. In my opinion, a developer should not use ```else if``` condition when it comes to dealing with many cases that can be happen to solve a problem. A developer should use ```if``` condition and child ```if``` condition inside its parent ```if``` statement instead. It will make the code more readable and easier to debug. 

# 3. Output:


![Alt text](image-55.png)

![Alt text](image-56.png)



# 4. Prompts:

![Alt text](image-1.png)

![Alt text](image-2.png)

![Alt text](image-3.png)

![Alt text](image-4.png)

![Alt text](image-5.png)

![Alt text](image-6.png)


![Alt text](image-7.png)

![Alt text](image-8.png)



![Alt text](image-9.png)


![Alt text](image-10.png)

![Alt text](image-11.png)

![Alt text](image-12.png)

![Alt text](image-13.png)

```c
#include <stdio.h>
#include <stdbool.h>
bool is_leap_year(int year){
  if(year%4 != 0){
    return false;

  }
  
  if(year%4 == 0){

     if(year%100 != 0){
      return true;
     }

     if(year%100 == 0 && year%400 != 0){
       return false;
     }

     if(year%100 == 0 && year%400 == 0){
       return true;
     }

  }
}
int main() {
  int year;
  scanf("%d",&year);
  printf("Is the input year a leap year? >> %d",is_leap_year(year));
}
```

![Alt text](image-14.png)

![Alt text](image-15.png)

```c
int main() {
  int year;
  scanf("%d",&year);
  printf("Is the input year a leap year?\n");
  is_leap_year(year) == true? printf(">> Leap Year\n"): printf("Not Leap Year\n");
}
```

![Alt text](image-16.png)

![Alt text](image-17.png)

![Alt text](image-18.png)

![Alt text](image-19.png)

![Alt text](image-20.png)

![Alt text](image-21.png)

![Alt text](image-22.png)

![Alt text](image-23.png)

![Alt text](image-24.png)

![Alt text](image-25.png)

![Alt text](image-26.png)

![Alt text](image-27.png)

![Alt text](image-28.png)

![Alt text](image-29.png)

![Alt text](image-30.png)


```c
int days_in_month[] = {0,31,28,30,31,30,31,30,31,30,31,30,31};

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){

}
```

![Alt text](image-31.png)

![Alt text](image-32.png)

![Alt text](image-33.png)

![Alt text](image-34.png)

```c
int days_in_month[] = {0,31,28,30,31,30,31,30,31,30,31,30,31};

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){

  int days_left_in_month;

  while(days_left_to_add > 0){
    days_left_in_month = days_in_month[*mm]-(*dd);
  }
}
```

![Alt text](image-35.png)

![Alt text](image-36.png)

![Alt text](image-37.png)

```c
void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){


  int days_left_in_month;

  while(days_left_to_add > 0){
    days_left_in_month = days_in_month[*mm]-(*dd);

    if(*mm == 2 && is_leap_year(*yy) == true){
      days_left_in_month+=1;
    }
  }
}
```

![Alt text](image-38.png)

![Alt text](image-39.png)

![Alt text](image-40.png)

![Alt text](image-41.png)

![Alt text](image-42.png)

![Alt text](image-43.png)

![Alt text](image-44.png)

![Alt text](image-45.png)

![Alt text](image-46.png)

![Alt text](image-47.png)

![Alt text](image-48.png)

![Alt text](image-49.png)

```c

  int mm,dd,yy,days_left_to_add;
  printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date: \n");
  scanf("%d%d%d%d",&mm,&dd,&yy,&days_left_to_add);
  add_days_to_date(&mm,&dd,&yy,days_left_to_add);

  printf("Month: %d, Day: %d, Year: %d, Days left to add: %d. \n",mm,dd,yy,days_left_to_add);
```

![Alt text](image-50.png)

![Alt text](image-51.png)

![Alt text](image-52.png)

![Alt text](image-53.png)

![Alt text](image-54.png)

