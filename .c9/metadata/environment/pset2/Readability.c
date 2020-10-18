{"filter":false,"title":"Readability.c","tooltip":"/pset2/Readability.c","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":44,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <cs50.h>","#include <string.h>","#include <math.h>","","int main(void)","{","    string text = get_string(\"Text: \");","    int letterscount = 0;","    int wordcount = 1;","    int sentencecount = 0;","","//count words","    for (int i = 0; i < strlen(text); i++)","    {","       if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))","       {","           letterscount++;","       }","       else if (text[i] == ' ')","       {","           wordcount++;","       }","       else if (text[i] == '.' || text[i] == '!' || text[i] == '?')","       {","           sentencecount++;","       }","    }","//    printf(\"letters: %i; words: %i; sentences: %i\\n\", letterscount, wordcount, sentencecount);","","    float grade = 0.0588 * (100 * (float) letterscount / (float) wordcount) - 0.296 * (100 * (float) sentencecount / (float) wordcount) - 15.8;","    if (grade < 16 && grade >= 0)","    {","        printf(\"Grade %i\\n\", (int) round(grade));","    }","    else if (grade >= 16)","    {","        printf(\"Grade 16+\\n\");","    }","    else","    {","        printf(\"Before Grade 1\\n\");","    }","","}"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":5,"column":14},"end":{"row":5,"column":14},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1597018572813,"hash":"480c8b434881bd5e4f366b7c4be71e3c8c8c56ee"}