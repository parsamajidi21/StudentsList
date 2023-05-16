#include "Student_List.h"


StudentList *first=NULL,*current=NULL,*link;

StudentList* SortedMerge(StudentList* a, StudentList* b);
void frontbacksplit(StudentList* source,StudentList** frontref ,StudentList** backref);

/**************************************************************************************************************************/
/// @brief This function creates the list of students in which there are Full Name, Student ID, and Average of the students  
/// @param n is the number of students that user wants to enter
/**************************************************************************************************************************/
void Creating_List(int n)
{
        printf("Enter Details of #1-student\n\n");
         first = (StudentList *)
            malloc(sizeof(StudentList));
        puts("//FirstName//");
        scanf("%s",first->First_name);
        puts("//LastName//");
        scanf("%s",first->Last_name);
        puts("//ID_Number//");
        scanf("%s",first->Id_number);
        puts("//Average//");
        scanf("%f",&first->Average);
        first->next=NULL;
        current = first;

        for(int i = 1;i < n;i++)
        {
            printf("Enter Details of #%d-student\n\n",i+1);
            link=(StudentList *)
                malloc(sizeof(StudentList));
            puts("//FirstName//");
            scanf("%s",link->First_name);
            puts("//LastName//");
            scanf("%s",link->Last_name);
            puts("//ID_Number//");
            scanf("%s",link->Id_number);
            puts("//Average//");
            scanf("%f",&link->Average);
            link->next = NULL;
            current->next = link;
            current = link;
        }


}

/**************************************************************************************************************************/
/// @brief This function adds the students to the list using a linklist
/// @param MAX is the number of students in our list, It is added when the user enters a student name to our list
/**************************************************************************************************************************/
void Add_student(int *MAX)
{
    StudentList *Add;
    Add = (StudentList *)
        malloc(sizeof(StudentList));
    puts("Enter Details of new students");
    puts("//FirstName//");
    scanf("%s",Add->First_name);
    puts("//LastName//");
    scanf("%s",Add->Last_name);
    puts("//ID_Number//");
    scanf("%s",Add->Id_number);
    puts("//Student's Average//");
    scanf("%f",&Add->Average);
    current->next = Add;
    current = Add;
    *MAX++;
}
/**************************************************************************************************************************/
/// @brief This function deletes the desired student(s) from our list
/**************************************************************************************************************************/
void Deleting_student()
{
    char s[10];
    int Condition=0;
    StudentList *Take,*Take_2;
    puts("Enter student's ID_number you wanna delete:");
    scanf("%s",s);
    if(strcmp(s,first->Id_number)==0)
    {
        first = first->next;
        Condition = 1;
    }
    else
    {
        Take = first;
        Take_2 = first->next;
        while(Take_2 != NULL)
        {
            if(strcmp(s,Take_2->Id_number)==0)
            {
                Take->next = Take_2->next;
                Condition = 1;
                break;
            }
            else{
                Take_2 = NULL;
            }

        }
    }
    if(Condition == 0)
        puts("There's Not exist in the list\n");
}

/**************************************************************************************************************************/
/// @brief Function for searching by the Student ID
/**************************************************************************************************************************/
void Searching_student()
{
    char ID[10];
    int condition=0;
    puts("Enter Student's ID_number that you're searching:");
    scanf("%s",ID);
    StudentList *Search;
    Search = first;
    while(Search != 0)
    {
         if(strcmp(ID,Search->Id_number)==0)
            {
                puts("//FirstName//\t//LastName//\t//ID_Number//\t//Average//\n");
                printf("%s\t\t%s\t\t%s\t\t%f\n",Search->First_name,Search->Last_name,Search->Id_number,Search->Average);
                condition = 1;
                    break;
            }
            Search = Search->next;
    }
    if(condition == 0)
        puts("There's not exist in list");

}

/**************************************************************************************************************************/
/// @brief Following Funtions are used to sort the list of students based on the average of them
/**************************************************************************************************************************/
void Sorting_student()
{
    StudentList* start = (StudentList *) malloc(sizeof(StudentList));
    start = first;
    while(start != NULL)
    {
        MergeSort(&(start->Average));
        start = start->next;
    }
    Print_List();

}
/**************************************************************************************************************************/
void MergeSort(float **headRef)
{
    StudentList* head = (*headRef);
    StudentList* a;
    StudentList* b;
    if((head == NULL) || (head->next == NULL))
        return;
    frontbacksplit(head,&a,&b);
    MergeSort(&a);
    MergeSort(&b);
    *headRef = SortedMerge(a, b);
}
/**************************************************************************************************************************/
void frontbacksplit(StudentList* source,StudentList** frontref ,StudentList** backref)
{
    StudentList* slow;
    StudentList* fast;
    if((source == NULL) || (source->next == NULL))
    {
        (*frontref) == source;
        (*backref) == NULL;
    }
    else
    {
        slow = source;
        fast = source->next;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        (*frontref) = source;
        (*backref) = slow->next;
        slow->next = NULL;
    }
}
/**************************************************************************************************************************/
StudentList* SortedMerge(StudentList* a, StudentList* b)
{
   StudentList* result = NULL;

   if(a == NULL)
        return(b);
   else if(b == NULL)
        return(a);
   if(a->Average <= b->Average)
   {
       result = a;
       result->next = SortedMerge(a->next,b);
   }
   else
   {
       result = b;
       result->next = SortedMerge(a,b->next);
   }
   return(result);
}

/**************************************************************************************************************************/
/// @brief Saves the list in a .txt file
/**************************************************************************************************************************/
void Saving_list_in_file()
{
    StudentList *save;
    save = first;
    FILE *f;
    f = fopen("StudentList.txt","w");
    if(!f)
    {
        printf("cannot open StudentList.txt");
        return;
    }
    while(save != NULL)
    {
        fprintf(f,"%s\t\t%s\t\t%s\t\t%f\n",save->First_name,save->Last_name,save->Id_number,save->Average);
        save = save->next;
    }
    fclose(f);
}

/**************************************************************************************************************************/
/// @brief Load the saved file
/**************************************************************************************************************************/
void Loading_file()
{
    char* First_name;
    char* Last_name;
    char* Id_number;
    float Average;
    FILE *f;
    f = fopen("StudentList.txt","r");
    if(!f)
    {
        puts("cannot open StudentList.txt");
        return;
    }
    rewind(f);
    for(;!feof(f);)
    {
        fscanf(f,"%s%s%s%f",First_name,Last_name,Id_number,&Average);
        printf("FirstName:%s\n",First_name);
        printf("LastName:%s\n",Last_name);
        printf("IdNumber:%s\n",Id_number);
        printf("Average:%.2f\n",Average);
        puts("\n");
    }
    fclose(f);


}

/**************************************************************************************************************************/
/// @brief Prints the list of students
/**************************************************************************************************************************/
void Print_List()
{
    puts("//FirstName//\t//LastName//\t//ID_Number//\t//Average//\n");
    StudentList *display;
    display = first;
    while (display != NULL)
    {
        printf("%s\t\t%s\t\t%s\t\t%.2f\n",display->First_name,display->Last_name,display->Id_number,display->Average);
        display = display->next;
    }
   puts("");
}