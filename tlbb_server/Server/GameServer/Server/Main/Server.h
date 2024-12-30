
#ifndef __SERVER_H__
#define __SERVER_H__

#include "Type.h"




// Game Entry Module
// All submodules are initialized and executed through this module

class Server
{
public :
	Server( ) ;
	~Server( ) ;

	// Initialize configuration
	//___________________________________
	BOOL	InitConfig();

	// Initialization
	BOOL	InitServer( ) ;
	// The main loop, this main loop will eventually be handed over to the ClientManager module to execute its resources.
	BOOL	Loop( ) ;
	// Exit
	BOOL	ExitServer( ) ;

	// Allocate Data
	// Allocate memory for each module.
	BOOL	NewStaticServer( ) ;
	// Initialize each module.
	BOOL	InitStaticServer( ) ;

	// Stop module execution. After calling this interface, all modules with threads will be set to an inactive state.  
	// Once each thread completes its next iteration of the loop operation, it will exit.  
	VOID	Stop( ) ;

	// This function will only return after all other threads have exited.  
	// It is a blocking function, and if any threads have not exited, this function will remain suspended.  
	VOID	WaitForAllThreadQuit( ) ;


public :
	CMyTimer	m_TimeToQuit ;


};

extern Server g_Server ;

class ServerExceptionHandler
{
public:
	ServerExceptionHandler();
	//VOID INTHandler(INT);
	//VOID TERMHandler(INT);
	//VOID ABORTHandler(INT);
	//VOID ILLHandler(INT);
	//VOID FPEHandler(INT);
	//VOID SEGHandler(INT);
	//VOID XFSZHandler(INT);
};

extern ServerExceptionHandler g_ServerExceptionHandler;



#endif
