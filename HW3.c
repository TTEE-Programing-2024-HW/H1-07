#include <stdio.h>//把stdio.h這個檔案含括進來  
#include <stdlib.h>//把stdlib.h這個檔案含括進來  
#include <time.h>// 把time.h這個檔案含括進來

void displaySeats(char seats[9][9]) {
    printf("  123456789\n");
    int i, j; // 將變數宣告移到外面
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

int main(void) // 主函數main()從這開始
{
    int password = 2024, input, a = 3, sit = 0, i = 0, j = 0, sit1 = 0; // 宣告整數變數password, input，將password的值設為2024
    char ch, ans;
    srand(time(NULL)); // 設定隨機種子
    char seats[9][9];

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            seats[i][j] = '-';
        }
    }
    
    randomReserveSeats(seats, 10); // 隨機產生十個已被預訂的座位
    
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //印出字串          
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111        77777777777777777777777777777777\n"); //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                              7777777777\n"); //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                             7777777777\n");  //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                            7777777777\n");   //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                           7777777777\n");    //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111   0000000000             7777777777\n");     //印出字串
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000            7777777777\n");      //印出字串
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000           7777777777\n");       //印出字串
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000          7777777777\n");        //印出字串
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111   0000000000         7777777777\n");         //印出字串
    printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH        11111111                     7777777777\n");          //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                    7777777777\n");           //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                   7777777777\n");            //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                  7777777777\n");             //印出字串 
    printf("HHHHHHHH                HHHHHHHH        11111111                 7777777777\n");              //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111                7777777777\n");               //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111               7777777777\n");                //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111              7777777777\n");                 //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111             7777777777\n");                  //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111            7777777777\n");                   //印出字串
    printf("HHHHHHHH                HHHHHHHH        11111111           7777777777\n");                    //印出字串
    
    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");//清除螢幕
	printf("請輸入4個數字的密碼： ");//提示使用者輸入4個數字的密碼
    scanf("%d", &input); //從鍵盤讀入數字
while(1){

    if (input == password) //若輸入正確
    {
    	
	printf("歡迎!\n");
	system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");//清除螢幕
	
    printf(" *-*-*-*-*-*-[Booking System]*-*-*-*-*-*-\n"); //印出字串          
    printf(" |  a. Available seats                  |\n"); //印出字串
    printf(" |  b. Arrange for you                  |\n"); //印出字串
    printf(" |  c. Choose by yourself               |\n"); //印出字串
    printf(" |  d. Exit                             |\n"); //印出字串
    printf(" ~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"); //印出字串
    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");//清除螢幕
	
	printf("輸入選項: ");
	fflush(stdin);//使input buffer淨空 
	scanf("%c", &ch);
}
if (ch == 'a') {
            displaySeats(seats);
            system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
            system("CLS");//清除螢幕
        }
                
if(ch == 'd'){
		printf("確定要結束程式嗎? (y/n)\n");
		fflush(stdin);//淨空 
		scanf("%c" , &ans);
	while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n')
	{
			printf("輸入錯誤請重打");
			fflush(stdin);//使input buffer淨空 
			scanf("%c",&ans);
	}
	
	if(ans == 'y')
		{
		system("CLS");//清除螢幕 
		continue;
		}
	if(ans == 'n')
    {system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	return 0;
	}
    } else if(input!=password&&a>1)//若是錯誤，
	{
		a=a-1;
        printf("錯誤!,還剩%d機會",a);
        fflush(stdin);//使input buffer淨空 
        scanf("%d",&input);
    }

    else
	{
    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");//清除螢幕
	return 0;} 
}
}
