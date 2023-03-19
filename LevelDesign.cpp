#include "LevelDesign.h"
#include "Utility.h"

using namespace std;


//Room resolution 29/119
GameLevel::GameLevel(int RoomType) {
    /*Пусть тут будет несколько комнат, которые вы будете сами строить в конструкторе класса.
      Тип комнаты будет зависеть от того, какой номер передается в конструктор.
      Например, если вы вызвали конструктор GameLevel(0), то построится начальная комната,
      в которой игрок спавнится.
    */

    //Строю белый квадрат по разрешению, указанному в LevelDesign.h
    if (RoomType == 0) {
        for (auto &i: GameLevelArray) {
            for (auto &j: i) {
                j = " ";
            }
        }

        DrawLine(0, 0, 2, 15);
        DrawLine(0, 0, 50, 1);
        DrawLine(014, 0, 15, 20);
    }


}

void GameLevel::DrawGameLevel() {
    for (auto & i : GameLevelArray) {
        for (auto & j : i) {
            cout << j;
        }
        cout << endl;
    }
}

void GameLevel::DrawLine(int x1, int y1, int x2, int y2) {
    for (int i = y1; i < y2; i++) {
        for (int j = x1; j < x2; j++) {
            GameLevelArray[i][j] = "█";
        }
    }
}

void GameLevel::DrawFill(int x1, int y1, int x2, int y2) {

}

void GameLevel::DrawFrame(int x1, int y1, int x2, int y2) {

}

