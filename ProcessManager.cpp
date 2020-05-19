//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <unistd.h>
//#include <termios.h>
//#include <fcntl.h>
//#include <dirent.h>

//////
//#include <sys/stat.h>
//#include <sys/types.h>
//#include <pwd.h>
//////
//#include <errno.h>
////
//#include <iomanip>
////#include <libgen.h>

////#include <sys/types.h> // for opendir(), readdir(), closedir()
////#include <sys/stat.h> // for stat()
////#include <unistd.h>
////#include <iostream>
////#include <cstdlib>
////#include <cstdio>
////#include <fstream>


////#include <stdio.h>/////////
////#include <stdlib.h>
////#include <termcap.h>

//////////

////#include <signal.h>
////#include <vector>
////#include <stdlib.h>

////#include <sstream>
////#include <pthread.h>
////#include <iostream>
////#include <sys/sem.h>

////#define clearrr() printf("\033[0;0f")///////////////


//using namespace std;

//int kbhit(void) {
  //struct termios oldt, newt;
  //int ch;
  //int oldf;
 
  //tcgetattr(STDIN_FILENO, &oldt);
  //newt = oldt;
  //newt.c_lflag &= ~(ICANON | ECHO);
  //tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  //oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  //fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  //ch = getchar();
 
  //tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  //fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  //if(ch != EOF)
  //{
    //ungetc(ch, stdin);
    //return ch;
  //} 
  //return 0;
//}

//bool isNumber(const char* string) {
    //for ( ; *string; string++)
        //if (*string < '0' || *string > '9')
            //return false;
    //return true;
//}


//class ProcessInformation {
//public:
	//string pid;
	//int ppid;
	//string owner;
	//string cmd;
	//float cpu;
	//char state;
	//int memory;
	//int time;
	//int threads;
	//int priority;
	
	////////////////
	////string path;
	////string name;
	
//};

//class Process {
	//ProcessInformation procInfo;
	
//public:
	//Process(const char* pidString) {
		
		////procInfo.pid = atoi(pidString);
		//procInfo.pid = pidString;
		////procInfo.owner = owner(pidString);
		//////procpath(pidString, &procInfo);
		////procstat(pidString, &procInfo);
		
		////procInfo.cmd = cmdline(pidString);//
	//}
	//string owner(const char *pidString) {
		//struct stat sstat;
		//struct passwd usrpwd, *res;
		//char buf[1024];		
		////char path[20];
		//string username;
		////snprintf(path, sizeof(path), "/proc/%s", pidString);
		//stat(pidString, &sstat);
		//getpwuid_r(sstat.st_uid, &usrpwd, buf, sizeof(buf), &res);
		//username = usrpwd.pw_name;
		//return username;
	//}
	
	
	
	///////////
	//static ssize_t xread(int fd, void *buf, size_t count) {
  //// Read some bytes. Retry on EINTR and when we don't get as many bytes as we requested.
  //size_t alreadyRead = 0;
  //for(;;) {
    //ssize_t res = read(fd, buf, count);
     //if (res == -1 && errno == EINTR) continue;
    //if (res > 0) {
       //buf = ((char*)buf)+res;
      //count -= res;
      //alreadyRead += res;
    //}
     //if (res == -1) return -1;
     //if (count == 0 || res == 0) return alreadyRead;
  //}
//}
	////////////
	//static std::string cmdline(const char* pid) {

  //int fd = open((string(pid) + "/cmdline").c_str(), O_RDONLY);

  //if (fd == -1) {
    //return "";
  //}

  //const int MAX_READ = 4096;
  //char command[MAX_READ + 1];
  //int amtRead = xread(fd, command, MAX_READ);

  //close(fd);

  //if (amtRead > 0) {
    //for (int i = 0; i < amtRead; ++i) {
      //if (command[i] == '\0' || command[i] == '\n') {
        //command[i] = ' ';
      //}
    //}
  //} else {
    //// This is probably kernel thread.
    //// @link https://github.com/hishamhm/htop/blob/47cf1532b0c9fbc70bada5022a7db07d3cc4811a/linux/LinuxProcessList.c#L692
    //return "";
  //}

  //return std::string(command, amtRead - 1);
//}
///////////////
 //void procstat(const char *fpid, ProcessInformation *pstat) {
  ////char path[50] = (string(fpid) + "/stat").c_str();
  
  ////snprintf(path, sizeof(path), "/proc/%s/stat", fpid);

  //FILE* fd = fopen((string(fpid) + "/stat").c_str(), "r");

  //if (fd == NULL) {
	  //cout<<"\n\nstat error!!!!!!!!!!\n\n";
    //return;//throw std::runtime_error("can't open stat");
  //}
