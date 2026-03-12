#include "head.h"
void school()
{
clrscr();
gotoxy(35,1);
cout<<"G.N.H.S.S.";
gotoxy(30,2);
cout<<"PEE. PEE. COMPOUND";
gotoxy(37,3);
cout<<"RANCHI\n";
for(int x=1;x<=80;x++)
{
gotoxy(x,4);
cout<<"=";
}
}
int record(int x)
{
gotoxy(25,5);
cout<<"RECORD NO. = "<<x;
return(x);
}
void main()
{
clrscr();
int vxw;
mainmenu:
{
school();
cout<<"\n1.> STUDENT\n2.> TEACHER\n3.> NON-TEACHER\n4.> ADMIN LOGIN\n5.> OPERATOR LOGIN\n6.> EXIT\n\n\n";
}
cout<<"enter your choice : ";
cin>>vxw;
switch(vxw)
{
//************************** student menu ********************************
case 1:
{
studmenu:
{
clrscr();
school();
cout<<"\n1.> login\n2.> NEW REGISTRATION\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int xyz;
cout<<"enter your choice : ";
cin>>xyz;
switch(xyz)
{
//	  ********** student login selected ********
case 1:
{
school();
int enstid,enstpass,stno=0,tno=0,ntno=0;
gotoxy(1,11);
cout<<"enter your student ID : ";
cin>>enstid;
gotoxy(1,13);
cout<<"enter your password : ";
cin>>enstpass;
ifstream numread("no.dat");
numread>>stno;
numread>>tno;
numread>>ntno;
ifstream stread("stud.dat");
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass;
int stid,count=0,cl;
for(int i=1;i<=stno;i++)
{
stread>>stid;
stread>>nm;
stread>>fnm;
stread>>mnm;
stread>>dob;
stread>>ph;
stread>>gen;
stread>>cast;
stread>>rel;
stread>>cl;
stread>>sec;
stread>>bgrp;
stread>>ad;
stread>>stpass;
if(enstid==stid && enstpass==stpass)
{
count++;
studlogin:
{
clrscr();
gotoxy(25,3);
cout<<"! ! W E L C O M E  "<<nm<<" ! !\n\n\n";
cout<<"1.> VIEW PROFILE\n2.> CORRECTION\n3.> VIEW RESULT\n4.> PREVIOUS MENU\n5.> EXIT\n\n\n";
}
int xy;
cout<<"enter your choice : ";
cin>>xy;
//	   ******** for student login menu  ********
switch(xy)
{
case 1:
{
//        *******  view student profile  *******
school();
gotoxy(25,5);
cout<<"! ! W E L C O M E ! !\t"<<nm<<"\n";
for(int j=1;j<=80;j++)
{
gotoxy(j,4);
cout<<"=";
gotoxy(j,6);
cout<<"=";
}
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<stid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Class : ";
cout<<cl;
a=a+2;
gotoxy(1,a);
cout<<"Sec : ";
cout<<sec;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(20,a);
cout<<"Address : ";
cout<<ad;
getch();
goto studlogin;
}

case 2:
{
//           ******* student correction  *******
stread.close();
char n[20],s[5];
long int id;
float phy,chem,math,comp,eng;
int c;
ifstream inf("stud.dat");
ofstream outf("stedit.dat");
ifstream in("marks.dat");
ofstream out("marks2.dat");
for(int k=1;k<=stno;k++)
{
in>>id;
in>>n;
in>>c;
in>>s;
in>>phy;
in>>chem;
in>>comp;
in>>math;
in>>eng;

inf>>stid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>cl;
inf>>sec;
inf>>bgrp;
inf>>ad;
inf>>stpass;
if(stid==enstid && enstpass==stpass)
{
school();
gotoxy(25,5);
cout<<"!!!   W E L C O M E "<<nm<<"   !!!";
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
gotoxy(17,a);
cout<<stid;
outf<<stid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gotoxy(48,a);
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Class : ";
cin>>cl;
outf<<cl<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Sec : ";
cin>>sec;
outf<<sec<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Set Password : ";
cin>>stpass;
outf<<stpass<<"\n";
outf<<"\n";
if(stid==id)
{
out<<stid<<"\n";
out<<nm<<"\n";
out<<cl<<"\n";
out<<sec<<"\n";
out<<phy<<"\n";
out<<chem<<"\n";
out<<comp<<"\n";
out<<math<<"\n";
out<<eng<<"\n";
}
}
else
{
outf<<stid<<"\n";
outf<<nm<<"\n";
outf<<fnm<<"\n";
outf<<mnm<<"\n";
outf<<dob<<"\n";
outf<<ph<<"\n";
outf<<gen<<"\n";
outf<<cast<<"\n";
outf<<rel<<"\n";
outf<<cl<<"\n";
outf<<sec<<"\n";
outf<<bgrp<<"\n";
outf<<ad<<"\n";
outf<<stpass<<"\n";

out<<id<<"\n";
out<<n<<"\n";
out<<c<<"\n";
out<<s<<"\n";
out<<phy<<"\n";
out<<chem<<"\n";
out<<comp<<"\n";
out<<math<<"\n";
out<<eng<<"\n";

}
}
inf.close();
outf.close();
in.close();
out.close();
clrscr();
gotoxy(11,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
clrscr();
cout<<"\n1.> UPDATE\n\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("stedit.dat");
ofstream outfed("stud.dat");
ifstream infm("marks2.dat");
ofstream outfm("marks.dat");
for(int i=1;i<=stno;i++)
{
infm>>id;
infm>>n;
infm>>c;
infm>>s;
infm>>phy;
infm>>chem;
infm>>comp;
infm>>math;
infm>>eng;
infed>>stid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>cl;
infed>>sec;
infed>>bgrp;
infed>>ad;
infed>>stpass;
outfm<<id<<"\n";
outfm<<n<<"\n";
outfm<<c<<"\n";
outfm<<s<<"\n";
outfm<<phy<<"\n";
outfm<<chem<<"\n";
outfm<<comp<<"\n";
outfm<<math<<"\n";
outfm<<eng<<"\n";

outfed<<stid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<cl<<"\n";
outfed<<sec<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<stpass<<"\n";
}
infed.close();
outfed.close();
numread.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto studmenu;
}
case 2:
{
goto studmenu;
}
}
}
case 4:
{
goto studmenu;
}

case 5:
{
exit(0);
}
break;

case 3:
//	*****************  REPORT CARD DISPLAY  ******************
{
char nm[20],sec[5];
long int stid;
float phy,chem,math,comp,eng;
int stno,count=0,tno,ntno,cl;
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
ifstream inf("marks.dat");
school();
for(int i=1;i<=stno;i++)
{
school();
inf>>stid;
inf>>nm;
inf>>cl;
inf>>sec;
inf>>phy;
inf>>chem;
inf>>comp;
inf>>math;
inf>>eng;
if(enstid==stid)
{
int a=5;
gotoxy(1,a);
cout<<"NAME : "<<nm;
gotoxy(60,a);
cout<<"STUDENT ID : "<<stid;
a=a+1;
gotoxy(1,a);
cout<<"CLASS : "<<cl;
gotoxy(60,a);
cout<<"SEC : "<<sec;
a++;
for(int hj=1;hj<=80;hj++)
{
gotoxy(hj,a);
cout<<"=";
}
a++;
gotoxy(1,a);
cout<<"SR.No.";
gotoxy(20,a);
cout<<"SUBJECTS";
gotoxy(35,a);
cout<<"MARKS OBTAINED(IN 100)";
gotoxy(63,a);
cout<<"TOTAL";
gotoxy(70,a);
cout<<"PERCENT";
a++;
for(int hjj=1;hjj<=80;hjj++)
{
gotoxy(hjj,a);
cout<<"=";
}

a=a+2;
int p=1;
gotoxy(3,a);
cout<<p;
p++;
gotoxy(20,a);
cout<<"PHYSICS  \t\t   "<<phy;
a++;
gotoxy(3,a);
cout<<p;
p++;
gotoxy(20,a);
cout<<"CHEMISTRY\t\t   "<<chem;
a++;
gotoxy(3,a);
cout<<p;
p++;
gotoxy(20,a);
cout<<"COMPUTER \t\t   "<<comp;
a++;
gotoxy(3,a);
cout<<p;
p++;
gotoxy(20,a);
cout<<"MATHS    \t\t   "<<math;
a++;
gotoxy(3,a);
cout<<p;
p++;
gotoxy(20,a);
cout<<"ENGLISH  \t\t   "<<eng;
a=a+1;
int t;
float per;
t=phy+chem+math+comp+eng;
per=t/5;
gotoxy(65,13);
cout<<t;
gotoxy(74,13);
cout<<per;
for(hjj=33;hjj<=49;hjj++)
{
gotoxy(hjj,19);
cout<<"=";
}
if(per>=90)
{
gotoxy(35,20);
cout<<"| GRADE = A+ |";}
if(per>=80 && per<90)
{gotoxy(35,20);
cout<<"| GRADE = A |";}
if(per>=70 && per<80)
{gotoxy(35,20);
cout<<"| GRADE = B+ |";}
if(per>=60 && per<70)
{gotoxy(35,20);
cout<<"| GRADE = B |";}
if(per>=50 && per<60)
{gotoxy(35,20);
cout<<"| GRADE = C |";}
if(per>=40 && per<50)
{gotoxy(35,20);
cout<<"| GRADE = D |";}
if(per<40)
{gotoxy(35,20);
cout<<"| GRADE = FAIL |";}
for(hjj=33;hjj<=49;hjj++)
{
gotoxy(hjj,21);
cout<<"=";
}
count++;
for(int h=1;h<=80;h++)
{
gotoxy(h,a);
cout<<"=";
}
getch();
}
}
if(count==0)
{
clrscr();
gotoxy(15,12);
cout<<"X X X  R E S U L T  -NOT-  A D D E D  X X X ";
getch();
}
inf.close();
num.close();
goto studlogin;
}
//	!!!!!!!!!!!!!!!!  REPORT CARD DISPLAY DONE  !!!!!!!!!!!!!!!!!!

}
}
}
if(count==0)
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
}
getch();
goto studmenu;
}
// **************   new student registration   ************
case 2:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[15],ph[20],bgrp[5];
long int stpass;
int i,ch=1,nos=0,stid,cl;
ofstream outf("stud.dat",ios::app);
ofstream outfm("marks.dat",ios::app);
while(ch!=0)
{
school();
for(i=0;i<80;i++)
{
gotoxy(i,5);
cout<<"=";
}
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
cin>>stid;
outf<<stid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Class : ";
cin>>cl;
outf<<cl<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Sec : ";
cin>>sec;
outf<<sec<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Set Password : ";
cin>>stpass;
outf<<stpass<<"\n";
outfm<<stid<<"\n";
outfm<<nm<<"\n";
outfm<<cl<<"\n";
outfm<<sec<<"\n";
float phy=0,chem=0,comp=0,math=0,eng=0;
outfm<<phy<<"\n"<<chem<<"\n"<<comp<<"\n"<<math<<"\n"<<eng<<"\n";
outfm.close();
nos++;
{
school();
for(int x=1;x<=80;x++)
{
gotoxy(x,5);
cout<<"=";
}
gotoxy(65,7);
cout<<"[0 = EXIT ENTRY]";
gotoxy(65,9);
cout<<"[1 = ADD MORE]";
gotoxy(1,8);
cout<<"Want to add more student(0/1)";
cin>>ch;
}
}
outf.close();
int stno,tno,ntno;
ifstream inf("no.dat");
inf>>stno;
inf>>tno;
inf>>ntno;
stno=stno+nos;
ofstream out("no.dat");
out<<stno<<"\n";
out<<tno<<"\n";
out<<ntno<<"\n";
out.close();
inf.close();
}
goto studmenu;
case 3:
{
goto mainmenu;
}
case 4:
{
exit(0);
break;
}
}
}
break;
//	!!!!!!!!!!!!!!!!!!!  STUDENT MENU  !!!!!!!!!!!!!!!!!!!!
//================================================================
//************************** teacher menu ********************************
case 2:
{
teachmenu:
{
clrscr();
school();
cout<<"\n1.> login\n2.> NEW REGISTRATION\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int xyz;
cout<<"enter your choice : ";
cin>>xyz;
switch(xyz)
{
//	  ********** teacher login selected ********
case 1:
{
school();
int enteid,entepass,stno=0,tno=0,ntno=0;
cout<<"\nenter your non-teacher ID : ";
cin>>enteid;
cout<<"\n\nenter your password : ";
cin>>entepass;
ifstream numread("no.dat");
numread>>stno;
numread>>tno;
numread>>ntno;
ifstream stread("teach.dat");
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int tpass;
int teid,count=0,cl;
for(int i=1;i<=tno;i++)
{
stread>>teid;
stread>>nm;
stread>>fnm;
stread>>mnm;
stread>>dob;
stread>>ph;
stread>>gen;
stread>>cast;
stread>>rel;
stread>>edu;
stread>>aadhar;
stread>>bgrp;
stread>>ad;
stread>>tpass;
if(enteid==teid && entepass==tpass)
{
count++;
teachlogin:
{
clrscr();
gotoxy(25,3);
cout<<"! ! W E L C O M E  "<<nm<<" ! !\n\n\n";
cout<<"1.> VIEW PROFILE\n2.> CORRECTION\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int xy;
cout<<"enter your choice : ";
cin>>xy;
//	   ******** for teacher login menu  ********
switch(xy)
{
case 1:
{
//        *******  view teacher profile  *******
school();
gotoxy(25,5);
cout<<"! ! W E L C O M E ! !\t"<<nm<<"\n";
for(int j=1;j<=80;j++)
{
gotoxy(j,4);
cout<<"=";
gotoxy(j,6);
cout<<"=";
}
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<teid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Educational Qualification : ";
cout<<edu;
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cout<<aadhar;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(20,a);
cout<<"Address : ";
cout<<ad;
getch();
goto teachlogin;
}
case 2:
{
//           ******* teacher correction  *******
stread.close();
ifstream inf("teach.dat");
ofstream outf("teachedit.dat");
for(int k=1;k<=tno;k++)
{
inf>>teid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>tpass;
if(teid==enteid && entepass==tpass)
{
school();
gotoxy(25,5);
cout<<"!!!   W E L C O M E "<<nm<<"   !!!";
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
gotoxy(17,a);
cout<<teid;
outf<<teid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gotoxy(48,a);
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Educational Qualification : ";
cin>>edu;
outf<<edu<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Set Password : ";
cin>>tpass;
outf<<tpass<<"\n";
outf<<"\n";
}
else
{
outf<<teid<<"\n"<<nm<<"\n"<<fnm<<"\n"<<mnm<<"\n"<<dob<<"\n"<<ph<<"\n"<<gen<<"\n"<<cast<<"\n"<<rel<<"\n"<<edu<<"\n"<<aadhar<<"\n"<<bgrp<<"\n"<<ad<<"\n"<<tpass<<"\n";
}
}
inf.close();
outf.close();
clrscr();
gotoxy(11,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
clrscr();
school();
cout<<"\n1.> UPDATE\n\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("teachedit.dat");
ofstream outfed("teach.dat");
for(int i=1;i<=tno;i++)
{
infed>>teid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>edu;
infed>>aadhar;
infed>>bgrp;
infed>>ad;
infed>>tpass;

outfed<<teid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<edu<<"\n";
outfed<<aadhar<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<tpass<<"\n";
}
infed.close();
outfed.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto teachmenu;
}
case 2:
{
goto teachlogin;
}
}
}
case 3:
{
goto teachmenu;
}
case 4:
{
exit(0);
}
break;
}
}
}
if(count==0)
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
}
getch();
goto teachmenu;
}
// **************   new teacher registration   ************
case 2:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[15],ph[20],bgrp[5],aadhar[20];
long int tpass;
int i,ch=1,nos=0,teid,cl;
ofstream outf("teach.dat",ios::app);
while(ch!=0)
{
school();
for(i=0;i<80;i++)
{
gotoxy(i,5);
cout<<"=";
}
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
cin>>teid;
outf<<teid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Educational Qualification : ";
cin>>edu;
outf<<edu<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Set Password : ";
cin>>tpass;
outf<<tpass<<"\n";
nos++;
{
clrscr();
school();
for(int x=1;x<=80;x++)
{
gotoxy(x,5);
cout<<"=";
}
gotoxy(65,7);
cout<<"[0 = EXIT ENTRY]";
gotoxy(65,9);
cout<<"[1 = ADD MORE]";
gotoxy(1,8);
cout<<"\t\twant to add more teacher(0/1)";
cin>>ch;
}
}
outf.close();
int stno,tno,ntno;
ifstream inf("no.dat");
inf>>stno;
inf>>tno;
inf>>ntno;
tno=tno+nos;
stno=stno;ntno=ntno;
ofstream out("no.dat");
out<<stno<<"\n";
out<<tno<<"\n";
out<<ntno<<"\n";
out.close();
inf.close();
}
goto teachmenu;

case 3:
{
goto mainmenu;
}

case 4:
{
exit(0);
break;
}
}
}
break;
//	!!!!!!!!!!!!!!!!!!!  TEACHER MENU DONE  !!!!!!!!!!!!!!!!!!!!

