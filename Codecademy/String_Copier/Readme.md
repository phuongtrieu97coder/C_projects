# <img src="https://github.com/phuongtrieu97coder/Readme_Content_Structure/assets/82598726/9eb1b72c-1de1-4949-80bc-70c12d483ece" alt="C" width="40px" height="40px">



<img src="https://github.com/phuongtrieu97coder/C_projects/assets/82598726/c276198a-1475-4fd7-93dc-92280934114c" alt="C_poster" width="400px" height="300px"> <a type="button" title="Codecademy_Learn_C_Course_button" href="https://www.codecademy.com/paths/c/tracks/going-further-with-c-sp/modules/pointers-and-memory-c-sp/projects/string-copier-c-pointers" target="_blank" data-CodecademyLearnCCourseButt="CodecademyLearnCCourseButt_data"><img src="https://user-images.githubusercontent.com/82598726/175697552-f960b057-9e97-4c3e-a3e2-f2b5f7876de9.png" alt="Codecademy_Learn_C_Course_button" width="400px" height="300px"></a>


<br><br>


# String Copier

# 1. Introduction:
![Alt text](image.png)

![Alt text](image-1.png)



# 2. Output:
We promptly judged antique ivory buckles for the next prize!


# 3. Prompts:

![Alt text](image-2.png)

![Alt text](image-3.png)

![Alt text](image-4.png)

![Alt text](image-5.png)

```c
void copy(char* dst, char* src){
  while(*src != '\0'){
    *dst=*src;
    src++;
    dst++;
  }
}
```


![Alt text](image-6.png)

```c
void copy(char* dst, char* src){
  while(*src != '\0'){
    *dst=*src;
    src++;
    dst++;
  }
  *dst = '\0';
}
```

![Alt text](image-7.png)

```c
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";

  char dstString[strlen(srcString)+1];
 
}
```
![Alt text](image-8.png)

```c
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";

  char dstString[strlen(srcString)+1];

  strcpy(dstString,srcString);

  printf("%s",dstString);
 
}
```