//int a;
  ////fscanf(fd, "%d", &pstat->pid);  // (1)
  //fscanf(fd, " %*d");  // (1)
  //fscanf(fd, " %*s");
  //for(int i = 0; i < 22; i++){
  //fscanf(fd, " %d", &a);
  //cout<<"\n"<<a;
//}
//sleep(2);
  ////fscanf(fd, " %*c");
  ////fscanf(fd, " %d", &pstat->ppid);  // (4)
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %*u");
  ////fscanf(fd, " %*u");
  ////fscanf(fd, " %*u");
  ////fscanf(fd, " %*u");
  ////fscanf(fd, " %*u");
  //////fscanf(fd, " %lu", &pstat->utime);  // (14)
  ////fscanf(fd, " %*lu");  // (14)
  //////fscanf(fd, " %lu", &pstat->stime);  // (15)
  ////fscanf(fd, " %*lu");  // (15)
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %d", &pstat->priority);  // (18)
  ////fscanf(fd, " %*d");
  ////fscanf(fd, " %d", &pstat->threads);  // (20)
  ////fscanf(fd, " %*d");
  //////fscanf(fd, " %lu", &pstat->uptime);  // (22)
  ////fscanf(fd, " %*lu");  // (22)

  //fclose(fd);

//}

//////////////
	
	//void show(bool cmdMode) {
		//if(cmdMode) {
			//cout << "\n" << setw(5) << procInfo.pid << " " << procInfo.cmd;
		//} else {
			//cout << "\n" << setw(5) << procInfo.pid;
			////<<"\t"<<procInfo.owner
			////<<"\t"<<procInfo.priority
			////<<"\t"<<procInfo.threads
			////<<"\t"<<procInfo.ppid;
		//}		
	//}
//};

//class ProcessesArea {
	//static const int areaSize = 3;
	//int topIndex;
	//bool cmdMode;
	//vector<Process> *processes;
//public:
	//ProcessesArea(vector<Process> *processesPtr) {
		//cmdMode = false;
		//topIndex = 0;
		//processes = processesPtr;
	//}
	
	
	//void up() {
		//if (topIndex != 0)
			//topIndex--;
	//}
	//void down() {
		//if (topIndex != (int)(*processes).size() - areaSize)
			//topIndex++;
	//}
	//void changeOutputMode() {
		//if (cmdMode)
			//cmdMode = false;
		//else 
			//cmdMode	= true;
	//}
	//void show() {
		//for (int i = topIndex; i < topIndex + areaSize; i++) {
			//(*processes)[i].show(cmdMode);
		//}
	//}
//};

//class ProcessManager {
	//vector<Process> processes;
	//ProcessesArea *procArea;
	//int processCount,
		//threadsCount;
//public:
	//ProcessManager(){
		//procArea = new ProcessesArea(&processes);
	//}
	//void run() {
		//int updateCounter = 0;
		//update();
		//show();
		//while (true) {
			//usleep(5000);
			//if (kbhit()) {
				//switch (getchar()) {
				//case 10:					
					//cout << "\n10";
					////sleep(1);
					//break;
				//case 91:
					//procArea->up();
					//show();	
					//break;
				//case 39:
					//procArea->down();
					//show();	
					//break;	
				//case ']':
					//procArea->changeOutputMode();
					//show();	
					//break;				
				//case 'f':	//find
					//system("tput reset");
					//cout << "\nf...";
					
					//sleep(3);
					//break;		
				////case 'c':	//command
				
					////break;
				////case 'k':	//kill
				
					////break;
				////case 's':	//sleep
				
					////break;
				//case 'q':	
					//processes.clear();
					//system("tput reset");
					//return;
				//default:
					//continue;				
				//}				
			//}	
			//if (updateCounter++ == 800) {//4 sec
				//updateCounter = 0;
				//update();
				//show();					
			//}		
		//}		
	//}
	
	//void update() {
		////sleep(3);cout<<"\n";
		//processCount = threadsCount = 0;
		//processes.clear();		
		//struct dirent* dirEntity = NULL ;
		//DIR* procDir = NULL ;
		//procDir = opendir("/proc/") ;
		//while ((dirEntity = readdir(procDir)) != 0) {
			
			//if (dirEntity->d_type == DT_DIR && isNumber(dirEntity->d_name)) {
				//processCount++;
				
				////string s = dirEntity->d_name;
				////s += "00";
				////processes.push_back(Process(s.c_str()));
				
				
				////sleep(3);cout<<"\n";////
				//struct dirent* dirEntity2 = NULL ;
				//DIR* procDir2 = NULL ;
				//char path[32];// = "/proc/2/task";
				
				////sleep(3);cout<<"\n";////
				
				//sprintf(path, "/proc/%s/task", dirEntity->d_name);
				////sleep(3);cout<<"\n";////
				//procDir2 = opendir(path) ;
				//while ((dirEntity2 = readdir(procDir2)) != 0) {
					//if (dirEntity2->d_type == DT_DIR && isNumber(dirEntity2->d_name)) {
						
						////sleep(3);cout<<"\n";////
						//string s = "/proc/";// + dirEntity->d_name + "/task" + dirEntity2->d_name;
						//s += dirEntity->d_name;
						//s += "/task/";
						//s += dirEntity2->d_name;
						////processes.push_back(Process(dirEntity2->d_name));			
						//processes.push_back(Process(s.c_str()));			
					//}
				//}
				//closedir(procDir2) ;
				
