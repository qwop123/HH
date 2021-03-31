#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define S 0 // 가위
#define R 1 // 바위
#define P 2 // 보

int main()

{

	int com; // 컴퓨터가 낸 값을 저장합니다. 

	int user; // 사용자가 낸 값을 저장합니다. 

	int result[3] = { 0, }; // 게임의 결과를 저장합니다. 

	// result 배열의 모든 요소를 0으로 초기화합니다. 

	int cnt = 0; // 게임의 횟수를 저장합니다. 0으로 초기화합니다. 

	srand((unsigned)time(NULL)); // rand 함수의 결과가 매번 다르도록 시드값을 지정합니다. 

	while (1) // 사용자가 종료할 때 까지 반복합니다. 

	{

		com = rand() % 3 + 1; // 1~3 값 중 하나를 저장합니다. 

		printf("**************** 가위 바위 보 게임 ****************\n");

		printf("(1. 가위 _ 2. 바위 _ 3. 보 _ 0. 종료)\n\n");

		printf("입력해주세요 : ");

		scanf_s("%d", &user);

		if (user > 0 && user < 4) // 사용자가 1~3 값을 입력했을 경우입니다. 

		{

			cnt++; // 정상적인 입력의 경우 게임 횟수를 증가시킵니다. 

			// 컴퓨터, 사용자가 낸 값에 따라 가위, 바위, 보 중 출력할 값을 선택합니다. 

			printf("\n컴퓨터 : %s\n", (com == 1 ? "가위" : com == 2 ? "바위" : "보"));

			printf("사용자 : %s\n\n", (user == 1 ? "가위" : user == 2 ? "바위" : "보"));

			if (com == user) // 컴퓨터의 값과 사용자의 값이 같으면 비기는 경우입니다. 

			{

				printf("후.. 비겼습니다. \n\n");

				result[1]++; // 무승부 횟수를 증가시킵니다. 

			}// 지는 경우의 수입니다.  

			else if (((com == 1) && (user == 3)) ||

				((com == 2) && (user == 1)) ||

				((com == 3) && (user == 2)))

			{

				printf("졌습니다.ㅠㅠ\n\n");

				result[2]++; // 패배 횟수를 증가시킵니다. 

			}

			else // 나머지는 이긴 경우입니다. 

			{

				printf("ㅋㅋㅋ이겼습니다.\n\n");

				result[0]++; // 승리 횟수를 증가시킵니다. 

			}

			printf("%d전 %d승 %d무 %d패\n\n", cnt, result[0], result[1], result[2]);

		}

		else // 사용자가 입력한 값이 1, 2, 3이 아닌 경우 

		{

			if (user == 0) // 사용자가 입력한 값이 0이면 종료합니다. 

			{

				printf("게임을 종료합니다.\n");

				break; // 종료 

			} // 그 외에는 예외처리 메세지 출력 

			printf("숫자를 제대로 입력해주세요\n\n");

		}

		system("pause"); // 일시정지 아무키나 누르면 진행됩니다. 

		system("cls"); // 화면 내용을 모두 지웁니다. 

	}

	return 0;

}


	/*int main()
	{
		int game[3] = {0,1,2};
		int select = 0;
		int win = 0;
		int lose = 0;
		int draw = 0;
		int key = 0;		
		while (true)
		{
			srand((int)time(NULL));
			printf("0.가위 1.바위 2.보 -> ");
			scanf("%d", &select);
			if (select >= 3)
			{
				printf("다시 입력하세요!\n");				
			}
			else
			printf("Player: %d\t", select);
			
			for (int i = 0; i < 1; i++)
			{
				game[i] = rand() % 3;
				
				if (select == game[i])
				{
					printf("Com: %d\n", game[i]);
					printf("Draw!\n");
					draw++;
				}
				else if (select == 1 && game[i] == 0) // 컴터 가위
				{
					printf("Com: %d\n", game[i]);
					printf("Win!\n");
					win++;
				}
				else if (select == 2 && game[i] == 0)
				{
					printf("Com: %d\n", game[i]);
					printf("Lose!\n");
					lose++;
				}
				else if (select == 0 && game[i] == 1) // 컴터 바위
				{
					printf("Com: %d\n", game[i]);
					printf("Lose!\n");
					lose++;
				}
				else if (select == 2 && game[i] == 1)
				{
					printf("Com: %d\n", game[i]);
					printf("Win!\n");
					win++;
				}
				else if (select == 0 && game[i] == 2) // 컴터 보
				{
					printf("Com: %d\n", game[i]);
					printf("Win!\n");
					win++;
				}
				else if (select == 1 && game[i] == 2)
				{
					printf("Com: %d\n", game[i]);
					printf("Lose!\n");
					lose++;
				}
				if (select < 3)
				{
					printf("Win:[%d]번,Lose[%d]번,Draw[%d]번\n\n", win, lose, draw);
				}
			}
		}
		
			return 0;
	}*/