//========================================================================

//********************** non-teacher menu ********************************
case 3:
{
nteachmenu:
{
clrscr();
school();
cout<<"\n1.> login\n2.> NEW REGISTRATION\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int xyz;
cout<<"enter your choice";
cin>>xyz;
switch(xyz)
{
//	  ********** non-teacher login selected ********
case 1:
{
school();
int ennteid,enntepass,stno=0,tno=0,ntno=0;
gotoxy(1,11);
cout<<"enter your non-teacher ID : ";
cin>>ennteid;
gotoxy(1,13);
cout<<"enter your password : ";
cin>>enntepass;
ifstream numread("no.dat");
numread>>stno;
numread>>tno;
numread>>ntno;
ifstream stread("nteach.dat");
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int ntpass;
int nteid,count=0,cl;
for(int i=1;i<=ntno;i++)
{
stread>>nteid;
stread>>nm;
stread>>fnm;
stread>>mnm;
stread>>dob;
stread>>ph;
stread>>gen;
stread>>cast;
stread>>rel;
stread>>edu;
stread>>aadhar;
stread>>bgrp;
stread>>ad;
stread>>cl;
stread>>ntpass;
if(ennteid==nteid && enntepass==ntpass)
{
count++;
nteachlogin:
{
clrscr();
gotoxy(25,3);
cout<<"! ! W E L C O M E  "<<nm<<" ! !\n\n\n";
cout<<"1.> VIEW PROFILE\n2.> CORRECTION\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int xy;
cout<<"enter your choice : ";
cin>>xy;
//	   ******** for non-teacher login menu  ********
switch(xy)
{
case 1:
{
//        *******  view non-teacher profile  *******
school();
gotoxy(25,5);
cout<<"! ! W E L C O M E ! !\t"<<nm<<"\n";

for(int j=1;j<=80;j++)
{
gotoxy(j,4);
cout<<"=";
gotoxy(j,6);
cout<<"=";
}
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<nteid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Educational Qualification : ";
cout<<edu;
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cout<<aadhar;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cout<<ad;
gotoxy(40,a);
cout<<"Last class studied : ";
cout<<cl;
a=a+2;
getch();
goto nteachlogin;
}

case 2:
{
//           ******* non-teacher correction  *******
stread.close();
ifstream inf("nteach.dat");
ofstream outf("nteachedit.dat");
for(int k=1;k<=ntno;k++)
{
inf>>nteid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>cl;
inf>>ntpass;
if(nteid==ennteid && enntepass==ntpass)
{
school();
gotoxy(25,5);
cout<<"!!!   W E L C O M E "<<nm<<"   !!!";
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
gotoxy(17,a);
cout<<nteid;
outf<<nteid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gotoxy(48,a);
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Educational Qualification : ";
cin>>edu;
outf<<edu<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Last class studied : ";
cin>>cl;
outf<<cl<<"\n";
a=a+2;
gotoxy(20,a);
cout<<"Set Password : ";
cin>>ntpass;
outf<<ntpass<<"\n";
outf<<"\n";
}
else
{
outf<<nteid<<"\n"<<nm<<"\n"<<fnm<<"\n"<<mnm<<"\n"<<dob<<"\n"<<ph<<"\n"<<gen<<"\n"<<cast<<"\n"<<rel<<"\n"<<edu<<"\n"<<aadhar<<"\n"<<bgrp<<"\n"<<ad<<"\n"<<cl<<"\n"<<ntpass<<"\n";
}
}
inf.close();
outf.close();
clrscr();
gotoxy(11,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
clrscr();
school();
cout<<"\n1.> UPDATE\n\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("nteachedit.dat");
ofstream outfed("nteach.dat");
for(int i=1;i<=ntno;i++)
{
infed>>nteid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>edu;
infed>>aadhar;
infed>>bgrp;
infed>>ad;
infed>>cl;
infed>>ntpass;

outfed<<nteid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<edu<<"\n";
outfed<<aadhar<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<cl<<"\n";
outfed<<ntpass<<"\n";
}
infed.close();
outfed.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto nteachmenu;
}
case 2:
{
goto nteachlogin;
}
}
}
case 3:
{
goto nteachlogin;
}
case 4:
{
exit(0);
}
break;
}
}
}
if(count==0)
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
}
getch();
goto nteachmenu;
}
// **************   new non-teacher registration   ************
case 2:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[15],ph[20],bgrp[5],aadhar[20];
long int ntpass;
int i,ch=1,nos=0,nteid,cl;
ofstream outf("nteach.dat",ios::app);
while(ch!=0)
{
school();
for(i=0;i<80;i++)
{
gotoxy(i,5);
cout<<"=";
}
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
cin>>nteid;
outf<<nteid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Educational Qualification : ";
cin>>edu;
outf<<edu<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Last class studied : ";
cin>>cl;
outf<<cl<<"\n";
a=a+2;
gotoxy(20,a);
cout<<"Set Password : ";
cin>>ntpass;
outf<<ntpass<<"\n";
nos++;
{
school();
for(int x=1;x<=80;x++)
{
gotoxy(x,5);
cout<<"=";
}
gotoxy(65,7);
cout<<"[0 = EXIT ENTRY]";
gotoxy(65,9);
cout<<"[1 = ADD MORE]";
gotoxy(1,8);
cout<<"Want to add more student(0/1)";
cin>>ch;
}
}
outf.close();
int stno,tno,ntno;
ifstream inf("no.dat");
inf>>stno;
inf>>tno;
inf>>ntno;
ntno=ntno+nos;
stno=stno;tno=tno;
ofstream out("no.dat");
out<<stno<<"\n";
out<<tno<<"\n";
out<<ntno<<"\n";
out.close();
inf.close();
}
goto nteachmenu;

case 3:
{
goto mainmenu;
}

case 4:
{
exit(0);
break;
}
}
}
break;
//	!!!!!!!!!!!!!!!!!!!  NON-TEACHER MENU DONE  !!!!!!!!!!!!!!!!!!!!!