////processes.push_back(Process(dirEntity->d_name));			
			//}
		//}
		//closedir(procDir) ;
		//threadsCount = processes.size();
		////sleep(3);cout<<"\n";
	//}
	//void show() {
		//system("tput reset");
		//cout << "------------------proc="<<processCount<<"    thr="<<threadsCount;
		//procArea->show();
	//}
//};




//int main() {
	//ProcessManager processManager;
	//processManager.run();
	//return 0;
//}



















#include <iostream>

#include <stdlib.h>
#include <stdio.h>
#include <vector>
//#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <dirent.h>

////
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
////
#include <errno.h>
//
#include <iomanip>

#include <sys/sysinfo.h>

#include <signal.h>


//#include <libgen.h>

//#include <sys/types.h> // for opendir(), readdir(), closedir()
//#include <sys/stat.h> // for stat()
//#include <unistd.h>
//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <fstream>


//#include <stdio.h>/////////
//#include <stdlib.h>
//#include <termcap.h>

////////

//#include <signal.h>
//#include <vector>
//#include <stdlib.h>

//#include <sstream>
//#include <pthread.h>
//#include <iostream>
//#include <sys/sem.h>

//#define clearrr() printf("\033[0;0f")///////////////


using namespace std;

int page_size = sysconf(_SC_PAGE_SIZE);///////////////(memory)


int kbhit(void) {
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return ch;
  } 
  return 0;
}

bool isNumber(const char* string) {
    for ( ; *string; string++)
        if (*string < '0' || *string > '9')
            return false;
    return true;
}


class ProcessInformation {
public:
	int pid;		//0
	int ppid;		//1
	string owner;	//2
	int priority;	//3
	char state;		//4
	int virtMemory;	//5
	int resMemory;	//6	
	int threads;	//7
	int cpu;		//8
	int clockTicks;	//9
	string time;	//10
	
	string cmd;		//
	
	//////////////////////////
	int uptime;
  int utime;
  int stime;
};

class Process {
	ProcessInformation procInfo;
	
public:
	Process(const char* pidString, int oldClockTicks) {
		
		procInfo.pid = atoi(pidString);
		procInfo.owner = owner(pidString);
		//procpath(pidString, &procInfo);
		procstat(pidString, &procInfo);
		
		procInfo.virtMemory = procInfo.virtMemory / 1024;
		procInfo.resMemory = procInfo.resMemory * sysconf(_SC_PAGE_SIZE) / 1024;
		
		
		
		procInfo.clockTicks = procInfo.utime + procInfo.stime;
		procInfo.cpu = procInfo.clockTicks - oldClockTicks;
		
		
		struct sysinfo s_info;
		sysinfo(&s_info);
		int time = s_info.uptime - (procInfo.uptime/sysconf(_SC_CLK_TCK));
		//int hours, minutes, seconds;
		//hours = time / 3600;
		//minutes = (time % 3600) / 60;
		//seconds = (time % 3600) % 60;
		//procInfo.time = hours;// +to_string(minutes) +to_string(seconds); 
		//procInfo.time += ':';
		//procInfo.time += minutes;
		//procInfo.time += ':';
		//procInfo.time += to_string(seconds);
		stringstream ss;
		ss << setfill('0') << setw(2) << time / 3600 << ':' << setfill('0') << setw(2)<< (time % 3600) / 60  << ':' << setfill('0') << setw(2)<< (time % 3600) % 60;
		procInfo.time = ss.str();
		
		
		
		
		//procmem(pidString, &procInfo);
		procInfo.cmd = cmdline(pidString);//
	}
	string owner(const char *pidString) {
		struct stat sstat;
		struct passwd usrpwd, *res;
		char buf[1024];		
		char path[20];
		string username;
		snprintf(path, sizeof(path), "/proc/%s", pidString);
		stat(path, &sstat);
		getpwuid_r(sstat.st_uid, &usrpwd, buf, sizeof(buf), &res);
		username = usrpwd.pw_name;
		return username;
	}
	
	
	
