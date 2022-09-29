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

- 과제 1번

### 2022년 9월 29일
- [msg_tutorial](./msgtutorial)
    - msg_tutorial 패키지 생성
    - msg 디렉토리에 Mymsg.msg 생성
    - msg_publisher, msg_subscsriber, py_msg_pub.py, py_msg_sub.py 노드생성
    -빌드
    -실행

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