////맵 데이터
//#define MAP_Y 10
//#define MAP_X 10
//#define WALL 1
//#define ROAD 0
//#define GEM 2
////이동관련
//#define UP 1
//#define DOWN 2
//#define RIGHT 3
//#define LEFT 4
//
//int main()
//{
//	int map[MAP_Y][MAP_X] = {
//		{0,1,1,1,1,1,1,1,1,1},
//		{0,0,0,0,0,0,0,0,0,1},
//		{1,1,1,1,1,1,1,1,0,1},
//		{1,0,0,0,0,0,1,1,0,1},
//		{1,0,0,2,0,0,1,1,0,1},
//		{1,1,1,1,1,0,1,1,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,1,1,1,1,1,1,1,1,1},
//	};
//	int playerY = 0, playerX = 0;
//	int select = 0;
//	while (1)
//	{
//		for (int i = 0; i < MAP_Y; i++)
//		{
//			for (int j = 0; j < MAP_X; j++)
//			{
//				if (map[i][j] == ROAD) // ROAD안에 플레이어추가
//				{
//					if (playerY == i && playerX == j)
//					{
//						printf("♀");
//					}
//					else
//						printf("□");
//				}
//				else if (map[i][j] == WALL)
//				{
//					printf("■");
//				}
//				else if (map[i][j] == GEM)
//				{
//					printf("◈");
//				}
//			}
//			printf("\n");
//		}
//		printf("1.위 2.아래 3.오른쪽 4.왼쪽 5.종료\n");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case UP:
//			if (playerY - 1 >= 0)
//			{
//				if (map[playerY - 1][playerX] == ROAD)
//				{
//					playerY--;
//				}
//				else if (map[playerY - 1][playerX] == GEM)
//				{
//					printf("축하합니다! 보석을 찾았습니다.\n");
//					playerX = 0, playerY = 0;
//
//				}
//			}
//			break;
//		case DOWN:
//			if (playerY + 1 < MAP_Y)
//			{
//				if (map[playerY + 1][playerX] == ROAD)
//				{
//					playerY++;
//				}
//				else if (map[playerY + 1][playerX] == GEM)
//				{
//					printf("축하합니다! 보석을 찾았습니다.\n");
//					playerX = 0, playerY = 0;
//
//				}
//			}
//			break;
//		case RIGHT:
//			if (playerX + 1 < MAP_X)
//			{
//				if (map[playerY][playerX+1] == ROAD)
//				{
//					playerX++;
//				}
//				else if (map[playerY][playerX+1] == GEM)
//				{
//					printf("축하합니다! 보석을 찾았습니다.\n");
//					playerX = 0, playerY = 0;
//
//				}
//			}
//			break;
//		case LEFT:
//			if (playerX - 1 >= 0)
//			{
//				if (map[playerY][playerX - 1] == ROAD)
//				{
//					playerX--;
//				}
//				else if (map[playerY][playerX - 1] == GEM)
//				{
//					printf("축하합니다! 보석을 찾았습니다.\n");
//					playerX = 0, playerY = 0;
//				}
//			}
//			break;
//		default:
//			break;
//		}
//		system("cls");
//	}
//}

// 2021.03.26 < 반복문 >

//void main()
//{
	// while문 -> 조건이 만족되지 않으면 그냥 끝내는
	// do~while문 -> 조건이 만족이 안되더라도 1회는 무족건 실행하는 반복문
	/*int i = 0;
	while (i < 10)
	{
		i = i + 1;
	}*/
	// for 문
	//for (
	//	int i = 0; // 초기문 , 변수생성
	//	i < 10; // 조건문
	//	i = i + 1) // 값을 증가 , 증감문 
	//{
	//	// 내용
	//	// 내부
	//}

	/*for (1; 2; 4;)
	{
		3;
	*///}

	// 체력바
	//int Hp = 250;
	//int HpMax = 500;
	//// #### -> 체력회복
	//int BarMax = 10;
	//int BarNow = (Hp * BarMax) / HpMax; // A : B = C : D -> BC = AD -> Hp : HpMax = BarNow : BarMax -> BarNow = (Hp * BarMax) / HpMax;
	//while (1)
	//{
	//	printf("HP : %d / %d [", Hp, HpMax);
	//	for (int i = 0; i < BarMax - BarNow; i = i + 1) // BarNow = 1 -> 0
	//	{
	//		printf(" ");
	//	}
	//	for (int i = 0; i < BarNow; i = i + 1) // BarNow = 1 -> 0
	//	{
	//		printf("#");
	//	}
	//	printf("]");
	//	printf("\n");
	//	printf("체력을 얼만큼 변화시키겠습니까?");
	//	printf(" >> ");
	//	int Change;
	//	scanf("%d", &Change);

	//	if (Change == 0)
	//		break;
	//	Hp = Hp + Change;
	//	BarNow = (Hp * BarMax) / HpMax;
	//}

	/*int GuGudan = 2;
	for (int i =2; i < 10; i = i + 1)
	{
		printf("\n%d 단=========================\n", i);
		for (int j = 1; j < 10; j = j + 1)
		{
			printf("\n%d * %d = %d\n", i, j, i * j);
		}
	}*/

	// for (int i = 0; i > -1; i = i + 1) //
	//for (;;) // 초기, 조건, 증감 // 무한히 반복하는 for
	//	// 변수는 용량의 제한
	//	// 제한을 뛰어넘으면 마이너스
	//{
	//	printf("A");
	//}

	// 반복문을 이용할때는 내 목적에 따라서 어떤 반복문을 이용할지 선택해서 이용할 필요가 있다.