	/////////
	static ssize_t xread(int fd, void *buf, size_t count) {
  // Read some bytes. Retry on EINTR and when we don't get as many bytes as we requested.
  size_t alreadyRead = 0;
  for(;;) {
    ssize_t res = read(fd, buf, count);
     if (res == -1 && errno == EINTR) continue;
    if (res > 0) {
       buf = ((char*)buf)+res;
      count -= res;
      alreadyRead += res;
    }
     if (res == -1) return -1;
     if (count == 0 || res == 0) return alreadyRead;
  }
}
	//////////
	static std::string cmdline(const char* pid) {
  char path[32];
  snprintf(path, sizeof(path), "/proc/%s/cmdline", pid);

  int fd = open(path, O_RDONLY);

  if (fd == -1) {
    return "";
  }

  const int MAX_READ = 4096;
  char command[MAX_READ + 1];
  int amtRead = xread(fd, command, MAX_READ);

  close(fd);

  if (amtRead > 0) {
    for (int i = 0; i < amtRead; ++i) {
      if (command[i] == '\0' || command[i] == '\n') {
        command[i] = ' ';
      }
    }
  } else {
    // This is probably kernel thread.
    // @link https://github.com/hishamhm/htop/blob/47cf1532b0c9fbc70bada5022a7db07d3cc4811a/linux/LinuxProcessList.c#L692
    return "";
  }

  return std::string(command, amtRead - 1);
}
/////////////
 void procstat(const char *fpid, ProcessInformation *pstat) {
  char path[32];
  snprintf(path, sizeof(path), "/proc/%s/stat", fpid);

  FILE* fd = fopen(path, "r");

  if (fd == NULL) {
	  cout<<"\n\nstat error!!!!!!!!!!\n\n";
    return;//throw std::runtime_error("can't open stat");
  }

  //fscanf(fd, "%d", &pstat->pid);  // (1)
  fscanf(fd, " %*d");  // (1)
  fscanf(fd, " %*s");
  fscanf(fd, " %c", &pstat->state);
  fscanf(fd, " %d", &pstat->ppid);  // (4)
  fscanf(fd, " %*d");
  fscanf(fd, " %*d");
  fscanf(fd, " %*d");
  fscanf(fd, " %*d");
  fscanf(fd, " %*u");
  fscanf(fd, " %*u");
  fscanf(fd, " %*u");
  fscanf(fd, " %*u");
  fscanf(fd, " %*u");
  fscanf(fd, " %lu", &pstat->utime);  // (14)
  //fscanf(fd, " %*lu");  // (14)
  fscanf(fd, " %lu", &pstat->stime);  // (15)
  //fscanf(fd, " %*lu");  // (15)
  fscanf(fd, " %*d");
  fscanf(fd, " %*d");
  fscanf(fd, " %d", &pstat->priority);  // (18)
  fscanf(fd, " %*d");
  fscanf(fd, " %d", &pstat->threads);  // (20)
  fscanf(fd, " %*d");
  fscanf(fd, " %lu", &pstat->uptime);  // (22)
  //fscanf(fd, " %*lu");  // (22)
  fscanf(fd, " %lu", &pstat->virtMemory);  // (23)
  fscanf(fd, " %lu", &pstat->resMemory);  // (23)

  fclose(fd);
  ////////////////////cpu
  
  //struct sysinfo s_info;
    //sysinfo(&s_info);
    
  //float prtime = pstat->utime + pstat->stime;
  
  //pstat->cpu =  prtime / ((float)(s_info.uptime * sysconf(_SC_CLK_TCK) - pstat->uptime));
  //pstat->cpu =  100 * ((float)(pstat->utime + pstat->stime)) / ((float)(s_info.uptime * sysconf(_SC_CLK_TCK) - pstat->uptime));

}

////////////
//static void procmem(const char *pid, ProcessInformation *proc) {
  //char path[32];
  //snprintf(path, sizeof(path), "/proc/%s/statm", pid);

  //FILE* fd = fopen(path, "r");

  //if (fd == NULL) {
    //throw std::runtime_error("can't open `/proc/$pid/statm`");
  //}

  //fscanf(fd, "%lu %lu", &proc->vmem, &proc->pmem);

