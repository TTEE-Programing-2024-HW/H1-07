#include <stdio.h>//��stdio.h�o���ɮקt�A�i��  
#include <stdlib.h>//��stdlib.h�o���ɮקt�A�i��  
#include <time.h>// ��time.h�o���ɮקt�A�i��

void displaySeats(char seats[9][9]) {
    printf("  123456789\n");
    int i, j; // �N�ܼƫŧi����~��
    for (i = 0; i < 9; i++) {
        printf("%d ", 9 - i);
        for (j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);
        }
        printf("\n");
    }
}

void randomReserveSeats(char seats[9][9], int num) {
    int i, j, count = 0;
    while (count < num) {
        i = rand() % 9;
        j = rand() % 9;
        if (seats[i][j] == '-') {
            seats[i][j] = '*';
            count++;
        }
    }
}

int main(void) // �D���main()�q�o�}�l
{
    int password = 2024, input, a = 3, sit = 0, i = 0, j = 0, sit1 = 0; // �ŧi����ܼ�password, input�A�Npassword���ȳ]��2024
    char ch, ans;
    srand(time(NULL)); // �]�w�H���ؤl
    char seats[9][9];

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            seats[i][j] = '-';
        }
    }
    
    randomReserveSeats(seats, 10); // �H�����ͤQ�Ӥw�Q�w�q���y��
    
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //�L�X�r��          
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                              7777777777\n"); //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                             7777777777\n");  //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                            7777777777\n");   //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                           7777777777\n");    //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111   0000000000             7777777777\n");     //�L�X�r��
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000            7777777777\n");      //�L�X�r��
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000           7777777777\n");       //�L�X�r��
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000          7777777777\n");        //�L�X�r��
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000         7777777777\n");         //�L�X�r��
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111                     7777777777\n");          //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                    7777777777\n");           //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                   7777777777\n");            //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                  7777777777\n");             //�L�X�r�� 
    printf("HHHHHHHH                HHHHHHHH        11111111                 7777777777\n");              //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111                7777777777\n");               //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111               7777777777\n");                //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111              7777777777\n");                 //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111             7777777777\n");                  //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111            7777777777\n");                   //�L�X�r��
    printf("HHHHHHHH                HHHHHHHH        11111111           7777777777\n");                    //�L�X�r��
    
    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");//�M���ù�
	printf("�п�J4�ӼƦr���K�X�G ");//���ܨϥΪ̿�J4�ӼƦr���K�X
    scanf("%d", &input); //�q��LŪ�J�Ʀr
while(1){

    if (input == password) //�Y��J���T
    {
    	
	printf("�w��!\n");
	system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");//�M���ù�
	
    printf(" *-*-*-*-*-*-[Booking System]*-*-*-*-*-*-\n"); //�L�X�r��          
    printf(" |  a. Available seats                  |\n"); //�L�X�r��
    printf(" |  b. Arrange for you                  |\n"); //�L�X�r��
    printf(" |  c. Choose by yourself               |\n"); //�L�X�r��
    printf(" |  d. Exit                             |\n"); //�L�X�r��
    printf(" ~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"); //�L�X�r��
    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");//�M���ù�
	
	printf("��J�ﶵ: ");
	fflush(stdin);//��input buffer�b�� 
	scanf("%c", &ch);
}
if (ch == 'a') {
            displaySeats(seats);
            system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
            system("CLS");//�M���ù�
        }
                
if(ch == 'd'){
		printf("�T�w�n�����{����? (y/n)\n");
		fflush(stdin);//�b�� 
		scanf("%c" , &ans);
	while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n')
	{
			printf("��J���~�Э���");
			fflush(stdin);//��input buffer�b�� 
			scanf("%c",&ans);
	}
	
	if(ans == 'y')
		{
		system("CLS");//�M���ù� 
		continue;
		}
	if(ans == 'n')
    {system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	return 0;
	}
    } else if(input!=password&&a>1)//�Y�O���~�A
	{
		a=a-1;
        printf("���~!,�ٳ�%d���|",a);
        fflush(stdin);//��input buffer�b�� 
        scanf("%d",&input);
    }

    else
	{
    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");//�M���ù�
	return 0;} 
}
}
