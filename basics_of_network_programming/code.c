//#include <sys/socket.h>
#include <winsock.h>

int socket(int domain, int type, int protocol);
//성공 시 파일 디스크립터, 실패 시 -1 반환 

int bind(int sockfd, struct sockaddr* myaddr, socklen_t addrlen);
//소켓에 주소정보 할당, 성공 시 0, 실패 시 -1 반환 

int listen(int sockfd, int backlog);
//연결요청이 가능한 상태, 성공 시 0, 실패 시 -1 반환 

int accept(int sockfd, struct sockaddr* addr, socklen_t* addrlen);
//연결요청에 대한 수락, 성공 시 파일 디스크립터, 실패 시 -1 반환

/*정리
	1단계. 소켓 생성					socket 함수호출
	2단계. IP주소와 PORT번호 할당		blind 함수호출
	3단계. 연결요청 가능상태로 변경 	listen 함수호출
	4단계. 연결요청에 대한 수락			accept 함수호출
*/
