#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include<ctype.h>
#include <process.h>
#include<MMsystem.h>
#include<Winuser.h>
#include "COLOR.h"
#include "arrowhere.h"

int i=-1;
int uang[]={0};
char pil;

int modulmain()
{
 remove_scrollbar(), fullscreen(), loadingscreen(), credit(), splashscreen(), fail(), exitscreen(), lala(),menu(),update();
 keluar(), help(), gallery(), ferdian1(), ferdian2(), lili1(),lili2(),lili3(),lili4(), about(), sponsor(),logo(), title();
 screen(),game(),intro(),storylevel0(),option01(),option02(),option03(),option04(),storylevel01(),option05(),option06();
 option07(),option08(),option09(),option10(),option11(),bagianawal(),storylevel1(),option12(),option13(),option14(),option15();
 bagiantengah(),storylevel11(),option16(),option17(),option18();
}
int modulminigames()
{
    minigames(),menufuntouch(),funtouch(),logofun(),helpfun(),menufunguess(),funguess(),helpfunguess(),logofunguess();
}
int main()
{
    remove_scrollbar();
    fullscreen();
    splashscreen();
    system("COLOR 0A");
    screen();
    Sleep(3000);
    loadingscreen();
    menu();
}
void remove_scrollbar()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size =
    {
        info.srWindow.Right - info.srWindow.Left + 1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);
}
void fullscreen()
{  keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
}
int loadingscreen()//untuk menampilkan tampilan loading screen
{
 int r, q;
 int x;
 double y;
 char name1[] = "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPESAN KESEHATAN: \n\t\t\t\t1.Jangan melihat layar terlalu dekat.\n\t\t\t\t2.Ingatlah waktu selagi anda bermain, jangan sampai anda lupa makan dan minum.\n\t\t\t\t3.Jagalah emosi anda selama bermain agar tidak stress. Ini hanya permainan.\n\t\t\t\tTujuan game ini adalah untuk menghibur dan menghilangkan kebosanan anda. Maka dari itu kami perhatian dengan kesehatan anda\n";
 /* q dan r sebagai counter untuk mengatur jalan dan kecepatan*/
 color(4);
 printf("\n\n\n\t\t\t\t\t\t\t\t\t\tLoading...\n\t\t\t\t\t\t\t\t\t");
 PlaySound("C:\\FERDIAN PEKA PROJECT\\music\\pacman_intro.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
 for(r=1;r<=25;r++){
  for(q=0;q<=10000000;q++); /* counter kecepatan*/
  printf("%c", 139);
 }
 system("cls");
     printf("\n\n");
    for(x=0; name1[x]!=NULL; x++)
   {
        printf("%c",name1[x]);

      for(y=0; y<=1000000; y++)
      {

      }
   }

    printf("\n\t\t\t\t");
    system("pause");
    system("cls");

    sponsor();
    Sleep(2000);
    system("cls");
    logo();
    Sleep(2000);
    system("cls");
}
int credit()
{
    lili3();
    Sleep(1000);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                                  CREDITS :\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                                  Producer :\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                             Ferdian Julianto\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                              Audio Enginner :\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                          Philipus Kristian Renaldy\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                                 Director :\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                              Ferdian Julianto\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                               Story Writer :\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                          Philipus Kristian Renaldy\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                             Special Thanks to\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                       Ferdian Julianto as Male Character\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                         Lili Tresha as Female Character\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                                   Sound :\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                             Maybe Love - Yiruma\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                                           Tears on Love - Yiruma\n\n");
    Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf ("                                                          MitchiriNeko March - Cute cat characters in a marching band!");
	Sleep(1000);
	system("cls");
	lili2();
	Sleep(1000);
	system("cls");
}

int splashscreen()
{
    system("COLOR 70");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");
    system("COLOR 60");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");
    system("COLOR 50");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");
    system("COLOR 40");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");
    system("COLOR 30");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");
    system("COLOR 20");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");
    system("COLOR 10");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(250);
    system("cls");

}
int fail()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t _______  _______ _________ _        _______  ______  \n");
    printf("\t\t\t\t\t\t\t\t(  ____ \\(  ___  )\\__   __/( \\      (  ____ \\(  __  \\ \n");
    printf("\t\t\t\t\t\t\t\t| (    \\/| (   ) |   ) (   | (      | (    \\/| (  \\  )\n");
    printf("\t\t\t\t\t\t\t\t| (__    | (___) |   | |   | |      | (__    | |   ) |\n");
    printf("\t\t\t\t\t\t\t\t|  __)   |  ___  |   | |   | |      |  __)   | |   | |\n");
    printf("\t\t\t\t\t\t\t\t| (      | (   ) |   | |   | |      | (      | |   ) |\n");
    printf("\t\t\t\t\t\t\t\t| )      | )   ( |___) (___| (____/\\| (____/\\| (__/  )\n");
    printf("\t\t\t\t\t\t\t\t|/       |/     \\|\\_______/(_______/(_______/(______/ \n\t\t\t\t\t\t\t\t");
    system("pause");
}
int exitscreen()
{
    system("COLOR 70");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
    system("COLOR 60");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
    system("COLOR 50");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
    system("COLOR 40");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
    system("COLOR 30");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
    system("COLOR 20");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
    system("COLOR 10");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    lala();
    Sleep(250);
    system("cls");
}
int lala()
{
   printf("\t\t\t\tooooooooooooo ooooo   ooooo       .o.       ooooo      ooo oooo    oooo      oooooo   oooo   .oooooo.   ooooo     ooo \n");
   printf("\t\t\t\t8'   888   `8 `888'   `888'      .888.      `888b.     `8' `888   .8P'        `888.   .8'   d8P'  `Y8b  `888'     `8'\n");
   printf("\t\t\t\t     888       888     888      .88888.      8 `88b.    8   888  d8            `888. .8'   888      888  888       8 \n");
   printf("\t\t\t\t     888       888ooooo888     .8' `888.     8   `88b.  8   88888[              `888.8'    888      888  888       8  \n");
   printf("\t\t\t\t     888       888     888    .88ooo8888.    8     `88b.8   888`88b.             `888'     888      888  888       8 \n");
   printf("\t\t\t\t     888       888     888   .8'     `888.   8       `888   888  `88b.            888      `88b    d88'  `88.    .8'  \n");
   printf("\t\t\t\t    o888o     o888o   o888o o88o     o8888o o8o        `8  o888o  o888o          o888o      `Y8bood8P'     `YbodP'    \n");
}


