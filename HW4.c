#include <stdio.h>
#include <stdlib.h>

// 定義學生結構
typedef struct {
    char name[50];
    int id;
    int math;
    int physics;
    int english;
} Student;

// 函數原型宣告
void clearScreen();
void inputStudents(Student *students, int n);

int main(void) //主函數main()從這開始 
{
    int password = 2024, input, a = 3, n; //宣告整數變數password, input，將password的值設為2024 
    char ch, ans;
    Student students[10]; // 假設最多有10個學生

    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                              7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                             7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                            7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                           7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111   0000000000             7777777777\n");//印出字串 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000            7777777777\n");//印出字串 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000           7777777777\n");//印出字串 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000          7777777777\n");//印出字串 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000         7777777777\n");//印出字串 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111                     7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                    7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                   7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                  7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                 7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111               7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111              7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111             7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111            7777777777\n");//印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111           7777777777\n");//印出字串 

    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
    system("CLS"); //清除螢幕

    printf("請輸入4個數字的密碼： "); //提示使用者輸入4個數字的密碼
    scanf("%d", &input); //從鍵盤讀入數字

    while (1) {
        if (input == password) { //若輸入正確
            printf("歡迎!\n");
            system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
            system("CLS"); //清除螢幕

            printf("------------[Grade System]----------\n");
            printf("|  a. Enter student grades         |\n");
            printf("|  b. Display student grades       |\n");
            printf("|  c. Search for student grades    |\n");
            printf("|  d. Grade ranking                |\n");
            printf("|  e. Exit system                  |\n");
            printf("------------------------------------\n");

            printf("輸入選項: ");
            fflush(stdin); //使input buffer淨空 
            scanf(" %c", &ch);

            if (ch == 'a') {
                clearScreen();
                printf("請輸入學生人數（5~10）：");
                while (1) {
                    scanf("%d", &n);
                    if (n >= 5 && n <= 10) {
                        break;
                    } else {
                        printf("輸入錯誤，請輸入5到10之間的整數：");
                    }
                }

                inputStudents(students, n);
                // 回到主選單
                system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
                system("CLS");//清除螢幕 
                
            }else if (ch == 'b') {
                    clearScreen();
                    displayStudents(students, n);
                    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
                    system("CLS");//清除螢幕
					 
			}else if (ch == 'c') {
                    clearScreen();
                    searchStudent(students, n);
                    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
                    system("CLS");//清除螢幕
                    
          } else if (ch == 'd') {
                    clearScreen();
                    rankStudents(students, n);
                    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
                    system("CLS");//清除螢幕
							    
            } else if (ch == 'e') {
                printf("確定要結束程式嗎? (y/n)\n");
                fflush(stdin); //使input buffer淨空 
                scanf(" %c", &ans);
                while (ans != 'y' && ans != 'Y' && ans != 'N' && ans != 'n') {
                    printf("輸入錯誤請重打");
                    fflush(stdin); //使input buffer淨空 
                    scanf(" %c", &ans);
                }

                if (ans == 'y' || ans == 'Y') {
                    break;
                }
            } else {
                printf("無效選項，請重新輸入。\n");
            }
        } else if (input != password && a > 1) { //若是錯誤
            a = a - 1;
            printf("錯誤!,還剩%d機會", a);
            fflush(stdin); //使input buffer淨空 
            scanf("%d", &input);
        } else {
            system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
            system("CLS"); //清除螢幕
            return 0;
        }
    }

    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
    return 0;
}

// 清除螢幕
void clearScreen() {
    system("CLS"); // 對於 Windows 系統，使用 system("CLS");
}

// 輸入學生資料
void inputStudents(Student *students, int n) {
	int i;
    for(i = 0; i < n; i++) {
        printf("請輸入第%d位學生的姓名：", i + 1);
        scanf("%s", students[i].name);

        printf("請輸入第%d位學生的學號（6位整數）：", i + 1);
        while (1) {
            scanf("%d", &students[i].id);
            if (students[i].id >= 100000 && students[i].id <= 999999) {
                break;
            } else {
                printf("學號輸入錯誤，請輸入6位整數：");
            }
        }

        printf("請輸入第%d位學生的數學成績（0~100）：", i + 1);
        while (1) {
            scanf("%d", &students[i].math);
            if (students[i].math >= 0 && students[i].math <= 100) {
                break;
            } else {
                printf("數學成績輸入錯誤，請輸入0到100之間的分數：");
            }
        }

        printf("請輸入第%d位學生的物理成績（0~100）：", i + 1);
        while (1) {
            scanf("%d", &students[i].physics);
            if (students[i].physics >= 0 && students[i].physics <= 100) {
                break;
            } else {
                printf("物理成績輸入錯誤，請輸入0到100之間的分數：");
            }
        }

        printf("請輸入第%d位學生的英文成績（0~100）：", i + 1);
        while (1) {
            scanf("%d", &students[i].english);
            if (students[i].english >= 0 && students[i].english <= 100) {
                break;
            } else {
                printf("英文成績輸入錯誤，請輸入0到100之間的分數：");
            }
        }
    }
}
// 顯示所有學生資料
void displayStudents(Student *students, int n) {
    int i;
    for (i = 0; i < n; i++) {
        float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均成績: %.1f\n",
            students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
}
}  
// 搜尋學生資料
void searchStudent(Student *students, int n) {
    char searchName[50];
    int i, found = 0;
    printf("請輸入要搜尋的學生姓名：");
    scanf("%s", searchName);

    for (i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
            printf("找到學生！姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均成績: %.1f\n",
                students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("沒有找到學生 %s 的資料。\n", searchName);
    }
}
// 排序函數，用於排序學生的平均成績
int compareStudents(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    float averageA = (studentA->math + studentA->physics + studentA->english) / 3.0;
    float averageB = (studentB->math + studentB->physics + studentB->english) / 3.0;
    return (averageB - averageA) > 0 ? 1 : -1;
}

// 顯示學生平均成績排名
void rankStudents(Student *students, int n) {
    qsort(students, n, sizeof(Student), compareStudents);
    int i; 
    for (i = 0; i < n; i++) {
        float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n",
            students[i].name, students[i].id, average);
    }
}






 
