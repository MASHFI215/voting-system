#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("\nVOTING SYSTEM\nMade by Team Probots\n\nPress 1 : Sign in\nPress 2 : System Info\nPress 3 : Admins Info\nPress 4 : Exit\n\n");
    int v1=0,f;
    while(1)
    {
        printf("Enter your choice - ");
        scanf("%d",&f);
        fflush(stdin);
        if(f==1)
        {
            int g=0;
            if(g==0)
            {
                system("cls");
            }
            while(1)
            {
                system("cls");
                printf("Admin Sign in\n''''''''''''''\n");
                char id[100],id1[100]="probots";
                int cast=0,waste=0,total,pass,pass1;
                printf("Enter ID - ");
                gets(id);
                printf("Enter password - ");
                scanf("%d",&pass);
                fflush(stdin);
                pass1=strcmp(id,id1);
                if(pass1==0 && pass == 12345)
                {
                    system("cls");
                    struct system
                    {
                        int vote;
                        char name[100];
                    } v[1000];
                    struct system2
                    {
                        int vote;
                        char name[100];
                    } w[1000];
                    FILE *f;
                    char s[100];
                    int n,i;
                    f=fopen("voting.system.ppt","a");
                    printf("Name of your voting system : ");
                    fflush(stdin);
                    gets(s);
                    fprintf(f,"Topic of voting system : ");
                    fputs(s,f);
                    fprintf(f,"\n\n");
                    printf("Number of competitors : ");
                    scanf("%d",&n);
                    printf("\n");
                    fprintf(f,"Total competitors : %d\n\n\n",n);
                    fflush(stdin);
                    for(i=0; i<n; i++)
                    {
                        (v[i].vote)=0;
                        printf("press %d to vote : ",i+1);
                        gets(v[i].name);
                    }
                    int z;
                    for(z=0; z<n; z++)
                    {
                        fprintf(f,"press %d to vote ",z+1);
                        fputs((v[z].name),f);
                        fprintf(f,"\n");
                    }
                    fprintf(f,"press 0 to see the result\n\n");
                    printf("press 0 to see the result\n\n");
                    printf("*-( Voting has started )-*\n\n");
                    fprintf(f,"Voting details :\n'''''''''''''''''''''''''''''\n");
                    char n1[100];
                    int j,q=0;
                    while(1)
                    {
                        fflush(stdin);
                        printf("Enter your name : ");
                        gets(n1);
                        printf("Enter your vote : ");
                        scanf("%d",&v1);
                        fflush(stdin);
                        if(v1== 100)
                        {
                            printf("Enter you password - ");
                            scanf("%d",&pass);
                            pass1=strcmp(id1,n1);
                            if(pass == 12345 && pass1 == 0)
                                break;
                            else
                            {
                                printf("\n!Invalid ID or Password1\n\n");
                                continue;
                            }
                            break;
                        }
                        else if(v1 == 0)
                        {
                            v1=-1;

                            printf("Enter password - ");
                            scanf("%d",&pass);
                            fflush(stdin);
                            int x,k;
                            char name1[100];
                            k=strcmp(n1,id1);
                            if(k==0 && pass==12345)
                            {
                                printf("\n\n* Voting result at this moment *\n");
                                int u,l1;

                                for(i=0; i<n; i++)
                                {
                                    l1=strlen(v[i].name);
                                    for(u=0; u<l1; u++)
                                        printf("%c",v[i].name[u]);
                                    printf(" - %d\n",v[i].vote);
                                }
                            }
                            else
                            {
                                printf("\n!Invalid ID or Password!\n\n");

                            }


                        }
                        else if(v1<=n && v1>0)
                        {
                            for(i=0; i<n; i++)
                            {
                                if(v1==(i+1))
                                {
                                    (v[i].vote)++;
                                    fputs(n1,f);
                                    fprintf(f," voted ");
                                    fputs(v[i].name,f);
                                    fprintf(f,"\n");
                                }
                            }
                            cast++;
                        }
                        else if(v1>n || v1<0)
                        {
                            fputs(n1,f);
                            fprintf(f,"'s vote was wasted\n");
                            waste++;
                        }
                        q++;
                        printf("\n");
                    }
                    if(q==0)
                    {
                        fprintf(f,"For some problems the voting was canceled\n");
                        return 0;
                    }
                    int x;
                    char name1[100];
                    fprintf(f,"\n\nTotal vote => %d\n\n",cast+waste);
                    fprintf(f,"Total vote casted => %d    (%.2lf%%)\n\n",cast,(cast*100.0)/(cast+waste));
                    fprintf(f,"Total vote wasted => %d    (%.2lf%%)\n\n",waste,(waste*100.0)/(cast+waste));
                    fprintf(f,"\nFinal Result : \n'''''''''''''''''''''''''\n");
                    for(i=0; i<n; i++)
                    {
                        for(j=i+1; j<n; j++)
                        {
                            if((v[j].vote)>(v[i].vote))
                            {
                                x=(v[j].vote);
                                (v[j].vote)=(v[i].vote);
                                (v[i].vote)=x;
                                strcpy(name1,(v[j].name));
                                strcpy((v[j].name),(v[i].name));
                                strcpy((v[i].name),name1);
                            }
                        }
                        fputs(v[i].name,f);
                        fprintf(f," => %d  (%.2lf%%)\n",v[i].vote,((v[i].vote)*100.0)/(cast+waste));
                    }
                    if((v[0].vote) != (v[1].vote))
                        fprintf(f,"\nThe winner is ==> ");
                    else
                        fprintf(f,"\nThe winners are ==> ");
                    fprintf(f,"*");
                    fputs(v[0].name,f);
                    fprintf(f,"*");
                    for(i=1; i<n; i++)
                    {
                        if((v[i].vote)==(v[0].vote))
                        {
                            fprintf(f,"  &&  *");
                            fputs((v[i].name),f);
                            fprintf(f,"*");
                        }
                    }
                    fprintf(f," (With %d votes)\n\n<3 Thank you <3\n\n",(v[0].vote));
                }
                else
                {
                    if(g<2)
                        printf("\n!Invalid ID or Password!\n!%d attempt remainig!\n\n",2-g);
                    else
                        printf("\n!Invalid ID or Password!\n!No attempt remainig!\n\n",2-g);
                    g++;
                    if(g<=2)
                        continue;
                    else
                        return 0;
                }
                if(v1==100)
                    return 0;
            }
        }
        else if(f==2)
            printf("\nWelcome to our Voting system. This project is to create and perform a voting system according to the user's choice. A user can decide the topic of his/her voting system along with how many competitors will participate in the Voting. Here's a starting menu for the user to choose whether he/she wants to run the system or view the program info. This program also allows the user to see the results of the voting system at any time during the process with correct id and password. The entire result will be stored in a file name voting.project.txt. A user has to put the correct id pass to end the voting system. Once it ends the result will be stored in the desired file.\n\n");

        else if(f==3)
            printf("\nMd Shafeen Ur Rahman,\nLeader.\nI'd : C223044\nEmail : shafinrahman58@gmail.com\n\nMembers :\n\nNurul Azim Sakib\nI'd : C223043\nEmail : sakibwahid634@gmail.com\n\nMd. Obayed Mashfi\nI'd : C223066\nEmail : obayedmashfi15@gmail.com\n\nAmad Uddin Osama\nI'd : C223041\nEmail  : mrbangladesh19521971@gmail.com\n\n");
        else if (f==4)
            return 0;
        else
            printf("\nWrong Input\n\n");
    }
}
