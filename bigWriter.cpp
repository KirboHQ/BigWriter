#include <iostream>
#include <string>

using namespace std;

int letter, line, startPoint, endPoint;
bool running = true, endPointFound, finished;
string phrase;

string letterSpace[7];
string letterPoint[7];
string letterComma[7];

string letterA[7];
string letterB[7];
string letterC[7];
string letterD[7];
string letterE[7];
string letterF[7];
string letterG[7];
string letterH[7];
string letterI[7];
string letterJ[7];
string letterK[7];
string letterL[7];
string letterM[7];
string letterN[7];
string letterO[7];
string letterP[7];
string letterQ[7];
string letterR[7];
string letterS[7];
string letterT[7];
string letterU[7];
string letterV[7];
string letterW[7];
string letterX[7];
string letterY[7];
string letterZ[7];

string number0[7];
string number1[7];
string number2[7];
string number3[7];
string number4[7];
string number5[7];
string number6[7];
string number7[7];
string number8[7];
string number9[7];


int scanEnd() {
	
	endPointFound = false;
	
	while (endPointFound == false) {
		
		for (letter = startPoint; letter < phrase.length(); letter++) {
				
			if (endPointFound == false && phrase[letter] == '=' && phrase[letter + 1] != '=') {
				
				endPoint = letter;
				endPointFound = true;
			}
			else if (endPointFound == false && letter == phrase.length() - 1) {
				
				endPoint = letter + 1;
				endPointFound = true;
			}
		}
	}
}

int scanWriteLetter() {
	if (phrase[letter] == ' ') {
		
		cout << letterSpace[line];
	}
	else if (phrase[letter] == '.') {
		
		cout << letterPoint[line];
	}
	else if (phrase[letter] == ',') {
		
		cout << letterComma[line];
	}

	else if (phrase[letter] == 'a' || phrase[letter] == 'A') {
		
		cout << letterA[line];
	}
	else if (phrase[letter] == 'b' || phrase[letter] == 'B') {
		
		cout << letterB[line];
	}
	else if (phrase[letter] == 'c' || phrase[letter] == 'C') {
		
		cout << letterC[line];
	}
	else if (phrase[letter] == 'd' || phrase[letter] == 'D') {
		
		cout << letterD[line];
	}
	else if (phrase[letter] == 'e' || phrase[letter] == 'E') {
		
		cout << letterE[line];
	}
	else if (phrase[letter] == 'f' || phrase[letter] == 'F') {
		
		cout << letterF[line];
	}
	else if (phrase[letter] == 'g' || phrase[letter] == 'G') {
		
		cout << letterG[line];
	}
	else if (phrase[letter] == 'h' || phrase[letter] == 'H') {
		
		cout << letterH[line];
	}
	else if (phrase[letter] == 'i' || phrase[letter] == 'I') {
		
		cout << letterI[line];
	}
	else if (phrase[letter] == 'j' || phrase[letter] == 'J') {
		
		cout << letterJ[line];
	}
	else if (phrase[letter] == 'k' || phrase[letter] == 'K') {
		
		cout << letterK[line];
	}
	else if (phrase[letter] == 'l' || phrase[letter] == 'L') {
		
		cout << letterL[line];
	}
	else if (phrase[letter] == 'm' || phrase[letter] == 'M') {
		
		cout << letterM[line];
	}
	else if (phrase[letter] == 'n' || phrase[letter] == 'N') {
		
		cout << letterN[line];
	}
	else if (phrase[letter] == 'o' || phrase[letter] == 'O') {
		
		cout << letterO[line];
	}
	else if (phrase[letter] == 'p' || phrase[letter] == 'P') {
		
		cout << letterP[line];
	}
	else if (phrase[letter] == 'q' || phrase[letter] == 'Q') {
		
		cout << letterQ[line];
	}
	else if (phrase[letter] == 'r' || phrase[letter] == 'R') {
		
		cout << letterR[line];
	}
	else if (phrase[letter] == 's' || phrase[letter] == 'S') {
		
		cout << letterS[line];
	}
	else if (phrase[letter] == 't' || phrase[letter] == 'T') {
		
		cout << letterT[line];
	}
	else if (phrase[letter] == 'u' || phrase[letter] == 'U') {
		
		cout << letterU[line];
	}
	else if (phrase[letter] == 'v' || phrase[letter] == 'V') {
		
		cout << letterV[line];
	}
	else if (phrase[letter] == 'w' || phrase[letter] == 'W') {
		
		cout << letterW[line];
	}
	else if (phrase[letter] == 'x' || phrase[letter] == 'X') {
		
		cout << letterX[line];
	}
	else if (phrase[letter] == 'y' || phrase[letter] == 'Y') {
		
		cout << letterY[line];
	}
	else if (phrase[letter] == 'z' || phrase[letter] == 'Z') {
		
		cout << letterZ[line];
	}
	
	else if (phrase[letter] == '0') {

		cout << number0[line];
	}
	else if (phrase[letter] == '1') {

		cout << number1[line];
	}
	else if (phrase[letter] == '2') {

		cout << number2[line];
	}
	else if (phrase[letter] == '3') {

		cout << number3[line];
	}
	else if (phrase[letter] == '4') {

		cout << number4[line];
	}
	else if (phrase[letter] == '5') {

		cout << number5[line];
	}
	else if (phrase[letter] == '6') {

		cout << number6[line];
	}
	else if (phrase[letter] == '7') {

		cout << number7[line];
	}
	else if (phrase[letter] == '8') {

		cout << number8[line];
	}
	else if (phrase[letter] == '9') {

		cout << number9[line];
	}
}

