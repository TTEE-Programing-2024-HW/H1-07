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
    	
	
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"); //�L�X�r��          
    printf("| a. �e�X�����T����       |\n"); //�L�X�r��
    printf("| b. ��ܭ��k��           |\n"); //�L�X�r��
    printf("| c. ����                 |\n"); //�L�X�r��
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"); //�L�X�r��
    
    system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	system("CLS");//�M���ù�
	
	printf("��J�ﶵ: ");
	fflush(stdin);//��input buffer�b�� 
	scanf("%c", &ch);

	if (ch == 'A' || ch == 'a') {
                // �e�X�����T���Ϊ��{���X
                //�D�`��p�A�ڤ��|�� 
                
           	system("CLS");//�M���ù�                
    } if(ch == 'B'||ch == 'b') {
        printf("�п�J���k���j�p (1-9): ");
        fflush(stdin);//��input buffer�b�� 
        scanf("%d", &n);
                while (n < 0|| n > 10) {
                    printf("�L�Ī���J�C�п�J 1 �� 9 ���Ʀr�C\n");
                    fflush(stdin);//��input buffer�b�� 
                    scanf("%d",&n);
                }

                int i, j;
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%2d x %2d = %2d   ", i, j, i * j);
                    }
                    printf("\n");
                }
        system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
		system("CLS");//�M���ù� 		
	}
	if(ch == 'C'||ch == 'c'){
		printf("�T�w�n�����{����? (y/n)\n");
		fflush(stdin);//��input buffer�b�� 
		scanf("%c" , &ans);
	while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n')
	{
			printf("��J���~�Э���");
			fflush(stdin);//��input buffer�b�� 
			scanf("%c",&ans);
	}
	
	if(ans == 'y'||ans == 'Y')
		{
		system("CLS");//�M���ù� 
		continue;
		}
	if(ans == 'n'||ans == 'N')
    {system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	return 0;
	}
    } 
}else if(input!=password&&a>1)//�Y�O���~�A
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
system("PAUSE"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
	return 0;
}
//�q�o�����{���@�~���A�ڬݤF�ܦh����Git�MGit Hub�p��w�˥H�ΨϥΪ��v���A���٬O�d�b�@�Ӧa��N���|�F�A�������٬O�z�L�P�P�Ǫ��Q�ץH�δM�D�P�Ǫ����U
//�~�}�l�@�B�@�B�����Y�}�l�A�q�@�B�@�B�w�˪��L�{�A�ڵo�{���]�S���ۤv�Q���������˦p�����x���A�o�ؤ@�B�@�B�C�C�ǲ����ڥi�H��F��Git�MGit Hub�O�p��ϥΪ�
//�Ʊ�ۤv�������V�ӶV�|�ϥΡA�åB��{���y���Ǳo��n�C  