//=====================================================================

//     ******************** admin menu	******************************
case 4:
{
school();
char adnm[20],adad[20],addob[20],adaadhar[20],adph[10];
long int adid,adpass,adenid,adenpass;
ifstream admininfo("admin.dat");
admininfo>>adid;
admininfo>>adnm;
admininfo>>adad;
admininfo>>addob;
admininfo>>adph;
admininfo>>adaadhar;
admininfo>>adpass;
gotoxy(1,11);
cout<<"Enter ADMIN Id : ";
cin>>adenid;
gotoxy(1,13);
cout<<"Enter ADMIN PASSCODE : ";
cin>>adenpass;
if(adenid==adid && adenpass==adpass)
{
adminmenu:
{
school();
cout<<"\n1.> VIEW ALL\n2.> SEARCH\n3.> CORRECTION\n4.> DELETE\n5.> SALARY\n6.> DISPLAY STUDENT MARKS\n7.> CHANGE ADMIN\n8.> PREVIOUS MENU\n9.> EXIT\n\n\n";
}
int xyz;
cout<<"enter your choice : ";
cin>>xyz;
switch(xyz)
{
//	****************  VIEW all   *****************
case 1:
viewall:
{
clrscr();
school();
cout<<"\n1.> VIEW STUDENT RECORDS\n2.> VIEW TEACHER RECORDS\n3.> VIEW NON-TEACHER RECORDS\n4.> PREVIOUS MENU\n5.> EXIT\n\n\n";
}
int view;
cout<<"Enter your choice : ";
cin>>view;
switch(view)
{
//	***************  view student records  ******************
case 1:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass;
int stid,cl,stno,tno,ntno;
ifstream inf("stud.dat");
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
for(int i=1;i<=stno;i++)
{
clrscr();
inf>>stid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>cl;
inf>>sec;
inf>>bgrp;
inf>>ad;
inf>>stpass;
school();
gotoxy(25,5);
cout<<"RECORD NO. = "<<i;
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<stid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Class : ";
cout<<cl;
a=a+2;
gotoxy(1,a);
cout<<"Sec : ";
cout<<sec;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(20,a);
cout<<"Address : ";
cout<<ad;
gotoxy(15,24);
cout<<"! ! !   PRESS ANY KEY TO CONTINUE   ! ! !";
getch();
}
inf.close();
num.close();
goto viewall;
}

//	****************  view teacher records  ******************
case 2:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int tpass;
int teid,stno,tno,ntno;

ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;

ifstream inf("teach.dat");
for(int i=1;i<=tno;i++)
{
clrscr();
school();
inf>>teid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>tpass;
gotoxy(25,5);
cout<<"RECORD NO. = "<<i;
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<teid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Educational Qualification : ";
cout<<edu;
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cout<<aadhar;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(20,a);
cout<<"Address : ";
cout<<ad;
gotoxy(15,24);
cout<<"! ! !   PRESS ANY KEY TO CONTINUE   ! ! !";
getch();
}
inf.close();
num.close();
goto viewall;
}

//	**************  view non-teacher records  *****************
case 3:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int ntpass;
int nteid,cl,stno,tno,ntno;

ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;

ifstream inf("nteach.dat");
for(int i=1;i<=ntno;i++)
{
clrscr();
school();
inf>>nteid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>cl;
inf>>ntpass;

gotoxy(25,5);
cout<<"RECORD NO. = "<<i;
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<nteid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Educational Qualification : ";
cout<<edu;
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cout<<aadhar;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cout<<ad;
gotoxy(20,a);
cout<<"Last class studied : ";
cout<<cl;
a=a+2;
gotoxy(15,24);
cout<<"! ! !   PRESS ANY KEY TO CONTINUE   ! ! !";
getch();
}
inf.close();
num.close();
goto viewall;
}

//	**************  view all previous menu  ***************
case 4:
{
goto adminmenu;
}

case 5:
{
exit(0);
}
break;

//	!!!!!!!!!!!!!!!  view all menu done  !!!!!!!!!!!!!!!

}

