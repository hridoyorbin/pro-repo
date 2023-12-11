#include<stdio.h>
#include<string.h>
struct element {
    int atomicNumber;
    char symbol[10];
    char name[20];
    float atomicWeight;
};
void displayelement(struct element ele){
    printf("===========================================\n");
    printf("= Elemnet Information:\n");
    printf("= Atomic Number: %d\n",ele.atomicNumber);
    printf("= Symbol: %s\n", ele.symbol);
    printf("= Name: %s\n",ele.name);
    printf("= Atomic Weight: %.4f\n",ele.atomicWeight);
    printf("===========================================\n");
}
int main(){
    struct element pt[118];
    pt[0].atomicNumber=1;
    strcpy(pt[0].symbol,"H");
    strcpy(pt[0].name,"Hydrogen");
    pt[0].atomicWeight=1.008;
    pt[1].atomicNumber=2;
    strcpy(pt[1].symbol,"He");
    strcpy(pt[1].name,"Helium");
    pt[1].atomicWeight=4.0026;
    pt[2].atomicNumber=3;
    strcpy(pt[2].symbol,"Li");
    strcpy(pt[2].name,"Lithium");
    pt[2].atomicWeight=6.94;
    pt[3].atomicNumber=4;
    strcpy(pt[3].symbol,"Be");
    strcpy(pt[3].name,"Beryllium");
    pt[3].atomicWeight=9.0122;
    pt[4].atomicNumber=5;
    strcpy(pt[4].symbol,"B");
    strcpy(pt[4].name,"Boron");
    pt[4].atomicWeight=10.81;
    pt[5].atomicNumber=6;
    strcpy(pt[5].symbol,"C");
    strcpy(pt[5].name,"Carbon");
    pt[5].atomicWeight=12.011;
    int input;
    scanf("%d",&input);
    input--;
    switch(input){
        case 0:
            displayelement(pt[0]);
            break;
        case 1:
            displayelement(pt[1]);
            break;
        case 2:
            displayelement(pt[2]);
            break;
        case 3:
            displayelement(pt[3]);
            break;
        case 4:
            displayelement(pt[4]);
            break;
        case 5:
            displayelement(pt[5]);
            break;
        case 6:
            displayelement(pt[6]);
            break;
        case 7:
            displayelement(pt[7]);
            break;
        case 8:
            displayelement(pt[8]);
            break;
        case 9:
            displayelement(pt[9]);
            break;
        case 10:
            displayelement(pt[10]);
            break;
        case 11:
            displayelement(pt[11]);
            break;
        case 12:
            displayelement(pt[12]);
            break;
        case 13:
            displayelement(pt[13]);
            break;
        case 14:
            displayelement(pt[14]);
            break;
        case 15:
            displayelement(pt[15]);
            break;
        case 16:
            displayelement(pt[16]);
            break;
        case 17:
            displayelement(pt[17]);
            break;
        case 18:
            displayelement(pt[18]);
            break;
        case 19:
            displayelement(pt[19]);
            break;
        case 20:
            displayelement(pt[20]);
            break;
        case 21:
            displayelement(pt[21]);
            break;
        case 23:
            displayelement(pt[22]);
            break;
        case 24:
            displayelement(pt[23]);
            break;
        case 25:
            displayelement(pt[24]);
            break;
        case 26:
            displayelement(pt[25]);
            break;
        case 27:
            displayelement(pt[26]);
            break;
        case 28:
            displayelement(pt[27]);
            break;
        case 29:
            displayelement(pt[28]);
            break;
        case 30:
            displayelement(pt[29]);
            break;
        case 31:
            displayelement(pt[30]);
            break;
        case 32:
            displayelement(pt[31]);
            break;
        case 33:
            displayelement(pt[32]);
            break;
        case 34:
            displayelement(pt[33]);
            break;
        case 35:
            displayelement(pt[34]);
            break;
        case 36:
            displayelement(pt[35]);
            break;
        case 37:
            displayelement(pt[36]);
            break;
        case 38:
            displayelement(pt[37]);
            break;
        case 39:
            displayelement(pt[38]);
            break;
        case 40:
            displayelement(pt[39]);
            break;
        case 41:
            displayelement(pt[40]);
            break;
        case 42:
            displayelement(pt[41]);
            break;
        case 43:
            displayelement(pt[42]);
            break;
        case 44:
            displayelement(pt[43]);
            break;
        case 45:
            displayelement(pt[44]);
            break;
        case 46:
            displayelement(pt[45]);
            break;
        case 47:
            displayelement(pt[46]);
            break;
        case 48:
            displayelement(pt[47]);
            break;
        case 49:
            displayelement(pt[48]);
            break;
        case 50:
            displayelement(pt[50]);
            break;
        case 51:
            displayelement(pt[51]);
            break;
        case 52:
            displayelement(pt[52]);
            break;
        case 53:
            displayelement(pt[53]);
            break;
        case 54:
            displayelement(pt[54]);
            break;
        case 55:
            displayelement(pt[55]);
            break;
        case 56:
            displayelement(pt[56]);
            break;
        case 57:
            displayelement(pt[57]);
            break;
        case 58:
            displayelement(pt[58]);
            break;
        case 59:
            displayelement(pt[59]);
            break;
        case 60:
            displayelement(pt[60]);
            break;
        case 61:
            displayelement(pt[61]);
            break;
        case 62:
            displayelement(pt[62]);
            break;
        case 63:
            displayelement(pt[63]);
            break;
        case 64:
            displayelement(pt[64]);
            break;
        case 65:
            displayelement(pt[65]);
            break;
        case 66:
            displayelement(pt[66]);
            break;                    
        case 67:
            displayelement(pt[67]);
            break;       
        case 68:
            displayelement(pt[68]);
            break;
        case 69:
            displayelement(pt[69]);
            break;
        case 70:
           displayelement(pt[70]);
            break;
        case 71:
            displayelement(pt[71]);
            break;
        case 72:
            displayelement(pt[72]);
            break;
        
        case 73:
            displayelement(pt[73]);
            break;
        case 74:
            displayelement(pt[74]);
            break;
        case 75:
            displayelement(pt[75]);
            break;
        case 76:
            displayelement(pt[76]);
            break;
        case 77:
            displayelement(pt[77]);
            break;
        case 78:
            displayelement(pt[78]);
            break;
        case 79:
            displayelement(pt[79]);
            break;
        case 80:
            displayelement(pt[80]);
            break;
        case 81:
            displayelement(pt[81]);
            break;
        case 82:
            displayelement(pt[82]);
            break;
        case 83:
            displayelement(pt[83]);
            break;
        case 84:
            displayelement(pt[84]);
            break;
        case 85:
            displayelement(pt[85]);
            break;
        case 86:
            displayelement(pt[86]);
            break;
        case 87:
            displayelement(pt[87]);
            break;
        case 88:
            displayelement(pt[88]);
            break;
        case 89:
            displayelement(pt[89]);
            break;
        case 90:
            displayelement(pt[90]);
            break;
        case 91:
            displayelement(pt[91]);
            break;
        case 92:
            displayelement(pt[92]);
            break;
        case 93:
            displayelement(pt[93]);
            break;
        case 94:
            displayelement(pt[94]);
            break;
        case 95:
            displayelement(pt[95]);
            break;
        case 96:
            displayelement(pt[96]);
            break;
        case 97:
            displayelement(pt[97]);
            break;
        case 98:
            displayelement(pt[98]);
            break;
        case 99:
            displayelement(pt[99]);
            break;
        case 100:
            displayelement(pt[100]);
            break;
        case 101:
            displayelement(pt[101]);
            break;
        case 102:
            displayelement(pt[102]);
            break;
        case 103:
            displayelement(pt[103]);
            break;
        case 104:
            displayelement(pt[104]);
            break;
        case 105:
            displayelement(pt[105]);
            break;
        case 106:
            displayelement(pt[106]);
            break;
        case 107:
            displayelement(pt[107]);
            break;
        case 108:
            displayelement(pt[108]);
            break;
        case 109:
            displayelement(pt[109]);
            break;
        case 110:
            displayelement(pt[110]);
            break;
        case 111:
            displayelement(pt[111]);
            break;
        case 112:
            displayelement(pt[112]);
            break;
        case 113:
            displayelement(pt[113]);
            break;
        case 114:
            displayelement(pt[114]);
            break;
        case 115:
            displayelement(pt[115]);
            break;
        case 116:
            displayelement(pt[116]);
            break;
        case 117:
            displayelement(pt[117]);
            break;
       
        
        default:
            printf("Element not found in the periodic table.\n");
            break;
    }

    
return 0;
}