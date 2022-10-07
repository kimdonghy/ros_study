# ros_study
my first ros study


- 2022년 9월 27일 시작
- monkey


-2022 9월 28일 수
- topic_tutorial 패키지 생성
- my_publisher, my_subscriber 노드생성
-빌드
-실행

- topic_tutorial 패키지에 python scripts 추가
- py_publisher.py,py_subscriber.py 노드 생성
-빌드
-실행

-topic_second 패키지 생성
- second_pub, second_sub, py_second_pub.py, py_second.py 노드생성
- 빌드
- 실행


### 2022년 9월 29일
- [msg_tutorial](./msgtutorial)
    - msg_tutorial 패키지 생성
    - msg 디렉토리에 Mymsg.msg 생성
    - msg_publisher, msg_subscsriber, py_msg_pub.py, py_msg_sub.py 노드생성
    -빌드
    -실행

- [service_tutorial](./service_tutorial)
    -sevice_tutorial 패키지 생성
    - srv 디렉토리에 AddtwoInst.srv생성
    - my_server, my_client, py_server, py_client생성


### 2022년 9월 30일
- [과제 2 yh_star](./yh_star)
- for문 활용해서 별 찍기
    - yh_star 패키지 생성
    - yh_star_pub, yh_star_sub, yh_star_pub,
    yh_star_sub.py 노드 생성
    - 빌드
    - 실행

- [과제 3 yh_service](./yh_service)
    - yh_service 패키지 생성
    - yh_server, yh_client, yh_server.py,
    노드생성
    - 빌드
    - 실행


