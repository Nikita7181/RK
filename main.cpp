#include <iostream>
#include <string>
#include <vector>
using std::endl;
using std::cout;
using std::cin;
using std::string;
int main (){
    string text = "NYJFYW JWZOLHDZKE ZD KRL DLXBWM BUMLDK LMJXYKZBWYU ZWDKZKJKZBW ZW\n"
                  "HJDDZY YAKLH UBFBWBDBO FBDXBV DKYKL JWZOLHDZKE (1755). ZW 1763, KRL\n"
                  "HJDDZYW LFCHLDD XYKRLHZWL ZZ ABJWMLM KRL LMJXYKZBWYU ZFCLHZYU RBJDL.\n"
                  "BW 5 BXKBNLH 1826 KRL MBVYQLH LFCHLDD FYHZY ALBMBHBOWY ZDDJLM Y\n"
                  "MLXHLL KB LDKYNUZDR «QHLYK VBHPDRBCD ABH MZAALHLWK XHYAKD VZKR\n"
                  "NLMHBBFD, Y MZWZWQ HBBF, LKX.» YD Y CYHK BA KRL FBDXBV ABJWMUZWQ RBFL\n"
                  "ZW KRL QLHFYW SJYHKLH. YUU XHYAK CJCZUD VLHL FBOLM AHBF KRL BHCRYWYQL\n"
                  "KRLHL. BW 1 TJUE 1830 LFCLHBH WZXRBUYD Z YCCHBOLM «DKYKJKL BA FBDXBV\n"
                  "XHYAK DXRBBU». ZK VYD KRL ZWXLCKZBW BA KRL AZHDK HJDDZYW KLXRWZXYU\n"
                  "JWZOLHDZKE. HJDDZY\\'D MLOLUBCZWQ ZWMJDKHE WLLMLM DPZUULM UYNBH ZW\n"
                  "FYWE KHYMLD. DB, KRL YZF BA KRL WLV DXRBBU VYD KB KHYZW DPZUUAJU\n"
                  "YHKZDYWD VZKR Y DBUZM KRLBHLKZXYU NYXPQHBJWM KB ZFCHBOL YWM\n"
                  "DCHLYM DPZUUD ZW OYHZBJD KHYMLD YUU BOLH HJDDZY. WLV DXRBBU VYD\n"
                  "XHLYKLM KB KLYXR OYHZBJD XHYAKD YD VLUU YD NYDZX DXZLWXLD. NE 1868\n"
                  "LMJXYKZBW NLXYFL DB QBBM KRYK FXD VYD HLBHQYWZDLM ZWKB KRL ZFCLHZYU\n"
                  "FBDXBV KLXRWZXYU DXRBBU (ZFKD) JWMLH KRL MZHLXKBHDRZC BA OZXKBH\n"
                  "MLUUY-OBD. KRL FYZW CJHCBDL BA ZFKD VYD KB «LMJXYKL XBWDKHJXKZBW\n"
                  "LWQZWLLHD, FLXRYWZXYU LWQZWLLHD YWM ZWMJDKHZYU KLXRWBUBQZDKD».\n"
                  "ZFKD YXRZLOLM BJKDKYWMZWQ HLDJUKD ZW KLXRWBUBQE, XRLFZXYU, ABBM\n"
                  "YWM KLGKZUL ZWMJDKHE, FLKYU YWM VBBM KHLYKFLWK, YWM FLXRYWZXYU\n"
                  "DXZLWXLD. KRL ZFKD VYD AZWYWXZYUUE DJCCBHKLM NE KRL QBOLHWFLWK YWM\n"
                  "ZWMJDKHZYUZDKD. ZKD FYWYQLFLWK VYD MLFBXHYKZX. NJK Y PLE ALYKJHL BA\n"
                  "KRL WLV ZWDKZKJKZBW VYD ZKD LMJXYKZBWYU DEDKLF XYUULM KRL \"HJDDZYW\n"
                  "FLKRBM\", VRZXR JWZAZLD Y NHBYM YWM ZWKLWDZOL KRLBHLKZXYU\n"
                  "CHLCYHYKZBW VZKR Y MLLC CHYXKZXYU LMJXYKZBW XUBDLUE XBWWLXKLM\n"
                  "VZKR ZWMJDKHZLD. JWMLH RZD ULYMLHDRZC KRL DXRBBU CYHKZXZCYKLM ZW\n"
                  "KRL JWZOLHDYU LGCBDZKZBW ZW 1873 ZW OZLWWY YWM KRL CRZUYMLUCRZY\n"
                  "XLWKLWWZYU LGRZNZKZBW BA 1876, VRLHL KRZD FLKRBM VBW Y QBUM CHZIL. ZK\n"
                  "CHBOLM KB NL ZWAUJLWKZYU BW TBRW MYWZLU HJWPUL VRLW RL ZWKHBMJXLM\n"
                  "FYWJYU KHYZWZWQ YUBWQDZML KRLBHLKZXYU KHYZWZWQ YK KRL\n"
                  "FYDDYXRJDLKKD ZWDKZKJKL BA KLXRWBUBQE. ZK VYD YUDB YCCUZLM KB BKRLH\n"
                  "YFLHZXYW KLXRWZXYU JWZOLHDZKZLD. ZFKD VYD HLXBQWZILM KRL NLDK\n"
                  "FYXRZWL-NJZUMZWQ LMJXYKZBW ZWDKZKJKZBW BA HJDDZY YWM TBZWLM KRL\n"
                  "HYWPD BA KRL VBHUM ULYMZWQ CBUEKLXRWZX DXRBBUD. Y UBK BA\n"
                  "BJKDKYWMZWQ DXZLWKZDKD KYJQRK ZW ZFKD, DJXR YD M. FLWMLULLO, W.\n"
                  "TJPBODPE, C. XRLNEXRLO, D. XRYCUEQZW, Y. ELHDRBO, M. DBOLKPZW, A. MFZKHZLO,\n"
                  "Y. ULKWZPBO, Y. QYOHZULWPB.";
    int a=0, b=0,c=0,d=0,e=0,f=0,g=0,h=0,i1=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,
            s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0, sum;
    string text2;
    
    for( int i : text){
        
        if ( i == 'A')
            ++a;
        else if (i == 'B')++b;
        else if (i == 'C')++c;
        else if (i == 'D')++d;
        else if (i == 'E')++e;
        else if (i == 'F')++f;
        else if (i == 'G')++g;
        else if (i == 'H')++h;
        else if (i == 'I')++i1;
        else if (i == 'J')++j;
        else if (i == 'K')++k;
        else if (i == 'L')++l;
        else if (i == 'M')++m;
        else if (i == 'N')++n;
        else if (i == 'O')++o;
        else if (i == 'P')++p;
        else if (i == 'Q')++q;
        else if (i == 'R')++r;
        else if (i == 'S')++s;
        else if (i == 'T')++t;
        else if (i == 'U')++u;
        else if (i == 'V')++v;
        else if (i == 'W')++w;
        else if (i == 'X')++x;
        else if (i == 'Y')++y;
        else if (i == 'Z')++z;
    }
    sum=a+b+c+d+e+f+g+h+i1+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z;
    cout << "A:" <<  (static_cast<float>(a)/(static_cast<float>(sum))*100) << endl;
    cout << "B:" <<  (static_cast<float>(b)/(static_cast<float>(sum))*100) << endl;
    cout << "C:" <<  (static_cast<float>(c)/(static_cast<float>(sum))*100) << endl;
    cout << "D:" <<  (static_cast<float>(d)/(static_cast<float>(sum))*100) << endl;
    cout << "E:" <<  (static_cast<float>(e)/(static_cast<float>(sum))*100) << endl;
    cout << "F:" <<  (static_cast<float>(f)/(static_cast<float>(sum))*100) << endl;
    cout << "G:" <<  (static_cast<float>(g)/(static_cast<float>(sum))*100) << endl;
    cout << "H:" <<  (static_cast<float>(h)/(static_cast<float>(sum))*100) << endl;
    cout << "I:" <<  (static_cast<float>(i1)/(static_cast<float>(sum))*100) << endl;
    cout << "J:" <<  (static_cast<float>(j)/(static_cast<float>(sum))*100) << endl;
    cout << "K:" <<  (static_cast<float>(k)/(static_cast<float>(sum))*100) << endl;
    cout << "L:" <<  (static_cast<float>(l)/(static_cast<float>(sum))*100) << endl;
    cout << "M:" <<  (static_cast<float>(m)/(static_cast<float>(sum))*100) << endl;
    cout << "N:" <<  (static_cast<float>(n)/(static_cast<float>(sum))*100) << endl;
    cout << "O:" <<  (static_cast<float>(o)/(static_cast<float>(sum))*100) << endl;
    cout << "P:" <<  (static_cast<float>(p)/(static_cast<float>(sum))*100) << endl;
    cout << "Q:" <<  (static_cast<float>(q)/(static_cast<float>(sum))*100) << endl;
    cout << "R:" <<  (static_cast<float>(r)/(static_cast<float>(sum))*100) << endl;
    cout << "S:" <<  (static_cast<float>(s)/(static_cast<float>(sum))*100) << endl;
    cout << "T:" <<  (static_cast<float>(t)/(static_cast<float>(sum))*100) << endl;
    cout << "U:" <<  (static_cast<float>(u)/(static_cast<float>(sum))*100) << endl;
    cout << "V:" <<  (static_cast<float>(v)/(static_cast<float>(sum))*100) << endl;
    cout << "W:" <<  (static_cast<float>(w)/(static_cast<float>(sum))*100) << endl;
    cout << "X:" <<  (static_cast<float>(x)/(static_cast<float>(sum))*100) << endl;
    cout << "Y:" <<  (static_cast<float>(y)/(static_cast<float>(sum))*100) << endl;
    cout << "Z:" <<  (static_cast<float>(z)/(static_cast<float>(sum))*100) << endl;
    char a1, b1,c1,d1,e1,f1,g1,h1,i2,j1,k1,l1,m1,n1,o1,p1,q1,r1,
            s1,t1,u1,v1,w1,x1,y1,z1;
    cout << "A"<< endl;
    cin >> a1 ;
    cout << "B"<< endl;
    cin >> b1 ;
    cout << "C"<< endl;
    cin >> c1 ;
    cout << "D"<< endl;
    cin >> d1 ;
    cout << "E"<< endl;
    cin >> e1 ;
    cout << "F"<< endl;
    cin >> f1 ;
    cout << "G"<< endl;
    cin >> g1 ;
    cout << "H"<< endl;
    cin >> h1 ;
    cout << "I"<< endl;
    cin >> i2 ;
    cout << "J"<< endl;
    cin >> j1 ;
    cout << "K"<< endl;
    cin >> k1 ;
    cout << "L"<< endl;
    cin >> l1 ;
    cout << "M"<< endl;
    cin >> m1 ;
    cout << "N"<< endl;
    cin >> n1 ;
    cout << "O"<< endl;
    cin >> o1 ;
    cout << "P"<< endl;
    cin >> p1 ;
    cout << "Q"<< endl;
    cin >> q1 ;
    cout << "R"<< endl;
    cin >> r1 ;
    cout << "S"<< endl;
    cin >> s1 ;
    cout << "T"<< endl;
    cin >> t1 ;
    cout << "U"<< endl;
    cin >> u1 ;
    cout << "V"<< endl;
    cin >> v1 ;
    cout << "W"<< endl;
    cin >> w1 ;
    cout << "X"<< endl;
    cin >> x1 ;
    cout << "Y"<< endl;
    cin >> y1 ;
    cout << "Z"<< endl;
    cin >> z1 ;
    for(char i : text) {
        if (i == 'A') cout << a1;
        else if (i == 'B') cout << b1;
        else if (i == 'C') cout << c1;
        else if (i == 'D') cout << d1;
        else if (i == 'E') cout << e1;
        else if (i == 'F') cout << f1;
        else if (i == 'G') cout << g1;
        else if (i == 'H') cout << h1;
        else if (i == 'I') cout << i1;
        else if (i == 'J') cout << j1;
        else if (i == 'K') cout << k1;
        else if (i == 'L') cout << l1;
        else if (i == 'M') cout << m1;
        else if (i == 'N') cout << n1;
        else if (i == 'O') cout << o1;
        else if (i == 'P') cout << p1;
        else if (i == 'Q') cout << q1;
        else if (i == 'R') cout << r1;
        else if (i == 'S') cout << s1;
        else if (i == 'T') cout << t1;
        else if (i == 'U') cout << u1;
        else if (i == 'V') cout << v1;
        else if (i == 'W') cout << w1;
        else if (i == 'X') cout << x1;
        else if (i == 'Y') cout << y1;
        else if (i == 'Z') cout << z1;
        else cout << i;
    }
    return 0;
    
}