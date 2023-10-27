# <img src="https://github.com/phuongtrieu97coder/Readme_Content_Structure/assets/82598726/9eb1b72c-1de1-4949-80bc-70c12d483ece" alt="C" width="40px" height="40px">



<img src="https://github.com/phuongtrieu97coder/C_projects/assets/82598726/c276198a-1475-4fd7-93dc-92280934114c" alt="C_poster" width="400px" height="300px"> <a type="button" title="Codecademy_Learn_C_Course_button" href="https://www.codecademy.com/paths/c/tracks/going-further-with-c-sp/modules/arrays-and-strings-c-sp/projects/anagram-finder-c" target="_blank" data-CodecademyLearnCCourseButt="CodecademyLearnCCourseButt_data"><img src="https://user-images.githubusercontent.com/82598726/175697552-f960b057-9e97-4c3e-a3e2-f2b5f7876de9.png" alt="Codecademy_Learn_C_Course_button" width="400px" height="300px"></a>


<br><br>


# Anagram Finder

# 1. Introduction:
![Alt text](image.png)

![Alt text](image-1.png)

# 2. Output:


Anagram!

# 3. Prompts:

![Alt text](image-2.png)

![Alt text](image-3.png)

![Alt text](image-4.png)

![Alt text](image-5.png)

```c
#include<stdio.h>
#include<string.h>
int main() {
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  for(int i=0; i<strlen(s1); i++){
    
  }
}
```

![Alt text](image-6.png)

```c
#include<stdio.h>
#include<string.h>
int main() {
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  for(int i=0; i<strlen(s1); i++){
    switch(s1[i]){
      case 'a':
        counter1[0]+=1;
        break;
      case 'b':
        counter1[1]+=1;
        break;
      case 'c':
        counter1[2]+=1;
        break;
      case 'd':
        counter1[3]+=1;
        break;
    }
  }
}
```

![Alt text](image-7.png)

```c
#include<stdio.h>
#include<string.h>
int main() {
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  for(int i=0; i<strlen(s1); i++){
    switch(s1[i]){
      case 'a':
        counter1[0]+=1;
        break;
      case 'b':
        counter1[1]+=1;
        break;
      case 'c':
        counter1[2]+=1;
        break;
      case 'd':
        counter1[3]+=1;
        break;
    }
  }

  for(int i2=0; i2<strlen(s2); i2++){
    switch(s2[i2]){
      case 'a':
        counter2[0]+=1;
        break;
      case 'b':
        counter2[1]+=1;
        break;
      case 'c':
        counter2[2]+=1;
        break;
      case 'd':
        counter2[3]+=1;
        break;
    }
  }
}
```

![Alt text](image-8.png)

![Alt text](image-9.png)

![Alt text](image-10.png)

![Alt text](image-11.png)