void menu()
{
    system("COLOR 0C");
    int position=1;
    int keypressed=0;
    PlaySound("C:\\FERDIAN PEKA PROJECT\\music\\Maybe Love by Yiruma.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
    #define MAX 8
    #define MIN 1

    while(keypressed!=13)
    {
    system("cls");
    color(0);
    printf("\t\t\t\t                                                          ...`..-:/:.  ````                                   \n");
    printf("\t\t\t\t                                                      .:omNNNNNNNMMMNmmmNNmmy/`                               \n");
    printf("\t\t\t\t                                                    -hNMMMMMMMMMMMMMMMMMMMMMMMmo`                             \n");
    printf("\t\t\t\t                                                  :yNMMMMMMMMMMMMMMMMMMMMMMMMMMMm/`                           \n");
    printf("\t\t\t\t                                                 /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd-                          \n");
    printf("\t\t\t\t                                                `:yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.                        \n");
    printf("\t\t\t\t                                  ``````          /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                       \n");
    printf("\t\t\t\t                            `-+hddmddhs+`         +MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                       \n");
    printf("\t\t\t\t                       `:ohdmNMMMMMMMMMNy/        +NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.                       \n");
    printf("\t\t\t\t                     `:hNMMMMMMMMMMMMMMMMNo`      yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh                        \n");
    printf("\t\t\t\t         `:ohmmmmo+dMMMMMMMMMMMMMMMMMMMMMMMNs.     :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                        \n");
    printf("\t\t\t\t        /dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`    oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo                         \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   .mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy`                        \n");
    printf("\t\t\t\t        -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:` sNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`                        \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdo+/:mMMMMMMMMMMMMMMMMMMMMMMMMMMMMms.                         \n");
    printf("\t\t\t\t        hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd-`yNMMMMMMMMMMMMMMMMMMMMMMMMMMd.                           \n");
    printf("\t\t\t\t        -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo  `+hMMMMMMMMMMMMMMMMMMMMMMMMNh-                           \n");
    printf("\t\t\t\t         `-+NMMMMmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-   oNMMMMMMMMMMMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t            +hdds/NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   :dNMNmmdyssmMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t             ``` -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+    .-:-.``   /NMMMMMMMMMMMMNh:                           \n");
    printf("\t\t\t\t                 `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd+              /MMMMMMMMMMMMMMMm:                          \n");
    printf("\t\t\t\t                  :dMMMMMMMMMMMMMMMMMMMMMMMMdso/-.`               oNMMMMMMMMMMMMMMMm+.                        \n");
    printf("\t\t\t\t                   ./o+ohmmdhhoodMMMMMMMMMMs`                     -mMMMMMMMMMMMMMMMMMd-                       \n");
    printf("\t\t\t\t                         `.`:```+NMMMMMMMMd`                    .smMMMMMMMMMMMMMMMMMMMm:                      \n");
    printf("\t\t\t\t                           .``  +NMMMMMMMN/                    `dMMMMMMMMMMMMMMMMMMMMMMN+                     \n");
    printf("\t\t\t\t                         ``    `yMMMMMMMMm`                    :NMMMMMMMMMMMMMMMMMMMMMMMN+                    \n");
    printf("\t\t\t\t                              `oNMMMMMMMMh                    .yMMMMMMMMMMMMMMMMMMMMMMMMMN:                   \n");
    printf("\t\t\t\t                              oNMMMMMMMMMN-                  :dMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                  \n");
    printf("\t\t\t\t                             +NMMMMMMMMMMMd`                :mMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+                  \n");
    printf("\t\t\t\t                          `/yNMMMMMMMMMMMMMo               .dMMMMMMMMMMMMMMMMMMMMMMMMMMNmds/                  \n");
    printf("\t\t\t\t                          .ymMMMMMMMMMMMMMMN-              sMMMMMMMMMMMMMMMMMMMMMMMMNdo:`                     \n");
    printf("\t\t\t\t                            ./yNMMMMMMMMMMMMh`            .mMMMMMMMMMMMMMMMMMMMMMNdo-                         \n");
    printf("\t\t\t\t                               .+dNMMMMMMMMMMd:`          +MMMMMMMMMMMMMMMMMMMMms:                            \n");
    printf("\t\t\t\t                                  -odNMMMMMMMMMNy.        hMMMMMMMMMMMMMMMMMmy/`                              \n\n\n");
    color(4);
    printf("\t\t\t\t\t\t\t\tFerdian Peka : A Love Story Text Game\n");
    arrowhere(1,position);printf("START\n");
    arrowhere(2,position);printf("MINI GAMES\n");
    arrowhere(3,position);printf("HELP\n");
    arrowhere(4,position);printf("SHOP\n");
    arrowhere(5,position);printf("ABOUT\n");
    arrowhere(6,position);printf("UPDATE APPS\n");
    arrowhere(7,position);printf("CREDITS\n");
    arrowhere(8,position);printf("EXIT\n");


    keypressed=getch();
    if(keypressed==80&&position!=MAX)
    {
        position++;
    }
    else if(keypressed==72&&position!=MIN)
    {
        position--;
    }
    else
    {
        position==position;
    }
    }
    if(position==1)
    {
        title();
        intro();
        game();
    }
    if(position==2)
    {
        minigames();
    }
    if (position==3)
    {
        help();
        menu();
    }
    if (position==4)
    {
        gallery();
    }
    if (position==5)
    {
        about();
        menu();
    }
    if (position==6)
    {
        update();
        menu();
    }
    if (position==7)
    {
        system("cls");
        credit();
        menu();
    }
    if (position==8)
    {
        keluar();
    }

}
int update()
{
    system("cls");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\tooooo     ooo ooooooooo.        ooooooooooooo   .oooooo.        oooooooooo.         .o.       ooooooooooooo oooooooooooo      \n");
    printf("\t\t\t\t`888'     `8' `888   `Y88.      8'   888   `8  d8P'  `Y8b       `888'   `Y8b       .888.      8'   888   `8 `888'     `8      \n");
    printf("\t\t\t\t 888       8   888   .d88'           888      888      888       888      888     .88888.          888       888              \n");
    printf("\t\t\t\t 888       8   888ooo88P'            888      888      888       888      888    .8' `888.         888       888oooo8         \n");
    printf("\t\t\t\t 888       8   888                   888      888      888       888      888   .88ooo8888.        888       888              \n");
    printf("\t\t\t\t `88.    .8'   888                   888      `88b    d88'       888     d88'  .8'     `888.       888       888       o      \n");
    printf("\t\t\t\t   `YbodP'    o888o                 o888o      `Y8bood8P'       o888bood8P'   o88o     o8888o     o888o     o888ooooood8      \n");
    printf("\n\t\t\t\t\t\t\t\t\tVersion 0.1.5 Alpha");
    printf("\n\t\t\t\t\t\t\t\tCongratulations, your application is the latest version.");
    printf("\n\t\t\t\t\t\t\t\t");
    system("pause");
}
int keluar(){/*menaampilkan pesan dan pilihan keyakinan keluar program*/
    int position=1;
    int keypressed=0;
    #define MAX 2
    #define MIN 1

    while(keypressed!=13){
    system("cls");
    color(0);
    printf("\t\t\t\t                                                          ...`..-:/:.  ````                                   \n");
    printf("\t\t\t\t                                                      .:omNNNNNNNMMMNmmmNNmmy/`                               \n");
    printf("\t\t\t\t                                                    -hNMMMMMMMMMMMMMMMMMMMMMMMmo`                             \n");
    printf("\t\t\t\t                                                  :yNMMMMMMMMMMMMMMMMMMMMMMMMMMMm/`                           \n");
    printf("\t\t\t\t                                                 /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd-                          \n");
    printf("\t\t\t\t                                                `:yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.                        \n");
    printf("\t\t\t\t                                  ``````          /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                       \n");
    printf("\t\t\t\t                            `-+hddmddhs+`         +MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                       \n");
    printf("\t\t\t\t                       `:ohdmNMMMMMMMMMNy/        +NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.                       \n");
    printf("\t\t\t\t                     `:hNMMMMMMMMMMMMMMMMNo`      yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh                        \n");
    printf("\t\t\t\t         `:ohmmmmo+dMMMMMMMMMMMMMMMMMMMMMMMNs.     :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                        \n");
    printf("\t\t\t\t        /dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`    oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo                         \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   .mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy`                        \n");
    printf("\t\t\t\t        -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:` sNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`                        \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdo+/:mMMMMMMMMMMMMMMMMMMMMMMMMMMMMms.                         \n");
    printf("\t\t\t\t        hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd-`yNMMMMMMMMMMMMMMMMMMMMMMMMMMd.                           \n");
    printf("\t\t\t\t        -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo  `+hMMMMMMMMMMMMMMMMMMMMMMMMNh-                           \n");
    printf("\t\t\t\t         `-+NMMMMmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-   oNMMMMMMMMMMMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t            +hdds/NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   :dNMNmmdyssmMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t             ``` -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+    .-:-.``   /NMMMMMMMMMMMMNh:                           \n");
    printf("\t\t\t\t                 `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd+              /MMMMMMMMMMMMMMMm:                          \n");
    printf("\t\t\t\t                  :dMMMMMMMMMMMMMMMMMMMMMMMMdso/-.`               oNMMMMMMMMMMMMMMMm+.                        \n");
    printf("\t\t\t\t                   ./o+ohmmdhhoodMMMMMMMMMMs`                     -mMMMMMMMMMMMMMMMMMd-                       \n");
    printf("\t\t\t\t                         `.`:```+NMMMMMMMMd`                    .smMMMMMMMMMMMMMMMMMMMm:                      \n");
    printf("\t\t\t\t                           .``  +NMMMMMMMN/                    `dMMMMMMMMMMMMMMMMMMMMMMN+                     \n");
    printf("\t\t\t\t                         ``    `yMMMMMMMMm`                    :NMMMMMMMMMMMMMMMMMMMMMMMN+                    \n");
    printf("\t\t\t\t                              `oNMMMMMMMMh                    .yMMMMMMMMMMMMMMMMMMMMMMMMMN:                   \n");
    printf("\t\t\t\t                              oNMMMMMMMMMN-                  :dMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                  \n");
    printf("\t\t\t\t                             +NMMMMMMMMMMMd`                :mMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+                  \n");
    printf("\t\t\t\t                          `/yNMMMMMMMMMMMMMo               .dMMMMMMMMMMMMMMMMMMMMMMMMMMNmds/                  \n");
    printf("\t\t\t\t                          .ymMMMMMMMMMMMMMMN-              sMMMMMMMMMMMMMMMMMMMMMMMMNdo:`                     \n");
    printf("\t\t\t\t                            ./yNMMMMMMMMMMMMh`            .mMMMMMMMMMMMMMMMMMMMMMNdo-                         \n");
    printf("\t\t\t\t                               .+dNMMMMMMMMMMd:`          +MMMMMMMMMMMMMMMMMMMMms:                            \n");
    printf("\t\t\t\t                                  -odNMMMMMMMMMNy.        hMMMMMMMMMMMMMMMMMmy/`                              \n\n\n");
    color(4);
                printf("\n\t\t\t\t\t\t\t\t\tYakin ingin keluar?\n");
                arrowhere(1,position);printf("1)BERUBAH PIKIRAN\n");
                arrowhere(2,position);printf("2)YA\n");
                keypressed=getch();
                if(keypressed==80&&position!=MAX)
                {
                    position++;
                }
                else if(keypressed==72&&position!=MIN)
                {
                    position--;
                }
                else
                {
                    position==position;
                }
                }
     if (position==1) //saat memberi input 1, akan menjalankankan fungsi ribet()
     {
        system("cls");
        menu();
     }
     else if(position==2) //saat memberi input 2, akan menjalankankan fungsi help()
     {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tTerimakasih sudah menggunakkan program kami\n\t\t\t\t");
        system("pause");

        system("cls");
        exitscreen();
        return 0;
     }
        }
int help()
{
    int x;
    double y;
    char name1[] = "\n\n\n\t\t\t\t\t\t\tSelamat datang dari masa depan, Lo adalah seorang time traveler!\n\t\t\t\t\t\t\tArtinya lo punya kemampuan untuk kembalik ke masa lalu\n\t\t\t\t\t\t\tDengan kemampuan khusus ini lo berulang kali kembali dari masa depan\n\t\t\t\t\t\t\t\tuntuk bisa mendapatkan pujaan hati lo yaitu si lili\n\t\t\t\t\t\t\tsemoga stasus jomblo lu yang sejak dari embrio bisa lepas ya bro\n\t\t\t\t\t\t\t";
     system("cls");
     printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
     printf("ooooo   ooooo oooooooooooo ooooo        ooooooooo.   \n");
     printf("\t\t\t\t\t\t\t\t`888'   `888' `888'     `8 `888'        `888   `Y88. \n");
     printf("\t\t\t\t\t\t\t\t 888     888   888          888          888   .d88' \n");
     printf("\t\t\t\t\t\t\t\t 888ooooo888   888oooo8     888          888ooo88P'  \n");
     printf("\t\t\t\t\t\t\t\t 888     888   888          888          888         \n");
     printf("\t\t\t\t\t\t\t\t 888     888   888       o  888       o  888         \n");
     printf("\t\t\t\t\t\t\t\to888o   o888o o888ooooood8 o888ooooood8 o888o        \n");
    for(x=0; name1[x]!=NULL; x++)
   {
        printf("%c",name1[x]);

      for(y=0; y<=1000000; y++)
      {

      }
    }
    system("pause");
}
int gallery()
{
    system("cls");
    int choice;
    int a[]={0};
    int b[]={0};
    int c[]={0};
    FILE*nana=fopen("nana.txt","r");
    fscanf(nana,"%d",&uang[0]);
    fclose(nana);
    FILE*aaaa=fopen("aaaa.txt","r");
    fscanf(aaaa,"%d",&a[0]);
    fclose(aaaa);
    FILE*caca=fopen("caca.txt","r");
    fscanf(caca,"%d",&b[0]);
    fclose(caca);
    FILE*eaea=fopen("eaea.txt","r");
    fscanf(eaea,"%d",&c[0]);
    fclose(eaea);
    system("COLOR 0C");
    int position=1;
    int keypressed=0;
    #define MAX 5
    #define MIN 1

    while(keypressed!=13)
    {
    system("cls");
    color(0);
    printf("\t\t\t\t                                                          ...`..-:/:.  ````                                   \n");
    printf("\t\t\t\t                                                      .:omNNNNNNNMMMNmmmNNmmy/`                               \n");
    printf("\t\t\t\t                                                    -hNMMMMMMMMMMMMMMMMMMMMMMMmo`                             \n");
    printf("\t\t\t\t                                                  :yNMMMMMMMMMMMMMMMMMMMMMMMMMMMm/`                           \n");
    printf("\t\t\t\t                                                 /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd-                          \n");
    printf("\t\t\t\t                                                `:yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.                        \n");
    printf("\t\t\t\t                                  ``````          /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                       \n");
    printf("\t\t\t\t                            `-+hddmddhs+`         +MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                       \n");
    printf("\t\t\t\t                       `:ohdmNMMMMMMMMMNy/        +NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.                       \n");
    printf("\t\t\t\t                     `:hNMMMMMMMMMMMMMMMMNo`      yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh                        \n");
    printf("\t\t\t\t         `:ohmmmmo+dMMMMMMMMMMMMMMMMMMMMMMMNs.     :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                        \n");
    printf("\t\t\t\t        /dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`    oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo                         \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   .mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy`                        \n");
    printf("\t\t\t\t        -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:` sNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`                        \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdo+/:mMMMMMMMMMMMMMMMMMMMMMMMMMMMMms.                         \n");
    printf("\t\t\t\t        hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd-`yNMMMMMMMMMMMMMMMMMMMMMMMMMMd.                           \n");
    printf("\t\t\t\t        -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo  `+hMMMMMMMMMMMMMMMMMMMMMMMMNh-                           \n");
    printf("\t\t\t\t         `-+NMMMMmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-   oNMMMMMMMMMMMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t            +hdds/NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   :dNMNmmdyssmMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t             ``` -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+    .-:-.``   /NMMMMMMMMMMMMNh:                           \n");
    printf("\t\t\t\t                 `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd+              /MMMMMMMMMMMMMMMm:                          \n");
    printf("\t\t\t\t                  :dMMMMMMMMMMMMMMMMMMMMMMMMdso/-.`               oNMMMMMMMMMMMMMMMm+.                        \n");
    printf("\t\t\t\t                   ./o+ohmmdhhoodMMMMMMMMMMs`                     -mMMMMMMMMMMMMMMMMMd-                       \n");
    printf("\t\t\t\t                         `.`:```+NMMMMMMMMd`                    .smMMMMMMMMMMMMMMMMMMMm:                      \n");
    printf("\t\t\t\t                           .``  +NMMMMMMMN/                    `dMMMMMMMMMMMMMMMMMMMMMMN+                     \n");
    printf("\t\t\t\t                         ``    `yMMMMMMMMm`                    :NMMMMMMMMMMMMMMMMMMMMMMMN+                    \n");
    printf("\t\t\t\t                              `oNMMMMMMMMh                    .yMMMMMMMMMMMMMMMMMMMMMMMMMN:                   \n");
    printf("\t\t\t\t                              oNMMMMMMMMMN-                  :dMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                  \n");
    printf("\t\t\t\t                             +NMMMMMMMMMMMd`                :mMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+                  \n");
    printf("\t\t\t\t                          `/yNMMMMMMMMMMMMMo               .dMMMMMMMMMMMMMMMMMMMMMMMMMMNmds/                  \n");
    printf("\t\t\t\t                          .ymMMMMMMMMMMMMMMN-              sMMMMMMMMMMMMMMMMMMMMMMMMNdo:`                     \n");
    printf("\t\t\t\t                            ./yNMMMMMMMMMMMMh`            .mMMMMMMMMMMMMMMMMMMMMMNdo-                         \n");
    printf("\t\t\t\t                               .+dNMMMMMMMMMMd:`          +MMMMMMMMMMMMMMMMMMMMms:                            \n");
    printf("\t\t\t\t                                  -odNMMMMMMMMMNy.        hMMMMMMMMMMMMMMMMMmy/`                              \n\n\n");
    color(4);
    printf("\t\t\t\t\t\t\t\t\tSHOP\n");
    printf("\t\t\t\t\t\t\t\tYour Money is %d\n",uang[0]);
    arrowhere(1,position);printf("Ferdian 1 (money-=500)\n");
    arrowhere(2,position);printf("Ferdian 2 (money-=1000)\n");
    arrowhere(3,position);printf("lily 1 (money-=2000)\n");
    arrowhere(4,position);printf("GALLERY\n");
    arrowhere(5,position);printf("Main Menu\n");

    keypressed=getch();
    if(keypressed==80&&position!=MAX)
    {
        position++;
    }
    else if(keypressed==72&&position!=MIN)
    {
        position--;
    }
    else
    {
        position==position;
    }
    }
    if(position==1)
    {
        if(a[0]==0)
        {
            if((uang[0]-500)>=0)
            {
                a[0]+=1;
                FILE*baba=fopen("aaaa.txt","w");
                fprintf(baba,"%d",a[0]);
                fclose(baba);
                fprintf(aaaa,"%d\n",a[0]);
                fclose(aaaa);

                uang[0]=uang[0]-500;
                FILE*mumu=fopen("nana.txt","w");
                fprintf(mumu,"%d",uang[0]);
                fclose(mumu);
                printf("\t\t\t\t\t\t\t\tyour money is %d",uang[0]);
                fprintf(nana,"%d\n",uang[0]);
                fclose(nana);
                ferdian1();
                Sleep(5000);
                 gallery();
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\tMAAF UANG ANDA TIDAK CUKUP\n");
                Sleep(1000);
                gallery();
            }
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\tSUDAH DIBELI");
            getch();
            gallery();
        }

    }
    else if(position==2)
    {
        if(b[0]==0)
        {
            if((uang[0]-1000)>=0)
            {
                b[0]+=1;
                FILE*dada=fopen("caca.txt","w");
                fprintf(dada,"%d",b[0]);
                fclose(dada);
                fprintf(caca,"%d\n",b[0]);
                fclose(caca);

                uang[0]=uang[0]-1000;
                FILE*mumu=fopen("nana.txt","w");
                fprintf(mumu,"%d",uang[0]);
                fclose(mumu);
                printf("\t\t\t\t\t\t\t\tyour money is %d\n\t\t\t\t\t\t\t\t",uang[0]);
                fprintf(nana,"%d\n",uang[0]);
                fclose(nana);
                ferdian2();
                system("pause");
                 gallery();
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\tMAAF UANG ANDA TIDAK CUKUP\n");
                system("pause");
                gallery();
            }
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\tSUDAH DIBELI\n\t\t\t\t\t\t\t\t");
            system("pause");
            gallery();
        }

    }
    else if(position==3)
    {
        if(c[0]==0)
        {
            if((uang[0]-2000)>=0)
            {
                c[0]+=1;
                FILE*fafa=fopen("eaea.txt","w");
                fprintf(fafa,"%d",c[0]);
                fclose(fafa);
                fprintf(eaea,"%d\n",c[0]);
                fclose(eaea);

                uang[0]=uang[0]-2000;
                FILE*mumu=fopen("nana.txt","w");
                fprintf(mumu,"%d",uang[0]);
                fclose(mumu);
                printf("\t\t\t\t\t\t\t\tyour money is %d\n\t\t\t\t\t\t\t\t",uang[0]);
                fprintf(nana,"%d\n",uang[0]);
                fclose(nana);
                lili1();
                system("pause");
                gallery();
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\tMAAF UANG ANDA TIDAK CUKUP\n");
                system("pause");
                gallery();
            }
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\tSUDAH DIBELI\n\t\t\t\t\t\t\t\t");
            system("pause");
            gallery();
        }
    }
    else if(position==4)
    {
        system("cls");
        int Position=1;
    int Keypressed=0;
    #define max 4
    #define min 1

    while(Keypressed!=13)
    {
    system("cls");
    color(0);
    printf("\t\t\t\t                                                          ...`..-:/:.  ````                                   \n");
    printf("\t\t\t\t                                                      .:omNNNNNNNMMMNmmmNNmmy/`                               \n");
    printf("\t\t\t\t                                                    -hNMMMMMMMMMMMMMMMMMMMMMMMmo`                             \n");
    printf("\t\t\t\t                                                  :yNMMMMMMMMMMMMMMMMMMMMMMMMMMMm/`                           \n");
    printf("\t\t\t\t                                                 /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd-                          \n");
    printf("\t\t\t\t                                                `:yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.                        \n");
    printf("\t\t\t\t                                  ``````          /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                       \n");
    printf("\t\t\t\t                            `-+hddmddhs+`         +MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                       \n");
    printf("\t\t\t\t                       `:ohdmNMMMMMMMMMNy/        +NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.                       \n");
    printf("\t\t\t\t                     `:hNMMMMMMMMMMMMMMMMNo`      yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh                        \n");
    printf("\t\t\t\t         `:ohmmmmo+dMMMMMMMMMMMMMMMMMMMMMMMNs.     :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                        \n");
    printf("\t\t\t\t        /dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`    oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo                         \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   .mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy`                        \n");
    printf("\t\t\t\t        -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:` sNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`                        \n");
    printf("\t\t\t\t        yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdo+/:mMMMMMMMMMMMMMMMMMMMMMMMMMMMMms.                         \n");
    printf("\t\t\t\t        hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd-`yNMMMMMMMMMMMMMMMMMMMMMMMMMMd.                           \n");
    printf("\t\t\t\t        -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo  `+hMMMMMMMMMMMMMMMMMMMMMMMMNh-                           \n");
    printf("\t\t\t\t         `-+NMMMMmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-   oNMMMMMMMMMMMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t            +hdds/NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-   :dNMNmmdyssmMMMMMMMMMMMMMy`                            \n");
    printf("\t\t\t\t             ``` -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+    .-:-.``   /NMMMMMMMMMMMMNh:                           \n");
    printf("\t\t\t\t                 `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd+              /MMMMMMMMMMMMMMMm:                          \n");
    printf("\t\t\t\t                  :dMMMMMMMMMMMMMMMMMMMMMMMMdso/-.`               oNMMMMMMMMMMMMMMMm+.                        \n");
    printf("\t\t\t\t                   ./o+ohmmdhhoodMMMMMMMMMMs`                     -mMMMMMMMMMMMMMMMMMd-                       \n");
    printf("\t\t\t\t                         `.`:```+NMMMMMMMMd`                    .smMMMMMMMMMMMMMMMMMMMm:                      \n");
    printf("\t\t\t\t                           .``  +NMMMMMMMN/                    `dMMMMMMMMMMMMMMMMMMMMMMN+                     \n");
    printf("\t\t\t\t                         ``    `yMMMMMMMMm`                    :NMMMMMMMMMMMMMMMMMMMMMMMN+                    \n");
    printf("\t\t\t\t                              `oNMMMMMMMMh                    .yMMMMMMMMMMMMMMMMMMMMMMMMMN:                   \n");
    printf("\t\t\t\t                              oNMMMMMMMMMN-                  :dMMMMMMMMMMMMMMMMMMMMMMMMMMMd`                  \n");
    printf("\t\t\t\t                             +NMMMMMMMMMMMd`                :mMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+                  \n");
    printf("\t\t\t\t                          `/yNMMMMMMMMMMMMMo               .dMMMMMMMMMMMMMMMMMMMMMMMMMMNmds/                  \n");
    printf("\t\t\t\t                          .ymMMMMMMMMMMMMMMN-              sMMMMMMMMMMMMMMMMMMMMMMMMNdo:`                     \n");
    printf("\t\t\t\t                            ./yNMMMMMMMMMMMMh`            .mMMMMMMMMMMMMMMMMMMMMMNdo-                         \n");
    printf("\t\t\t\t                               .+dNMMMMMMMMMMd:`          +MMMMMMMMMMMMMMMMMMMMms:                            \n");
    printf("\t\t\t\t                                  -odNMMMMMMMMMNy.        hMMMMMMMMMMMMMMMMMmy/`                              \n\n\n");
    color(4);
    printf("\t\t\t\t\t\t\t\t\tGALLERY\n");
    printf("\t\t\t\t\t\t\t\tYour Money is %d\n",uang[0]);
    arrowhere(1,Position);printf("Ferdian 1 \n");
    arrowhere(2,Position);printf("Ferdian 2 \n");
    arrowhere(3,Position);printf("Lil1 1 \n");
    arrowhere(4,Position);printf("Main Menu\n");
    Keypressed=getch();
    if(Keypressed==80&&Position!=max)
    {
        Position++;
    }
    else if(Keypressed==72&&Position!=min)
    {
        Position--;
    }
    else
    {
        Position==Position;
    }
    }
        if (Position==1)
        {
            if(a[0]!=0)
            {
                system("cls");
                ferdian1();
                printf("\n\t\t\t\t\t\t\t\t");
                system("pause");
                gallery();
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\tBelom Dibeli");
                printf("\n\t\t\t\t\t\t\t\t");
                system("pause");
                gallery();

            }
        }
        else if(Position==2)
        {
                if(b[0]!=0)
            {
                ferdian2();
                printf("\n\t\t\t\t\t\t\t\t");
                system("pause");
                gallery();
            }
                else
            {
                printf("\n\t\t\t\t\t\t\t\tBelom Dibeli");
                printf("\n\t\t\t\t\t\t\t\t");
                system("pause");
                gallery();
            }
        }
        else if(Position==3)
        {
                if(c[0]!=0)
            {
                lili1();
                printf("\n\t\t\t\t\t\t\t\t");
                system("pause");
                gallery();
            }
                else
            {
                printf("\n\t\t\t\t\t\t\t\tBelom Dibeli");
                printf("\n\t\t\t\t\t\t\t\t");
                system("pause");
                gallery();
            }
        }
        else if(Position==4)
        {
            menu();
        }

    }
    else if(position=5)
    {
        menu();
    }
    FILE*mumu=fopen("nana.txt","w");
    fprintf(mumu,"%d",uang[0]);
    fclose(mumu);
    fprintf(nana,"%d\n",uang[0]);
    fclose(nana);

}
int ferdian1()
{
printf ("                                                    mmNNNNNNmmN                                     \n");
printf ("                                               NNmmmmdddddddmdmNN                                   \n");
printf ("                                            NmmmdddddddddddddddmddmNN                               \n");
printf ("                                           Nmmdddddmmmdddddddddddddddm                              \n");
printf ("                                      NN NmmmhddhmmmddddddddhddmhdmddhdN                            \n");
printf ("                                       NmmdmhddhmmmddhhdddhdhhmmdhmmdhhdmNN                         \n");
printf ("                                       NmdddydddmmdhdhhhhhhddymmdddmmdhhdmN                         \n");
printf ("                                      NmmddhydddmmhdhhhyydhddhmmdmdmmmddddN                         \n");
printf ("                                     NmmddddddddmdmdydyyddhmmdmmmmmdmmdddddN                        \n");
printf ("                                     mNmddddddmmdmmhdhhddddmmmmmmmmmmmmddddmNN                      \n");
printf ("                                    NNmmmmmmmmddmmdddddmmmmmmdmmmdmmmmmmddmm                        \n");
printf ("                                    NmmmmdmmddddmmddddmmmmmddmmdmmmmdddmddmmN                       \n");
printf ("                                    mmNmmmmmmmdmmmmmmmmmmmdmmmdomsymmddmmmmmm                       \n");
printf ("                                    mNNmmmmmmdmmddmmdymmmmmmmy+oh/:ymdmmmmmNN                       \n");
printf ("                                    m NmmmmmdohddhmdyymmmmmdysydyssodmmmmmNN                        \n");
printf ("                                     NNmmdmmd:yyhdhdshmmddo::shhhyyohmddmN                          \n");
printf ("                                        myddho:oos+:+dd+/o-..:-:oo+/ddyd                            \n");
printf ("                                       Nmmysy:-....:/y+.--.........odod                             \n");
printf ("                                       NNNmhso.......:/--..........oshN                             \n");
printf ("                                          Nmmd:.......-++........./dmm                              \n");
printf ("                                            Nmd/.......//-.......:dmmN                              \n");
printf ("                                            mmmms-...::://::-...+dmmN                               \n");
printf ("                                           N Nmmd++-...-/-...-/ommm                                 \n");
printf ("                                              NNm+/++/-....-+o+sN N                                 \n");
printf ("                                               Nm//+/++++++o+/:omN                                  \n");
printf ("                                              Nmd/--::::::::-..ymmm                                 \n");
printf ("                                            Nmmms:.`.-::::-.``.sdmmmN                               \n");
printf ("                                          Nmmmdm/-````....`````.dddmmmmN                            \n");
printf ("                                      NNmmmmmddm+:..``````````:smdddmmddmmNN                        \n");
printf ("                                NNNmmmmddmmddddmo///::---..-:/+ddddddmmddddmmmmNN                   \n");
printf ("                           NNmmmmmddddddmmddddmms`...-:-.-:-..smmdddddmmdddddddmmmmNN               \n");
printf ("                       Nmmmmmddddddddddmmddddmmdy.```````````:mdmmddddmmddddddddddddmmmmN           \n");
printf ("                      Nmddmddddddddddmmmddddmmddd.``````````-hdddmmmdddmmdddddddddddmmddm           \n");
printf ("                      mdddmmdddddddddmdddddmmdddd/`````````.smdddddmmmddmmddddddddddmmddmN          \n");
printf ("                     Nmdddmmddddddddmmmmmmmmddddms`````````/dddddddmmmmmmmddddddddddmmddmN          \n");
printf ("                     Nmddddmdddmmddddmmmmmdddddddh.```````-ddddddddmddmmmddddddddddmmddddm          \n");
printf ("                     mdddddmmddmmddddmmddddddddddd:``````.smdddddddmdmmmmdddddmmdddmmddddm          \n");
printf ("                     mddddddmddmmdddddmmmddddddddmo.````.+dddddddddddmmmddddddmmdddmdddddmN         \n");
printf ("                     mddddddmmdmmdddddddmmmdddddddh-````:ddddddddddmmmddddddddmmddmmdddddmN         \n");
printf ("                    Nmddddddmmdmmddddddddmmmddddddm+```-hddddddddmmmddddddddddmmddmmdddddmN         \n");
printf ("                    Nmdddddddmmmmdddddddddmmmmdddddh.`.ymddddddmmmmmmmmmmmmmddmmdmmdddddddm         \n");
printf ("                    Nmdddddddmmmmdddddddddddmmmmdddm+.sddddddmmmmmmddddddddmddmmmmmdddddddm         \n");
printf ("                    Nmdddddddmmmmddddddddddddmmmmmdddymddddmmmmdsyysossoyddmddmmmmddddddddm         \n");
printf ("                    Nmdddddddmmmmdddddddddddddmmmmmmmmdddmmmmmdy/.-::---oddmddmmmmddddddddmN        \n");
printf ("                    Nmddddddddmmmdddddddddddddddmmmmmdddmmmmmmddo//////+yddmddmmmmmmddddddmN        \n");
printf ("                    Nmddddddddmmmddddddddddddddddmmmddmmmmddmdyyo//////+osymdddmmdmddddddddm        \n");
printf ("                    mmddddddddmmmddddddddddddddddmmdmmmmmdddmdysy+/:.:/oyshmdddmmmmddddddddm        \n");
printf ("                    mdddddddddmmdddddmddddddddddmmdmddddddddmmddhyyo+oyyhddmdddmmmmddddddddmN       \n");
}
int ferdian2()
{
printf ("                                       N NNNmmNNm                                                   \n");
printf ("                                       NhhddddddddmN                                                \n");
printf ("                                     mmhyhhddddmmmmmm                                               \n");
printf ("                                     mhhhyhhddddddddd                                               \n");
printf ("                                     Nhdhddddddmmdddd                                               \n");
printf ("                                     NmdhmmhdhdmmmmmmN                                              \n");
printf ("                                      Nmhh:-:/+shshy                                                \n");
printf ("                                       Nm+....-::+Noh                                               \n");
printf ("                                        m`.--:+oss+s-N                                              \n");
printf ("                                      Ndho.`-/sho+:.-+N                                             \n");
printf ("                                  NNmhhddmh:.:/hoh/.--+N                                            \n");
printf ("                                ddddhhddmmmd+--oddds:--sm                                           \n");
printf ("                                shdddmdddmmmms-+mmmdyssydm                                          \n");
printf ("                                shddmNmddddmmmy+mmmhdmddmm                                          \n");
printf ("                                dhhdmmNmdddddmmdmmdoymmhmmm                                         \n");
printf ("                                 yhddmmNmdddddmmddmhymmmmmm                                         \n");
printf ("                                 mhhdmmNmmdddddmmmmmmNmmmmmm                                        \n");
printf ("                                  yhhdmmNmmddddmmmmmNNmmmmmdN                                       \n");
printf ("                                  yhhdmmmddddddmmhdmmNmmNmmmm                                       \n");
printf ("                                  hhdddddddddddddddddmmms++sod                                      \n");
printf ("                                  Nddmdmmmmmmmddmmmmmmmd+/+osm                                      \n");
printf ("                                    Nmhdmmmmmmmmmmmmmmmdhyhm                                        \n");
printf ("                                     NshdmmmmmmmNNmNNmd                                             \n");
printf ("                                     mshhddddddmmmmmmmdN                                            \n");
printf ("                                    Nyyhhdddddddmmmdmmdd                                            \n");
printf ("                                    msyhhdddddddmmmhmmmh                                            \n");
printf ("                                    hyhhhdddddddmmmmmmmdm                                           \n");
printf ("                                   Nsyhhdhhdddddmmmmmmmdd                                           \n");
printf ("                                   hshhhhddddddmmmmmmmmddm                                          \n");
printf ("                                   shhhhdddddddmmmmmmmmmdd                                          \n");
printf ("                                  mshhdddddddmmmmmmmmmmmddm                                         \n");
printf ("                                  dhddhddhhmmddmmmmNmmmmmmm                                         \n");
printf ("                                  NNdyyhyhshhhdmdmmmddddh                                           \n");
printf ("                                   mosddydhmddNmmNNmddmdd                                           \n");
printf ("                                   oooyysshdhN ddmmddddhd                                           \n");
printf ("                                  N+ohdydsmdd  hdmmddddhm                                           \n");
printf ("                                  y+oyssshdd   yhdmddhdyd                                           \n");
printf ("                                  ooyhyhsdhN   hddmmhhdym                                           \n");
printf ("                                 mooyssshdm    hhhddhhhyN                                           \n");
printf ("                                 sosysyydd     dhdmmhhdy                                            \n");
printf ("                                Nooyosohd      myhddhyhh                                            \n");
printf ("                                hsyhsshdN      Nyhmmdhdh                                            \n");
printf ("                                ysyooshm       Nyyhdhyyd                                            \n");
printf ("                               dsyysohd        Nshdmhhdm                                            \n");
printf ("                               ssyssydm        NsyhdyyyN                                            \n");
printf ("                              Nsyhyshd         Nsyddhhd                                             \n");
printf ("                              yohyyhdN         msydhhhd                                             \n");
printf ("                             msyysshd          dyhdhhdd                                             \n");
printf ("                             sshyyhdN          dyhmdhdd                                             \n");
}
int lili1()
{
    printf("                                                                           .-::/+syhhyyso+/-`                                                                             \n");
    printf("                                                                       `:oyhhhddddhhhhhhhhhhhyo/.                                                                         \n");
    printf("                                                                     .ohhhhhhdddhhdddddhhhhhhhhhhy+.                                                                      \n");
    printf("                                                                   .ohhhhhyhhhyhhhhhhdhhhhhyyyhhhyhhs-                                                                    \n");
    printf("                                                                  :yhhhhhhhhdhhhdhhyhhhhhhhhyyyhhhhyhho.                                                                  \n");
    printf("                                                                 :yhhhhhyhhhdhhhhhyhhhhhhyyhhhyhhhhhyhhy:                                                                 \n");
    printf("                                                                -yhhhhyhhhhhdhhhhhyhhyyyshyssssyhhhhhhhhy/                                                                \n");
    printf("                                                               .shhhhyhddhhyhyhhyysyyos++shoossshhhhhhhhhy/                                                               \n");
    printf("                                                              `shhhhhhdhhyyhyhsoooyooossyyhyyhhyyhhhdhhhhhh/                                                              \n");
    printf("                                                              +hhhhhhhhhysososyoyyshsyhyhhhhshhhyhhyhdhhhhhh/                                                             \n");
    printf("                                                             :hhhhhhhyhssyyyyyhsyhhhhyhhhhhdshdhhhhyyhhhhdhhy+.                                                           \n");
    printf("                                                            `yhhhhhhyshyyyshhhhyohhhhsyhhhhd:oh+ys/ysyhhhhddhhy/`                                                         \n");
    printf("                                                            ohhdhhhhyshyyhshhhhh//yhhh/+yyss..-.-:.+yyhhhhhdhhy+o+`                                                       \n");
    printf("                                                          `ohhdhhhhhyyhhohh/yhhhy::oo+:```./+shdhsyoyhhhyhhhdhyo.:o/`                                                     \n");
    printf("                                                         .oyhhhhhhhhhhhd-+s/.+o+:.```     -sddyys`+:+yhdhyhyhhhy+`.yo`                                                    \n");
    printf("                                                        .:-yhdhhhhhhhhyh/.+osyys+`        ``+sos+..`/hyhhhyhhydhy: /ys`                                                   \n");
    printf("                                                       .-`ohhhhhhyhdhhhyyhsydhys:`          `..``   /hyhhhhyhyhdhs`:yy+                                                   \n");
    printf("                                                      `+ /hhhhdhhyhhhhyyh+-.oyoo/                   +hydhyhhhyyhhh-/ss:                                                   \n");
    printf("                                                      //`yhyhhdhyhdhdhhyh:```...`      `           .yhhhhyhhhyhydh+s+.                                                    \n");
    printf("                                                      +o/hyyhhdhhhdhddhhhy-                        +ddhhhhhhyyhhyho:`                                                     \n");
    printf("                                                      -oyhhhhhdhhdhhhdhhhho:`             ``      .shddhhhhhhydhys`                                                       \n");
    printf("                                                       :oyhhdhdhhdhyhddhhhhhs.       ``````     `:++shdhhhhhhhhyh/::-:--                                                  \n");
    printf("                                                        `-+yddddhdhyhddhhhdhys-.`             `-.:oosydddhhhhhssyoo/:-:o                                                  \n");
    printf("                                                        :+:-++oyyyyhhhhddhhho/:`   `/--....----:    /syyo/+ssysysssoo::-                                                  \n");
    printf("                                                        o/://o+os/o/syyhhdsh+` -::::+----------+/////+syysoohdddys+/++/`                                                  \n");
    printf("                                                        /o:+/+yosssosos+:soyy--oooo+o----------/oosoo--yyyssddhdhdyo++/`                                                  \n");
    printf("                                                        .os+oosshhhhoo+:-+o::yoo/+o+:..---------+sooo+.ssshhdyoshhhs:.                                                    \n");
    printf("                                                        .o//+syhhhhhhs/sooo``sys://+-``````.--://+ooooossooyo.`.-:syo`                                                    \n");
    printf("                                                         ./yydys+::/ss:soso/ooshs:/::---.` `::/:::/+oss-.``:y:``.`-/ys-                                                   \n");
    printf("                                                         `+hhh.`....`.-:::-+ssoyh+:-`-/::..--.-:/::/oss:````/s...`--oyy/`                                                 \n");
    printf("                                                        `+yshs``````..`..---osssyo:-/yo:/:/:+/-:::/oooo+````.+/.``.-.+oy/                                                 \n");
    printf("                                                        -s.oh:```````..```../osyyo/yyyys+/:+sys//+o+++so:```.-s-``.``/s-s.                                                \n");
    printf("                                                        `o.+h``````..`..````:oyyyyysy+syysosohyoys+ossooy:```-h:``.``:o::+                                                \n");
    printf("                                                        `o.+h``````..`..````:oyyyyysy+syysosohyoys+ossooy:```-h:``.``:o::+                                                \n");
    printf("                                                         `:oh.``````...-````oydhhshshsshysoosyyy++syoossy-```/h:`````--:`y`                                               \n");
    printf("                                                           .so```````.-.-`...ohhy/ossyosyyyosyyosyooysssy/``.yy-`.```---`y/                                               \n");
    printf("                                                            `+.````````.--.``.ydy//yoy+shs++/oyyysso//yyyo..os-.-.```-`-.ys                                               \n");
    printf("                                                           `:-.````````.:````+yho/ooyyyso++./ssyhs+ossyoo+o+-``--```-`.-yy`                                               \n");
    printf("                                                             :-....``````:.```-yhh/oyyyss+/::-+o+ssyyyhoo/++.```.-.``-``-sy.                                              \n");
    printf("                                                             .-..``...```.:.```oyhysos+so::::--ssooosyyso//o`````.-`.-```:y.                                              \n");
    printf("                                                              -``...`.-...--.`.o+oossooso::/::.s+osssssoo+/s:````.----```.o`                                              \n");
    printf("                                                              .-```.----::-`-..+/osssysso/:////sooooo++/://s/````---.-````:.                                              \n");
    printf("                                                               :/.`---........-```/so//+//:/o//oo//:/::::/+s:```.---.-``.`.:`                                             \n");
    printf("                                                               sy-.```-`-....`--.``os+++///+o+-oo+::/:/:/+oo-``.--:-.-`-.``-:`                                            \n");
    printf("                                                              /hhy-...--..--:..::-.-ssosoosooo-ooo//++o++-..``./:-:::-.-.`.--:.                                           \n");
    printf("                                                             -yhhdo.`-/----.-:----:/+:-/ooooos/+ss+/:::-`````..:/:...``.--..`.--`                                         \n");
    printf("                                                           .yhhhhhdh:--........-:--:+/:-----..````.-.````````````-:+/::-..-....--`                                        \n");
    printf("                                                          -yhhhdhhdhy:-.``````.-----.-.``.``````.--.```````````..:/-.```````....--`                                       \n");
    printf("                                                        `/yhhydhhdhhhs--````..-..```:.`````````..````````..--::::-..````````````.--                                       \n");
}
int lili2()
{
printf ("                                        `.----.``                                                   \n");
printf ("                                    `-/oyyyyyyssso+/.                                               \n");
printf ("                                 `.:oyyssoooosysyyhhho-                                             \n");
printf ("                               `./shddhddhyo//oyysshddyo`                                           \n");
printf ("                              `-+osyyhysyssss+shhssydhyds`                                          \n");
printf ("                             `:/++ooooooso+oshddhyyhhdhdd/                                          \n");
printf ("                             /yy+oyo//soyhhddddddhyyhddddy`                                         \n");
printf ("                            `yddddddddddmmdmddddhhdhhdddmd-                                         \n");
printf ("                            :dmddhsdmmmdhddhdddddddddhhhdh/                                         \n");
printf ("                            /dmmmo-yddddyyhyshhhdddhmdysss+--.                                      \n");
printf ("                            /dmmm/-/sysys++oosyhyhhhhhsyhhhsoh.                                     \n");
printf ("                            /dmdd+/sso:-:-..:+hy+hyyh+/syydyhy-                                     \n");
printf ("                           .+sddd+/+s+```````.//:yyyh+:shhmdd/:.                                    \n");
printf ("                          .o//hhhs--:-........--:shyyyyddddmhso-                                    \n");
printf ("                          `:-ohdddo--....````...:+dhoyddyyhs++ss`                                   \n");
printf ("                            `shooys+.``````.```.+oydsssys+o+:/o+-```                                \n");
printf ("                             /o..++:::```````:+:/odhoooo++oo+ooo/:-::.                              \n");
printf ("                             `-.-+/::.``.````-s+/syss++++oso/+yo///++/`                             \n");
printf ("                              .:+o+++```....-`++ssooo++++oso+oo/oyssoo/`                            \n");
printf ("                              .++o++:---:-:--:yhyooso+///+oo/:.`.+hso+/                             \n");
printf ("                             `..+:.----/:-:::-/h+oss+oooooo:.   ``sho/.                             \n");
printf ("                            .` `:`-...-s-./.+..:/+ss++++++-.`  `.`.hhs/``                           \n");
printf ("                            - `-`````.-s/...```.//h+/://:...````.``odhyo:...`                       \n");
printf ("                            ``-`.````.-s/...`.`.+:+-`.::..--.`` ....sso+++ooo+:`                    \n");
printf ("                              .....--:/:---....-:/-/-:/--.`..`  --`.//:.`..-shhs`                   \n");
printf ("                              :...-:://.:-::---.-:--o/-.....`  .:--`./:/-`  odmN-                   \n");
printf ("                             `+:..---:/.:://::--`..:-s/---.   `/:.` `:/+hs::hddy`                   \n");
printf ("                           `...------//-/::--.-:-``::/s:....``:/..   .-+yhhddd+`                    \n");
printf ("                           ````-:-.-o/:.:/--..-o/.`.+::o...` -+-.` ```  .ydddh+.                    \n");
printf ("                           ```.-..-/s:ss://--.--..`.::./..` .+/-.``..```sdd/`:sy+`                  \n");
printf ("                         ` ` `...-/-/ho`-://-......-.`--```./+...``..``-smo    :ys.                 \n");
printf ("                            `...--::sd+`.////:-....:.``-...-+:...```````/ys`    -yy.                \n");
printf ("                        `  ``...-::/yoy``::///-....-` `-...+/......``   `-sso/-..+d+                \n");
printf ("                        ` ````.--.-oy.-`-::///:-.......-../+-.........`  `:shhhhhhmd:`              \n");
printf ("                         ```..--.`.:h. `:::///+:-.....```-+/.............`..`-/sdmddddo-`           \n");
printf ("                       `--..--.`  -.y/:-////o+/:--..... .++:............-...``-oyo+yhohds:`         \n");
printf ("                    `:syhhhyhhysooo+yo+ossyyhsoo/......`:++-----...---.-..```-s+.  /y:`/hy+.        \n");
printf ("                   `ohhhhhddmdhyhyhhhdddddddddddh+/:--:/o++////+++/:-.---:.` ``   `s/.- .yso`       \n");
printf ("                   +hhhhhhddmyhyyyyhhdddhhhhhhhhhhhhddhyo+/+++ooossss-```.--.``  .s+` -  .ss-       \n");
printf ("          `..`     hhhhhdddmdyhyyyhhdddddhhhhhhhhhhdddddho+oosossyyys:..``..-..`-s/`.-`  `sy.       \n");
printf ("         `+///:`  .ddddddmmmdhhyyhhdmmmmdddddhhhhhhhhddddsyo+++oooy:..`````:....s/--.   `oh/        \n");
printf ("         `++::::. -mmmmmmmmmddhhhddddddmmmmmmdddddddddddmhhs/+/o+s+```````.-``.`- ``   .os:  `      \n");
printf ("          :++/:-:.`+dmmmmmmmdmdddddddhhhhddddmmmmmmmdddmmmmh+ossos+........`  `-```  `:+-`  `.      \n");
printf ("          `:::/++:``-ohmmmmdmmmmmmdddhhhhhhhhhddmmmmmmmmmmmmhyhooo+......` `-  ..::..+.  `..-`      \n");
printf ("          ````..-`````.:oyhddddmmmmmddddhhhhhhhhdddmmmNmmmmmmddsoss.-o/:`  `:` ``-/+y+:::-.`        \n");
}
int lili3()
{
    printf ("                                ./oyhhhdhhyyss+/-`                                                  \n");
printf ("                              .+hhddddhhhyhhhysso+:`                                                \n");
printf ("                            `+hhhhdddddddhhhhhhyso+/-`                                              \n");
printf ("                           :yhddhdddddhhhhhhdhhysoo+::.                                             \n");
printf ("                          +yhhhhhhhhhdhhhhyhdhyysoss+/:-                                            \n");
printf ("                         /syydhyhhhyydhyyyhyhdhhhyyyoo+/-                                           \n");
printf ("                        `yhdydhyyhhysyhhyhhdhhhddhhhyoo+/`                                          \n");
printf ("                        :ddddddhhhhhhh/yhyhhddhhddhdhyso+-                                          \n");
printf ("                        sddddsdhhhhhhh/:oyhhhhddhhhddhyss/                                          \n");
printf ("                       `hdhdh/hhhhhyyhs--/oyhhhhdddhdhhhy+                                          \n");
printf ("                       :ohhys/ohhhhhosh:.--+syhhhhhdddhhh+                                          \n");
printf ("                       /-hho-/-ooyso:./:/+oo/-:syhyyhddhhs-`                                        \n");
printf ("                       +/yy+./o+:..```.osmNmys.:yh+:yhddhy/:-                                       \n");
printf ("                       ossys/osdy.``````.sss/..-yh/-ydhhhys-`-                                      \n");
printf ("                       +o+yyy:-os-```````.--....yy+shdddhyso`+-                                     \n");
printf ("                      `/hhdyhs.--.````````....`-ssyhhhdddhys+s.                                     \n");
printf ("                      ..-hmdhh/....```````````.+soyhhdmddhyo+s`                                     \n");
printf ("                      +: :ddhhho:...````````.:oyy+:shmmmdyo/:`                                      \n");
printf ("                      .+/:/hhhhhhs/.......:osyyyy+-+/yosoo:.`                                       \n");
printf ("                           yhhyshho```````.-+soo/-:+/syys+/o.                                       \n");
printf ("                           hdyhhho` ``````-.``.``..-+/yy+-/:.                                       \n");
printf ("                          `ddyydd: ``````.--``````.`:hmd:.--                                        \n");
printf ("                          :ddyhdd-`````..-.`.`````..odmm+.                                          \n");
printf ("                          sddhmdd:.``````.``..`````/ddmms.`                                         \n");
printf ("                         :/shdddd/--..`.```.:``````ydddmy. `                                        \n");
printf ("                        `+`ohdhddo--.-.``.`-:`````+hddddy.``                                        \n");
printf ("                        /. ysyhddy::-```.`./.````:hddhhds-``                                        \n");
printf ("                       `o .h:sdds:.`````.`-/````-hdddhhd+:` .                                       \n");
printf ("                       -s /y`odds``...`.`.::```-ydhdhhdh/-` -                                       \n");
printf ("                       -y`s/ sdoh/.-.`.`.:/-..-yy+ddhhhy:.  ..                                      \n");
printf ("                        o:s` sh:so-...``-:/-..oo-sddhdh+.   ```                                     \n");
printf ("                        .ss`.yo:o+.-.``..::-.-+-.dmhdhs:`   ` `                                     \n");
printf ("                         +s./ho:oo-:```..::--o/--dmddh+`    `` `                                    \n");
printf ("                         oy/ydh+oy:.``.`---:-ys--smmdy+.``  `.  `                                   \n");
printf ("                         syoddds/h+ `-...:.::sdo:+hmhss...``...``                                   \n");
printf ("                         yhhdddh/s.`-.`.-:.`-/hmhssds-s/........``                                  \n");
printf ("                         ydssdddo+.--.-`:::.`.:sdmhyo:y+-...``...``                                 \n");
printf ("                         +dhsosdy.----``::-:.``.:ymhsshs````.`....``                                \n");
printf ("                         `odh/-dh.-:-```::..-.``.:mddhyo``.-``.-...``                               \n");
printf ("                           -y:odh--``...-:.``--``.yddhyo-..```----..```                             \n");
printf ("                           `//hdh. `..`.`--````..`/dhhhso-``````-----``                             \n");
printf ("                           -+hhhh:`--``.-`--`````.-hdhhy/o-````.-.`..-``                            \n");
printf ("                           /yhhhh+-:```.:.`.-`````+yhdhd+:+-......```````                           \n");
printf ("                          /oohhhhy-````-:-``.-```-d+hdddy.-/.....`````````                          \n");
printf ("                         -/-yhddho ``..-:--```..`sm:ydddy-o.....``````.`..                          \n");
printf ("                        `-`+hydho```.----.-.```.:dd:+dddoyo.```..------.`..                         \n");
printf ("                        -`.shhy+`  -``.--``..```ody:+ddhdo``..`````...``````                        \n");
printf ("                        -+.ohhho/-`.-`.-`````.``sdo.ohyh/``````.`````````````                       \n");
printf ("                         /o:yhdh/-:/---:-.``````/hs.yy+-.----..``...``````````.``                   \n");
printf ("                          `+oyyhhs+h+/:--:--.----ohyy-``````.....``......```````.                   \n");
}
int lili4()
{
printf ("                                               `  ````..:++++o+::::-.```  `                         \n");
printf ("                                               `  `.:/+osossysssssooo+/-`` `                        \n");
printf ("                                          ` `````:+oossyyyyyyyhyyyysssoo+.                          \n");
printf ("                                            ```./ossooshhhhhhhhhhyyyyysss+```                       \n");
printf ("                                              `/ossyhhhhhhhhhhddhhhyyyyso+:```                      \n");
printf ("                                          ` `-syyoshhhyyyhyyyhhhhhhyyysssss-```                     \n");
printf ("                                            -yhyyddyyossyyyyyyyyyyyy+syyysso.```                    \n");
printf ("                                           `yhydddhhsoyyyyhysosyyyyyhoyyyyss-```````                \n");
printf ("                                          `/hhddhhysoddddddhyyyyyhyyhhsyyyss:```````                \n");
printf ("                                      `   .yhdhhy+sosddhdddysyooyhhhyyhssyys:.``````                \n");
printf ("                                      ` ``+ddhyy/o++shhshhhso+:/shdyyyhhsyys:..`````                \n");
printf ("                                 ```   ``+hdhyy+o:/:ossosyy++-`/-sdyyyydhyys:..``   `               \n");
printf ("                                   ` ``.+/yyyso+:`--+++++o+-/``./-yyyyydhysy-..``   `               \n");
printf ("                                   `  .o/.oyoso+//+:--:--:-.-`` ./+ssyyhyyss:-.``   `               \n");
printf ("                                     `/o``:yos/.`:yy/ `` ``-/+++/:osssyhyyys/--``   `               \n");
printf ("                                 ` ``.s: `:y+s/-`-/:-`    ``./syy/osssyyysyso/-`` ``                \n");
printf ("                                 `  `.y/ `+yoss/....```  ````-----osss+yyosss+:`````                \n");
printf ("                                   ```/o-.sysyyy+```` ` ` ```....+ssssoysssss+-`````                \n");
printf ("                                  ``` `:///yyyhyy/.   ```  `````-ssssysosssss+. ````                \n");
printf ("                                    `` /..os/sssyys/.````` ``.-:ossssysssssoo:` `   `               \n");
printf ("                                   ````./os::+:+sy/://:-.---::/+yyysooso+ho:o-``    `               \n");
printf ("                                 ````.++--:``.-:oy//////:::/+++syyy+--+soss./.      `               \n");
printf ("                                  `-++-``.````-:os/shs:/:/+:/+/hyyo:-..-/os//```    `               \n");
printf ("                         ``    ``.+o:```.` ```-/ys/+s/++ooo..-/yso:-.````.-//```   ``               \n");
printf ("                         `` ``` .so.`..-.`````-/yo/os//oo:/:.:syy/.``````...:-`` ``                 \n");
printf ("                           ``` `.so/+o++/:--. ./yo++o++++//--:yy+.``` ``````-+.```                  \n");
printf ("                            ````-+++/++o++/-:`-sy+/:-::+/:/--oho.    `` ````.:+.                    \n");
printf ("                         ` ```..:///:-::///-:-o/s+/:./::/+:-/hy- `  ``  ````.-:+`                   \n");
printf ("                         ` ``````.:/:--/:-.`..:-/o:`-:-:::-/hho`` `..`  ` ``-.-+.   `               \n");
printf ("                         ``.``.....-:.:/:----..`-/.`:-----+hhy/````--. `` `.-.`/.   `               \n");
printf ("                         ``.`-:////+--/+//::-..``- -------sh:y/```.-..`````o-.`/.  ``               \n");
printf ("                           .`...--:/::////..`.`` ..:-----+y/./:```--.-.```-y:`./` ```               \n");
printf ("                           ``...--:////++/---.   .:-:----yo``````.--.`-.`.-y+.:-` ```               \n");
printf ("                         `  -...-:::////://:++```-:....:/h+-.....-...`.--:-os-.`` ```               \n");
printf ("                         ` -s:`.-:::-------/++:--:-`.-.-/ho......-`.``.-+:-/s.` `````               \n");
printf ("                         `.os+.:/+++:---::.+o//::--..-``.os-......````.-y--:s-`  ```                \n");
printf ("                ``   ` ` .osso:://:--:/+oso++/+/----..```-:--....`````.os-.-o: ```                  \n");
printf ("                ```  `  `+osoo/---::///+hh+++/+/--...````..`.--:`````.:y+..-o/ ` `  `               \n");
printf ("                ``    ``/os+/-.....-/:::dd++///:.//:...```.``.---```..ss:..-o+ ` `  `               \n");
printf ("                 `   ` -++:-.....```::::dmo//:/:.::::-..``..````--.../yo-.`-o/ ` `  `               \n");
printf ("                 `  ```//.......````----dms//::-`-:-::-..``..```.--.-so/-.`:o:     `                \n");
printf ("                `   ` .+-`.....`````....hms/:--. ----:-:o:...````-.-/o+:.``/+-  `  ``               \n");
printf ("                `   ``-/.``````````-````sms/---. .------hmo--....--:o+/-.``+/``    ``               \n");
printf ("                `   ` -/``````` ``.```` ohs/-.-. .------yNo---::--:++/:-``-+: ```  ``               \n");
printf ("                `   ```/.```````````    shs/---. .-----.sm/....---////:-``:/`` `   ``               \n");
printf ("                     ` ..````` `````    ohs/---. ------.sd/...``..://::.`.+.`                       \n");
printf ("                      ` ```    `.````   /hyo/--. ------:yd/```````.//::.`-.``                       \n");
printf ("                         ``  ``..````````/oyy+:. :-:/+oyh+.```` ```-/::````                         \n");
printf ("    `````                ``  `....`````````-oyy/:osyys+:.``     ```-:::`  ```                       \n");
printf ("  ``````                 `   ```...``````````-oyhdy/.`` ``` ````.....:/``                           \n");
printf ("  ``````                 ` ` .``````````-:.````-+yhyo.```````.....```./.``                          \n");
}
int about()
{
    int x;
    double y;
    char name1[] = "\n\n\n\n\n\n\t\t\t\tFerdian Peka:Love Story Text Game, merupakan salah satu game yang diluncurkan pada tahun 2019.\n\t\t\t\tFerdian Peka:Love Story Text Game ini sendiri merupakan hasil pengembangan dua anak muda\n\t\t\t\tyaitu Ferdan Julianto dan Philipus Renaldi yang merupakan mahasiswa jurusan Teknik Komputer \n\t\t\t\tUniversitas Indonesia. Game ini sendiri pun ternyata merupakan salah satu dari pengembangan dari \n\t\t\t\tproyek salah satu mata kuliah di jurusan teknik komputer yaitu pengantar teknik komputer";
     system("cls");
     printf("\n\n\n\n");
    for(x=0; name1[x]!=NULL; x++)
   {
        printf("%c",name1[x]);

      for(y=0; y<=1000000; y++)
      {

      }
   }
   printf("\n\t\t\t\t");
   system("pause");
   lili4();
   system("pause");

}

int sponsor()
{
    system("COLOR E");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t       -+syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy/:                                                         \n");
    printf("\t\t\t\t       -:Nh:do/M/oh/yomoy/+h/yNMh+my+MNMM-:                                                         \n");
    printf("\t\t\t\t       -:Ny/:/.s/.m.N/d/s-:y.yNMN.Moyh-yM-:                    smhyo/:.                             \n");
    printf("\t\t\t\t       -:NmdymyyNddyNdyymhddsymMMyMyMMyMM-:                    smmmmmmmmhy+:.                       \n");
    printf("\t\t\t\t       -:Nd-//:---------------:+s/-----hM-:                    smmmmmmmmmmmmmds:                    \n");
    printf("\t\t\t\t       -:Nh-++/         -oshmMMMMd     yM-:                    smmmmmmm+ -dmmmmmh-                  \n");
    printf("\t\t\t\t       -:Nh`dNMMMMMMMd` :MMMMMMMMMm`   yM-:                    smmmmmmm-  smmmmmmmd                 \n");
    printf("\t\t\t\t       -:Nh yMMMMMMMMMd` NMMMdMMMMMo   yM-:                    smmmmmmm-  smmmmmmmm.                \n");
    printf("\t\t\t\t       -:Nh `NMMMMNNMMMy hMMMydMMMMN`  yM-:                    smmmmmmm-  smmmmmmmm.                \n");
    printf("\t\t\t\t       -:Nh  oMMMMMsNMMMsoMMMm:MMMMMy  yM-:                    smmmmmmm-  smmmmmmmd                 \n");
    printf("\t\t\t\t       -:Nh  `mMMMMm/MMMMhMMMM.yMMMMM- yM-:                    smmmmmmm-  smmmmmmd-                 \n");
    printf("\t\t\t\t       -:Nh   /MMMMMo/MMMMMMMM/.MMMMMh yM-:                `:/ smmmmmmm-  -oyhhs+`                  \n");
    printf("\t\t\t\t       -:Nh    dMMMMN.+MMMMMMMs sMMMMM:yM-:          `-/oydmmh smmmmmmm-   .-:/++o+++/:.`           \n");
    printf("\t\t\t\t       -:Nh    -MMMMMy oMMMMMMd `NMNdy+yM-:     .:+ydmmmmmmmmy smmmmmmm-.dmmmmmmmmmddmmmmdyo-       \n");
    printf("\t\t\t\t       -:Nh     yMMMMM- sMMNdyo  ``    yM-:  .odmmmmmmmdyo/.   smmmmmmm--mmmmho/-`   -smmmmmmo      \n");
    printf("\t\t\t\t       -:Nh     .NMNdh/  .`            yM-:  smmmmmmh-`   ./oo smmmmmmm-.+:.   .:+shmmmmmmmdo.      \n");
    printf("\t\t\t\t       -:Nd......:-....................yM-:   :oydmmmddddmmmmh smmmmmmm- `-/ohmmmmmmmmdyo:.         \n");
    printf("\t\t\t\t       -:NdhhyhyhyhyyydyMyydydhsdyhNshydM-:       `.://++++//- smmmmmmm--mmmmmmmmho/-`   `..        \n");
    printf("\t\t\t\t       -:NdyhyyyhydyysmhMyyysmdsdsyNohyMM-:                    -oydmmmm--mmds+:.         :+/:       \n");
    printf("\t\t\t\t       -:Nh `::+MM: --:dMo ./.`hMs `:`.dM-:                         .:+.`-`              .--`       \n");
    printf("\t\t\t\t       -:Nh-:oooNNy++/:yMy-+mo-yMh-:s/:hM-:                                                         \n");
    printf("\t\t\t\t       -/syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy::                                                         \n");
    printf("\t\t\t\t        ..................................`                                                         \n");
}
int logo()
{
    color(0);
    printf("                                                                                 `:ooo++oosyhhhs:-:////:-`                                             \n");
    printf("                                                                             `:/sdNMMMMMMMMMMMMMNNNNMMNNNms-                                           \n");
    printf("                                                                            :dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy-                                         \n");
    printf("                                                                         `:yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.                                       \n");
    printf("                                                                        .yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdo`                                     \n");
    printf("                                                                       `:yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs:                                    \n");
    printf("                                                                        .-hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy.                                  \n");
    printf("                                                   ````...`..`           `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs`                                 \n");
    printf("                                               `.:shddmmddho/-           .mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm.                                 \n");
    printf("                                          `:+syhmNMMMMMMMMMMNs/`         .mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`                                 \n");
    printf("                                        `/dNMMMMMMMMMMMMMMMMMMNh-        -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+                                  \n");
    printf("                                      ./hNMMMMMMMMMMMMMMMMMMMMMMd.       -dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-                                  \n");
    printf("                           `.-:::-` .omMMMMMMMMMMMMMMMMMMMMMMMMMMh.       .yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy`                                  \n");
    printf("                        `-ohmNNMNNssdMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:`      oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-                                   \n");
    printf("                       -hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/     `hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh                                    \n");
    printf("                      `hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs`    /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd.                                   \n");
    printf("                       /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm:   .dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/                                   \n");
    printf("                       :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs-`:dddMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNh`                                   \n");
    printf("                      `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNds/`.mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy/`                                    \n");
    printf("                      `hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy``ymMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs`                                      \n");
    printf("                       -dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`   /dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNh-                                      \n");
    printf("                        `:omMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo`   `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/.`                                      \n");
    printf("                           -NMMMMmoNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`   .mMMMMMMMMMMNMMMMMMMMMMMMMMMMMN-                                        \n");
    printf("                            .+oo+./NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy     :ymNmhyo+:.`:mMMMMMMMMMMMMMMMN/`                                       \n");
    printf("                                  :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:      ``         oNMMMMMMMMMMMMMMMNm:                                      \n");
    printf("                                  `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd-                 sNMMMMMMMMMMMMMMMMMm:                                     \n");
    printf("                                   /mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdys+/-.`                 `dMMMMMMMMMMMMMMMMMMMN+`                                   \n");
    printf("                                    .ohdhdNMMMMNNmhmMMMMMMMMMMMMMm/`                         :NMMMMMMMMMMMMMMMMMMMMm+                                  \n");
    printf("                                      ````./oo///...yNMMMMMMMMMMN:                         `:yNMMMMMMMMMMMMMMMMMMMMMm/                                 \n");
    printf("                                              `:``` oNMMMMMMMMMNo                         -hNMMMMMMMMMMMMMMMMMMMMMMMMNo`                               \n");
    printf("                                            ``.``   oNMMMMMMMMMm.                        `hMMMMMMMMMMMMMMMMMMMMMMMMMMMNs`                              \n");
    printf("                                            ``     `hMMMMMMMMMMy                         -mMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs`                             \n");
    printf("                                                  `sNMMMMMMMMMN+                        `+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo                             \n");
    printf("                                                 `sNMMMMMMMMMMMy`                      .smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                            \n");
    printf("                                                `sNMMMMMMMMMMMMN+                     -dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh`                           \n");
    printf("                                               `oNMMMMMMMMMMMMMMm-                   .dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:                           \n");
    printf("                                             .ohNMMMMMMMMMMMMMMMMy`                 `sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmhs+.                           \n");
    printf("                                             /dNMMMMMMMMMMMMMMMMMN/                 :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNds:.`                              \n");
    printf("                                              `:odNMMMMMMMMMMMMMMMd.               `hMMMMMMMMMMMMMMMMMMMMMMMMMMMNdo-`                                  \n");
    printf("                                                 `:smNMMMMMMMMMMMMMh-              -NMMMMMMMMMMMMMMMMMMMMMMMMNds:`                                     \n");
    printf("                                                    ./yNMMMMMMMMMMMMms/.           oNMMMMMMMMMMMMMMMMMMMMMMmy/`                                        \n");
    printf("                                                       -+hNMMMMMMMMMMMMm+`        `hNMMMMMMMMMMMMMMMMMMMNh+.                                           \n");
    printf("                                                          -+hmNMMMMMMMMMMd+       .NMMMMMMMMMMMMMMMMNmy+.                                              \n");
    printf("                                                             .:sdNNMMMMMMN/       -NMMMMMMMMMMMMNmho:`                                                 \n");
    printf("\n\t\t\t\t\t\t\t\t\t\tby : PTKOM INDUSTRIES");
}

int title()
{
    system("cls");
    printf("\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\n\t\t\t\t\t\t\tA LOVE STORY TEXT GAME");
    printf("\n\t\t\t\t\t\t\t");
    system("pause");
}
int screen()
{
    system("COLOR 47");
    printf("\n\n\n\n\n\n\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("  ||  /yyhhyyyso:  sdmmmmmmdh+  smmmmmmmdhs-   -shhhddddhhys+.  .h:       /hm/      ./-`     dh`         oyhhhhyso+:`   -hdmmmmmmdy.`  s+     `/ho       `/hm/     ||\n");
    printf("  ||  yNso++++++/``md           /Md::---:+hM+  :mMNs+++++ooyNN: -N/      +NNMm.     hMMy`    sN.         +Mh+///+oyNy   :Ms:::-----`   dh   `+md:        +NmMN.    ||\n");
    printf("  ||  sd`          dh           Ms      :hd.   oMo         dN.  .N:     +m:`oMy     yMMMh.   oN`         -N/      /N+   -M+``....`     ym:/yNd:         +m/`oMh    ||\n");
    printf("  ||  sMNmNNmmh-   dMMMMNNNNNo  Nm///oyNm+`    /M/       `yN:   .N:    +M:  `hN/    hd:yMN+  om          .Ny::/+ymh:    -MMMMNNNNNm-   yMMMMM+         +N:  `hM/   ||\n");
    printf("  ||  sN+:-....    dm           NMMNMMMM:      :M+     .omy.    .N/   /MMNmNNNMN.  `Ns  :mMdomm          .NMMNdy+.      -My-```        ym:/yNMs`      :NMNmNNMMN.  ||\n");
    printf("  ||  sM.          dm           NN:``-sNN+     :Mm:-:+hNy-      -Ns  -NNy+/:--oNd` /M+   `+NMMm`         .Ny`           -Ms`````...    yN   .yNm/    -NNy+/:--oNd` ||\n");
    printf("  ||  sM+          dMNNNNNNNd-  mm`    .yNh-   :MMMMNh+`        .Nm  +M+       /Nh`+Mo     .hMN`         .Nh            -MMNNNNNNmy`   sM-    .yNy`  +Mo       /Nh`||\n");
    printf("  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
}
int game()
{
   printf("\n\t\t\t\t");
   system("pause");
}

int intro()
{
    int position=1;
    int keypressed=0;
    #define MAX 6
    #define MIN 1
    while(keypressed!=13)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tapakah anda ingin membaca intro ?\n");
        arrowhere(1,position);printf("YES\n");
        arrowhere(2,position);printf("NO\n");
        keypressed=getch();
        if(keypressed==80&&position!=MAX)
        {
            position++;
        }
        else if(keypressed==72&&position!=MIN)
        {
            position--;
        }
        else
        {
            position==position;
        }
    }
    if (position==1)
    {
        int x;
        double y;
        char name1[] = "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tINTRO \n\t\t\t\tFerdian Julianto sudah menjadi jomblo sejak kepala menembus cangkang.Bahkan sampai kemarin\n\t\t\t\tdia belum pernah sekalipun merasakan kasih sayang wanita kecuali dari ibunya\n\t\t\t\tNamun ketika ia sudah mencapai kuliah dan berkuliah di Fakultas Teknik UI, \n\t\t\t\tada seorang gadis yang mulai mendekati dia dahulu, dan momen ini tidak ingin\n\t\t\t\tdilewatkan olehnya untuk mendapatkan gadis itu. Gadis itu bernama Lili Tresha\n\t\t\t\tAyo para jomblo yang masih suka berdoa hujan ketika malam minggu, \n\t\t\t\tkita bantu sobat kita ini dalam mendapatkan hati Lili\n\t\t\t\t";
        system("cls");
        for(x=0; name1[x]!=NULL; x++)
       {
            printf("%c",name1[x]);

          for(y=0; y<=1000000; y++)
          {

          }
       }
       system("pause");
       storylevel0();
    }
    else if(position==2)
    {
        storylevel0();
    }

}
int storylevel0()
{
        system("cls");
        fseek(stdin, 0, SEEK_END);
		printf ("\n\n\n\n\t\t\t\tLili    : Hai Ferdian (^_^), kamu lagi ngapain sama temen-temen kamu  ??\n");
		printf ("\t\t\t\tFerdian : Ehhh Lili, Ga lagi ngapa-ngapain kok aku (^_^')\n");
		printf ("\t\t\t\tLili    : Masa sih... Itu keliatannya seru pada ngumpul, kamu ga ikut ngumpul ??\n");
		printf ("\n\t\t\t\tPilihan berikut akan sangat mempengaruhi kelanjutan hubungan Ferdian :\n\t\t\t\t");
		system ("pause");
		printf ("\n\t\t\t\tOption :\n");
		printf ("\t\t\t\ta. Ga ahh ada kamu jadi sama kamu aja. (^_^')\n");
		printf ("\t\t\t\tb. Iyanih, pengen sih tapi ada kamu ga enak aku. (^_^')\n");
		printf ("\n\t\t\t\tPilihan: ");
		scanf  ("%c", &pil);
			switch(pil)
		{
			case 'a':{
				option01();
				break;}
			case 'b':{
				option02();
				break;
			}
			default:
		    {
			system ("cls");
			storylevel0();
            break;
			}
		}
}

int option01()
{
	system ("cls");
	fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Hai Ferdian (^_^), kamu lagi ngapain sama temen-temen kamu  ??\n");
	printf ("\t\t\t\tFerdian : Ehhh Lili, Ga lagi ngapa-ngapain kok aku (^_^')\n");
	printf ("\t\t\t\tLili    : Masa sih... Itu keliatannya seru pada ngumpul, kamu ga ikut ngumpul ??\n");
	printf ("\t\t\t\tFerdian : Ga ahh ada kamu jadi sama kamu aja. (^_^')\n");
	printf ("\t\t\t\tLili    : Ehh... Bisa aja.... udah kumpul dulu aja kamu, gapapa aku kok\n");
	printf ("\n\t\t\t\tPilihan berikut akan sangat mempengaruhi kelanjutan hubungan Ferdian :\n\t\t\t\t");
		system ("pause");

		printf ("\n\t\t\t\tOption :\n");
		printf ("\t\t\t\ta. Ga gapapa, sama kamu ajalah soalnya adem klo sama kamu\n");
		printf ("\t\t\t\tb. Hmmm, yaudah deh mau bareng kesana ??\n");
		printf ("\n\t\t\t\tPilihan: ");
		scanf  ("%c", &pil);
			switch(pil)
		{
			case 'a':{
				option03();
				break;}
			case 'b':{
				option04();
				break;
			}
			default:
		    {
			system ("cls");
			option01();
            break;
			}
		}
}

int option02()
{
	system ("cls");
	fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Hai Ferdian (^_^), kamu lagi ngapain sama temen-temen kamu  ??\n");
	printf ("\t\t\t\tFerdian : Ehhh Lili, Ga lagi ngapa-ngapain kok aku (^_^')\n");
	printf ("\t\t\t\tLili    : Masa sih... Itu keliatannya seru pada ngumpul, kamu ga ikut ngumpul ??\n");
	printf ("\t\t\t\tFerdian : Iyanih, pengen sih tapi ada kamu ga enak aku. (^_^')\n");
	printf ("\t\t\t\tLili    : Ayok aku juga mau tau itu pada ngapain ??\n\n\t\t\t\t(mereka jalan menuju ke kerumunan teman Ferdian)\n");
	printf ("\t\t\t\tLili    : Ihhh itu video apa... Kok ada tusuk-tusukan gitu sih trs ada ahh... ahh... nyaa... jorokkkkk tauuuu (-_-)\n\t\t\t\t(Lili kaget karena mereka ternyata menonton video 18+)\n\t\t\t\t");
	system("pause");
	fail();
	menu();
}

int option03()
{
	system ("cls");
	fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Hai Ferdian (^_^), kamu lagi ngapain sama temen-temen kamu  ??\n");
	printf ("\t\t\t\tFerdian : Ehhh Lili, Ga lagi ngapa-ngapain kok aku (^_^')\n");
	printf ("\t\t\t\tLili    : Masa sih... Itu keliatannya seru pada ngumpul, kamu ga ikut ngumpul ??\n");
	printf ("\t\t\t\tFerdian : Ga ahh ada kamu jadi sama kamu aja. (^_^')\n");
	printf ("\t\t\t\tLili    : Ehh... Bisa aja.... udah kumpul dulu aja kamu, gapapa aku kok\n");
	printf ("\t\t\t\tFerdian : Ga gapapa, sama kamu ajalah soalnya adem klo sama kamu\n");
	printf ("\t\t\t\tLili    : Ahh… Yaudah deh. Mau temenin aku gaa jalan ke dalam balairung ??\n");
	printf ("\t\t\t\tFerdian : Ayok\n");
	storylevel01();
}

int option04()
{
	system ("cls");
	fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Hai Ferdian (^_^), kamu lagi ngapain sama temen-temen kamu  ??\n");
	printf ("\t\t\t\tFerdian : Ehhh Lili, Ga lagi ngapa-ngapain kok aku (^_^')\n");
	printf ("\t\t\t\tLili    : Masa sih... Itu keliatannya seru pada ngumpul, kamu ga ikut ngumpul ??\n");
	printf ("\t\t\t\tFerdian : Ga ahh ada kamu jadi sama kamu aja. (^_^')\n");
	printf ("\t\t\t\tLili    : Ehh... Bisa aja.... udah kumpul dulu aja kamu, gapapa aku kok\n");
	printf ("\t\t\t\tFerdian : Hmmm, yaudah deh mau bareng kesana ??\n");
	printf ("\t\t\t\tLili    : Ayokkk\n");
	printf ("\t\t\t\t(Mereka pun berjalan menuju kerumunan teman Ferdian)\n");
	printf ("\t\t\t\tLili    : Ihhh itu video apa... Kok ada tusuk-tusukan gitu sih trs ada ahh... ahh... nyaa... jorokkkkk tauuuu (-_-)\n\t\t\t\t(Lili kaget karena mereka ternyata menonton video 18+)\n\t\t\t\t");
	fail();
	system("pause");
	menu();
}

int storylevel01()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\n\t\t\t\tPilihan berikut akan sangat mempengaruhi kelanjutan hubungan Ferdian :\n\t\t\t\t");

	system ("pause");
	printf ("\n\t\t\t\tOption :\n");
	printf ("\t\t\t\ta. Oiya ?? Film apa tuh ??\n");
	printf ("\t\t\t\tb. Wahhh film apa tuhhh…. Seru ga ??\n");
	printf ("\t\t\t\tc. Wahh Blue Film yaa ??\n");
	printf ("\n\t\t\t\tPilihan: ");
	scanf  ("%c", &pil);
		switch(pil)
		{
			case 'a':
			{
				option05();
				break;
			}
			case 'b':
			{
				option06();
				break;
			}
			case 'c':
			{
				option07();
				break;
			}
			default:
		    {
			system ("cls");
			storylevel01();
            break;
			}
		}
}

int option05()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Oiya ?? Film apa tuh ??\n");
	printf ("\t\t\t\tLili    : Ituloh filmnya yang baru tayang...\n\t\t\t\t");

	system ("pause");

	printf ("\n\t\t\t\tOption :\n");
	printf ("\t\t\t\ta. Film yang mana ??Pikachu atau End Game ??\n");
	printf ("\t\t\t\tb. Film Pikachu yaa ??\n");
	printf ("\n\t\t\t\tPilihan: ");
	scanf  ("%c", &pil);
		switch(pil)
		{
			case 'a':
			{
				option08();
				break;
			}
			case 'b':
			{
				option09();
				break;
			}
			default:
		    {
			system ("cls");
			option05();
            break;
			}
		}
}

