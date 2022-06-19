# Smart Home Team
Project Final Presentation: Embedded System (COSE421, Jun 14, 2022)

Taewon Kang (Team Leader), Daekeon Kim, Madi, Didar

itschool [at] itsc [dot] kr, 98david [at] naver [dot] com, madibokishev2018 [at] gmail [dot] com, ds497watches [at] gmail [dot] com

## Project Description
Smart Home Cleaning System (Automatic Sanitizer)
* 가파른 상승세를 보이는 코로나19, 최근 유행 중인 원숭이두창으로 인해 해당 전염병 가족 간 전염 가능성을 배제할 수 없으며, 사용자들이 집을 비우는 동안 집 내를 자동으로 소독할 수 있는 시스템이 필요
* UV(UV-C 파장) 램프는 자외선 램프로, 램프를 켜 두는 것만으로 살균 효과가 있음. 그러나, UV-C램프는 직접 바라볼 시 매우 유해하므로, 사용자가 없는 시간대에만 사용 가능
* 사용자가 없는 시간에 모듈형으로 설계된 시스템을 활용하여 필요한 구역을 효과적으로 소독 가능

## Code Description
I2C 통신을 사용하여 전보다 더 깔끔하고 직관적으로 쉽게 통신이 가능해졌습니다.

Master는 Master.c의  write2Slave(int slave_id, int order)함수를 통해 slave들에게 led 제어를 명령하고
readFromSlave함수를 통해 각각의 slave들이 가지고있는 센서들의 값을 읽어올수 있습니다.

write2Slave의 slave_id==0이라면 모든 slave들에게 broadcast를 보냅니다.