  ////proc->vmem *= page_size;
  ////proc->pmem *= page_size;

  //fclose(fd);
//}
////////////
	int getPid() {
		return procInfo.pid;
	}
	int getPpid() {
		return procInfo.ppid;
	}
	string getOwner() {
		return procInfo.owner;
	}
	int getPriority() {
		return procInfo.priority;
	}
	char getState() {
		return procInfo.state;
	}
	int getVirtMemory() {
		return procInfo.virtMemory;
	}
	int getResMemory() {
		return procInfo.resMemory;
	}
	int getThreads() {
		return procInfo.threads;
	}
	int getCpu() {
		return procInfo.cpu;
	}
	int getClockTicks() {
		return procInfo.clockTicks;
	}
	string getTime() {
		return procInfo.time;
	}
	string getCommand() {
		return procInfo.cmd;
	}
	
	void show(bool cmdMode) {
		
		if(cmdMode) {
			cout << "\n" << setw(5) << procInfo.pid << " " << procInfo.cmd.substr(0, 74);
		} else {
			 //struct sysinfo s_info;
    //sysinfo(&s_info);
			
			
			
			cout << "\n" 
			<< setw(5) << procInfo.pid << " "
			<< setw(6) <<procInfo.ppid << " "
			<< setw(11) << procInfo.owner << " "
			
			<< setw(5) <<procInfo.priority << " "
						
			<< setw(4) <<procInfo.state << " "	
			
			<< setw(8) <<procInfo.virtMemory << " "
			<< setw(7) <<procInfo.resMemory << " "
			<< setw(4) <<procInfo.threads << " "
			<< setw(4) <<procInfo.cpu << " "	
			<< setw(7) <<procInfo.clockTicks << " "	
			<< setw(9) <<procInfo.time;
			
		}		
	}
};

class ProcessesArea {
	static const int areaSize = 17;
	int topIndex;
	bool cmdMode;
	vector<Process> *processes;
public:
	ProcessesArea(vector<Process> *processesPtr) {
		cmdMode = false;
		topIndex = 0;
		processes = processesPtr;
	}
	
	
	void up() {
		if (topIndex != 0)
			topIndex--;
	}
	void down() {
		if (topIndex != (int)(*processes).size() - areaSize)
			topIndex++;
	}
	void changeOutputMode() {
		if (cmdMode)
			cmdMode = false;
		else 
			cmdMode	= true;
	}
	void show() {
		if (!cmdMode)
			cout << "\n" 
				<< setw(5) << "PID" << " "
				<< setw(6) << "PPID" << " "
				<< setw(11) << "USER" << " "
				
				<< setw(5) << "PRI" << " "
							
				<< setw(4) << "STA" << " "	
				
				<< setw(8) << "VIRTM" << " "
				<< setw(7) << "RESM" << " "
				<< setw(4) << "THR" << " "
				<< setw(4) << "CPU%" << " "	
				<< setw(7) << "TICKS" << " "	
				<< setw(9) << "TIME";
		else
			cout << "\n" 
				<< setw(5) << "PID" << " "
				<< setw(7) << "COMMAND";
		while ((*processes).size() < topIndex + areaSize)
			topIndex--;
		for (int i = topIndex; i < topIndex + areaSize; i++) {
			(*processes)[i].show(cmdMode);
		}
	}
};