//	*****************  SEARCH  *****************
case 2:
{
searchall:
{
clrscr();
school();
cout<<"\n1.> SEARCH FOR STUDENT RECORDS\n2.> SEARCH FOR TEACHER RECORDS\n3.> SEARCH FOR NON-TEACHER RECORDS\n4.> PREVIOUS MENU\n5.> EXIT\n\n\n";
}
int search;
cout<<"Enter your choice : ";
cin>>search;
switch(search)
{
//	***************  search for student records  ******************
case 1:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass;
int stid,srid,count,cl,stno,tno,ntno;

clrscr();
school();
gotoxy(1,12);
cout<<"Enter student id to search : ";
cin>>srid;

ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
count=stno;

ifstream inf("stud.dat");
for(int i=1;i<=stno;i++)
{
inf>>stid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>cl;
inf>>sec;
inf>>bgrp;
inf>>ad;
inf>>stpass;

if(srid==stid)
{
clrscr();
school();
record(i);
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<stid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Class : ";
cout<<cl;
a=a+2;
gotoxy(1,a);
cout<<"Sec : ";
cout<<sec;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cout<<ad;
gotoxy(40,a);
cout<<"Your Password : ";
cout<<stpass;
getch();
count=stno-1;
}
}
if(count==stno)
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
gotoxy(25,24);
cout<<"PRESS ANY KEY TO CONTINUE ...";
getch();
}
goto searchall;
}

//	**************  search for teacher records  **************
case 2:
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int tpass;
int teid,count=0,cl,stno,tno,ntno,srid;

clrscr();
school();
gotoxy(1,12);
cout<<"Enter teacher id to search : ";
cin>>srid;

ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;

ifstream inf("teach.dat");
for(int i=1;i<=tno;i++)
{
inf>>teid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>tpass;

if(srid==teid)
{
clrscr();
school();
record(i);
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<teid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Educational Qualification : ";
cout<<edu;
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cout<<aadhar;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cout<<ad;
gotoxy(40,a);
cout<<"Your Password : ";
cout<<tpass;
getch();
count++;
}
}
if(count!=1)
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
gotoxy(25,24);
cout<<"PRESS ANY KEY TO CONTINUE ...";
getch();
}
inf.close();
num.close();
goto searchall;
}

//	**************  search for non-teacher records  **************
case 3:
{
clrscr();
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int ntpass;
int nteid,cl,stno,tno,ntno,srid,count=0;
school();
gotoxy(1,12);
cout<<"Enter the non-teacher id you want to search : ";
cin>>srid;
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
count=ntno;

ifstream inf("nteach.dat");
for(int i=1;i<=ntno;i++)
{
inf>>nteid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>cl;
inf>>ntpass;

if(srid==nteid)
{
clrscr();
school();
gotoxy(25,5);
cout<<"RECORD NO. = "<<i;
int a=8;
gotoxy(1,a);
cout<<"Your id : ";
cout<<nteid;
gotoxy(40,a);
cout<<"Name : ";
cout<<nm;;
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
cout<<fnm;
gotoxy(40,a);
cout<<"Mother Name : ";
cout<<mnm;
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cout<<dob;
gotoxy(40,a);
cout<<"Phone no. : ";
cout<<ph;
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cout<<gen;
gotoxy(40,a);
cout<<"Caste : ";
cout<<cast;
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cout<<rel;
gotoxy(40,a);
cout<<"Educational Qualification : ";
cout<<edu;
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cout<<aadhar;
gotoxy(40,a);
cout<<"Blood Group : ";
cout<<bgrp;
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cout<<ad;
gotoxy(40,a);
cout<<"Last class studied : ";
cout<<cl;
a=a+2;
gotoxy(20,a);
cout<<"Your Password : ";
cout<<ntpass;
getch();
count=ntno-1;
}
}
if(count==ntno)
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
gotoxy(25,24);
cout<<"PRESS ANY KEY TO CONTINUE ...";
getch();
}
inf.close();
num.close();
goto searchall;
}

//	*************  previous menu (search)  *************
case 4:
{
goto adminmenu;
}

//	************  exit (search)  **********
case 5:
{
exit(0);
}
break;
}

}

//	!!!!!!!!!!!!!  SEARCH DONE  !!!!!!!!!!!!!!
break;

//	*************  CORRECTION  *************
case 3:
{
editall:
{
clrscr();
school();
cout<<"\n\n1.> STUDENT\n2.> TEACHER\n3.> NON-TEACHER\n4.> PREVIOUS MENU\n5.> EXIT\n\n\n";
}
int namo,stno,tno,ntno;
cout<<"Enter your choice : ";
cin>>namo;
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
switch(namo)
{
case 1:
{

char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass;
int stid,cl,edid;

ifstream inf("stud.dat");
ofstream outf("stedit.dat");
school();
gotoxy(1,12);
cout<<"Enter student ID you want to edit : ";
cin>>edid;
for(int k=1;k<=stno;k++)
{
inf>>stid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>cl;
inf>>sec;
inf>>bgrp;
inf>>ad;
inf>>stpass;
if(stid==edid)
{
school();
gotoxy(25,5);
cout<<"!!!   W E L C O M E "<<nm<<"   !!!";
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
gotoxy(17,a);
cout<<stid;
outf<<stid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gotoxy(48,a);
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Class : ";
cin>>cl;
outf<<cl<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Sec : ";
cin>>sec;
outf<<sec<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Set Password : ";
cin>>stpass;
outf<<stpass<<"\n";
outf<<"\n";
}
else
{
outf<<stid<<"\n"<<nm<<"\n"<<fnm<<"\n"<<mnm<<"\n"<<dob<<"\n"<<ph<<"\n"<<gen<<"\n"<<cast<<"\n"<<rel<<"\n"<<cl<<"\n"<<sec<<"\n"<<bgrp<<"\n"<<ad<<"\n"<<stpass<<"\n";
}
}
inf.close();
outf.close();
clrscr();
gotoxy(11,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
clrscr();
school();
cout<<"\n1.> UPDATE\n\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("stedit.dat");
ofstream outfed("stud.dat");
for(int i=1;i<=stno;i++)
{
infed>>stid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>cl;
infed>>sec;
infed>>bgrp;
infed>>ad;
infed>>stpass;

outfed<<stid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<cl<<"\n";
outfed<<sec<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<stpass<<"\n";
}
infed.close();
outfed.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto adminmenu;
}
case 2:
{
goto adminmenu;
}
}

//!!!!!!!!!!!!!!!!!!!!! student edit done !!!!!!!!!!!!!!!!!!!!!!!!!
}
break;
case 2:
//	*****************  teacher edit  *******************
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int tpass;
int edid,teid,cl;

ifstream inf("teach.dat");
ofstream outf("teachedit.dat");
clrscr();
school();
gotoxy(1,12);
cout<<"Enter teacher ID to edit : ";
cin>>edid;
for(int k=1;k<=tno;k++)
{
inf>>teid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>tpass;
if(teid==edid)
{
school();
gotoxy(25,5);
cout<<"!!!   W E L C O M E "<<nm<<"   !!!";
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
gotoxy(17,a);
cout<<teid;
outf<<teid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gotoxy(48,a);
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Educational Qualification : ";
cin>>edu;
outf<<edu<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Set Password : ";
cin>>tpass;
outf<<tpass<<"\n";
outf<<"\n";
}
else
{
outf<<teid<<"\n"<<nm<<"\n"<<fnm<<"\n"<<mnm<<"\n"<<dob<<"\n"<<ph<<"\n"<<gen<<"\n"<<cast<<"\n"<<rel<<"\n"<<edu<<"\n"<<aadhar<<"\n"<<bgrp<<"\n"<<ad<<"\n"<<tpass<<"\n";
}
}
inf.close();
outf.close();
clrscr();
gotoxy(11,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
clrscr();
school();
cout<<"\n1.> UPDATE\n\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("teachedit.dat");
ofstream outfed("teach.dat");
for(int i=1;i<=tno;i++)
{
infed>>teid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>edu;
infed>>aadhar;
infed>>bgrp;
infed>>ad;
infed>>tpass;

outfed<<teid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<edu<<"\n";
outfed<<aadhar<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<tpass<<"\n";
}
infed.close();
outfed.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto adminmenu;
}
case 2:
{
goto adminmenu;
}
}
}
//	!!!!!!!!!!!!!!!!!!  teacher edit done  !!!!!!!!!!!!!!!!!!
break;