int option06()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Wahhh film apa tuhhh... Seru ga ??\n");
	printf ("\t\t\t\tLili    : Ihhh apa sih kok nanyanya Seru gaa... aku aja belom nonton, jangan-jangan kamu udah lagi ???\n\t\t\t\t");
	system ("pause");

	printf ("\n\t\t\t\tOption :\n");
	printf ("\t\t\t\ta. Ehhh Belom kok cuma nanya kukira kamu udah nonton ??\n");
	printf ("\t\t\t\tb. Hehehe udah dong, yang end game kan ??\n");
	printf ("\t\t\t\t\nPilihan: ");
	scanf  ("%c", &pil);
		switch(pil)
		{
			case 'a':
			{
				option10();
				break;
			}
			case 'b':
			{
				option11();
				break;
			}
			default:
		    {
			system ("cls");
			option05();
            break;
			}
		}
}

int option07()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Wahh Blue Film yaa ??\n");
	printf ("\t\t\t\tLili    :  Ihhh apa sih kamu kesel deh bodo amatlah\n");
	fail();
	system("pause");
	menu();
}

int option08()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Oiya ?? Film apa tuh ??\n");
	printf ("\t\t\t\tLili    : Ituloh filmnya yang baru tayang...\n");
	printf ("\t\t\t\tFerdian : Film yang mana ?? Pikachu atau End Game ??\n");
	printf ("\t\t\t\tLili    : Itu Avenger End Game. Mau nonton bareng gaa sama aku ??\n");
	printf ("\t\t\t\tFerdian : Ayokk Lili\n");
	bagianawal();
}

