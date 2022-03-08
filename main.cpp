#include <iostream>
#include <string>
const std::string answer = "BUS";
int count = 0;

int main() {
   std::cout << "글자수 : " << answer.length() << " 글자" << std::endl;
   while (true)
   {
      std::string inputword;
      std::cin >> inputword;

      count++;
      if (inputword == answer) {
         std::cout << "정답! 맞히기까지 걸린 횟수! : " << count << std::endl;
         break;
      }
      for (int i = 0 ; i != answer.length() ; i++) {
         if (inputword[i] == answer[i]) {
            std::cout << 2;
         } else if (answer.find(inputword[i]) != std::string::npos) {
            std::cout << 1;
         } else {
            std::cout << 0;
         }
      }
      std::cout << "\n";
   }
}