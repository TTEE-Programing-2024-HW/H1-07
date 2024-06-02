#include <stdio.h>
#include <stdlib.h>

// �w�q�ǥ͵��c
typedef struct {
    char name[50];
    int id;
    int math;
    int physics;
    int english;
} Student;

// ��ƭ쫬�ŧi
void clearScreen();
void inputStudents(Student *students, int n);

int main(void) //�D���main()�q�o�}�l 
{
    int password = 2024, input, a = 3, n; //�ŧi����ܼ�password, input�A�Npassword���ȳ]��2024 
    char ch, ans;
    Student students[10]; // ���]�̦h��10�Ӿǥ�

    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                              7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                             7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                            7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                           7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111   0000000000             7777777777\n");//�L�X�r�� 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000            7777777777\n");//�L�X�r�� 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000           7777777777\n");//�L�X�r�� 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000          7777777777\n");//�L�X�r�� 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000         7777777777\n");//�L�X�r�� 
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111                     7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                    7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                   7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                  7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                 7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111               7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111              7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111             7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111            7777777777\n");//�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111           7777777777\n");//�L�X�r�� 

    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    system("CLS"); //�M���ù�

    printf("�п�J4�ӼƦr���K�X�G "); //���ܨϥΪ̿�J4�ӼƦr���K�X
    scanf("%d", &input); //�q��LŪ�J�Ʀr

    while (1) {
        if (input == password) { //�Y��J���T
            printf("�w��!\n");
            system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
            system("CLS"); //�M���ù�

            printf("------------[Grade System]----------\n");
            printf("|  a. Enter student grades         |\n");
            printf("|  b. Display student grades       |\n");
            printf("|  c. Search for student grades    |\n");
            printf("|  d. Grade ranking                |\n");
            printf("|  e. Exit system                  |\n");
            printf("------------------------------------\n");

            printf("��J�ﶵ: ");
            fflush(stdin); //��input buffer�b�� 
            scanf(" %c", &ch);

            if (ch == 'a') {
                clearScreen();
                printf("�п�J�ǥͤH�ơ]5~10�^�G");
                while (1) {
                    scanf("%d", &n);
                    if (n >= 5 && n <= 10) {
                        break;
                    } else {
                        printf("��J���~�A�п�J5��10��������ơG");
                    }
                }

                inputStudents(students, n);
                // �^��D���
                system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
                system("CLS");//�M���ù� 
                
            }else if (ch == 'b') {
                    clearScreen();
                    displayStudents(students, n);
                    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
                    system("CLS");//�M���ù�
					 
			}else if (ch == 'c') {
                    clearScreen();
                    searchStudent(students, n);
                    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
                    system("CLS");//�M���ù�
                    
          } else if (ch == 'd') {
                    clearScreen();
                    rankStudents(students, n);
                    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
                    system("CLS");//�M���ù�
							    
            } else if (ch == 'e') {
                printf("�T�w�n�����{����? (y/n)\n");
                fflush(stdin); //��input buffer�b�� 
                scanf(" %c", &ans);
                while (ans != 'y' && ans != 'Y' && ans != 'N' && ans != 'n') {
                    printf("��J���~�Э���");
                    fflush(stdin); //��input buffer�b�� 
                    scanf(" %c", &ans);
                }

                if (ans == 'y' || ans == 'Y') {
                    break;
                }
            } else {
                printf("�L�Ŀﶵ�A�Э��s��J�C\n");
            }
        } else if (input != password && a > 1) { //�Y�O���~
            a = a - 1;
            printf("���~!,�ٳ�%d���|", a);
            fflush(stdin); //��input buffer�b�� 
            scanf("%d", &input);
        } else {
            system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
            system("CLS"); //�M���ù�
            return 0;
        }
    }

    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    return 0;
}

// �M���ù�
void clearScreen() {
    system("CLS"); // ��� Windows �t�ΡA�ϥ� system("CLS");
}

// ��J�ǥ͸��
void inputStudents(Student *students, int n) {
	int i;
    for(i = 0; i < n; i++) {
        printf("�п�J��%d��ǥͪ��m�W�G", i + 1);
        scanf("%s", students[i].name);

        printf("�п�J��%d��ǥͪ��Ǹ��]6���ơ^�G", i + 1);
        while (1) {
            scanf("%d", &students[i].id);
            if (students[i].id >= 100000 && students[i].id <= 999999) {
                break;
            } else {
                printf("�Ǹ���J���~�A�п�J6���ơG");
            }
        }

        printf("�п�J��%d��ǥͪ��ƾǦ��Z�]0~100�^�G", i + 1);
        while (1) {
            scanf("%d", &students[i].math);
            if (students[i].math >= 0 && students[i].math <= 100) {
                break;
            } else {
                printf("�ƾǦ��Z��J���~�A�п�J0��100���������ơG");
            }
        }

        printf("�п�J��%d��ǥͪ����z���Z�]0~100�^�G", i + 1);
        while (1) {
            scanf("%d", &students[i].physics);
            if (students[i].physics >= 0 && students[i].physics <= 100) {
                break;
            } else {
                printf("���z���Z��J���~�A�п�J0��100���������ơG");
            }
        }

        printf("�п�J��%d��ǥͪ��^�妨�Z�]0~100�^�G", i + 1);
        while (1) {
            scanf("%d", &students[i].english);
            if (students[i].english >= 0 && students[i].english <= 100) {
                break;
            } else {
                printf("�^�妨�Z��J���~�A�п�J0��100���������ơG");
            }
        }
    }
}
// ��ܩҦ��ǥ͸��
void displayStudents(Student *students, int n) {
    int i;
    for (i = 0; i < n; i++) {
        float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, �������Z: %.1f\n",
            students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
}
}  
// �j�M�ǥ͸��
void searchStudent(Student *students, int n) {
    char searchName[50];
    int i, found = 0;
    printf("�п�J�n�j�M���ǥͩm�W�G");
    scanf("%s", searchName);

    for (i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
            printf("���ǥ͡I�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, �������Z: %.1f\n",
                students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("�S�����ǥ� %s ����ơC\n", searchName);
    }
}
// �ƧǨ�ơA�Ω�ƧǾǥͪ��������Z
int compareStudents(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;
    float averageA = (studentA->math + studentA->physics + studentA->english) / 3.0;
    float averageB = (studentB->math + studentB->physics + studentB->english) / 3.0;
    return (averageB - averageA) > 0 ? 1 : -1;
}

// ��ܾǥͥ������Z�ƦW
void rankStudents(Student *students, int n) {
    qsort(students, n, sizeof(Student), compareStudents);
    int i; 
    for (i = 0; i < n; i++) {
        float average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("�m�W: %s, �Ǹ�: %d, �������Z: %.1f\n",
            students[i].name, students[i].id, average);
    }
}






 
