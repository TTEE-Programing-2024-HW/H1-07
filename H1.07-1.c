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
	
 if(ch == 'B'||ch == 'b') {
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
}else if(input!=password&&a>1)//若是錯誤，
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
system("PAUSE"); // 螢幕畫面暫停，並等待使用者按任意鍵
	return 0;
	

}
//從這次的程式作業當中，我看了很多次的Git和Git Hub如何安裝以及使用的影片，但還是卡在一個地方就不會了，但之後還是透過與同學的討論以及尋求同學的幫助
//才開始一步一步的重頭開始，從一步一步安裝的過程，我發現其實也沒有自己想像中的那樣如此的困難，這種一步一步慢慢學習讓我可以更了解Git和Git Hub是如何使用的
//希望自己之後能夠越來越會使用，並且把程式語言學得更好。  
