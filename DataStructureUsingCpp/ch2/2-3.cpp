// 다차원 배열의 매개변수 전달
// 영상에서 밝기 값이 최대인 화소를 찾아 그 값을 반환하는 프로그램을 작성하자
// 정적인 크기에 대해 작동 하는 간단한 코드를 작성하면 된다. 
// 2차원 -> 이중 포인터 

// 이중 포인터 
// A[0][0] A[0][1] A[0][2] ...
// A[1][0] A[1][1] A[1][2]
// A[2][0] A[2][1] A[2][2]

# include<cstdio>
int findMaxPixel(int image[][5], int h, int w){
    int maxVal = 0; 
    for(int i=0; i < h; i++){
        for(int j=0; j < w; j++){
            if(maxVal < image[i][j]){
                maxVal = image[i][j];
            }
        }
    }
    return maxVal;
}

int main(){
    int image[4][5] = {{3, 24, 82, 12, 22},
                    {34, 7, 12, 19, 21},
                    {99, 7, 65, 73, 58},
                    {20, 7, 9, 48, 29}};

    int maxPixel = findMaxPixel(image, 4, 5);
    printf("Max Pixel of image is: %d\n", maxPixel);
}