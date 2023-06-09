



//My Program is based on buying accessories of phone from the store based on user

#include<stdio.h>
#include<string.h>
#include<conio.h>

void dis();
void bill(); //4 Function prototype is used to call any function at a same time
void buy();
void main();

void dis(sum)  //To view products i used a function which is being called by main
{
int q,num;
clrscr();
printf("\n\t|-------------------------------------------------------------------|");
printf("\n\t|		   |- - - - - - - - - - - - - - - - - -|            |");
printf("\n\t|		   |	       SELVYN STORES LTD       |	    |");
printf("\n\t|		   |	   NEAR N.S.D,ALTO DABOLIM     |	    |");
printf("\n\t|		   |	    	  VASCO-GOA	       |	    |");
printf("\n\t|		   |				       |            |");
printf("\n\t|		   |           PHONE:9923506812	       |            |");
printf("\n\t|		   |- - - - - - - - - - - - - - - - - -|            |");
printf("\n\t|			       	  WELCOME                           |");
printf("\n\t|-------------------------------------------------------------------|");
printf("\n\t| what would you like to choose:\t\t\t\t    |");
printf("\n\t|\t\t\t\t\t\t\t\t    |");
printf("\n\t| 1>view products\t\t\t\t\t\t    |");
printf("\n\t| 2>buy products\t\t\t\t\t\t    |");
printf("\n\t| 3>pay bill\t\t\t\t\t\t\t    |");
printf("\n\t| 4>quit store\t\t\t\t\t\t\t    |");
printf("\n\t|-------------------------------------------------------------------|");
printf("\n");
clrscr();
pop:
clrscr();
printf("\nProducts available are :\n");
printf("\nSD CARD\t\tBLUETOOTH(WIRELESS)\tEARPHONE(WIRED)\t\tCASE(MATERIAL)\n ");
printf("\n1>8 GB @239\t1>Sony headphones @399\t1>Boat earphone @799\t1>leather @299");
printf("\n2>32 GB @400\t2>Jbl infinity @1000\t2>Boat @399\t\t2>Design @275");
printf("\n3>1 TB @1000\t3>Bolt @2000\t\t3>Jbl @649\t    3>Transparent @280\n");
printf("\nDo you like to buy any of the above phone Accessories press 1-yes or 2-exit: ");
scanf("%d",&num);
if(num==1)
 {
   buy();
 }
 else
  {
  if(num==2)
    {
      main(sum);
    }
    else
     {
      printf("\nInvalid number entered press 1 to view products or 2-exit");
      scanf("%d",&q);
      if(q==1)
       {
	 goto pop;
       }
       else
       {
	 main(sum);
       }
     }
  }
}


void bill(sum)   //To get the final/total print of the bill
{
int a;
clrscr();
printf("\n\t\t\t|-------------------------------|");
printf("\n\t\t\t|\tTOTAL AMOUNT=%d          |",sum);
printf("\n\t\t\t|                               |");
printf("\n\t\t\t|\tTHANK YOU,VISIT AGAIN   |");
printf("\n\t\t\t|-------------------------------|");
printf("\n Do you want to shop again prees 1 or 2 to exit: ");
scanf("%d",&a);
if(a==1)
  {
    main();
  }
}