int main() {
	
	letterSpace[0] = "    ";
	letterSpace[1] = "    ";
	letterSpace[2] = "    ";
	letterSpace[3] = "    ";
	letterSpace[4] = "    ";
	letterSpace[5] = "    ";
	letterSpace[6] = "    ";
	
	letterPoint[0] = "     ";
	letterPoint[1] = "     ";
	letterPoint[2] = "     ";
	letterPoint[3] = "     ";
	letterPoint[4] = " ... ";
	letterPoint[5] = " ... ";
	letterPoint[6] = "     ";

	letterComma[0] = "     ";
	letterComma[1] = "     ";
	letterComma[2] = "     ";
	letterComma[3] = "     ";
	letterComma[4] = "  ,, ";
	letterComma[5] = "  ,, ";
	letterComma[6] = " ,,  ";
	
	letterA[0] = "    AAA    ";
	letterA[1] = "   AAAAA   ";
	letterA[2] = "  AA   AA  ";
	letterA[3] = " AAAAAAAAA ";
	letterA[4] = " AAAAAAAAA ";
	letterA[5] = " AAA   AAA ";
	letterA[6] = "           ";
	
	letterB[0] = " BBBBBB  ";
	letterB[1] = " BBB  BB ";
	letterB[2] = " BBBBBB  ";
	letterB[3] = " BBB  BB ";
	letterB[4] = " BBB  BB ";
	letterB[5] = " BBBBBB  ";
	letterB[6] = "         ";
	
	letterC[0] = "   CCCC  ";
	letterC[1] = "  CCC CC ";
	letterC[2] = " CCC     ";
	letterC[3] = " CCC     ";
	letterC[4] = "  CCC CC ";
	letterC[5] = "   CCCC  ";
	letterC[6] = "         ";
	
	letterD[0] = " DDDDDD  ";
	letterD[1] = " DDDDDDD ";
	letterD[2] = " DDD  DD ";
	letterD[3] = " DDD  DD ";
	letterD[4] = " DDDDDDD ";
	letterD[5] = " DDDDDD  ";
	letterD[6] = "         ";
	
	letterE[0] = " EEEEEEE ";
	letterE[1] = " EEE     ";
	letterE[2] = " EEEEEE  ";
	letterE[3] = " EEE     ";
	letterE[4] = " EEE     ";
	letterE[5] = " EEEEEEE ";
	letterE[6] = "         ";
	
	letterF[0] = " FFFFFFF ";
	letterF[1] = " FFF     ";
	letterF[2] = " FFFFFF  ";
	letterF[3] = " FFF     ";
	letterF[4] = " FFF     ";
	letterF[5] = " FFF     ";
	letterF[6] = "         ";
	
	letterG[0] = "  GGGGGG ";
	letterG[1] = " GGG     ";
	letterG[2] = " GGG     ";
	letterG[3] = " GGG GGG ";
	letterG[4] = " GGG  GG ";
	letterG[5] = "  GGGGGG ";
	letterG[6] = "         ";
	
	letterH[0] = " HHH HHH ";
	letterH[1] = " HHH HHH ";
	letterH[2] = " HHHHHHH ";
	letterH[3] = " HHHHHHH ";
	letterH[4] = " HHH HHH ";
	letterH[5] = " HHH HHH ";
	letterH[6] = "         ";
	
	letterI[0] = " IIIII ";
	letterI[1] = "  III  ";
	letterI[2] = "  III  ";
	letterI[3] = "  III  ";
	letterI[4] = "  III  ";
	letterI[5] = " IIIII ";
	letterI[6] = "       ";
	
	letterJ[0] = "     JJJ ";
	letterJ[1] = "     JJJ ";
	letterJ[2] = "     JJJ ";
	letterJ[3] = " JJJ JJJ ";
	letterJ[4] = " JJJJJJJ ";
	letterJ[5] = "  JJJJJ  ";
	letterJ[6] = "         ";
	
	letterK[0] = " KKK  KK ";
	letterK[1] = " KKK KK  ";
	letterK[2] = " KKKKK   ";
	letterK[3] = " KKK KK  ";
	letterK[4] = " KKK  KK ";
	letterK[5] = " KKK  KK ";
	letterK[6] = "         ";
	
	letterL[0] = " LLL    ";
	letterL[1] = " LLL    ";
	letterL[2] = " LLL    ";
	letterL[3] = " LLL    ";
	letterL[4] = " LLLLLL ";
	letterL[5] = " LLLLLL ";
	letterL[6] = "        ";
	
	letterM[0] = " MMM   MMM ";
	letterM[1] = " MMMM MMMM ";
	letterM[2] = " MMMMMMMMM ";
	letterM[3] = " MMM M MMM ";
	letterM[4] = " MMM   MMM ";
	letterM[5] = " MMM   MMM ";
	letterM[6] = "           ";
	
	letterN[0] = " NNN   NNN ";
	letterN[1] = " NNNN  NNN ";
	letterN[2] = " NNNNN NNN ";
	letterN[3] = " NNN NNNNN ";
	letterN[4] = " NNN  NNNN ";
	letterN[5] = " NNN   NNN ";
	letterN[6] = "           ";
	
	letterO[0] = "  OOOOO  ";
	letterO[1] = " OOOOOOO ";
	letterO[2] = " OO   OO ";
	letterO[3] = " OO   OO ";
	letterO[4] = " OOOOOOO ";
	letterO[5] = "  OOOOO  ";
	letterO[6] = "         ";
	
	letterP[0] = " PPPPPP  ";
	letterP[1] = " PPP  PP ";
	letterP[2] = " PPP  PP ";
	letterP[3] = " PPPPPP  ";
	letterP[4] = " PPP     ";
	letterP[5] = " PPP     ";
	letterP[6] = "         ";
	
	letterQ[0] = "   QQQ   ";
	letterQ[1] = "  QQQQQ  ";
	letterQ[2] = " QQ   QQ ";
	letterQ[3] = " QQ   QQ ";
	letterQ[4] = "  QQQQQQ ";
	letterQ[5] = "   QQQ QQ";
	letterQ[6] = "         ";
	
	letterR[0] = " RRRRRR  ";
	letterR[1] = " RRR  RR ";
	letterR[2] = " RRR  RR ";
	letterR[3] = " RRRRRR  ";
	letterR[4] = " RRR RR  ";
	letterR[5] = " RRR  RR ";
	letterR[6] = "         ";

	letterS[0] = "  SSSSSS ";
	letterS[1] = " SSS     ";
	letterS[2] = " SSSSS   ";
	letterS[3] = "   SSSSS ";
	letterS[4] = "     SSS ";
	letterS[5] = " SSSSSS  ";
	letterS[6] = "         ";
	
	letterT[0] = " TTTTTTT ";
	letterT[1] = " TTTTTTT ";
	letterT[2] = "   TTT   ";
	letterT[3] = "   TTT   ";
	letterT[4] = "   TTT   ";
	letterT[5] = "   TTT   ";
	letterT[6] = "         ";
	
	letterU[0] = " UUU UUU ";
	letterU[1] = " UUU UUU ";
	letterU[2] = " UUU UUU ";
	letterU[3] = " UUU UUU ";
	letterU[4] = " UUUUUUU ";
	letterU[5] = "  UUUUU  ";
	letterU[6] = "         ";
	
	letterV[0] = "VVV   VVV";
	letterV[1] = "VVV   VVV";
	letterV[2] = " VVV VVV ";
	letterV[3] = " VVV VVV ";
	letterV[4] = "  VVVVV  ";
	letterV[5] = "   VVV   ";
	letterV[6] = "         ";
	
	letterW[0] = " WWW   WWW ";
	letterW[1] = " WWW   WWW ";
	letterW[2] = " WWW W WWW ";
	letterW[3] = " WWWWWWWWW ";
	letterW[4] = " WWWW WWWW ";
	letterW[5] = " WWW   WWW ";
	letterW[6] = "           ";
	
	letterX[0] = " XX   XX ";
	letterX[1] = "  XX XX  ";
	letterX[2] = "   XXX   ";
	letterX[3] = "  XX XX  ";
	letterX[4] = " XX   XX ";
	letterX[5] = " XX   XX ";
	letterX[6] = "         ";
	
	letterY[0] = "YY     YY";
	letterY[1] = " YY   YY ";
	letterY[2] = "  YY YY  ";
	letterY[3] = "   YYY   ";
	letterY[4] = "   YYY   ";
	letterY[5] = "   YYY   ";
	letterY[6] = "         ";
	
	letterZ[0] = " ZZZZZZZ ";
	letterZ[1] = "     ZZZ ";
	letterZ[2] = "    ZZZ  ";
	letterZ[3] = "   ZZZ   ";
	letterZ[4] = "  ZZZ    ";
	letterZ[5] = " ZZZZZZZ ";
	letterZ[6] = "         ";

	number0[0] = "  00000  ";
	number0[1] = " 000  00 ";
	number0[2] = " 00 0 00 ";
	number0[3] = " 00 0 00 ";
	number0[4] = " 00  000 ";
	number0[5] = "  00000  ";
	number0[6] = "         ";

	number1[0] = "   111   ";
	number1[1] = "  1111   ";
	number1[2] = "   111   ";
	number1[3] = "   111   ";
	number1[4] = "   111   ";
	number1[5] = " 1111111 ";
	number1[6] = "         ";

	number2[0] = "  22222  ";
	number2[1] = " 222 222 ";
	number2[2] = "     222 ";
	number2[3] = "   2222  ";
	number2[4] = " 222     ";
	number2[5] = " 2222222 ";
	number2[6] = "         ";

	number3[0] = " 333333  ";
	number3[1] = "     333 ";
	number3[2] = "  3333   ";
	number3[3] = "    333 ";
	number3[4] = " 33  333 ";
	number3[5] = "  33333  ";
	number3[6] = "         ";
	
	number4[0] = "     44  ";
	number4[1] = "   4444  ";
	number4[2] = "  4  44  ";
	number4[3] = " 4444444 ";
	number4[4] = "     44  ";
	number4[5] = "     44  ";
	number4[6] = "         ";

	number5[0] = " 5555555 ";
	number5[1] = " 55      ";
	number5[2] = " 55555   ";
	number5[3] = "    5555 ";
	number5[4] = " 55   55 ";
	number5[5] = "  55555  ";
	number5[6] = "         ";
	
	number6[0] = "  66666  ";
	number6[1] = " 66      ";
	number6[2] = " 66 666  ";
	number6[3] = " 666  66 ";
	number6[4] = " 66   66 ";
	number6[5] = "  66666  ";
	number6[6] = "         ";
	
	number7[0] = " 7777777 ";
	number7[1] = "      77 ";
	number7[2] = "     77  ";
	number7[3] = "    77   ";
	number7[4] = "   77    ";
	number7[5] = "  77     ";
	number7[6] = "         ";
	
	number8[0] = "   888   ";
	number8[1] = "  88 88  ";
	number8[2] = "   888   ";
	number8[3] = " 88   88 ";
	number8[4] = " 88   88 ";
	number8[5] = "  88888  ";
	number8[6] = "         ";
	
	number9[0] = "  99999  ";
	number9[1] = " 99   99 ";
	number9[2] = " 99  999 ";
	number9[3] = "  999 99 ";
	number9[4] = "      99 ";
	number9[5] = "  99999  ";
	number9[6] = "         ";
	
	while (running == true) {
	
		cout << "Scrivi una parola/frase (per andare a capo scrivere '='): ";
		getline (cin, phrase);
		
		cout << "\n";
		
		startPoint = 0;
		endPoint = phrase.length();
		
		finished = false;
		
		while (finished == false) {
			
			scanEnd();
			
			for (line = 0; line < 7; line++) {
				
				for (letter = startPoint; letter < endPoint; letter++) {
					
					scanWriteLetter();
					
					if (endPoint == phrase.length() && letter == endPoint - 1 && line == 6) {
				
						finished = true;
					}
					else if (endPoint != phrase.length() && letter == endPoint - 1 && line == 6) {
				
						startPoint = endPoint + 1;
					}
				}
			    
				cout << "\n";
			}
		}	
	}
}