class ProcessManager {
	vector<Process> processes;
	map<int, int> *processesTime;
	ProcessesArea *procArea;
	int processParameterIndex,
		processesCount,
		threadsCount;
	bool pause;
public:
	ProcessManager(){
		processesTime = new map<int, int>();
		procArea = new ProcessesArea(&processes);
		processParameterIndex = 0;
		pause = false;
	}
	void run() {
		int updateCounter = 0;
		update();
		show();
		while (true) {
			usleep(10000);
			if (kbhit()) {
				switch (getchar()) {
				
				case 'p':		
					if (pause)
						pause = false;
					else
						pause = true;
					break;
				case ']':
					procArea->up();
					show();	
					break;
				case '[':
					procArea->down();
					show();	
					break;	
				case '\'':
					procArea->changeOutputMode();
					show();	
					break;	
				case 'q':	
					exit();					
					return;
					
				case 't':		
					showThreads();
					break;
				case 'c':		
					showCommand();
					break;
				case 's':		
					setSort();
					break;
				case 'k':		
					sendSignal();
					break;							
				case 'f':	
					search();
					break;		
				
				default:
					continue;				
				}				
			}	
			if (updateCounter++ == 100) {
				updateCounter = 0;
				update();
				show();					
			}		
		}		
	}
	void exit() {
		processes.clear();
		delete processesTime;
		delete procArea;
		system("tput reset");
	}
	void sendSignal() {
		system("tput reset");
		cout << "Send signal\n\nEnter PID: ";
		int pid;
		cin >> pid;
		cout << "\nSignals: ";
		cout << "\n1. SIGKILL";
		cout << "\n2. SIGSTOP";
		cout << "\n3. SIGCONT";
		cout << "\n\nChoice: ";
		int choice, sig;
		cin >> choice;
		switch (choice) {
		case 1:
			sig = SIGKILL;
			break;
		case 2:
			sig = SIGSTOP;
			break;
		case 3:
			sig = SIGCONT;
			break;
		}
		if (kill(pid, sig) == -1) {
			cout << "\nError. Wrong pid\n";
			getchar();
			getchar();
		}	
	}
	void update() {
		if (pause)
			return;
		map<int, int> *processesTimeBuf = new map<int, int>();
		processes.clear();		
		struct dirent* dirEntity = NULL ;
		DIR* procDir = NULL ;
		procDir = opendir("/proc/") ;
		while ((dirEntity = readdir(procDir)) != 0) {
			if (dirEntity->d_type == DT_DIR && isNumber(dirEntity->d_name)) {
				map<int,int>::iterator time = processesTime->find(atoi(dirEntity->d_name));
				if (time != processesTime->end())
					processes.push_back(Process(dirEntity->d_name, time->second));			
				else
					processes.push_back(Process(dirEntity->d_name, 0));	
				processesTimeBuf->insert(pair<int,int>(atoi(dirEntity->d_name),processes.back().getClockTicks()));		
			}
		}
		closedir(procDir);
		processesTime->clear();
		processesTime = processesTimeBuf;		
		
		setProcAndThrCount();
		
		if (processParameterIndex)
			sort();
	}
	void setProcAndThrCount() {
		processesCount = processes.size();
		threadsCount = 0;
		for (vector<Process>::iterator i = processes.begin(); i != processes.end(); i++) {
			threadsCount += i->getThreads();
		}
	}
	void showCommand() {
		system("tput reset");
		cout << "Show full command\n\nEnter PID: ";
		int pid;
		cin >> pid;
		for (vector<Process>::iterator i = processes.begin(); i != processes.end(); i++) {
			if (i->getPid() == pid) {
				cout << "\nCOMMAND:\n" << i->getCommand() << "\n";
				getchar();
				getchar();
				return;
			}
		}
		cout << "\nPid error\n";
		getchar();
		getchar();
		return;
	}
	