void buy()        //To Buy the products from below based on user choice which is being called by main
{           	  //I have used multiple if and switch statement to chk multiple condition
int choose,sel,qty,ph,ans,sum=0,io,k;
clrscr();
top:
clrscr();
printf("\nWhat Would You Like to Buy\n");
printf("\n1>SD CARD\n2>BLUETOOTH (WIRELESS)\n3>EARPHONE (WIRED)\n4>CASE (MATERIAL)\n5>Exit");
printf("\n6>Main screen\n");
scanf("%d",&choose);
if(choose==1)
    {
      clrscr();
      printf("\n The Products that are available are:\n");
      printf("\n1>8 GB @239\n2>32 GB @400\n3>1 TB @1000\n4>Exit\n");
      scanf("%d",&ph);
      if(ph>4)
	{
	  printf("\n wrong number/choice entered,press 1 to re-buy again or 2-exit main screen:\n");
	  scanf("%d",&io);
	  if(io==1)
	   {
	     goto top;
	   }
	   else
	   {
	      main(sum);
	   }
	}
	else if(ph==4)
	   {
	     goto top;
	   }
	printf("\nEnter the Qty");
	scanf("%d",&qty);
	if(qty>3)
	 {
	  printf("\nCannot buy more than 3 Items");
	  getch();
	  goto top;
	 }
	 if(ph==1)
	 {
	  sum=sum+(qty*239);
	  printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
	  scanf("%d",&ans);
	  if(ans==1)
	    {
		goto top;
	    }
	    else
	     {
		main(sum);
	     }
	 }
	 else
	  {
	  if(ph==2)
	    {
	     sum=sum+(qty*400);
	     printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
	     scanf("%d",&ans);
	     if(ans==1)
	       {
		  goto top;
	       }
	       else
		{
		  main(sum);
		}
	    }
	    else
	     {
	     if(ph==3)
	       {
		sum=sum+(qty*1000);
		printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
		scanf("%d",&ans);
		if(ans==1)
		 {
		   goto top;
		 }
		 else
		  {
		    main(sum);
		  }
	       }
	     }
	  }
    }
    else
      {
      if(choose==2)
	 {
	    clrscr();
	    printf("\n The Products that are available are:\n");
	    printf("\n1>Sony headphones @399\n2>Jbl infinity @1000\n3>Bolt @2000\n4>exit\n");
	    scanf("%d",&ph);
	    if(ph>4)
	      {
	       printf("\n wrong number/choice entered,press 1 to re-buy again or 2-exit main screen:\n");
	       scanf("%d",&io);
	       if(io==1)
		 {
		   goto top;
		 }
		 else
		  {
		    main(sum);
		  }
	      }
	      else if(ph==4)
		 {
		   goto top;
		 }
	      printf("\nEnter the Qty");
	      scanf("%d",&qty);
	      if(qty>3)
	      {
		printf("\nCannot buy more than 3 Items");
		getch();
		goto top;
	      }
	      if(ph==1)
		{
		  sum=sum+(qty*399);
		  printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
		  scanf("%d",&ans);
		  if(ans==1)
		    {
		       goto top;
		    }
		    else
		     {
		       main(sum);
		     }
		}
		else
		 {
		 if(ph==2)
		   {
		    sum=sum+(qty*1000);
		    printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
		    scanf("%d",&ans);
		    if(ans==1)
		      {
			goto top;
		      }
		      else
		      {
			main(sum);
		      }
		   }
		   else
		    {
		    if(ph==3)
		      {
		       sum=sum+(qty*2000);
		       printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
		       scanf("%d",&ans);
		       if(ans==1)
			 {
			   goto top;
			 }
			 else
			  {
			    main(sum);
			  }
		      }
		    }
		 }
	 }
	 else
	   {
	   if(choose==3)
	     {
		 clrscr();
		 printf("\n The Products that are available are:\n");
		 printf("\n1>Boat earphone @799\n2>Boat @399\n3>Jbl @649\n4>exit\n");
		 scanf("%d",&ph);
		 if(ph>4)
		   {
		     printf("\n wrong number/choice entered,press 1 to re-buy again or 2-exit main screen:\n");
		     scanf("%d",&io);
		     if(io==1)
		       {
			 goto top;
		       }
		       else
		       {
			 main(sum);
		       }
		   }
		   else if(ph==4)
		      {
			  goto top;
		      }
		 printf("\nEnter the Qty");
		 scanf("%d",&qty);
		 if(qty>3)
		   {
		    printf("\nCannot buy more than 3 Items");
		    getch();
		    goto top;
		   }
		   if(ph==1)
		     {
		       sum=sum+(qty*799);
		       printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
		       scanf("%d",&ans);
		       if(ans==1)
			 {
			    goto top;
			 }
			 else
			 {
			    main(sum);
			 }
		     }
		     else
		      {
		      if(ph==2)
			{
			  sum=sum+(qty*399);
			  printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
			  scanf("%d",&ans);
			  if(ans==1)
			    {
			       goto top;
			    }
			    else
			    {
			       main(sum);
			    }
			}
			else
			 {
			 if(ph==3)
			   {
			    sum=sum+(qty*649);
			    printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
			    scanf("%d",&ans);
			    if(ans==1)
			      {
				goto top;
			      }
			      else
			      {
				main(sum);
			      }
			   }
			 }
		      }
	     }
	     else
	      {
	      if(choose==4)
		{
		  clrscr();
		  printf("\n The Products that are available are:\n");
		  printf("\n1>leather @299\n2>Design @275\n3>Transparent @280\n4>exit\n");
		  scanf("%d",&ph);
		  if(ph>4)
		    {
		      printf("\n wrong number/choice entered,press 1 to re-buy again or 2-exit main screen:\n");
		      scanf("%d",&io);
		      if(io==1)
			{
			  goto top;
			}
			else
			{
			  main(sum);
			}
		    }
		    else if(ph==4)
			{
			  goto top;
			}
		  printf("\nEnter the Qty");
		  scanf("%d",&qty);
		  if(qty>3)
		   {
		    printf("\nCannot buy more than 3 Items");
		    getch();
		    goto top;
		   }
		   if(ph==1)
		     {
		       sum=sum+(qty*299);
		       printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
		       scanf("%d",&ans);
		       if(ans==1)
			 {
			    goto top;
			 }
			 else
			  {
			   main(sum);
			  }
		     }
		     else
		      {
		      if(ph==2)
			{
			  sum=sum+(qty*275);
			  printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
			  scanf("%d",&ans);
			  if(ans==1)
			    {
			       goto top;
			    }
			    else
			     {
			      main(sum);
			     }
			}
			else
			 {
			 if(ph==3)
			   {
			    sum=sum+(qty*280);
			    printf("\n do u want to buy more item type 1 for yes or 2-exit main screen: ");
			    scanf("%d",&ans);
			    if(ans==1)
			      {
				goto top;
			      }
			      else
			       {
				 main(sum);
			       }
			   }
			 }
		      }
		}
		else
		 {
		 if(choose==5)
		  {
		    dis();
		  }
		  else
		   {
		   if(choose==6)
		    {
		      main(sum);
		    }
		    else
		     {
		     if(choose>=7)
		       {
			printf("\n invalid number entered press 1-re-buy or 2 to exit: ");
			scanf("%d",&k);
			if(k==1)
			  {
			   goto top;
			  }
			  else
			   {
			     main(sum);
			   }
		       }
		     }
		   }
		 }
	      }
	   }
      }
}


