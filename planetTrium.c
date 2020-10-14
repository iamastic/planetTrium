#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

enum bool {false, true};
typedef enum bool bool;

char triumNames (void);
bool isVowel (char letter);
int changeToVowel (int x);

int main(void){

  triumNames(); /* calls to function that will print all the Trium names */

  return 0;
}

char triumNames (void){

  int letter1, letter3, i, printLetter1, printLetter2, printLetter3, counter = 1; /* letter1 holds the first letter, letter3 holds the third letter.
                                                                                    I will be storing the correct letters in a variable called printLetter */

  for (letter1 = 'a'; letter1 <= 'z'; letter1++){    /* This is the first loop, that will be checking the first letter i.e. letter */

    if (isVowel(letter1)==true){
      letter1 +=1;
      printLetter1 = letter1;
    }
  else {
    printLetter1 = letter1;     /* This if statement checks if letter1 is a vowel (see isVowel function below). If letter1 is a vowel, then it adds 1.
                                  For example, we start with 'a'. isVowel('a') is true. Since it is true, I will add 1 to it. After adding 1, I get 'b'
                                  and assign it to printLetter1.
                                  The next time we go through this loop, I will be testing if 'c' is a vowel. It isn't, therefore no maths is done and I assign
                                  it to printLetter1. */
  }

        for (i = 1; i<=5; i++){
        printLetter2 = changeToVowel(i);  /* This is my second for loop. This one is very simple. It goes to my function: changetoVowel, and prints
                                            a vowel depending on the number of i. Since this is the first run of the loop, i = 1, therefore 'a' will
                                            be printed. On the second run, i = 2, 'e' will be printed. I am assigning these letters to printLetter2 as
                                            this is the second letter that is going to be printed */


    for (letter3 = 'a'; letter3 <= 'z'; letter3++){

      if (isVowel(letter3)==true){
        letter3 +=1;
        printLetter3 = letter3;
      }

    else {
      printLetter3 = letter3;
    }

    printf("%4d%4c%c%c\n", counter, printLetter1, printLetter2, printLetter3 );
    counter ++;
  }                               /* Now that we have gone through the first two loops ONCE, we will go through the third loop 26 times.
                                    The third loop is the exact same as the first loop. It checks whether or not a letter is a vowel, and
                                    if it is, then it adds 1 and allocates it to printLetter3. If it isn't a vowel, then it simply allocates
                                    it to printLetter3. The counter goes up once, and is printed alongside everything else. */
  }
  }
  return 0;
}

int changeToVowel (int x){ /* this function replaces the numbers with letters. If x = 1, then x will become 'a' */

switch(x){
  case 1:
    x = 'a';
    return x;

  case 2:
    x = 'e';
    return x;

  case 3:
    x = 'i';
    return x;

  case 4:
    x = 'o';
    return x;

  case 5:
    x = 'u';
    return x;

  default:
  return 0;
}

}

bool isVowel (char letter){  /* this is my boolean function to test whether or not a letter is a vowel. You can also use a switch statement here,
                                but I prefer if statements */

 if (letter == 'a' || letter =='e' || letter =='i' || letter =='o' || letter =='u'){
   return true;
 }
 else {
   return false;
 }
}
