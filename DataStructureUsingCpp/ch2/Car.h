// 자동차 클래스 Car 의 구현 

class Car{
    protected: // 클래스 맴버 함수 혹은 상속 클래스에서 사용 가능 // 숨기는 변수
        int speed;
        char name[40];
    
    public: // main 에서도 사용 가능하다. 
        int gear; // 기어 
        Car(){ } // 생성자: 왜 세미 콜론이 없지?
        ~Car(){ } // 소멸자: 왜 세미 콜론이 없지? 

        Car(int s, int g, char* n)
            : speed(s), gear(g) { strcpy(name, n); } 

}