int option09()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Oiya ?? Film apa tuh ??\n");
	printf ("\t\t\t\tLili    : Ituloh filmnya yang baru tayang...\n");
	printf ("\t\t\t\tFerdian : Film Pikachu yaa ??\n");
	printf ("\t\t\t\tLili    : Bukan... Maksud aku Avenger End Game\n");
	printf ("\t\t\t\tFerdian : Ohhhh Okedeh ayok Liii");
	bagianawal();
}

int option10()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Wahhh film apa tuhhh... Seru ga ??\n");
	printf ("\t\t\t\tLili    : Ihhh apa sih kok nanyanya Seru gaa... aku aja belom nonton, jangan-jangan kamu udah lagi ???\n");
	printf ("\t\t\t\tFerdian : Ehhh Belom kok Cuma nanya kukira kamu udah nonton ??\n");
	printf ("\t\t\t\tLili    : Ihhh au ahh Belom juga kesel aku…\n");
	return storylevel01();
}

int option11()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Ehhh Fer, kamu tau gaa kalo di XXI lagi ada film bagus tau...\n");
	printf ("\t\t\t\tFerdian : Wahhh film apa tuhhh... Seru ga ??\n");
	printf ("\t\t\t\tLili    : Ihhh apa sih kok nanyanya Seru gaa... aku aja belom nonton, jangan-jangan kamu udah lagi ???\n");
	printf ("\t\t\t\tFerdian : Hehehe udah dong, yang end game kan ??\n");
	printf ("\t\t\t\tLili    : Ihhh kan udah nonton duluan ga ngajak... BYEEEE\n");
	return storylevel0();
}