	void showThreads() {
		system("tput reset");
		cout << "Show threads\n\nEnter PID: ";
		int pid;
		cin >> pid;
		cout << "\nThreads: ";
		//string s = dirEntity->d_name;
				//s += "00";
				//processes.push_back(Process(s.c_str()));
				
				
				//sleep(3);cout<<"\n";////
				struct dirent* dirEntity = NULL ;
				DIR* taskDir = NULL ;
				char path[32];// = "/proc/2/task";
				
				//sleep(3);cout<<"\n";////
				
				sprintf(path, "/proc/%d/task", pid);
				//sleep(3);cout<<"\n";////
				taskDir = opendir(path) ;
				if (!taskDir) {
					cout << "\nOpen error\n";
					getchar();
					getchar();
					return;
				}
				while ((dirEntity = readdir(taskDir)) != 0) {
					if (dirEntity->d_type == DT_DIR && isNumber(dirEntity->d_name)) {
						
						cout << "\n" << dirEntity->d_name;
					}
				}
				closedir(taskDir) ;
				
				cout << "\n";
				
				getchar();
				getchar();
	}
	void setSort() {
		system("tput reset");
		cout << "Sort\n\nParameters: ";
		cout << "\n1.  PID";
		cout << "\n2.  PPID";
		cout << "\n3.  USER";
		cout << "\n4.  PRI";
		cout << "\n5.  STA";
		cout << "\n6.  VIRTM";
		cout << "\n7.  RESM";
		cout << "\n8.  THR";
		cout << "\n9.  CPU%";
		cout << "\n10. TICKS";
		cout << "\n11. TIME";
		cout << "\n\nChoice: ";
		cin >> processParameterIndex;
		processParameterIndex--;
		if (processParameterIndex < 0 || processParameterIndex > 10) {
			cout << "\nError. Wrong parameter\n";
			getchar();
			getchar();
			return;
		}
	}
	void search() {
		system("tput reset");
		cout << "Search\n\nParameter: ";
		cout << "\n1.  PID";
		cout << "\n2.  COMMAND";
		cout << "\n\nChoice: ";
		int parameter;
		cin >> parameter;
		if (parameter == 1) {
			cout << "\nEnter PID: ";
			int pid;
			cin >> pid;
			for (vector<Process>::iterator i = processes.begin(); i != processes.end(); i++) {
				if (i->getPid() == pid) {
					
					
					
					cout << "\n" 
						<< setw(5) << "PID" << " "
						<< setw(6) << "PPID" << " "
						<< setw(11) << "USER" << " "
						
						<< setw(5) << "PRI" << " "
									
						<< setw(4) << "STA" << " "	
						
						<< setw(8) << "VIRTM" << " "
						<< setw(7) << "RESM" << " "
						<< setw(4) << "THR" << " "
						<< setw(4) << "CPU%" << " "	
						<< setw(7) << "TICKS" << " "	
						<< setw(9) << "TIME";
					i->show(false);
					cout << "\n\nCOMMAND\n" << i->getCommand() << "\n";
					getchar();
					getchar();
					return;
				}
			}
			cout << "\nError. Wrong pid\n";
			getchar();
			getchar();
			return;
		} else {
			cout << "\nEnter string: ";
			string str;
			cin >> str;
			bool isFound = false;
			cout << "\n" 
				<< setw(5) << "PID" << " "
				<< setw(7) << "COMMAND";
			for (vector<Process>::iterator i = processes.begin(); i != processes.end(); i++) {
				if (i->getCommand().find(str) != string::npos) {
					i->show(true);
					isFound = true;
				}
			}
			if (!isFound) {
				cout << "\n\nNot found\n";
			}
			getchar();
			getchar();
			return;
		}
		
		
		if (processParameterIndex < 0 || processParameterIndex > 10) {
			cout << "\nError. Wrong parameter\n";
			getchar();
			getchar();
			return;
		}
	}
	bool compareProcesses(Process& process1, Process& process2) {
		switch (processParameterIndex) {
		case 0:
			return process2.getPid() < process1.getPid();
		case 1:
			return process2.getPpid() < process1.getPpid();
		case 2:
			return process2.getOwner().compare(process1.getOwner()) < 0;
		case 3:
			return process2.getPriority() < process1.getPriority();
		case 4:
			if (process2.getState() == 'R')
				return true;
			else
				if (process1.getState() == 'R')
					return false;
				else
					return process2.getState() < process1.getState();		
		case 5:
			return process2.getVirtMemory() > process1.getVirtMemory();
		case 6:
			return process2.getResMemory() > process1.getResMemory();
		case 7:
			return process2.getThreads() > process1.getThreads();
		case 8:
			return process2.getCpu() > process1.getCpu();
		case 9:
			return process2.getClockTicks() > process1.getClockTicks();
		case 10:
			return process2.getTime().compare(process1.getTime()) > 0;
		}
	}
	void sort() {
		for (int i = 0; i < processes.size() - 1; i++) {
			for (int j = i + 1; j < processes.size(); j++) {
				if (compareProcesses(processes[i], processes[j]))
					//iter_swap(processes.begin() + i, processes.begin() + j);
					swap(processes[i], processes[j]);
			}
		}
	}
	
	void show() {
		system("tput reset");
		

		cout << "Process manager                                     ";
		cout << "Processes: " << processesCount << "  Threads: " << threadsCount;
		cout << "\n________________________________________________________________________________"; 
		
		
		
		
		procArea->show();
		//cout << "\n";
		//for (int i = 0; i < 80; i++)
		//cout << (char)'-';
		cout << "\n________________________________________________________________________________"; 
		cout << "\n       p - Pause   | ] - Up      | [ - Down | ' - OutputMode | q - Exit" ;
		cout << "\n       t - Threads | c - Command | s - Sort | k - Kill       | f - Search";
		cout << "\nCommand: ";
	}
};




int main() {
	ProcessManager processManager;
	processManager.run();
	return 0;
}

















//#include <stdlib.h>

//#include <unistd.h>
//#include <dirent.h>
//#include <sys/types.h> // for opendir(), readdir(), closedir()
//#include <sys/stat.h> // for stat()

//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <fstream>


//#include <stdio.h>/////////
//#include <stdlib.h>
//#include <termcap.h>

//#include <unistd.h>////////
//#include <stdio.h>
//#include <signal.h>
//#include <vector>
//#include <stdlib.h>
//#include <termios.h>
//#include <fcntl.h>
//#include <sstream>
//#include <pthread.h>
//#include <iostream>
//#include <sys/sem.h>

