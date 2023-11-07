#include <stdio.h>

typedef struct{
    char* name;
    int id;
    int quiz[4];
    int exam;
} STUDENT;

int main(void) {
    FILE* sp;
    char name[10];
    int id;
    int quiz1, quiz2, quiz3, quiz4, exam;
    int state;
    int count=0;
    STUDENT std[20];

    printf("    Name            ID  Quiz1   Quiz2   Quiz3   Quiz4   Exam\n");
    printf("==============================================================\n");

    sp = fopen("student.txt", "r");
    if (sp == NULL) {
        printf("file open error!\n");
        return 1;
    }
    while (1) {
        state = fscanf(sp, "%s %d %d %d %d %d %d", name, &id, &quiz1, &quiz2, &quiz3, &quiz4, &exam); //fscanf의 반환 값으로 성공한 개수가 나오기 때문
        if (state == EOF) {
            break;
        }
        else {

            std[count].name = name; // 이름 넣기
            std[count].exam = exam; // 시험 점수
            std[count].id = id;
            std[count].quiz[0] = quiz1;
            std[count].quiz[1] = quiz2;
            std[count].quiz[2] = quiz3;
            std[count].quiz[3] = quiz4;
        }
        count++; //배열의 수 체크 그리고 이 배열 수 만큼 학생 정보를 구조체에 저장하려고 했음
    }

    for (int i = 0; i < count; i++) {
        printf("%-10s       %6d%4d    %4d    %4d     %4d    %4d\n", std[i].name, std[i].id, std[i].quiz[0] = quiz1, std[i].quiz[1] = quiz2, std[i].quiz[2] = quiz3, std[i].quiz[3] = quiz4, std[i].exam);
    }
    return 0;
}