int bagianawal()
{

	int x;
	double y;
	char name1[] = "\n\n\n\t\t\t\tMereka sudah mulai merasakan adanya perasaan disatu sama lain, namun mereka\n\t\t\t\tmasih belum bisa untuk mengungkapkannya, namun pada suatu\n\t\t\t\thari Lili sedang mengerjakan tugas dia dan kebetulan ada Ferdian yang\n\t\t\t\tsedang mengerjakan tugas PtKom dan langsunglah dia ingin meminta bantuan...\n\t\t\t\t";
	system("pause");
    for(x=0; name1[x]!=NULL; x++)
   {
        printf("%c",name1[x]);

      for(y=0; y<=1000000; y++)
      {

      }
   }
   storylevel1();
}

int storylevel1()
{

    fseek(stdin, 0, SEEK_END);
	printf ("\n\n\n\n\t\t\t\tLili    : Hai Fer, Kamu lagi ngapain ??\n");
	printf ("\t\t\t\tFerdian : Lagi kerjain Case Study PtKom nih...\n");
	printf ("\t\t\t\tLili    : Wahhh susah gaa A??\n");
	printf ("\n\t\t\t\tPilihan berikut akan sangat mempengaruhi kelanjutan hubungan Ferdian :\n\t\t\t\t");
	system ("pause");

	printf ("\n\t\t\t\tOption :\n");
	printf ("\t\t\t\ta. Lumayan nih... lagi bingung di beberapa bagian\n");
	printf ("\t\t\t\tb. Gaa kok Ez ini mah\n");
	printf ("\n\t\t\t\tPilihan: ");
	scanf  ("%c", &pil);
		switch(pil)
		{
			case 'a':
			{
				option12();
				break;
			}
			case 'b':
			{
				option13();
				break;
			}
			default:
		    {
			system ("cls");
			storylevel1();
            break;
			}
		}
}

