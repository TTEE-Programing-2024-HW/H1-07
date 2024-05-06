#include <stdio.h>//把stdio.h這個檔案含括進來  
#include <stdlib.h>//把stdlib.h這個檔案含括進來 

int main(void) //主函數main()從這開始 
{
	int password=2024,input,a=3,n;//宣告整數變數passwrd,input，將password的值設為2024 
	char ch,ans;
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
    	
	
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"); //印出字串          
    printf("| a. 畫出直角三角形       |\n"); //印出字串
    printf("| b. 顯示乘法表           |\n"); //印出字串
    printf("| c. 結束                 |\n"); //印出字串
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"); //印出字串
    
    system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");//清除螢幕
	
	printf("輸入選項: ");
	fflush(stdin);//使input buffer淨空 
	scanf("%c", &ch);

	if (ch == 'A' || ch == 'a') {
                // 畫出直角三角形的程式碼
                //非常抱歉，我不會做 
                
           	system("CLS");//清除螢幕                
    } if(ch == 'B'||ch == 'b') {
        printf("請輸入乘法表的大小 (1-9): ");
        fflush(stdin);//使input buffer淨空 
        scanf("%d", &n);
                while (n < 0|| n > 10) {
                    printf("無效的輸入。請輸入 1 到 9 的數字。\n");
                    fflush(stdin);//使input buffer淨空 
                    scanf("%d",&n);
                }

                int i, j;
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%2d x %2d = %2d   ", i, j, i * j);
                    }
                    printf("\n");
                }
        system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
		system("CLS");//清除螢幕 		
	}if(ch == 'C'||ch == 'c'){
		printf("確定要結束程式嗎? (y/n)\n");
		fflush(stdin);//使input buffer淨空 
		scanf("%c" , &ans);
	while(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n')
	{
			printf("輸入錯誤請重打");
			fflush(stdin);//使input buffer淨空 
			scanf("%c",&ans);
	}
	
	if(ans == 'y'||ans == 'Y')
		{
		system("CLS");//清除螢幕 
		continue;
		}
	if(ans == 'n'||ans == 'N')
    {system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	return 0;
	}
    } 
}
	

} 
}  
