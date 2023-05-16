#ifndef STUDENTLIST
#define STUDENTLIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH_NAME 80
#define LENGTH_ID  11

typedef struct student{

    char First_name[LENGTH_NAME];
    char Last_name[LENGTH_NAME];
    char Id_number[LENGTH_ID];
    float Average;
    struct student *next;
}StudentList;


void Creating_List();
void Print_List();
void Add_student();
void Deleting_student();
void Searching_student();
void Sorting_student();
void Saving_list_in_file();
void Loading_file();
void MergeSort(StudentList** headRef);
void frontbacksplit(StudentList* source, StudentList** frontref, StudentList** backref);
StudentList* SortedMerge(StudentList* a, StudentList* b);



#endif //STUDENTLIST