int option12()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tLili    : Hai Fer, Kamu lagi ngapain ??\n");
	printf ("\t\t\t\tFerdian : Lagi kerjain Case Study PtKom nih...\n");
	printf ("\t\t\t\tLili    : Wahhh susah gaa A??\n");
	printf ("\t\t\t\tFerdian : Lumayan nih... lagi bingung di beberapa bagian\n");
	printf ("\t\t\t\tLili    : Waaa, Mangat kamu....\n");
	printf ("\t\t\t\tFerdian : Iyaa...\n");
	fail();
	menu();
}

int option13()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tLili    : Hai Fer, Kamu lagi ngapain ??\n");
	printf ("\t\t\t\tFerdian : Lagi kerjain Case Study PtKom nih...\n");
	printf ("\t\t\t\tLili    : Wahhh susah gaa A??\n");
	printf ("\t\t\t\tFerdian : Gaa kok Ez ini mah\n");
	printf ("\t\t\t\tLili    : Wihhhh... Kalo udah selesai bantuin aku Rangkaian Digital dong\n");
	printf ("\t\t\t\tFerdian : Okee boleh kok, modul apa emang sekarang ??\n");
	printf ("\t\t\t\tLili    : Modul 9 nih\n");
    printf ("\n\t\t\t\tPilihan berikut akan sangat mempengaruhi kelanjutan hubungan Ferdian :\n\t\t\t\t");
	system ("pause");

	printf ("\n\t\t\t\tOption :\n");
	printf ("\t\t\t\ta. Gampang ahh itu modulnya... ga kayak proyek akhir\n");
	printf ("\t\t\t\tb. Wahhh boleh-boleh sebentar yaa aku kelarin dulu kamu duduk dulu aja sini sebelah aku\n");
	printf ("\n\t\t\t\tPilihan: ");
	scanf  ("%c", &pil);
		switch(pil)
		{
			case 'a':
			{
				option14();
				break;
			}
			case 'b':
			{
				option15();
				break;
			}
			default:
		    {
			system ("cls");
			option13();
            break;
			}
		}
}

