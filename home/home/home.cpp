#include <stdio.h>

// 2021.03.26 < 반복문 >

void main()
{
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

	for (int i = 0; i < 10; i = i + 1)
	{
		printf("A");
		continue;
	}
}


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
