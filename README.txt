I2C 통신을 사용하여 전보다 더 깔끔하고 직관적으로 쉽게 통신이 가능해졌습니다.

Master는 Master.c의  write2Slave(int slave_id, int order)함수를 통해 slave들에게 led 제어를 명령하고
readFromSlave함수를 통해 각각의 slave들이 가지고있는 센서들의 값을 읽어올수 있습니다.

write2Slave의 slave_id==0이라면 모든 slave들에게 broadcast를 보냅니다.