int option14()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tLili    : Hai Fer, Kamu lagi ngapain ??\n");
	printf ("\t\t\t\tFerdian : Lagi kerjain Case Study PtKom nih...\n");
	printf ("\t\t\t\tLili    : Wahhh susah gaa Ferr??\n");
	printf ("\t\t\t\tFerdian : Gaa kok Ez ini mah\n");
	printf ("\t\t\t\tLili    : Wihhhh... Kalo udah selesai bantuin aku Rangkaian Digital dong\n");
	printf ("\t\t\t\tFerdian : Okee boleh kok, modul apa emang sekarang ??\n");
	printf ("\t\t\t\tLili    : Modul 9 nih\n");
	printf ("\t\t\t\tFerdian : Gampang ahh itu modulnya... ga kayak proyek akhir");
	printf ("\t\t\t\tLili    : Ihhhh kan namanya aku ga bisa yaa... Kesell\n");
	storylevel1();
}

int option15()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tLili    : Hai Fer, Kamu lagi ngapain ??\n");
	printf ("\t\t\t\tFerdian : Lagi kerjain Case Study PtKom nih...\n");
	printf ("\t\t\t\tLili    : Wahhh susah gaa A??\n");
	printf ("\t\t\t\tFerdian : Gaa kok Ez ini mah\n");
	printf ("\t\t\t\tLili    : Wihhhh... Kalo udah selesai bantuin aku Rangkaian Digital dong\n");
	printf ("\t\t\t\tFerdian : Okee boleh kok, modul apa emang sekarang ??\n");
	printf ("\t\t\t\tLili    : Modul 9 nih\n");
	printf ("\t\t\t\tFerdian : Wahhh boleh-boleh sebentar yaa aku kelarin dulu kamu duduk dulu aja sini sebelah aku\n");
	printf ("\t\t\t\tLili    : Yeee…. Tapi aku mau coba kerjain dulu sih, kamu bantu-bantu aku yaaa ??\n");
	printf ("\t\t\t\tFerdian : Okeee lii\n");
	bagiantengah();
}

int bagiantengah()
{
	int x;
	double y;
	char name1[] = "\n\n\n\t\t\t\tMereka pun mengerjakan Tugas masing-masing sampai selesai dan\n\t\t\t\tberencana untuk pulang namun A ingin memulai inisiatif dahulu,\n\t\t\t\tkarena ia pernah membaca di buku berjudul “10 recipes to get a woman heart”\n\t\t\t\tbahwa seorang laki-laki harus lebih sering memulai percakapan dibandingkan yang wanita,\n\t\t\t\tmaka dari itu dia ingin memulai percakapan pada saat itu lebih dahulu...\n\t\t\t\t";
	system("pause");
    for(x=0; name1[x]!=NULL; x++)
   {
        printf("%c",name1[x]);

      for(y=0; y<=1000000; y++)
      {

      }
   }
   storylevel11();
}