case 3:
//	******************* NON-teacher edit *********************
{
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int ntpass;
int nteid,edid,cl;

ifstream inf("nteach.dat");
ofstream outf("nteachedit.dat");
clrscr();
school();
gotoxy(1,12);
cout<<"Enter NON-teacher ID you want to search : ";
cin>>edid;

for(int k=1;k<=ntno;k++)
{
inf>>nteid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>cl;
inf>>ntpass;
if(nteid==edid)
{
school();
gotoxy(25,5);
cout<<"!!!   W E L C O M E "<<nm<<"   !!!";
int a=8;
gotoxy(1,a);
cout<<"Enter your id : ";
gotoxy(17,a);
cout<<nteid;
outf<<nteid<<"\n";
gotoxy(40,a);
cout<<"Name : ";
gotoxy(48,a);
gets(nm);
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Father Name : ";
gets(fnm);
outf<<fnm<<"\n";
gotoxy(40,a);
cout<<"Mother Name : ";
gets(mnm);
outf<<mnm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
gotoxy(40,a);
cout<<"Phone no. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Gender : ";
cin>>gen;
outf<<gen<<"\n";
gotoxy(40,a);
cout<<"Caste : ";
cin>>cast;
outf<<cast<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Religion : ";
cin>>rel;
outf<<rel<<"\n";
gotoxy(40,a);
cout<<"Educational Qualification : ";
cin>>edu;
outf<<edu<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Aadhar no. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"Blood Group : ";
cin>>bgrp;
outf<<bgrp<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"Address : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"Last class studied : ";
cin>>cl;
outf<<cl<<"\n";
a=a+2;
gotoxy(20,a);
cout<<"Set Password : ";
cin>>ntpass;
outf<<ntpass<<"\n";
outf<<"\n";
}
else
{
outf<<nteid<<"\n"<<nm<<"\n"<<fnm<<"\n"<<mnm<<"\n"<<dob<<"\n"<<ph<<"\n"<<gen<<"\n"<<cast<<"\n"<<rel<<"\n"<<edu<<"\n"<<aadhar<<"\n"<<bgrp<<"\n"<<ad<<"\n"<<cl<<"\n"<<ntpass<<"\n";
}
}
inf.close();
outf.close();
clrscr();
gotoxy(11,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
clrscr();
school();
cout<<"\n1.> UPDATE\n\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("nteachedit.dat");
ofstream outfed("nteach.dat");
for(int i=1;i<=ntno;i++)
{
infed>>nteid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>edu;
infed>>aadhar;
infed>>bgrp;
infed>>ad;
infed>>cl;
infed>>ntpass;

outfed<<nteid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<edu<<"\n";
outfed<<aadhar<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<cl<<"\n";
outfed<<ntpass<<"\n";
}
infed.close();
outfed.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto adminmenu;
}
case 2:
{
goto adminmenu;
}
}
}
//	!!!!!!!!!!!!!!!!!! NON-teacher edit done !!!!!!!!!!!!!!!!!!!!!
break;

case 4:
//	*******************  previous menu (correction)  *******************
{
goto adminmenu;
}

case 5:
//	********************  exit (correction)  *******************
{
exit(0);
}
num.close();
break;
}
}
//	!!!!!!!!!!!!!!!  CORRECTION DONE   !!!!!!!!!!!!!!!
break;