void main(sum)    //Main function used for calling all other function
{
int no,ans;
clrscr();
printf("\n\t|-------------------------------------------------------------------|");
printf("\n\t|		   |- - - - - - - - - - - - - - - - - -|            |");
printf("\n\t|		   |	       SELVYN STORES LTD       |	    |");
printf("\n\t|		   |	   NEAR N.S.D,ALTO DABOLIM     |	    |");
printf("\n\t|		   |	    	  VASCO-GOA	       |	    |");
printf("\n\t|		   |	      			       |            |");
printf("\n\t|		   |          PHONE:9923506812	       |            |");
printf("\n\t|		   |- - - - - - - - - - - - - - - - - -|            |");
printf("\n\t|			       	  WELCOME                           |");
printf("\n\t|-------------------------------------------------------------------|");
printf("\n\t| what would you like to choose:\t\t\t\t    |");
printf("\n\t|\t\t\t\t\t\t\t\t    |");
printf("\n\t| 1>view products\t\t\t\t\t\t    |");
printf("\n\t| 2>buy products\t\t\t\t\t\t    |");
printf("\n\t| 3>pay bill\t\t\t\t\t\t\t    |");
printf("\n\t| 4>quit store\t\t\t\t\t\t\t    |");
printf("\n\t|-------------------------------------------------------------------|\n");
scanf("%d",&no);
if(no==1)
	{
	  dis();
	}
	else
	  {
	  if(no==2)
		{
		  buy();
		}
		else
		  {
		  if(no==3)
			{
			  bill(sum);
			}
		  }
	  }
}