////#define clear() printf("\033[H\033[J")///////////////
//#define clear() printf("\u001b[40A")///////////////
////#define clear() printf("\033[0;0f")///////////////
//#define PROC_DIRECTORY "/proc/"


//using namespace std;

//int kbhit(void) {
  //struct termios oldt, newt;
  //int ch;
  //int oldf;
 
  //tcgetattr(STDIN_FILENO, &oldt);
  //newt = oldt;
  //newt.c_lflag &= ~(ICANON | ECHO);
  //tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  //oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  //fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  //ch = getchar();
 
  //tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  //fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  //if(ch != EOF)
  //{
    //ungetc(ch, stdin);
    //return ch;
  //} 
  //return 0;
//}

//int IsNumeric(const char* ccharptr_CharacterList)
//{
    //for ( ; *ccharptr_CharacterList; ccharptr_CharacterList++)
        //if (*ccharptr_CharacterList < '0' || *ccharptr_CharacterList > '9')
            //return 0; // false
    //return 1; // true
//}



//int main()
//{
	////system("screen");
	//int i = 0;
	//while(1){
		
		
		//std::cout << i++ <<"----     ----\n\n";
		//for(int j = 0; j < 50; j++)
			//std::cout << j <<"\n";
			////char a;
    //if(kbhit()){
		//cout<<"\n\nchar:      "<<getchar()<<"\n";
	//}	
	
	//sleep(3);
		////std::system("tput reset");//clear_screen();//clear();//system("clear");
		////system("clear && printf '\e[3J'");
		////system("printf '\e[3J'");
		////system("tput cup 0 0");
		////printf("\030[H\030[J");
		////printf("\e[3J");
		//clear();
		////clear();
		////clear();
	
	
	
	
		
    ////struct dirent* dirEntity = NULL ;
    ////DIR* dir_proc = NULL ;

    ////dir_proc = opendir(PROC_DIRECTORY) ;
    ////if (dir_proc == NULL)
    ////{
        ////perror("Couldn't open the " PROC_DIRECTORY " directory") ;
        ////return (pid_t) -2 ;
    ////}

    ////while ((dirEntity = readdir(dir_proc)) != 0) {
        ////if (dirEntity->d_type == DT_DIR) {
            ////if (IsNumeric(dirEntity->d_name)) {
                ////std::string path = std::string(PROC_DIRECTORY) + dirEntity->d_name + "/cmdline";

                ////std::ifstream cmdLineFile(path.c_str());
                ////std::string cmdLine;
                ////if (cmdLineFile) {

                    ////std::getline(cmdLineFile, cmdLine);

                ////}
                ////std:: cout << "pid: " << dirEntity->d_name << " " << cmdLine << std::endl;
            ////}
        ////}
    ////}
    ////closedir(dir_proc) ;
    
//}
//return 0;
//}

























//#include <stdio.h>
//#include <signal.h>
//#include <unistd.h>
//#include <stdlib.h>

//#include <sys/sysinfo.h>
//#include <sys/stat.h>

//using namespace std;

//struct statstruct_proc {
  //int           pid;                     
  //char          exName [_POSIX_PATH_MAX]; 
  //char          state;
  //unsigned      euid,                  
                //egid;                     
  //int           ppid;                  
  //int           pgrp;              
  //int           session;                
  //int           tty;                      
  //int           tpgid;                   
  //unsigned int	flags;                   
  //unsigned int	minflt;                  
  //unsigned int	cminflt;                  
  //unsigned int	majflt;                   
  //unsigned int  cmajflt;                  
  //int           utime;                   
  //int           stime;                    
  //int			cutime;                 
  //int           cstime;                  
  //int           counter;                 
  //int           priority;                 
  //unsigned int  timeout;                  
  //int			signal;                
  //int           blocked; 
  //int           sigignore;              
  //int           sigcatch;           
  //unsigned long guest_time;
  //unsigned int 	cguest_time;

//} procinfo;

//void addProcess() {
	
//}

//int main() {   
	
    //DIR *dp;
    //dirent *dptr;
    //dp= opendir("/proc/");

    //if(dp != nullptr)
    //while((dptr= readdir(dp)) != nullptr)
    //{
        //string sys_[]= {".", "..", "fs", "bus", "irq", "sys", "tty", "acpi", "scsi", "asound", "driver", "sysvipc"};
        //bool ok= true;
        //for(auto s: sys_)
            //if(dptr->d_name == s)
            //{
                //ok= false;
                //break;
            //}
        //if((int)dptr->d_type == 4 &&  ok)
        //{
			//addProcess(dptr->d_name);
        //}
    //}
    //closedir(dp);
    //return 0;
//}