### 2022년 10월 04일
### [gooday_tutoial](./param_tutorial)
- goodday_tutorial 패키지 생성
- calculate_server, calculate client, pp,py
노드생성
- 빌드
- 실행
- [파라미터 서버 활용](#parameter-server)

- 과제 4
- 과제 5
- 과제 6

## 2022년 10월 06일
### [yh_turtle](./yh_turtle)
- yh_turtle 패키지 생성
- turtle_patrol, turtle_keyboard, turtle_clear,
turtle_keyboard_clear, turtle_ptrol.py, turtle_keyboard.py, turtle_clear.py, turtle_keyboard_clear.py 노드 생성
- 빌드
- 실행

### roslaubch 
[roslaunch]


- roscore와 launch 파일에 있는 노드들을 실행시키는 명령
- launch 파일은 `패키지 디렉토리/launch`에 만든다.
- roslaunch 실행
```bash
$ roslaunch <패키지이름> <런치파이름>
```

- launch 파일은 <launch></launch> 태그사이에 내용을 입력.
- node 태그는 패키지 이름, 노드 타입, 노드 이름 입력한다.
- param 태그는 파라미터 이름, 값, 타입을 입력한다.

1. 거북이 키기 :rosrun turtlesim turtlesim_node

2. 키보드: rosrun teleop_twist_이름(keyboard) teleop_twist_ 이름(keyboard)

3. catkin_create_pkg 이름 roscpp rospy geometry_msgs turtlesim std_srvs

4. tutle_clear 만들어서 쓰고 지워보기




### elteop_twist_keyboard 패키지
- 키보드 입력을 /cmd_vel 토픽의 geometry_msgs/Twist 메시지로 publish 하는 노드


### 2022년 10월 07일

- 


------------------------------------------------------
## 패키지 만들기
1. cs를 들어간다
2. ros_sutdy에 들어간다
3. catkin_create_pkg (패키지이름) roscpp rospy

catkin_create_pkg ,패키지이름, roscpp rospy std_msgs message_generation

## msg 파일 만들기
1. msg_튜토리얼에다가

2. msg 파일만들고

3. Mymsg.msg 만들기

## 파이썬 권한주기

- chmod +x src/ros_study/msg_tutorial/scripts/*



## ROS명령어
### roscore
- ROS Master를 실행한다
-노드를 켜기 전에 가장먼저실행
```
    bash
     roscore
```

### rosrun
-노드를 실행한다.
-rosrun 패키지이름 노드이름
```
    bash
     rosrun <패키지이름> <노드이름>
```

### catkin_create_pkg
- 현재 위치한 작업 공간에 패키지를 생성한다.
- catkin_create_pkg 패키지이름 의존성
```bash
    catkin_create_pkg <패키지 이름> <의존성1> 
    <의존성2> ~....
```
```bash
    catkin_create_pkg topic_tutorial roscpp
    rospy std_msgs
```

## msg 만드는법
1. 패키지 안에 msg 디렉토리를 만든다.
2. .msg 확장자의 파일을 만든다.
3. 안에 내용을 작성한다.
4. CMakelists.txt 에서 설정한다.
5. 빌드시 생성된다.

### srv 파일은 ---을 기준으로 나뉜다.
- 위쪽은 reuqest, 서비스 클라이언트가 요청을 보낼때 사용한다.
-아래쪽은 response, 서비스 서버가 응답을 보낼때 사용.


### Parameter Server
- ROS Master에서 실행되고, 변수들을 담고 있는 서버
- ros::setParam(), ros::getParam(), rospy.set_param(), rospy.get_param() 등의 함수로 사용
- command line 에서 rosparam으로 사용가능
-rosParam list
    - 파라미터에 있는 리스트들 모두 출력
- rosparam get (파라미터 이름)
    - 파라미터의 값을 출력함
```bash
why361912@naver.com:~$ rosparam get <파라미터 이름>
```
- rosparam set <파라미터 이름> [파라미터 값]
    - 파라미터의 값을 지정함
```bash
why361912@naver.com:~$ rosparam set <파라미터 이름> [파라미터 값]
```

### elteop_twist_keyboard 패키지
- 키보드 입력을 /cmd_vel 토픽의 geometry_msgs/Twist 메시지로 publish 하는 노드
```bash
$ sudo apt install ros-melodic-teleop-twist-keyboard
```

## 과제 2
1. yh_star 패키지를 만들고 publisher 노드 1개, subscriber 노드 1개를 만든다.

2. publisher 노드의 이름은 yh_star_pub이고, yh_star_topic 이라는 이름의 토픽으로 0.5초에 한번 메시지를 publish 한다.

3. subscriber 노드의 이름은 yh_star_sub이고, ys_star_pub이 publish하는 메시지를 subscribe한다.

4. yh_star_pub 은 시간과 정수를 YhStarMsg 메시지에담아 publish한다

5. yh_star_sub은 subscribe한 메시지 안의 정수에 따라 print() 함수로 별을 출력한다 (파이썬이면 print)

## 과제 3

1. yh_service 패키지를 만들고 service server 노드 1개, service client 노드 1개를 만든다.
    
2. service server 노드의 이름은 yh_server이고, 요청을 받아 request 안의 정수 a, b를 곱한 값을 response의 result에 넣어 응답한다.

3. service client 노드의 이름은 yh_client이고, request 안에 정수 a, b를 넣어 요청을 보내고 결과값을 출력한다.

4. 정수 a, b는 service client 노드 실행 시 command line을 통해 입력받는다.
    service 이름은 multiply, service 파일 이름은 YhSrv로 한다.


## 과제 4

1. yh_dual 패키지를 만들고 publisher 노드 1개, subscriber 노드 2개를 만든다

2. publisher 노드의 이름은 yh_dual_pub이고 yh_dual_topic 이라는 토픽으로 YhDual 메시지에 publish한 시간과 정수를 담아 publish한다.

3. subscriber 노드 1의 이름은 yh_aual_time 이고 yh_dual_topic 토픽의 YhDual 메시지를 subscribe하여 시간 정보를 출력한다.

4. subscriber 노드의 2의 이름은 yh_dual_int 이고 yh_dual_topic 토픽의 YhDual 메시지를 subscribe하여 정수 정보를 출력한다.

5. yh_dual_pub은 메시지를 0.125초마다 publish하고, publish할때마다 정수를 1씩 증가시킨다.


## 문제 1

1. yh_turtle 패키지에 yh_turtle_circle 노드를 생성한다.

2. yh_turtle_circle 노드는 turtlesim 패키지의 turtlesim_node 거북이를 원형으로 움직이도록 하는 노드로 만든다.

3. yh_turtle_circle 노드는 반지름을 지정할 수 있도록 한다