//	for (int i = 0; i < 10; i = i + 1)
//	{
//		printf("A");
//		continue;
//	}
//}


// --------------------------------------------------------------


// 2021.03.26 < 반복문 >
//
//int Scan()
//{
//	int number;
//	scanf("%d", &number);
//	return number;
//}


//void main()
//{
//	
//		// while 반복문
//		// 반복문 -> 10 100 무한
//		// 조건에 따라서 다른것을 이용하기 위해서
//		// while 레벨업
//		// while의 조건이 맞아야지만 이 기능이 동작해라
//		
//		// 내가 입력을해서 입력값이 1번이면 종료가 되고 1번이 아니면 그에 해당하는 동작을 해라
//	/*while (1)
//	{
//		int Select = Scan();
//		if (Select == 1)
//		{
//			break;
//		}
//		if (Select == 2)
//		{
//			printf("하하\n");
//		}
//		if (Select == 3)
//		{
//			printf("하하히히\n");
//		}
//
//	}*/
//
//	//// 반복을할때 조건
//	//int Select = 0;
//	//// 프로그램의 실행 순서 위 -> 아래 
//	//do
//	//{
//	//	printf("gkgkk");
//	//} while (Select != 0);
//
//	/*int Number = Scan();
//
//	int Sum = 1;*/
//
//	// Number -> 1 더하는 프로그램
//	/*while (Number != 1)
//	{
//		Sum = Sum + Number;
//		Number = Number - 1;
//	}*/
//	/*do
//	{
//		Sum = Sum + Number;
//		Number = Number - 1;
//	} while (Number != 1);
//	*/
//
//	//int Level = 1;
//
//	//int Exp = 0;
//
//	//int Menu = 0;
//
//	//// 경험치 획득
//	//do
//	//{
//	//	printf("레벨 : [%d] 경험치 : [%d][%d]\n", Level , Exp , Level * 100 );
//	//	printf("1. 경험치 획득 2. 종료\n");
//	//	Menu = Scan(); // 무족건 1회 실행되도록
//
//	//	if (Menu == 1)
//	//	{
//	//		printf("얼만큼을 획득하시겠습니까 : ");
//	//		Exp = Exp + Scan();
//
//	//		
//	//		while (Exp >= Level * 100); // 동작이 무족건 발동되면 안된다.
//	//		{
//	//			Exp = Exp - Level * 100;
//	//			Level = Level + 1;
//	//		}
//	//	}
//	//} while (Menu != 2);
//
//	int i = 0;
//
//	/*while (i < 5)
//	{
//		++i;
//		printf("AA");
//		continue;
//		printf("BB");
//		break;
//	}*/
//
//	do
//	{
//		continue;
//		++i;
//		printf("AA");
//	} while (i < 5);
//}


// --------------------------------------------------------------


// 2021.03.26 < 반복문 >
//int main()
//{
//
//
//	int Level = 1;
//	int Exp = 0;
//	int GetExp = 0;
//
//	// 레벨 증가 
//
//	while (GetExp >= 0) // 누적
//	{
//		printf("\n\n나의 레벨은 %d입니다\n", Level);
//		printf("획득할 경험치를 적어주세요 : ");
//		scanf("%d", &GetExp);
//
//		Exp = Exp + GetExp; // 저장해뒀던 정보 
//		printf("경험치 %d를 획득하여 현재 %d의 경험치를 가지고 있습니다.\n", GetExp, Exp);
//
//		while (Level * 100 <= Exp) // 최대 경험치보다 현재 경험치가 크거나 같다. -> 레벨업!
//		{
//			Exp = Exp - Level * 100;
//			Level = Level + 1;
//
//			continue; // 이어하기
//
//			break; // switch 마무리짓는 ㅡ 끝내는
//			// break -> 반복문 -> 끝내는 
//		}
//	}

	// 내가 입력한 숫자 1 -> 가위 2 -> 바위 3-> 보
	// 컴퓨터가 입력한 숫자 1 -> 가위 2 -> 바위 3-> 보 
//}
// 어떤 조건을 만족하면 그 조건이 거짓이 될때까지 반복을 계속하는것
//int main()
//{
//	int i = 0;
//	while (i < 10) // 관계연산자 관계도 i는 10보다 작다 0 < 10 -> 1 < 10
//	{
//		// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//		printf("A\n");
//		i = i + 1;
//	}
//	printf("반복문을 탈출합니다\n");
//	
//}


// --------------------------------------------------------------

// 2021.03.26 < 피라미드 >
//int main()
//{
//	int floor = 0;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &floor);
//
//	for (int i = 0; i < floor; i++)
//	{
//		for (int j = 0; j < floor - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//}

// --------------------------------------------------------------

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
