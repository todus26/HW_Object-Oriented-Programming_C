#include <iostream> 
//<iostresam> 헤더 파일 : 입출력을 위한 클래스와 객체, 변수 등이 선언 됨
//외부에 있는 라이브러리를 호출하여 해당 라이브러리의 기능 사용
//#include : 전처리기
//input output stream

//프로그램 시작
int main() {
	std::cout << "My name is Saeyeon. \n";  
	//(출력 개체) cout << : 값 형식으로 출력
	// <<< 연산자 다음에 기본형의 변수를 지정하면 자동으로 데이터 형에 맞추어 출력
 
//	std::cout << "My name is Saeyeon."<<std::endl;  
//      endl : end line , 줄바꿈과 같은 역할
	
	/*if ("프로그램에서 오류 발생")
		return -1;
	else ("프로그램에서 오류 없이 마무리")
		return 0;*/

	return 0;
}