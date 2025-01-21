#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* MORSE_CODE[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", 
	"..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", 
	"--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", 
	"-.--", "--..", "-----", ".----", "..---", "...--", "....-", 
    ".....", "-....", "--...", "---..", "----."
};

char* morseToChar(char* morse) 
{
    if (strcmp(morse, ".-") == 0) return "A";
    if (strcmp(morse, "-...") == 0) return "B"; 
    if (strcmp(morse, "-.-.") == 0) return "C";
    if (strcmp(morse, "-..") == 0) return "D";
    if (strcmp(morse, ".") == 0) return "E";
    if (strcmp(morse, "..-.") == 0) return "F";
    if (strcmp(morse, "--.") == 0) return "G";
    if (strcmp(morse, "....") == 0) return "H";
    if (strcmp(morse, "..") == 0) return "I";
    if (strcmp(morse, ".---") == 0) return "J";
    if (strcmp(morse, "-.-") == 0) return "K";
    if (strcmp(morse, ".-..") == 0) return "L";
    if (strcmp(morse, "--") == 0) return "M";
    if (strcmp(morse, "-.") == 0) return "N";
    if (strcmp(morse, "---") == 0) return "O";
    if (strcmp(morse, ".--.") == 0) return "P";
    if (strcmp(morse, "--.-") == 0) return "Q";
    if (strcmp(morse, ".-.") == 0) return "R";
    if (strcmp(morse, "...") == 0) return "S";
    if (strcmp(morse, "-") == 0) return "T";
    if (strcmp(morse, "..-") == 0) return "U";
    if (strcmp(morse, "...-") == 0) return "V";
    if (strcmp(morse, ".--") == 0) return "W";
    if (strcmp(morse, "-..-") == 0) return "X";
    if (strcmp(morse, "-.--") == 0) return "Y";
    if (strcmp(morse, "--..") == 0) return "Z";
    if (strcmp(morse, "-----") == 0) return "0";
    if (strcmp(morse, ".----") == 0) return "1";
    if (strcmp(morse, "..---") == 0) return "2";
    if (strcmp(morse, "...--") == 0) return "3";
    if (strcmp(morse, "....-") == 0) return "4";
    if (strcmp(morse, ".....") == 0) return "5";
    if (strcmp(morse, "-....") == 0) return "6";
    if (strcmp(morse, "--...") == 0) return "7";
    if (strcmp(morse, "---..") == 0) return "8";
    if (strcmp(morse, "----.") == 0) return "9";
    return " ";
}

const char* ALPHABET = "abcdefghijklmnopqrstuvwxyz0123456789";

const char* convert_char(char c) 
{
    int index;
    if (c >= 'a' && c <= 'z') 
	{
        index = c - 'a';
    } 
	else if (c >= 'A' && c <= 'Z') 
	{
        index = c - 'A';
    } 
	else if (c >= '0' && c <= '9') 
	{
        index = c - '0' + 26;
    } 
	else 
	{
        return "";
    }
    
    return MORSE_CODE[index];
}

void morseToWord(char* morseCode) 
{
    char* token = strtok(morseCode, " ");
    while (token != NULL) 
	{
        printf("%s", morseToChar(token));
        token = strtok(NULL, " ");
    }
}