//	*******************  DELETE  ********************
case 4:
{
deleteall:
{
clrscr();
school();
cout<<"\n\n1.> DELETE STUDENT RECORD\n2.> DELETE TEACHER RECORD\n3.> DELETE NON-TEACHER RECORD\n4.> PREVIOUS MENU\n5.> EXIT\n\n\n";
}
int del;
cout<<"Enter your choice : ";
cin>>del;
switch(del)
{

case 1:
//	***********************  DELETE  ***********************
{
delstud:
{
clrscr();
school();
cout<<"\n\n1.> DELETE ALL STUDENT RECORD(s)\n2.> DELETE USING STUDENT ID\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int delst;
cout<<"Enter your choice : ";
cin>>delst;
switch(delst)
{
case 1:
//	***************** delete all student *******************
{
clrscr();
school();
gotoxy(5,6);
cout<<"! ! !  ARE YOU SURE YOU WANT TO DELETE ALL STUDENT RECORD(s)  ! ! !\n";
gotoxy(1,8);
cout<<"\n\n1.> YES\n\n2.> NO\n\n\n";
int delall;
cout<<"Enter your choice : ";
cin>>delall;
switch(delall)
{
case 1:
//	*****************  yes  *******************
{
int stno,tno,ntno;
ofstream outf("stud.dat");
outf.close();
ifstream inum("no.dat");
inum>>stno;
inum>>tno;
inum>>ntno;
stno=0;
ofstream onum("no.dat");
onum<<stno<<"\n";
onum<<tno<<"\n";
onum<<ntno<<"\n";
onum.close();
inum.close();
goto delstud;
}

case 2:
//	****************  no  *******************
{
goto delstud;
}
}
}
//	!!!!!!!!!!!!!!!!  delete all student done  !!!!!!!!!!!!!!!!!!
break;

case 2:
//	********************  delete using stud id  *********************
{

char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass;
int delid,stid,cl,stno,tno,ntno;

school();

ifstream inf("stud.dat");
ofstream outfed("stedit.dat");
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
gotoxy(1,12);
cout<<"Enter student ID you want to DELETE : ";
cin>>delid;
for(int i=1;i<=stno;i++)
{
inf>>stid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>cl;
inf>>sec;
inf>>bgrp;
inf>>ad;
inf>>stpass;
if(stid!=delid)
{
outfed<<stid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<cl<<"\n";
outfed<<sec<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<stpass<<"\n\n";
}
}
inf.close();
outfed.close();
if(stid!=delid)
{
clrscr();
gotoxy(20,12);
cout<<"! ! !  RECORD NOT FOUND  ! ! !";
getch();
goto delstud;
}

school();
gotoxy(10,12);
cout<<"! ! !  ARE YOU SURE TO DELETE THE RECORD  ! ! !";
gotoxy(20,14);
cout<<"``` THEN PLEASE UPDATE IT '''\n\n";
getch();
school();
cout<<"\n\n1.> DELETE\n\n2.> DON't DELETE\n\n\n";
int wxy;
cout<<"Enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
stno--;
ifstream infed("stedit.dat");
ofstream outfe("stud.dat");
for(int i=1;i<=stno;i++)
{
infed>>stid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>cl;
infed>>sec;
infed>>bgrp;
infed>>ad;
infed>>stpass;

outfe<<stid<<"\n";
outfe<<nm<<"\n";
outfe<<fnm<<"\n";
outfe<<mnm<<"\n";
outfe<<dob<<"\n";
outfe<<ph<<"\n";
outfe<<gen<<"\n";
outfe<<cast<<"\n";
outfe<<rel<<"\n";
outfe<<cl<<"\n";
outfe<<sec<<"\n";
outfe<<bgrp<<"\n";
outfe<<ad<<"\n";
outfe<<stpass<<"\n\n";
}
ofstream onum("no.dat");
onum<<stno<<"\n";
onum<<tno<<"\n";
onum<<ntno<<"\n";
onum.close();
infed.close();
outfe.close();
num.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto delstud;
}

case 2:
{
goto delstud;
}
}

}
//	!!!!!!!!!!!!!!!!!  delete using stud id done  !!!!!!!!!!!!!!!!
break;

case 3:
//	*****************  previous menu (delete student)  *****************
{
goto deleteall;
}
//	!!!!!!!!!!!!!!!  previous menu (delete student) done  !!!!!!!!!!!!!!!

case 4:
//	***************  exit (delete student)  *****************
{
exit(0);
}
break;

}
//	!!!!!!!!!!!!!!!  delete student record done  !!!!!!!!!!!!!!!
break;

case 2:
//	******************  delete teacher record  ********************
{
delteach:
{
clrscr();
school();
cout<<"\n\n1.> DELETE ALL TEACHER RECORD(s)\n2.> DELETE USING TEACHER ID\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int delst;
cout<<"Enter your choice : ";
cin>>delst;
switch(delst)
{
case 1:
//	*****************  delete all teacher record(s)  *****************
{
clrscr();
school();
gotoxy(5,6);
cout<<"! ! !  ARE YOU SURE YOU WANT TO DELETE ALL TEACHER RECORD(s)  ! ! !\n";
gotoxy(1,10);
cout<<"1.> YES\n\n2.> NO\n\n\n";
int delall;
cout<<"Enter your choice : ";
cin>>delall;
switch(delall)
{
case 1:
//	*****************  yes  *******************
{
int stno,tno,ntno;
ofstream outf("teach.dat");
ifstream inum("no.dat");
inum>>stno;
inum>>tno;
inum>>ntno;
tno=0;
ofstream onum("no.dat");
onum<<stno<<"\n";
onum<<tno<<"\n";
onum<<ntno<<"\n";
onum.close();
inum.close();
outf.close();
goto delteach;
}

case 2:
//	****************  no  *******************
{
goto delteach;
}
}
}
//	!!!!!!!!!!!!!!!!  delete all teacher done  !!!!!!!!!!!!!!!!!!
break;

case 2:
//	********************  delete using teach id  *********************
{

char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int tpass;
int delid,teid,stno,tno,ntno;

school();

ifstream inf("teach.dat");
ofstream outfed("teaedit.dat");
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
gotoxy(1,12);
cout<<"Enter teacher ID you want to DELETE : ";
cin>>delid;
for(int i=1;i<=tno;i++)
{
inf>>teid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>tpass;
if(teid!=delid)
{
outfed<<teid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<edu<<"\n";
outfed<<aadhar<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<tpass<<"\n\n";
}
}
inf.close();
outfed.close();
if(teid!=delid)
{
clrscr();
gotoxy(20,12);
cout<<"! ! !  RECORD NOT FOUND  ! ! !";
getch();
goto delteach;
}

gotoxy(10,12);
cout<<"! ! !  ARE YOU SURE TO DELETE THE RECORD  ! ! !";
gotoxy(20,14);
cout<<"``` THEN PLEASE UPDATE IT '''\n\n";
getch();
school();
cout<<"\n1.> DELETE\n\n2.> DON't DELETE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ifstream infed("teaedit.dat");
ofstream outfe("teach.dat");
tno--;
for(int i=1;i<=tno;i++)
{
infed>>teid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>edu;
infed>>aadhar;
infed>>bgrp;
infed>>ad;
infed>>tpass;

outfe<<teid<<"\n";
outfe<<nm<<"\n";
outfe<<fnm<<"\n";
outfe<<mnm<<"\n";
outfe<<dob<<"\n";
outfe<<ph<<"\n";
outfe<<gen<<"\n";
outfe<<cast<<"\n";
outfe<<rel<<"\n";
outfe<<edu<<"\n";
outfe<<aadhar<<"\n";
outfe<<bgrp<<"\n";
outfe<<ad<<"\n";
outfe<<tpass<<"\n";
}
ofstream onum("no.dat");
onum<<stno<<"\n";
onum<<tno<<"\n";
onum<<ntno<<"\n";
onum.close();
infed.close();
outfe.close();
num.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto delteach;
}

case 2:
{
goto delteach;
}
}
}
//	!!!!!!!!!!!!!!!!!  delete using teach id done  !!!!!!!!!!!!!!!!
break;

case 3:
//	*****************  previous menu (delete teacher)  *****************
{
goto deleteall;
}
//	!!!!!!!!!!!!!!!  previous menu (delete teacher) done  !!!!!!!!!!!!!!!

case 4:
//	***************  exit (delete teacher)  *****************
{
exit(0);
}
break;
}
}
//	!!!!!!!!!!!!!!!  delete teacher record done  !!!!!!!!!!!!!!!
break;

case 3:
//	*******************  NON-TEACHER DELETE  *******************
{

delnteach:
{
clrscr();
school();
cout<<"\n\n1.> DELETE ALL NON-TEACHER RECORD(s)\n2.> DELETE USING NON-TEACHER ID\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int delst;
cout<<"Enter your choice : ";
cin>>delst;
switch(delst)
{
case 1:
//	*****************  delete all non-teacher record(s)  *****************
{
clrscr();
school();
gotoxy(5,6);
cout<<"! ! !  ARE YOU SURE YOU WANT TO DELETE ALL NON-TEACHER RECORD(s)  ! ! !\n";
gotoxy(1,8);
cout<<"\n\n1.> YES\n\n2.> NO\n\n\n";
int delall;
cout<<"Enter your choice : ";
cin>>delall;
switch(delall)
{
case 1:
//	*****************  yes  *******************
{
int stno,tno,ntno;
ofstream outf("nteach.dat");
outf.close();
ifstream inum("no.dat");
inum>>stno;
inum>>tno;
inum>>ntno;
ntno=0;
ofstream onum("no.dat");
onum<<stno<<"\n";
onum<<tno<<"\n";
onum<<ntno<<"\n";
onum.close();
inum.close();
goto delnteach;
}

case 2:
//	****************  no  *******************
{
goto delnteach;
}
}
}
//	!!!!!!!!!!!!!!!!  delete all non-teacher done  !!!!!!!!!!!!!!!!!!
break;

case 2:
//	********************  delete using non-teach id  *********************
{

char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int ntpass;
int delid,nteid,stno,tno,ntno,cl;

clrscr();
school();

ifstream inf("nteach.dat");
ofstream outfed("nteaedit.dat");
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
gotoxy(1,12);
cout<<"Enter non-teacher ID you want to DELETE : ";
cin>>delid;
for(int i=1;i<=ntno;i++)
{
inf>>nteid;
inf>>nm;
inf>>fnm;
inf>>mnm;
inf>>dob;
inf>>ph;
inf>>gen;
inf>>cast;
inf>>rel;
inf>>edu;
inf>>aadhar;
inf>>bgrp;
inf>>ad;
inf>>cl;
inf>>ntpass;
if(nteid!=delid)
{
outfed<<nteid<<"\n";
outfed<<nm<<"\n";
outfed<<fnm<<"\n";
outfed<<mnm<<"\n";
outfed<<dob<<"\n";
outfed<<ph<<"\n";
outfed<<gen<<"\n";
outfed<<cast<<"\n";
outfed<<rel<<"\n";
outfed<<edu<<"\n";
outfed<<aadhar<<"\n";
outfed<<bgrp<<"\n";
outfed<<ad<<"\n";
outfed<<cl<<"\n";
outfed<<ntpass<<"\n\n";
}
}
inf.close();
outfed.close();
clrscr();
gotoxy(10,12);
cout<<"! ! !  ARE YOU SURE TO DELETE THE RECORD  ! ! !";
gotoxy(20,13);
cout<<"THEN PLEASE UPDATE IT\n\n";
getch();
clrscr();
school();
cout<<"\n1.> UPDATE\n\n2.> DON't UPDATE\n\n\n";
int wxy;
cout<<"enter your choice : ";
cin>>wxy;
switch(wxy)
{
case 1:
{
ntno--;
ifstream infed("nteaedit.dat");
ofstream outfe("nteach.dat");
for(int i=1;i<=ntno;i++)
{
infed>>nteid;
infed>>nm;
infed>>fnm;
infed>>mnm;
infed>>dob;
infed>>ph;
infed>>gen;
infed>>cast;
infed>>rel;
infed>>edu;
infed>>aadhar;
infed>>bgrp;
infed>>ad;
infed>>cl;
infed>>ntpass;

outfe<<nteid<<"\n";
outfe<<nm<<"\n";
outfe<<fnm<<"\n";
outfe<<mnm<<"\n";
outfe<<dob<<"\n";
outfe<<ph<<"\n";
outfe<<gen<<"\n";
outfe<<cast<<"\n";
outfe<<rel<<"\n";
outfe<<edu<<"\n";
outfe<<aadhar<<"\n";
outfe<<bgrp<<"\n";
outfe<<ad<<"\n";
outfe<<cl<<"\n";
outfe<<ntpass<<"\n";
}
ofstream onum("no.dat");
onum<<stno<<"\n";
onum<<tno<<"\n";
onum<<ntno<<"\n";
onum.close();
infed.close();
outfe.close();
num.close();
clrscr();
gotoxy(22,12);
cout<<"!!!   F I L E  U P D A A T E D   !!!";
getch();
goto delnteach;
}

case 2:
{
goto delnteach;
}
}
}
//	!!!!!!!!!!!!!!!!!  delete using non-teach id done  !!!!!!!!!!!!!!!!
break;

case 3:
//	*****************  previous menu (delete non-teacher)  *****************
{
goto deleteall;
}
//	!!!!!!!!!!!!!!!  previous menu (delete non-teacher) done  !!!!!!!!!!!!!!!

case 4:
//	***************  exit (delete non-teacher)  *****************
{
exit(0);
}
break;
}


}
//	!!!!!!!!!!!!!!!!!!  NON-TEACHER DELETE DONE  !!!!!!!!!!!!!!!!!!!
break;
case 4:
//	********************  PREVIOUS MENU (delete)  *********************
{
goto adminmenu;
}
//	!!!!!!!!!!!!!!!!  PREVIOUS MENU (delete)  !!!!!!!!!!!!!!!!!

case 5:
//	******************  EXIT (delete)  ****************
{
exit(0);
}
//	!!!!!!!!!!!!!  EXIT (delete)  !!!!!!!!!!!!!
break;


}


}
}
//	!!!!!!!!!!!!!!!!  DELETE DONE  !!!!!!!!!!!!!!!!!!
break;

