#include<cstdlib>
#include<simplecpp>
#include<ctime>

double fx(int c){
    return floor(c/65536);
}
double fy(int c){
    return (c%65536);
}

main_program{
    ::srand(time(0));
    initCanvas("Main",800,640);
    Text head1(100,160,"1s & 0s");
    Text begiN(100,480,"Begin or Continue!");
    Text EX(100,560,"Exit");
    Line seg3(0,545,200,545);
    Line seg4(0,575,200,575);

    Line seg(200,0,200,640);
    Line d1((100-(textWidth("1s & 0s"))/2)-5,160,(100-(textWidth("1s & 0s"))/2)-70,160);
    Line d2((100+(textWidth("1s & 0s"))/2)+5,160,(100+(textWidth("1s & 0s"))/2)+70,160);
    Line seg1(0,480-15,200,480-15);
    Line seg2(0,480+15,200,480+15);
    while(true){
        int B = getClick();
        bool fB=fx(B)>0&&fx(B)<200&&fy(B)>465&&fy(B)<495;
        if(fB){
            //cout<<"w "<<endl;
            Line bh3(200,450,800,450);
            Line bh2(200,300,800,300);
            Line bh1(200,150,800,150);
            Line bv1(400,0,400,450);
            Line bv2(600,0,600,450);

            while(true){
                int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
                int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0;
                Text U1(0,0,"");Text U2(0,0,"");Text U3(0,0,"");Text U4(0,0,"");Text U5(0,0,"");Text U6(0,0,"");Text U7(0,0,"");Text U8(0,0,"");Text U9(0,0,"");
                Text W(500,550,"");
                Text L(500,550,"");
                Text D(500,550,"");
                for(int j=1;j<=5;j++){
                    while(true){
                        int u=getClick();
                        if(fx(u)>200&&fx(u)<400&&fy(u)>0&&fy(u)<150&&r1!=1){
                            a1=1;r1=1;
                            U1.reset(300,75,"1");
                            break;
                        }
                        else if(fx(u)>400&&fx(u)<600&&fy(u)>0&&fy(u)<150&&r2!=2){
                            a2=1;r2=2;
                            U2.reset(500,75,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>600&&fx(u)<800&&fy(u)>0&&fy(u)<150&&r3!=3){
                            a3=1;r3=3;
                            U3.reset(700,75,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>200&&fx(u)<400&&fy(u)>150&&fy(u)<300&&r4!=4){
                            a4=1;r4=4;
                            //line
                            U4.reset(300,225,"1");
                            break;
                        }
                        else if(fx(u)>400&&fx(u)<600&&fy(u)>150&&fy(u)<300&&r5!=5){
                            a5=1;r5=5;
                            U5.reset(500,225,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>600&&fx(u)<800&&fy(u)>150&&fy(u)<300&&r6!=6){
                            a6=1;r6=6;
                            U6.reset(700,225,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>200&&fx(u)<400&&fy(u)>300&&fy(u)<450&&r7!=7){
                            a7=1;r7=7;
                            U7.reset(300,375,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>400&&fx(u)<600&&fy(u)>300&&fy(u)<450&&r8!=8){
                            a8=1;r8=8;
                            U8.reset(500,375,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>600&&fx(u)<800&&fy(u)>300&&fy(u)<450&&r9!=9){
                            a9=1;r9=9;
                            U9.reset(700,375,"1");
                            //line
                            break;
                        }
                        else if(fx(u)>0&&fx(u)<200&&fy(u)>545&&fy(u)<575){
                            return 0;

                        }
                        else{

                            continue;
                        }

                    }

                    if (((a1 == a2 and a2 == a3) or (a1 == a4 and a4 == a7) or (a1 == a5 and a5 == a9)) and (a1 != 0)) {
                        if(a1==1){
                            cout<<"You Win!";
                            W.reset(500,550,"You Win!");
                        }
                        else if(a1==2){
                            cout<<"You Lose!";
                            L.reset(500,550,"You Lose!");
                        }
                        break;

                    }
                    else if (((a4 == a5 and a5 == a6) or (a2 == a5 and a5 == a8) or (a3 == a5 and a5 == a7)) and (a5 != 0)) {
                        if(a1==1){
                            cout<<"You Win!"<<endl;
                            W.reset(500,550,"You Win!");
                        }
                        else if(a1==2){
                            cout<<"You Lose!"<<endl;
                            L.reset(500,550,"You Lose!");
                        }
                        break;
                    }
                    else if (((a7 == a8 and a8 == a9) or (a3 == a6 and a6 == a9)) and (a9 != 0)) {
                        if(a1==1){
                            cout<<"You Win!"<<endl;
                            W.reset(500,550,"You Win!");
                        }
                        else if(a1==2){
                            cout<<"You Lose!"<<endl;
                            L.reset(500,550,"You Lose!");
                        }
                        break;
                    }
                    else if (j == 5) { // Case when all 9 moves are over. It declares a draw and moves on.
                        cout << "This game is a draw."<<endl;
                        D.reset(500,550,"It is a Draw!");
                        break;
                    }


                    while(true){
                        int r=((rand()%9)+1);cout<<r;
                        if(r==r1||r==r2||r==r3||r==r4||r==r5||r==r6||r==r7||r==r8||r==r9){
                            continue;
                        }
                        else{
                            switch(r){
                                case 1:a1=2;r1=1;
                                       U1.reset(300,75,"0");
                                       break;
                                case 2:a2=2;r2=2;
                                       U2.reset(500,75,"0");
                                       break;
                                case 3:a3=2;r3=3;
                                       U3.reset(700,75,"0");
                                       break;
                                case 4:a4=2;r4=4;
                                       U4.reset(300,225,"0");
                                       break;
                                case 5:a5=2;r5=5;
                                       U5.reset(500,225,"0");
                                       break;
                                case 6:a6=2;r6=6;
                                       U6.reset(700,225,"0");
                                       break;
                                case 7:a7=2;r7=7;
                                       U7.reset(300,375,"0");
                                       break;
                                case 8:a8=2;r8=8;
                                       U8.reset(500,375,"0");
                                       break;
                                case 9:a9=2;r9=9;
                                       U9.reset(700,375,"0");
                                       break;


                            }
                        break;

                        }
                    }
                    if (((a1 == a2 and a2 == a3) or (a1 == a4 and a4 == a7) or (a1 == a5 and a5 == a9)) and (a1 != 0)) {
                        if(a1==1){
                            cout<<"You Win!"<<endl;
                            W.reset(500,550,"You Win!");
                        }
                        else if(a1==2){
                            cout<<"You Lose!"<<endl;
                            L.reset(500,550,"You Lose!");
                        }
                        break;

                    }
                    else if (((a4 == a5 and a5 == a6) or (a2 == a5 and a5 == a8) or (a3 == a5 and a5 == a7)) and (a5 != 0)) {
                        if(a1==1){
                            cout<<"You Win!"<<endl;
                            W.reset(500,550,"You Win!");
                        }
                        else if(a1==2){
                            cout<<"You Lose!"<<endl;
                            L.reset(500,550,"You Lose!");
                        }
                        break;
                    }
                    else if (((a7 == a8 and a8 == a9) or (a3 == a6 and a6 == a9)) and (a9 != 0)) {
                        if(a1==1){
                            cout<<"You Win!"<<endl;
                            W.reset(500,550,"You Win!");
                        }
                        else if(a1==2){
                            cout<<"You Lose!"<<endl;
                            L.reset(500,550,"You Lose!");
                        }
                        break;
                    }
                    else if (j == 5) { // Case when all 9 moves are over. It declares a draw and moves on.
                        cout << "This game is a draw."<<endl;
                        D.reset(500,550,"It is a Draw!");
                        break;
                    }
                }
                cout<<"Do you want to continue?, If yes, then click continue.";

                while(true){
                    int m=getClick();
                    bool fm=fx(m)>0&&fx(m)<200&&fy(m)>465&&fy(m)<495;
                    if(fm){
                        break;
                    }
                    else if(fx(m)>0&&fx(m)<200&&fy(m)>545&&fy(m)<575){
                        return 0;
                    }
                    else{continue;}
                }




            }
        }
        else if(fx(B)>0&&fx(B)<200&&fy(B)>545&&fy(B)<575){
            return 0;
        }
        else{continue;}
    }
 }
