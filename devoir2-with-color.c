#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
int main ()
{
  int random;
  int lower = 13;
  int upper = 30;
  int tourch,turn, Ai,n, user,user2,a,difficulty,i,mid,r1,r2;
  char p1[20],p2[20],P1[20],P2[20];
  int lang;
 srand (time (NULL)); // random seed _siradj                                     
  random = rand () % (upper - lower + 1) + lower;                                             

  printf("language ; \n 1)english \n 3)cridits\n");  //do you spik inglis 
  scanf("%i",&lang);
        


    switch(lang) { // lang

    case 1 :        // lang
        
            do {
            printf ("play mode \n 1) you vs AI \n 2) you vs your friend :)\n");
            scanf ("%i", &a);
            }while(a<1 || a>2 );

if(a==1)
{
             do{
                   printf("\033[0;33m"); //yellow
                printf("\a CHOSE THE DIFFICULTY LEVEL! \n 1) easy \n 2) medium \n 3) hard \"imposible\" \n");
                scanf("%d",&difficulty); /* bug !! */
              } while(difficulty<1 || difficulty>3);
                       
                }





            do {
           printf("do you want: \n 1) random ganerated tourch number \n 2) manual one \n");
           scanf("%i",&n);
              }while(n<1 || n>2);
                    switch (n)
                {
                case 1:
                 printf("numbre of tourches is random genrated now! \n");   
                    tourch = random;  
                    break;
                
                case 2:
                printf("give us the manual value: \n");
                scanf("%i",&tourch);
                    break;
                }

            switch (a)           // a is game mode var
            {
            
                
            case 1:         // playr vs ai
                     
                     
                       
                        
                        printf("\033[0;35m"); //purpel
                                
                                
                                
                        do{
                        r1 = rand() % (6 - 1 + 1 ) + 1; //player dice
                        printf("player dice is %d \n",r1);
                        r2 = rand() % (6 - 1 + 1 ) + 1; // ai dice
                         printf("AI dice is %d \n",r2);
                         if (r1 == r2)
                         {
                            printf("the dice result is equal we will roll the dice again \n\n\n");
                         }
                         
                        } while (r1 == r2);

                              if ( r1 > r2 ){ 
                                    printf("-You play first\n");

                                } else if (r2 > r1){
                                    printf("-AI- play the first \n");
                                }
                                 if (r1 > r2){
                                    turn = 1;         

                                    }else if(r2 > r1){
                                    turn = 2;
                                    }
                                        printf ("\n");

                                         printf("\033[0;33m"); //yellow
                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                    printf("| ");

                                            }
                                    printf("\033[0;33m"); //yellow
                                    printf ("\ntourch numbre is %d \n \n ", tourch);
                        


                                printf ("the game start \n \n ");
                           if (r2 > r1 ) // for easy mode to work 
                                {
                                   user = rand() % (3 - 1 + 1) + 1;
                                                 
                                }
                                
                    while (tourch > 1) //game 
                                {

                                

                            switch (turn) // who play the first 
                              {
                                case 1: // player

                                printf("\033[0;36m"); //cyan
                                printf("Let's play its your turn \n give us a numbre between 1 to 3\n");
                                scanf ("%d", &user); // to here 
                                        while(tourch < user) { /* bug fixer!!!_siradj_*/
                                                printf("\033[0;31m"); //red !!
                                                printf("your value %i is more then %i please change the value \n",user,tourch);
                                                scanf ("%d", &user);
                                        }

                                        while (user < 1 || user > 3)  // here the abilty to only hold 3 to tourches _siradj_
                                        { 
                                        printf("\033[0;31m"); //red !!
                                        printf(" you should chose a numbre betwen 1 to 3 !!!!! \n");
                                        scanf ("%d", &user);
                                        }
                                        printf("\033[0;33m"); //yellow
                                            tourch = (tourch - user);
                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                    
                                                    printf("| ");

                                            }
                                        printf("\033[0;33m"); //yellow
                                        printf ("\nthe rest of the tourch is : %d\n", tourch);
                                        if (tourch == 0)
                                            { 
                                                printf("\033[0;31m"); //red
                                                printf ("you lose good luck next time :'(\n"); // losing for the AI bcs you only capable for holding
                                                    break;
                                            } else if (tourch == 1)
                                                    {
                                                printf("\033[0;32m"); //green
                                                printf("you win good game !!! :0 \n"); // win st
                                                        break;
                                                    } 




                                        turn = turn + 1;
                                break; // end player 

                                case 2: // ai 
                                        switch (difficulty) {
                                                        case 1: // easy

                                                Ai = 4-user ;         
                                            while(Ai > tourch){ // so the Ai cqnt tqke more then the rest !! 
                                            Ai--;     
                                            }
                                            tourch = tourch - Ai;
                                                printf("\033[0;35m"); //purpule
                                                printf ("Ai choses %d tourche\n", Ai);
                                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                        printf("\033[0;33m"); // yellow 
                                                                printf("| ");
                                                        }
                                                printf("\033[0;33m"); // yellow 
                                                printf ("\nthe numbre of tourches are %d\n", tourch);

                                                if (tourch == 1)
                                                    { 
                                                printf("\033[0;31m"); //red
                                                printf ("you lose good luck next time :'(\n"); // losing for the AI bcs you only capable for holding
                                                    break;
                                                    } else if (tourch == 0)
                                                    {
                                                printf("\033[0;32m"); //green
                                                printf("you win good game !!! :0 \n"); // win st
                                                        break;
                                                    } 

                                                


                                                        break; // case1
                                                        case 2: // meduim
                                                        srand(time(NULL));
                                                        mid = rand() % (2 - 1 + 1) + 1; // random pick
                                                        // printf("%i",mid); 
                                                                switch(mid){
                                                                    case 1:                                
                                                                    // easy mid
                                                                            Ai = 4-user ;         
                                                                        while(Ai > tourch){ // so the Ai cqnt tqke more then the rest !! 
                                                                        Ai--;     
                                                                        }
                                                                        tourch = tourch - Ai;
                                                                            printf("\033[0;35m"); //purpule
                                                                            printf ("Ai choses %d tourche\n", Ai);
                                                                                    for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                                    printf("\033[0;33m"); // yellow 
                                                                                            printf("| ");
                                                                                    }
                                                                            printf("\033[0;33m"); // yellow 
                                                                            printf ("\nthe numbre of tourches are %d\n", tourch);

                                                                            if (tourch == 1)
                                                                                { 
                                                                            printf("\033[0;31m"); //red
                                                                            printf ("you lose good luck next time :'(\n"); // losing for the AI bcs you only capable for holding
                                                                                                break;
                                                                                } else if (tourch == 0)
                                                                                {
                                                                            printf("\033[0;32m"); //green
                                                                            printf("you win good game !!! :0 \n"); // win st
                                                                                                break;
                                                                                }
                                                            break; // mid easy case
                                                            case 2: // hard mid
                                                            if ((tourch - 1) % 4 == 1)
                                                                        {
                                                                        Ai = 1;
                                                                        tourch = tourch - Ai;
                                                                        printf("\033[0;35m"); //purpule
                                                                            printf ("Ai choses %d tourche\n", Ai);
                                                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                            printf("\033[0;33m"); // yellow 
                                                                                printf("| ");
                                                                        
                                                                        }
                                                                        printf("\033[0;33m"); // yellow 
                                                                        printf ("\nthe numbre of tourches are %d\n", tourch);
                                                                    } else if ((tourch - 2) % 4 == 1)
                                                                            {   
                                                                                Ai = 2;
                                                                                tourch = tourch - Ai;
                                                                                printf("\033[0;35m"); //purpule
                                                                                printf ("Ai choses %d tourche\n", Ai);
                                                                                for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                                            printf("\033[0;33m"); // yellow
                                                                                            printf("| ");

                                                                                    }
                                                                                printf("\033[0;33m"); // yellow 
                                                                                printf ("\n the numbre of tourches are %d\n", tourch);
                                                                            }  else if ((tourch - 3) % 4 == 1) 
                                                                                    {
                                                                                        Ai = 3;
                                                                                        tourch = tourch - Ai;
                                                                                        printf("\033[0;35m"); //purpule
                                                                                        printf ("Ai choses %d tourche\n", Ai);
                                                                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                                            printf("\033[0;33m"); // yellow 
                                                                                                printf("| ");

                                                                                        }
                                                                                        printf("\033[0;33m"); // yellow 
                                                                                        printf ("\nthe numbre of tourches are %d\n", tourch);
                                                                                    } else
                                                                                        {
                                                                                            srand (time (NULL));
                                                                                            Ai = rand () % 3;
                                                                                            tourch = tourch - Ai;
                                                                                                    if (Ai == 1) // so here the we can use plural and singler 
                                                                                                        {
                                                                                                        printf("\033[0;35m"); //purpule
                                                                                                        printf ("\n Ai choses %d tourche\n", Ai);
                                                                                                        }
                                                                                                    else if (Ai == 2 && Ai == 3)
                                                                                                        {
                                                                                                        printf("\033[0;35m");    
                                                                                                        printf ("\n Ai choses %d tourches\n", Ai);
                                                                                                        }
                                                                                        }
                                                                            if (tourch == 0) { // case hard mid win conditions
                                                                            printf("\033[0;32m"); //green
                                                                            printf("you win good game !!! :0 \n"); // hard mid win condition
                                                                               break;                        
                                                                            }else if (tourch == 1) {
                                                                            printf("\033[0;31m"); //red
                                                                            printf ("you lose good luck next time :'(\n"); // hard mid lose cond
                                                                                                break;
                                                                                        }
                                                                }  //switch mid              
                                                                            
                                                        break; // case2 mid
                                                        
                                                        
                                                        case 3:      //dif level impo
                                                                if ((tourch - 1) % 4 == 1)
                                                                        {
                                                                        Ai = 1;
                                                                        tourch = tourch - Ai;
                                                                        printf("\033[0;35m"); //purpule
                                                                            printf ("Ai choses %d tourche\n", Ai);
                                                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                            printf("\033[0;33m"); // yellow 
                                                                                printf("| ");
                                                                        
                                                                        }
                                                                        printf("\033[0;33m"); // yellow 
                                                                        printf ("\nthe numbre of tourches are %d\n", tourch);
                                                                    } else if ((tourch - 2) % 4 == 1)
                                                                            {   
                                                                                Ai = 2;
                                                                                tourch = tourch - Ai;
                                                                                printf("\033[0;35m"); //purpule
                                                                                printf ("Ai choses %d tourche\n", Ai);
                                                                                for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                                            printf("\033[0;33m"); // yellow
                                                                                            printf("| ");

                                                                                    }
                                                                                printf("\033[0;33m"); // yellow 
                                                                                printf ("\n the numbre of tourches are %d\n", tourch);
                                                                            }  else if ((tourch - 3) % 4 == 1) 
                                                                                    {
                                                                                        Ai = 3;
                                                                                        tourch = tourch - Ai;
                                                                                        printf("\033[0;35m"); //purpule
                                                                                        printf ("Ai choses %d tourche\n", Ai);
                                                                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                                                            printf("\033[0;33m"); // yellow 
                                                                                                printf("| ");

                                                                                        }
                                                                                        printf("\033[0;33m"); // yellow 
                                                                                        printf ("\nthe numbre of tourches are %d\n", tourch);
                                                                                    } else
                                                                                        {
                                                                                            srand (time (NULL));
                                                                                            Ai = rand () % 3;
                                                                                            tourch = tourch - Ai;
                                                                                                    if (Ai == 1) // so here the we can use plural and singler 
                                                                                                        {
                                                                                                        printf("\033[0;35m"); //purpule
                                                                                                        printf ("\n Ai choses %d tourche\n", Ai);
                                                                                                        }
                                                                                                    else if (Ai == 2 && Ai == 3)
                                                                                                        {
                                                                                                        printf("\033[0;35m");    
                                                                                                        printf ("\n Ai choses %d tourches\n", Ai);
                                                                                                        }
                                                                                        }
                                                                               if (tourch == 1) {
                                                                            printf("\033[0;31m"); //red
                                                                            printf ("you lose good luck next time :'(\n"); // hard mid lose cond
                                                                                                break;
                                                                                        }
                                            
                                                            break; //deficulty hard
                                                         
                                                        } // switch difficulty 


                                     turn = turn - 1;

                                break; // end ai


                              }
                                }
                              


                                // ai play first

            
    
                      
                    
                break; // ai vs player 
 







                case 2: // PLAYER VS PLAYER
                printf("\033[0;35m"); // purpel
                printf("player 1 enter your name: ");       //player name-aymen
                scanf("%s",&P1);
                printf("player 2 enter your name: "); // player 2
                scanf("%s",&P2);
                getchar();
                   
                   printf("\n");
                        do{
                        r1 = rand() % (6 - 1 + 1 ) + 1; //player1 dice
                        printf("%s dice is %d \n",P1,r1);
                        r2 = rand() % (6 - 1 + 1 ) + 1; // player2 dice
                         printf("%s dice is %d \n",P2,r2);
                         if (r1 == r2)
                         {
                            printf("the dice result is equal we will roll the dice again \n\n\n");
                         }
                         
                        } while (r1 == r2);
                    
                    
                    
                    
                    
                    
                    if (r1 > r2) {
                  for (i=0;i<21;i++){
                    p1[i] = P1[i];
                    p2[i] = P2[i];
                    
                  }
                   
                    } else if ( r2 > r1) {
                  for (i=0;i<21;i++){
                    p1[i] = P2[i];
                    p2[i] = P1[i];
                  }
                    }


                     printf("%s play the first\n",p1); // p1 
                     printf("%s play the second\n",p2); // p2
                    
                    printf("\033[0;33m"); // YELLOW
                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                printf("| ");
                                        }
                            
                            printf ("\ntourch numbre is %d \n", tourch);
                            while (tourch > 0) // THE GAME START 
                            {
                                printf("\033[0;36m"); //cyan
                                printf("it's %s turn!\nchose a number between 1 to 3: ",p1); //p1 turn-aymen
                                scanf("%d",&user);
                                
                                while(tourch < user) { 
                                            printf("\033[0;31m"); //RED !!
                                            printf("your value %i is more then %i please change the value \n",user,tourch);
                                            scanf ("%d", &user);
                                    } 
                                    printf("\033[0;36m"); //cyan 
                                while (user<1 || user>3)
                                {   
                                            printf("\033[0;31m"); //RED !!
                                    printf(" you should chose a numbre betwen 1 to 3 !!!!! \n");
                                    scanf ("%d", &user);
                
                                }
                                    printf("\033[0;33m"); //yellow
                                    tourch = (tourch - user);
                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                printf("| ");


                                        }
                                    printf ("\nthe rest of the tourch is : %d\n", tourch);
                                            if (tourch == 0)
                                                {
                                                    printf ("\033[0;36m %s \033[0;31m lost the game, good luck next time :'(\n",p1); //p1 lost-aymen
                                                    printf("\033[0;34m %s \033[0;32m win the game, good game !!! :0 \n",p2); //p2 win
                                                        break;
                                                } else if (tourch == 1)
                                                {
                                            printf ("\033[0;36m %s \033[0;32m win the game, good game !!! :0\n",p1); //p1 lost-aymen
                                            printf ("\033[0;34m %s \033[0;31m lost the game, good luck next time :'(\n",p2); //p2 lost
                                                    break;
                                                } 
                                

                                    printf("\033[0;34m");   //blue
                                    
                                    printf("it's %s turn!\nchose a number between 1 to 3: ",p2);  //p2 turn-aymen
                                    scanf("%d",&user2);
                                        while(tourch < user2) { 
                                            printf("\033[0;31m"); //RED !!
                                            printf("your value %i is more then %i please change the value \n",user2,tourch);
                                            scanf ("%d", &user2);
                                    }
                                    printf("\033[0;34m");   //blue
                                        while(user2<1 || user2>3)
                                    {

                                        printf("\033[0;31m"); //RED !!
                                        printf(" you should chose a numbre betwen 1 to 3 !!!!! \n"); 
                                        scanf ("%d", &user2);
                                
                                    }
                                    printf("\033[0;33m"); //yellow
                                    tourch = (tourch-user2);
                                        for (i=0;i<tourch;i++){ //loop for tourch represtions 
                                                printf("| ");


                                        }
                                    printf ("\nthe rest of the tourch is : %d\n", tourch);
                                            if (tourch == 0)
                                        {
                                            printf ("\033[0;34m %s \033[0;31m lost the game, good luck next time :'(\n",p2); //p2 lost
                                            printf("\033[0;36m %s \033[0;32m win the game, good game !!! :0 \n",p1); 
                                                break;
                                        } else if (tourch == 1)
                                                {
                                            printf("\033[0;34m %s \033[0;32m win the game, good game !!! :0 \n",p2); //p2 win
                                            printf ("\033[0;36m %s \033[0;31m lost the game, good luck next time :'(\n",p1); //p1 lost-aymen
                                                    break;
                                                }
                            }        
                                
                break;
            }
        break; // break english
      
      
       // case 2: //francais
    
        

    
        
      //   break; // lang
        


        case 3:
        printf("\n \n \n");
        printf("Siradj Mounir Lamri \n");
        printf("Aymen Melouah\n");
        printf("Islam houcine \n");
        printf(" Big thanks to:\n -DR-Yasmine Labiode \n -DR-Nada Ahmed Malek\n ");
        break;
    } //switch lang
     return 0;
                }