int main() 
{
    int n;
    char name[50];
    int score = 0;
    char answer;
    char sentence[1000];
    int i=0,j;
    //char morseCode[]="-... .. - . / - .... . / -... ..- .-.. .-.. . - ...";
    char morseCode[1000];
 
	printf("\n");
	printf("********************************************************************************\n*                                                                              *\n*                  WELCOME TO MORSE CODE LEARNING PLATFORM                     *\n*                                                                              *\n********************************************************************************");
	printf("\n\nLet's Learn MORSE CODE.......!");
	
	printf("\n\n1. What is MORSE CODE and its Use ?????");
	printf("\n2. MORSE CODE for A to Z");
	printf("\n3. MORSE CODE for 0 to 9");
	printf("\n4. MORSE CODE for Special Symbols");
	printf("\n5. Converting Sentences to MORSE CODE");	
    printf("\n6. Converting MORSE CODE to Sentences");
    printf("\n7. Mock Test");
    printf("\n8. Exit");
    printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    
	printf("\n\n Enter Your Choice:");
    scanf("%d",&n);
    
    while(n!=8)
    {
	
    switch(n)
    {
    	case 1:
    		
    		printf("\n\t\tMORSE CODE is system of communication developed by Samuel Morse in which the letters of the alphabets and numbers are coded as a combination of dots anf dashes so that message can either \nbe sent using Finger Taps, Light, Sound and Eye Blinking. ");
    		printf("It is like a method used in telecommunicaiton to encode text characters as standardized sequence of two different signals durations, called dots \nand dashes, or dits and dah. There is no distinctoin in upper and lower case letters. ");
    		printf("\n\n\t\tMorse code has been in use for more than 160 years — longer than any other electrical coding system. Each Morse code symbol is formed by a sequence of dits and dahs. The dit duration is \nthe basic unit of time measurement in Morse code transmission.");
    		printf(" The duration of a dah is three times the duration of a dit.The letters of a word are separated by a space of duration equal to three dits, \nand words are separated by a space equal to seven dits.\n\n\t\tMorse code can be memorized and sent in a form perceptible to the human senses, e.g. via sound waves or visible light, such that it can be directly interpreted by persons trained in the \nskill.");
			printf("Communication operators, aviation specialists and military employees have used Morse code for over 160 years to transmit important data and messages.");
			printf("Morse code is an efficient way to communicate \nabout emergency situations. Everyone else can hear them too, but only the spies know how to decode them.");
			printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
			
			break;
    		
		case 2:
			
			printf("\nMORSE CODE for A : .-");
			printf("\n\nMORSE CODE for B : -...");
			printf("\n\nMORSE CODE for C : -.-.");
			printf("\n\nMORSE CODE for D : -..");
			printf("\n\nMORSE CODE for E : .");
			printf("\n\nMORSE CODE for F : ..-..");
			printf("\n\nMORSE CODE for G : --.");
			printf("\n\nMORSE CODE for H : ....");
			printf("\n\nMORSE CODE for I : ..");
			printf("\n\nMORSE CODE for J : .---");
			printf("\n\nMORSE CODE for K : -.-");
			printf("\n\nMORSE CODE for L : .-..");
			printf("\n\nMORSE CODE for M : --");
			printf("\n\nMORSE CODE for N : -.");
			printf("\n\nMORSE CODE for O : ---");
			printf("\n\nMORSE CODE for P : .--.");
			printf("\n\nMORSE CODE for Q : --.-");
			printf("\n\nMORSE CODE for R : .-.");
			printf("\n\nMORSE CODE for S : ...");
			printf("\n\nMORSE CODE for T : -");
			printf("\n\nMORSE CODE for U : ..-");
			printf("\n\nMORSE CODE for V : ...-");
			printf("\n\nMORSE CODE for W : .--");
			printf("\n\nMORSE CODE for X : -..-");
			printf("\n\nMORSE CODE for Y : -.--");
			printf("\n\nMORSE CODE for Z : --..");
			printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
			
			break;
			
		case 3:
			
			printf("\n\nMORSE CODE for 0 : -----");
			printf("\n\nMORSE CODE for 1 : .----");
			printf("\n\nMORSE CODE for 2 : ..---");
			printf("\n\nMORSE CODE for 3 : ...--");
			printf("\n\nMORSE CODE for 4 : ....-");
			printf("\n\nMORSE CODE for 5 : .....");
			printf("\n\nMORSE CODE for 6 : -....");
			printf("\n\nMORSE CODE for 7 : --...");
			printf("\n\nMORSE CODE for 8 : ---..");
			printf("\n\nMORSE CODE for 9 : ----.");
			printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
			
			break;
			
		case 4:
			
			printf("\n\nMORSE CODE for ? : ..--..");
			printf("\n\nMORSE CODE for ! : -.-.--");
			printf("\n\nMORSE CODE for . : .-.-.-");
			printf("\n\nMORSE CODE for , : --..--");
			printf("\n\nMORSE CODE for ; : -.-.-.");
			printf("\n\nMORSE CODE for : : ---...");
			printf("\n\nMORSE CODE for + : .-.-.");
			printf("\n\nMORSE CODE for - : -....-");
			printf("\n\nMORSE CODE for / : -..-.");
			printf("\n\nMORSE CODE for = : -...-");
		
		    break;
		    
		case 5:
            printf("\nEnter a sentence: ");
            scanf("%s",sentence);
            printf("\n");
            for(i=0;i<strlen(sentence);i++) 
	        {
            if (!isspace(sentence[i])) 
		    {
            printf("%s ", convert_char(sentence[i]));
            } 
		    else 
		    {
            printf(" ");
            }
            }
            
            printf("\n");
            printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
			
			break;
		
		case 6:
			
			//printf("\nMorse code: -... .. - . - .... . -... ..- .-.. .-.. . - ... ");
            //printf("\n");
            printf("Enter Morse Code:");
            scanf("%s",morseCode);
            printf("\n");
	        morseToWord(morseCode);
	        printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
			
			break;
				
		case 7:
			
			printf("\nEnter your name:");
			scanf("%s",name);
			printf("\nHello %s ! Let's start the Test",name);
			printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
			
			printf("\nQ1. L\n");
            printf("A. .--.\n");
            printf("B. .-..\n");
            printf("C. ..-.\n");
            printf("D. -...\n");
            
            printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
			if (answer == 'B' || answer == 'b') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }

            printf("\nQ2. RJ45 \n");
            printf("A. .-. .--- ..-.- .....\n");
            printf("B. .-. .-.- ..-.- .....\n");
            printf("C. .-. .--- ....- .....\n");
            printf("D. .-. .-.- ..-.- .--..\n");
            
            printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'C' || answer == 'c') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
   
            printf("\nQ3. India \n");
            printf("A. .. -. -.. .. .-\n");
            printf("B. .- -. ..- .. ..\n");
            printf("C. .. .- -.. .. ..\n");
            printf("D. .. .- ..- .. .-\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'A' || answer == 'a') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
            
            printf("\nQ4. Bravo 6324 \n");
            printf("A. -... .-. .- ...- ---   -.... ...-- ..--- ....-\n");
            printf("B. -... ... .- ...- ---   -.... .-.-- ..--- ....-\n");
            printf("C. -... .-. .. ...- --.   -.... ...-- ...-- ..-.-\n");
            printf("D. -... .-. .- ...- --.   -.... ...-- ..--- ...--\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'A' || answer == 'a') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
   
            printf("\nQ5. 1578 \n");
            printf("A. .-.-- ..... --.-. ---..\n");
            printf("B. ..--- ..... --... ----.\n");
            printf("C. .---- ..... --... ---..\n");
            printf("D. .---- ..... --.-. ---..\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'C' || answer == 'c') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
            
            printf("\nQ6. --. \n");
            printf("A. K\n");
            printf("B. O\n");
            printf("C. M\n");
            printf("D. G\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'D' || answer == 'd') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
            
            printf("\nQ7. -.-. .--- --... \n");
            printf("A. CJ7\n");
            printf("B. PJ7\n");
            printf("C. CW7\n");
            printf("D. CW9\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'A' || answer == 'a') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
            
            printf("\nQ8. . -.-. .... --- \n");
            printf("A. ECSO\n");
            printf("B. ICHO\n");
            printf("C. ECHO\n");
            printf("D. ICSO\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'C' || answer == 'c') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
            
            printf("\nQ9. -.-. --- -.. .  .-. . -.. \n");
            printf("A. Code Rtd\n");
            printf("B. Code Red\n");
            printf("C. Code sea\n");
            printf("D. Code \n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);  
            if (answer == 'B' || answer == 'b') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
            
            printf("\nQ10. -- .. ... ... .. --- -.   .. -- .--. --- ... ... .. -... .-.. . \n");
            printf("A. Mission Impossible\n");
            printf("B. Coission Possible\n");
            printf("C. Mission Possible\n");
            printf("D. Vission Imposible\n");
            
			printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &answer);
            if (answer == 'A' || answer == 'a') 
            {
                printf("You Got The Correct Answer....!\n");
                score++;
            } 
            else 
            {
                printf("Opps....! Try next time.\n");
            }
   
            printf("\n Quiz complete ! \nWell Done %s !\nYour score is %d out of 10.",name,score);
			
			break;
		
		case 8:	
		
			break;
		
		default:
			
			printf("Invalid Input!!!");
			
			break;	
	    }
	    
	    //printf("\n\n1. What is MORSE CODE and its Use ?????");
	    //printf("\n2. MORSE CODE for A to Z");
	    //printf("\n3. MORSE CODE for 0 to 9");
	    //printf("\n4. MORSE CODE for Special Symbols");
	    //printf("\n5. Converting Sentences to MORSE CODE");	
        //printf("\n6. Converting MORSE CODE to Sentences");
        //printf("\n7. Mock Test");
        //printf("\n8. Exit");
        
	    printf("\n\n\n Enter Your Choice:");
        scanf("%d",&n);
    }
    
	return 0;
}

