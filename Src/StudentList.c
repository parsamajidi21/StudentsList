#include "Student_List.h"


int main()
{
    int MAX_STUDENT,Num;
    while(1){
        puts(".\n<<Which of the following options do you want??>>");
        puts("<<#1-CreatingList>>\n<<#2-AddNewStudent>>\n<<#3-DeletingStudent>>\n<<#4-SearchingStudent>>\n<<#5-SortingStudent>>");
        puts("<<#6-DisplayingList>>\n<<#7-SavingFile>>\n<<#8-LoadingFile>>\n");
        scanf("%d",&Num);
        switch(Num)
        {
            case 1:puts("Enter Number of students:");
            scanf("%d",&MAX_STUDENT);
            Creating_List(MAX_STUDENT);
            break;
            case 2:
                Add_student(&MAX_STUDENT);
                break;
            case 3:
                Deleting_student();
                break;
            case 4:
                Searching_student();
                break;
            case 5:
                Sorting_student();
                break;
            case 6:
                Print_List();
                break;
            case 7:
                Saving_list_in_file();
                break;
            case 8:
                Loading_file();
            default:
                {
                   printf("Enter a number that back to Menu\n");
                   scanf("%d",&Num);
                }

        }
        if(Num == 0)
            break;
    }
}
