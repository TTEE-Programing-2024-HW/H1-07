#include <stdio.h>//��stdio.h�o���ɮקt�A�i��  
#include <stdlib.h>//��stdlib.h�o���ɮקt�A�i�� 

int main(void) //�D���main()�q�o�}�l 
{
	int password=2024,input,a=3,n;//�ŧi����ܼ�passwrd,input�A�Npassword���ȳ]��2024 
	char ch,ans;
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
	
	printf("------------[Grade System]----------\n"); 
    printf("|  a. Enter student grades         |\n");
    printf("|  b. Display student grades       |\n");
    printf("|  c. Search for student grades    |\n");
    printf("|  d. Grade ranking                |\n");    
    printf("|  e. Exit system                  |\n");   
    printf("------------------------------------\n");
    
	system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");//�M���ù�     

	printf("��J�ﶵ: ");
	fflush(stdin);//��input buffer�b�� 
	scanf("%c", &ch);
		
	if(ch == 'e'){
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
    }	     
} 

else if(input!=password&&a>1)//�Y�O���~�A
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
	return 0;
	}
} 
    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	return 0;
}