int storylevel11()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tPilihan berikut akan sangat mempengaruhi kelanjutan hubungan Ferdian :\n\t\t\t\t");
	system ("pause");

	printf ("\n\t\t\t\tOption :\n");
	printf ("\t\t\t\ta. Kamu mau pulang ?? Ke kos apa ke rumah ??\n");
	printf ("\t\t\t\tb. Mau pulang bareng ga ??\n");
	printf ("\t\t\t\tc. Jalan bareng yukkk\n");
	printf ("\n\t\t\t\tPilihan: ");
	scanf  ("%c", &pil);
		switch(pil)
		{
			case 'a':
			{
				option16();
				break;
			}
			case 'b':
			{
				option17();
				break;
			}
			case 'c':
			{
				option18();
				break;
			}
			default:
		    {
			system ("cls");
			storylevel11();
            break;
			}
		}
}

int option16()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tFerdian : Kamu mau pulang ?? Ke kos apa ke rumah ??\n");
	printf ("\t\t\t\tLili    : Iya nih, mau ke kosan aku, kamu mau kemana ??\n");
	printf ("\t\t\t\tFerdian : Aku mau ke rumah sih, tapi klo kamu mau ditemenin, aku temenin\n");
	printf ("\t\t\t\tLili    : Ohh klo gitu temenin aku dulu\n");
	printf ("\t\t\t\tFerdian : Okeee\n");
}
int option17()
{
    fseek(stdin, 0, SEEK_END);
	printf ("\t\t\t\tFerdian : Mau pulang bareng ga ??\n");
	printf ("\t\t\t\tLili    : Lah bukannya kamu pp yaa ?? kan aku ngekos...\n");
	printf ("\t\t\t\tFerdian : Iyaa sihhh... Hmmmm\n");
	printf ("\t\t\t\tLili    : Yaudah pulang gih\n");
	bagiantengah();
}
int option18()
{
    fseek(stdin, 0, SEEK_END);
	printf ("Ferdian : Jalan bareng yuk\n");
	printf ("Lili    : Mau jalan kemana ?? Aku mau pulang tauuu…. Duluan ahh (-_-)\n");
	bagianawal();
}
//mini games
int minigames()
{
    system("COLOR D7");
    PlaySound("C:\\FERDIAN PEKA PROJECT\\music\\island_music_x.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
    int position=1;
    int keypressed=0;

    #define MAX 2
    #define MIN 1
    while(keypressed!=13)
    {
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tMini Games\n");
        arrowhere(1,position);printf("1.Fun Touch\n");
        arrowhere(2,position);printf("2.Fun Guess\n");
        keypressed=getch();
        if(keypressed==80&&position!=MAX)
        {
            position++;
        }
        else if(keypressed==72&&position!=MIN)
        {
            position--;
        }
        else
        {
            position==position;
        }
        }
        if(position==1)
        {
            menufuntouch();
        }
        else if(position==2)
        {
            menufunguess();
        }
}
int menufuntouch()
{
    int position=1;
    int keypressed=0;
    #define MAX 3
    #define MIN 1
    while(keypressed!=13)
    {
        system("cls");
        logofun();
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t------FUN TOUCH------\n\n");
        arrowhere(1,position);printf("START\n");
        arrowhere(2,position);printf("HELP\n");
        arrowhere(3,position);printf("MAIN MENU\n");
        keypressed=getch();
        if(keypressed==80&&position!=MAX)
        {
            position++;
        }
        else if(keypressed==72&&position!=MIN)
        {
            position--;
        }
        else
        {
            position==position;
        }
        }
        if(position==1)
        {
            PlaySound(TEXT("C:\\FERDIAN PEKA PROJECT\\music\\Duffyduck1.wav"),NULL,SND_SYNC);
            funtouch();
        }
        if(position==2)
        {
            helpfun();
        }
        if(position==3)
        {
            menu();
        }
}
//fungames
void funtouch()
{
    i++;
    system("cls");
    int number;
    fseek(stdin, 0, SEEK_END);
    printf("Masukkan angka yang anda perkirakan");
    scanf("%d",&number);
    clock_t t;
    t = clock();
    int time;
    printf("fun() starts \n");
    printf("Tekan 1 lalu enter \n");
    scanf("%d",&time);
    while(1)
    {
        if (time==1)
            break;
            else
            {
                funtouch();
            }
    }
    printf("fun() ends \n");
    t = clock() - t;
    int time_taken = ((int)t)/CLOCKS_PER_SEC; // in seconds

    printf("fun() took %d seconds to execute \n", time_taken);
    if(time_taken==number)
    {
        PlaySound(TEXT("C:\\FERDIAN PEKA PROJECT\\music\\Duffyduck1.wav"),NULL,SND_SYNC);
        printf("congrats");

        FILE*nana=fopen("nana.txt","r");
        fscanf(nana,"%d",&uang[0]);
        fclose(nana);
        uang[0]+=500;
        FILE*mumu=fopen("nana.txt","w");
        fprintf(mumu,"%d",uang[0]);
        fclose(mumu);
        printf("your money is %d",uang[0]);
        fprintf(nana,"%d\n",uang[0]);
        fclose(nana);
    }
    else
    {

        fail();
        FILE*nana=fopen("nana.txt","r");
        fscanf(nana,"%d",&uang[0]);
        fclose(nana);
        uang[0]+=0;
        FILE*mumu=fopen("nana.txt","w");
        fprintf(mumu,"%d",uang[0]);
        fclose(mumu);
        printf("your money is %d",uang[0]);
        fprintf(nana,"%d\n",uang[0]);
        fclose(nana);
    }
    system("pause");
    menufuntouch();
}
int logofun()
{
    printf("\t\t\t\t                                                           .-'''-.                        _..._                    \n");
    printf("\t\t\t\t                                                          '   _    \                   .-'_..._''.                 \n");
    printf("\t\t\t\t                          _..._                         /   /` '.   \                .' .'      '.\    .           \n");
    printf("\t\t\t\t     _.._               .'     '.                      .   |     \  '               / .'             .'|           \n");
    printf("\t\t\t\t   .' .._|             .   .-.   .                .|   |   '      |  '             . '              <  |           \n");
    printf("\t\t\t\t   | '                 |  '   '  |              .' |_  \    \     / /              | |               | |           \n");
    printf("\t\t\t\t __| |__      _    _   |  |   |  |            .'     |  `.   ` ..' /      _    _   | |               | | .'''-.    \n");
    printf("\t\t\t\t|__   __|    | '  / |  |  |   |  |           '--.  .-'     '-...-'`      | '  / |  . '               | |/.'''. \   \n");
    printf("\t\t\t\t   | |      .' | .' |  |  |   |  |              |  |                    .' | .' |   \ '.          .  |  /    | |   \n");
    printf("\t\t\t\t   | |      /  | /  |  |  |   |  |              |  |                    /  | /  |    '. `._____.-'/  | |     | |   \n");
    printf("\t\t\t\t   | |     |   `'.  |  |  |   |  |              |  '.'                 |   `'.  |      `-.______ /   | |     | |   \n");
    printf("\t\t\t\t   | |     '   .'|  '/ |  |   |  |              |   /                  '   .'|  '/              `    | '.    | '.  \n");
    printf("\t\t\t\t   |_|      `-'  `--'  '--'   '--'              `'-'                    `-'  `--'                    '---'   '---' \n");
}
int helpfun()
{

    system("cls");
    int x;
    double y;
    char name1[] = "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHELP \n\t\t\t\t\t\tDalam Mini Games ini anda diminta untuk memasukkan angka, \n\t\t\t\t\t\tlalu anda diminta untuk menekan tombol 1 lalu enter pada\n\t\t\t\t\t\twaktu yang sama dengan yang anda tuliskan di awal\n\t\t\t\t\t\t";
    system("cls");
    for(x=0; name1[x]!=NULL; x++)
   {
        printf("%c",name1[x]);

      for(y=0; y<=1000000; y++)
      {

      }
   }
    system("pause");
    menufuntouch();
}
int menufunguess()
{
    int position=1;
    int keypressed=0;
    #define MAX 3
    #define MIN 1
    while(keypressed!=13)
    {
        system("cls");
        logofunguess();
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t------FUN GUESS------\n\n");
        arrowhere(1,position);printf("START\n");
        arrowhere(2,position);printf("HELP\n");
        arrowhere(3,position);printf("MAIN MENU\n");
        keypressed=getch();
        if(keypressed==80&&position!=MAX)
        {
            position++;
        }
        else if(keypressed==72&&position!=MIN)
        {
            position--;
        }
        else
        {
            position==position;
        }
        }
        if(position==1)
        {
            PlaySound(TEXT("C:\\FERDIAN PEKA PROJECT\\music\\Duffyduck1.wav"),NULL,SND_SYNC);
            funguess();
        }
        if(position==2)
        {
            helpfun();
        }
        if(position==3)
        {
            menu();
        }
}
int funguess()
{
    int uang[]={0};
    int a,b,c,r;
    system("cls");
    srand(time(NULL)); //inisialisasi untuk mendapat angka random
    r = 10000000+ abs(rand()%100000000);
    printf("\n\n\n\n\n\n\t\t\t\t\t\t%d",r);
    Sleep(1000);
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t\t\t\tmasukkan jawaban anda :");
    scanf("%d",&a);
    if(a==r)
    {
        printf("\n\t\t\t\t\t\tcongrats");
        FILE*nana=fopen("nana.txt","r");
        fscanf(nana,"%d",&uang[0]);
        fclose(nana);
        uang[0]+=1000;
        FILE*mumu=fopen("nana.txt","w");
        fprintf(mumu,"%d",uang[0]);
        fclose(mumu);
        printf("\n\t\t\t\t\t\tyour money is %d\n\t\t\t\t\t\t",uang[0]);
        fprintf(nana,"%d\n",uang[0]);
        fclose(nana);
        system("pause");

        menufunguess();
    }
    else
    {
        printf("\n\t\t\t\t\t\tWrong Answer\n");
        printf("\n\t\t\t\t\t\tmasukkan jawaban anda :");
        scanf("%d",&b);
        if(b==r)
        {
            printf("\n\t\t\t\t\t\tcongrats");
            FILE*nana=fopen("nana.txt","r");
            fscanf(nana,"%d",&uang[0]);
            fclose(nana);
            uang[0]+=500;
            FILE*mumu=fopen("nana.txt","w");
            fprintf(mumu,"%d",uang[0]);
            fclose(mumu);
            printf("\n\t\t\t\t\t\tYour Money is %d",uang[0]);
            menufunguess();
        }
        else
            {
                printf("\n\t\t\t\t\t\tWrong Answer\n");
                printf("\t\t\t\t\t\tmasukkan jawaban anda :");
                scanf("%d",&c);
                if(c==r)
                {
                    printf("\n\t\t\t\t\t\tcongrats");
                    printf("\n\t\t\t\t\t\tcongrats");
                    FILE*nana=fopen("nana.txt","r");
                    fscanf(nana,"%d",&uang[0]);
                    fclose(nana);
                    uang[0]+=300;
                    FILE*mumu=fopen("nana.txt","w");
                    fprintf(mumu,"%d",uang[0]);
                    fclose(mumu);
                    printf("\n\t\t\t\t\t\tYour Money is %d\n\t\t\t\t\t\t",uang[0]);
                    system("pause");

                    menufunguess();
                }
                else
                {
                    fail();
                    printf("\n\t\t\t\t\t\t Jawaban yang benar adalah %d\n\t\t\t\t\t\t",r);
                    system("pause");
                    menufunguess();
                }
            }
    }
}
int helpfunguess()
{
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t------ HELP ------\n\n");
    printf("\t\t\t\tAnda memiliki tiga kesempatan untuk menebak bilangan dari 1-10 yang muncul\n\t\t\t\tbila benar pada percobaan pertama anda mendapat 1000 poin, bila benar pada \n\t\t\t\tpercobaan kedua anda mendapat 500 poin, dan bila benar pada percobaan ketiga \n\t\t\t\tanda mendapat nilai 300 poin.");
}
int logofunguess()
{
    printf(" .----------------.  .----------------.  .-----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
    printf("| .--------------. || .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
    printf("| |  _________   | || | _____  _____ | || | ____  _____  | | | |    ______    | || | _____  _____ | || |  _________   | || |    _______   | || |    _______   | |\n");
    printf("| | |_   ___  |  | || ||_   _||_   _|| || ||_   \\|_   _| | | | |  .* ___  |   | || ||_   _||_   _|| || | |_   ___  |  | || |   /  ___  |  | || |   /  ___  |  | |\n");
    printf("| |   | |_  \\_|  | || |  | |    | |  | || |  |   \\ | |   | | | | / .*   \\_|   | || |  | |    | |  | || |   | |_  \\_|  | || |  |  (__ \\_|  | || |  |  (__ \\_|  | |\n");
    printf("| |   |  _|      | || |  | |    | |  | || |  | |\\ \\| |   | | | | | |    ____  | || |  | *    * |  | || |   |  _|  _   | || |   *.___`-.   | || |   *.___`-.   | |\n");
    printf("| |  _| |_       | || |   \\ \\--/ /   | || | _| |_\\   |_  | | | | \\ `.___]  _| | || |   \\ `--* /   | || |  _| |___/ |  | || |  |`\\____) |  | || |  |`\____) |  | |\n");
    printf("| | |_____|      | || |    `.__.*    | || ||_____|\\____| | | | |  `._____.*   | || |    `.__.*    | || | |_________|  | || |  |_______.*  | || |  |_______.*  | |\n");
    printf("| |              | || |              | || |              | | | |              | || |              | || |              | || |              | || |              | |\n");
    printf("| *--------------* || *--------------* || *--------------* | | *--------------* || *--------------* || *--------------* || *--------------* || *--------------* |\n");
    printf(" *----------------*  *----------------*  *----------------*   *----------------*  *----------------*  *----------------*  *----------------*  *----------------* \n");
}