case 5:
//	************* salary *************
{
teasal:
{
school();
cout<<"\n\n1.> DISPLAY TEACHER SALARY\n2.> DISPLAY NON-TECHER SALARY\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int sal;
cout<<"Enter your choice : ";
cin>>sal;
switch(sal)
{
case 1:
{
char nm[20];
int stno,tno,ntno,teid;
long int basic;
float da,pf,hra,med,tsal;
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
ifstream inf("tsal.dat");
school();
gotoxy(1,5);
cout<<"ID       NAME        basic         da        pf       hra       med \n\n";
for(int j=1;j<=80;j++)
{
gotoxy(j,6);
cout<<"=";
}
int a=8;
for(int i=1;i<=tno;i++)
{
inf>>teid;
inf>>nm;
inf>>basic;
gotoxy(1,a);
cout<<teid;
gotoxy(11,a);
cout<<nm;
gotoxy(21,a);
cout<<basic;
da=basic*0.9;
pf=(basic+da)*0.3;
hra=0.3*basic;
med=0.1*basic;
tsal=(basic+da-pf)+hra+med;
gotoxy(35,a);
cout<<da;
gotoxy(45,a);
cout<<pf;
gotoxy(55,a);
cout<<hra;
gotoxy(65,a);
cout<<med;
a=a++;
gotoxy(1,a);
cout<<"TOTAL SALARY = "<<tsal;
a=a++;
for(int mn=1;mn<=80;mn++)
{
gotoxy(mn,a);
cout<<"-";
}
a++;
}
getch();
inf.close();
num.close();
goto teasal;

}
//	!!!!!!!!!!!!!!!!!!!!  DISPLAY TEACHER SALARY  !!!!!!!!!!!!!!!!!!!!!

case 2:
//	*******************  DISPLAY NON-TEACHER SALARY  *******************
{
int ntid,stno,tno,ntno;
char nm[20];
long int basic;
float da,pf,hra,med,tsal;
ifstream numread("no.dat");
numread>>stno;
numread>>tno;
numread>>ntno;
ifstream inf("ntsal.dat");
school();
gotoxy(1,5);
cout<<"ID       NAME       basic          da        pf       hra       med \n\n";
for(int j=1;j<=80;j++)
{
gotoxy(j,6);
cout<<"-";
}
int a=8;
for(int i=1;i<=ntno;i++)
{
inf>>ntid;
inf>>nm;
inf>>basic;
gotoxy(1,a);
cout<<ntid;
gotoxy(7,a);
cout<<nm;
gotoxy(21,a);
cout<<basic;
da=basic*0.9;
pf=(basic+da)*0.3;
hra=0.3*basic;
med=0.1*basic;
tsal=(basic+da-pf)+hra+med;
gotoxy(35,a);
cout<<da;
gotoxy(45,a);
cout<<pf;
gotoxy(55,a);
cout<<hra;
gotoxy(65,a);
cout<<med;
a++;
gotoxy(1,a);
cout<<"TOTAL SALARY = "<<tsal;
a=a++;
for(int mn=1;mn<=80;mn++)
{
gotoxy(mn,a);
cout<<"-";
}
a++;
}
getch();
numread.close();
inf.close();
goto teasal;
}
//	!!!!!!!!!!!!!!!!!  DISPLAY NON-TEACHER SALARY  !!!!!!!!!!!!!!!!!

case 3:
{
goto adminmenu;
}

case 4:
{
exit(0);
}
break;
}
}
//	!!!!!!!!!!!!!!!  salary done  !!!!!!!!!!!!!!!
break;

case 6:
//	*****************  STUDENT MARKS DISPLAY  ******************
{
char nm[20],sec[5];
long int stid;
float phy,chem,math,comp,eng;
int stno,tno,ntno,cl;
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;
ifstream inf("marks.dat");
school();
gotoxy(4,5);
cout<<"NAME\t      CLASS\t     PHYSICS  CHEMISTRY  COMPUTER    MATHS  ENGLISH\n";
for(int h=1;h<=80;h++)
{
gotoxy(h,6);
cout<<"=";
}
int a=7;
for(int i=1;i<=stno;i++)
{
inf>>stid;
inf>>nm;
inf>>cl;
inf>>sec;
inf>>phy;
inf>>chem;
inf>>comp;
inf>>math;
inf>>eng;

gotoxy(3,a);
cout<<nm;
gotoxy(17,a);
cout<<cl;
gotoxy(33,a);
cout<<phy;
gotoxy(43,a);
cout<<chem;
gotoxy(53,a);
cout<<comp;
gotoxy(64,a);
cout<<math;
gotoxy(72,a);
cout<<eng;
a=a+2;
}
getch();
inf.close();
num.close();
goto adminmenu;
}
//	!!!!!!!!!!!!!!!!  STUDENT MARKS DISPLAY DONE  !!!!!!!!!!!!!!!!!!

case 7:
//	***************  CHANGE ADMIN  ***************
{
school();
ofstream outf("admin.dat");
char nm[20],ad[20],dob[20],aadhar[20],ph[10];
long int adid,adpass;
int a=6;
gotoxy(1,a);
cout<<"NAME : ";
gets(nm);
gotoxy(40,a);
cout<<"ADMIN ID : ";
cin>>adid;
a=a+2;
gotoxy(1,a);
cout<<"ADDRESS : ";
cin>>ad;
gotoxy(40,a);
cout<<"DOB : ";
cin>>dob;
a=a+2;
gotoxy(1,a);
cout<<"AADHAR NO. : ";
cin>>aadhar;
gotoxy(40,a);
cout<<"PHONE No. : ";
cin>>ph;
a=a+2;
gotoxy(20,a);
cout<<"PASSWORD : ";
cin>>adpass;
outf<<adid<<"\n";
outf<<nm<<"\n";
outf<<ad<<"\n";
outf<<dob<<"\n";
outf<<ph<<"\n";
outf<<aadhar<<"\n";
outf<<adpass<<"\n\n";
outf.close();
goto mainmenu;
}
//	!!!!!!!!!!!!!!  CHANGE ADMIN DONE  !!!!!!!!!!!!!!!

case 8:
//	*****************  PREVIOUS MENU (ADMIN)  *****************
{
goto mainmenu;
}

case 9:
//	******************  EXIT (ADMIN)  *******************
{
exit(0);
}
//	!!!!!!!!!!!!!!!!!!!  EXIT (ADMIN)  !!!!!!!!!!!!!!!!!!!!
break;
}
}	//   ADMIN CREDIENTIALS CHECK
else
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
getch();
goto mainmenu;
}


}
break;
//	!!!!!!!!!!!!!!!!!!  ADMIN MENU DONE  !!!!!!!!!!!!!!!!!!!!!!!!!
//=========================================================================
case 5:
//	*********************  OPERATOR MENU  ***********************
{
school();
char nm[20],ad[20],aadhar[20],ph[20],dob[10];
int count=0;
long int opid,oppass,enopid,enoppass;
ifstream opinf("operator.dat");
opinf>>opid;
opinf>>nm;
opinf>>ad;
opinf>>dob;
opinf>>aadhar;
opinf>>ph;
opinf>>oppass;
school;
gotoxy(1,11);
cout<<"Enter operator Id : ";
cin>>enopid;
gotoxy(1,13);
cout<<"Enter operator Passcode : ";
cin>>enoppass;
if(enopid==opid && enoppass==oppass)
{
count++;
operatormenu:
{
school();
cout<<"\n\n1.> STUDENT MARKS ALLOCATION\n2.> TEACHER SALARY ALLOCATE\n3.> NON-TEACHER SALARY ALLOCATION\n4.> CHANGE OPERATOR\n5.> PREVIOUS MENU\n6.> EXIT\n\n\n";
}
int stno,tno,ntno;
ifstream num("no.dat");
num>>stno;
num>>tno;
num>>ntno;

int marks;
cout<<"Enter your choice : ";
cin>>marks;
switch(marks)
{
case 1:
//	*********************  MARKS ALLOCATE  ************************
{
studmark:
{
school();
cout<<"\n\n1.> ALLOCATE MARKS OF ALL STUDENT(s)\n2.> ALLOCATE MARKS USING STUDENT ID\n3.> PREVIOUS MENU\n4.> EXIT\n\n\n";
}
int markal;
cout<<"Enter your choice : ";
cin>>markal;
switch(markal)
//      ********************  allocate all stud marks  *******************
{
case 1:
//	*****************  m allocate all  *******************
{
float phy,chem,math,comp,eng;
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass,stid;
int count=0,cl;
ifstream stread("stud.dat");
ofstream outf("marks2.dat");

for(int i=1;i<=stno;i++)
{
stread>>stid;
stread>>nm;
stread>>fnm;
stread>>mnm;
stread>>dob;
stread>>ph;
stread>>gen;
stread>>cast;
stread>>rel;
stread>>cl;
stread>>sec;
stread>>bgrp;
stread>>ad;
stread>>stpass;
school();
int a=5;
gotoxy(60,a);
cout<<"STUDENT ID : "<<stid;
outf<<stid<<"\n";
gotoxy(1,a);
cout<<"NAME : "<<nm;
outf<<nm<<"\n";
outf<<cl<<"\n";
outf<<sec<<"\n";
gotoxy(1,a+1);
cout<<"CLASS : "<<cl;
gotoxy(60,a+1);
cout<<"SECTION : "<<sec;
for(int z=1;z<+80;z++)
{
gotoxy(z,a+2);
cout<<"-";
}
a=a+4;
gotoxy(1,a);
cout<<"Enter PHYSICS marks : ";
cin>>phy;
gotoxy(40,a);
cout<<"Enter CHEMISTRY marks : ";
cin>>chem;
a=a+2;
gotoxy(1,a);
cout<<"Enter COMPUTER marks : ";
cin>>comp;
gotoxy(40,a);
cout<<"Enter MATHS marks : ";
cin>>math;
a=a+2;
gotoxy(1,a);
cout<<"Enter ENGLISH marks : ";
cin>>eng;
outf<<phy<<"\n";
outf<<chem<<"\n";
outf<<comp<<"\n";
outf<<math<<"\n";
outf<<eng<<"\n\n";
clrscr();
count++;
}
outf.close();
stread.close();

clrscr();
gotoxy(15,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
int yes;
school();
cout<<"\n\n1.> UPDATE MARKS\n2.> DON't UPDATE MARKS\n\n\n";
cout<<"Enter your choice : ";
cin>>yes;
switch(yes)
{
case 1:
{
char nm[20],sec[5];
float phy,chem,math,comp,eng;
long int stid;
int cl;
ifstream infm("marks2.dat");
ofstream outfm("marks.dat");
for(int m=1;m<=stno;m++)
{
infm>>stid;
infm>>nm;
infm>>cl;
infm>>sec;
infm>>phy;
infm>>chem;
infm>>comp;
infm>>math;
infm>>eng;

outfm<<stid<<"\n";
outfm<<nm<<"\n";
outfm<<cl<<"\n";
outfm<<sec<<"\n";
outfm<<phy<<"\n";
outfm<<chem<<"\n";
outfm<<comp<<"\n";
outfm<<math<<"\n";
outfm<<eng<<"\n\n";
}
clrscr();
gotoxy(20,12);
cout<<"! ! !  M A R K S  U P D A T E D  ! ! !";
getch();
infm.close();
outfm.close();
goto studmark;
}

case 2:
{
goto studmark;

}
}
}

//	!!!!!!!!!!!!!!  m allocate all done  !!!!!!!!!!!!!
break;

case 2:
{

//	*****************  m allocate using id  *******************
{
float phy,chem,math,comp,eng;
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],sec[5],gen[6],dob[10],ph[20],bgrp[5];
long int stpass,stid,enstid;
int count=0,cl;
ifstream stread("stud.dat");
ofstream outf("marks2.dat");
ifstream inf("marks.dat");
cout<<"Enter student id whose marks want to add : ";
cin>>enstid;
for(int i=1;i<=stno;i++)
{
inf>>stid;
inf>>nm;
inf>>cl;
inf>>sec;
inf>>phy;
inf>>chem;
inf>>comp;
inf>>math;
inf>>eng;
if(stid==enstid)
{
school();
int a=5;
gotoxy(60,a);
cout<<"STUDENT ID : "<<stid;
outf<<stid<<"\n";
gotoxy(1,a);
cout<<"NAME : "<<nm;
outf<<nm<<"\n";
outf<<cl<<"\n";
outf<<sec<<"\n";
gotoxy(1,a+1);
cout<<"CLASS : "<<cl;
gotoxy(60,a+1);
cout<<"SECTION : "<<sec;
for(int z=1;z<+80;z++)
{
gotoxy(z,a+2);
cout<<"-";
}
a=a+4;
gotoxy(1,a);
cout<<"Enter PHYSICS marks : ";
cin>>phy;
gotoxy(40,a);
cout<<"Enter CHEMISTRY marks : ";
cin>>chem;
a=a+2;
gotoxy(1,a);
cout<<"Enter COMPUTER marks : ";
cin>>comp;
gotoxy(40,a);
cout<<"Enter MATHS marks : ";
cin>>math;
a=a+2;
gotoxy(1,a);
cout<<"Enter ENGLISH marks : ";
cin>>eng;
outf<<phy<<"\n";
outf<<chem<<"\n";
outf<<comp<<"\n";
outf<<math<<"\n";
outf<<eng<<"\n\n";
clrscr();
count++;
}
else
{
outf<<stid<<"\n";
outf<<nm<<"\n";
outf<<cl<<"\n";
outf<<sec<<"\n";
outf<<phy<<"\n";
outf<<chem<<"\n";
outf<<comp<<"\n";
outf<<math<<"\n";
outf<<eng<<"\n";
}
}
outf.close();
stread.close();
inf.close();
if(count!=1)
{
clrscr();
gotoxy(20,12);
cout<<"!!!  WRONG CREDENTIALS  !!!";
getch();
goto studmark;
}

clrscr();
gotoxy(15,12);
cout<<"! ! !  YOUR RECORDS HAVE BEEN TAKEN PLEASE UPDATE IT  ! ! !";
getch();
int yes;
school();
cout<<"\n\n1.> UPDATE MARKS\n.> DON't UPDATE MARKS\n\n\n";
cout<<"Enter your choice : ";
cin>>yes;
switch(yes)
{
case 1:
{
char nm[20],sec[5];
float phy,chem,math,comp,eng;
long int stid;
int cl;
ifstream infm("marks2.dat");
ofstream outfm("marks.dat");
for(int m=1;m<=stno;m++)
{
infm>>stid;
infm>>nm;
infm>>cl;
infm>>sec;
infm>>phy;
infm>>chem;
infm>>comp;
infm>>math;
infm>>eng;

outfm<<stid<<"\n";
outfm<<nm<<"\n";
outfm<<cl<<"\n";
outfm<<sec<<"\n";
outfm<<phy<<"\n";
outfm<<chem<<"\n";
outfm<<comp<<"\n";
outfm<<math<<"\n";
outfm<<eng<<"\n\n";
}
clrscr();
gotoxy(20,12);
cout<<"! ! !  M A R K S  U P D A T E D  ! ! !";
getch();
infm.close();
outfm.close();
goto studmark;
}

case 2:
{
goto studmark;

}
}
}

//	!!!!!!!!!!!!!!  m allocate all done  !!!!!!!!!!!!!
break;


}
break;

case 3:
{
goto operatormenu;
}

case 4:
{
num.close();
exit(0);
}
break;
}
//	!!!!!!!!!!!!!!!!!!!!!!  all stud marks done  !!!!!!!!!!!!!!!!!!!!!!

}
//	 !!!!!!!!!!!!!!!!!!!!  MARKS ALLOCATE DONE  !!!!!!!!!!!!!!!!!!!!
break;

//	   !!!!!!!!!!!  switch of student marks allocation  !!!!!!!!!!!

case 2:
//	*******************  TEACHER SALARY  *********************
{
ifstream numread("no.dat");
numread>>stno;
numread>>tno;
numread>>ntno;
ifstream stread("teach.dat");
ofstream outf("tsal.dat");
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int tpass,basic;
int teid,cl;
for(int i=1;i<=tno;i++)
{
school();
for(int j=1;j<=80;j++)
{
gotoxy(j,4);
cout<<"-";
}
stread>>teid;
stread>>nm;
stread>>fnm;
stread>>mnm;
stread>>dob;
stread>>ph;
stread>>gen;
stread>>cast;
stread>>rel;
stread>>edu;
stread>>aadhar;
stread>>bgrp;
stread>>ad;
stread>>tpass;
int a=7;
gotoxy(1,a);
cout<<"TEACHER ID : "<<teid;
outf<<teid<<"\n";
gotoxy(40,a);
cout<<"NAME : "<<nm;
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"BASIC SALARY : ";
cin>>basic;
outf<<basic<<"\n";
}
stread.close();
outf.close();
goto operatormenu;
}
//	!!!!!!!!!!!!!!!!! teacher salary done  !!!!!!!!!!!!!!!!!!

case 3:
//	******************  non-teacher salary  *****************
{

ifstream numread("no.dat");
numread>>stno;
numread>>tno;
numread>>ntno;
ifstream stread("nteach.dat");
ofstream outf("ntsal.dat");
char nm[20],mnm[20],fnm[20],cast[20],rel[20],ad[20],edu[20],gen[6],dob[10],ph[20],bgrp[5],aadhar[20];
long int ntpass,sal,basic;
int nteid,cl;
for(int i=1;i<=ntno;i++)
{
school();
for(int j=1;j<=80;j++)
{
gotoxy(j,5);
cout<<"-";
}
stread>>nteid;
stread>>nm;
stread>>fnm;
stread>>mnm;
stread>>dob;
stread>>ph;
stread>>gen;
stread>>cast;
stread>>rel;
stread>>edu;
stread>>aadhar;
stread>>bgrp;
stread>>ad;
stread>>cl;
stread>>ntpass;
int a=7;
gotoxy(1,a);
cout<<"NON-TEACHER ID : "<<nteid;
outf<<nteid<<"\n";
gotoxy(40,a);
cout<<"NAME : "<<nm;
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"BASIC SALARY : ";
cin>>basic;
outf<<basic<<"\n";

}
clrscr();
gotoxy(33,12);
cout<<"SALARY UPDATED";
getch();
stread.close();
outf.close();
goto operatormenu;
}
//	!!!!!!!!!!!!!!!!!!  NON-TEACHER SALARY DONE  !!!!!!!!!!!!!!!!!!!!

case 4:
//	********************* change operator ***********************
{
school();
char nm[20],ad[20],aadhar[20],ph[20],dob[10];
long int opid,oppass;
ofstream outf("operator.dat");
int a=5;
gotoxy(1,a);
cout<<"OPERATOR ID : ";
cin>>opid;
outf<<opid<<"\n";
gotoxy(40,a);
cout<<"NAME : ";
cin>>nm;
outf<<nm<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"ADDRESS : ";
cin>>ad;
outf<<ad<<"\n";
gotoxy(40,a);
cout<<"DOB : ";
cin>>dob;
outf<<dob<<"\n";
a=a+2;
gotoxy(1,a);
cout<<"AADHAR No. : ";
cin>>aadhar;
outf<<aadhar<<"\n";
gotoxy(40,a);
cout<<"PHONE No. : ";
cin>>ph;
outf<<ph<<"\n";
a=a+2;
gotoxy(20,a);
cout<<"OPERATOR PASSCODE : ";
cin>>oppass;
outf<<oppass<<"\n\n";
outf.close();
clrscr();
gotoxy(17,12);
cout<<"! ! !  OPERATOR CREDENTIALS CHANGED SUCCESSFULLY  ! ! !";
goto operatormenu;
}
case 5:
{
goto mainmenu;
}
case 6:
{
exit(0);
}
break;
}
}
else
{
clrscr();
gotoxy(10,12);
cout<<"X X X X X      W R O N G   C R E D E N T I A L S     X X X X X";
getch();
goto mainmenu;
}
//       	!!!!!!!!!!!  OPERATOR MENU DONE  !!!!!!!!!!!
}
break;

//=========================================================================

case 6:
{
exit(0);
}
break;

}
getch();
}
