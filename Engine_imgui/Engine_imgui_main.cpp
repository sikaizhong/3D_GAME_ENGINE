#include<IApplication.h>
#include<stdio.h>
using namespace BYTETROOP;
namespace BYTETROOP {
	extern IApplication* g_pApp; // This is a declaration.
}
int main(int argc, char** argv) {
	int ret;
	if ((ret = g_pApp->Initialize() != 0)) {
		printf("App Initialize failed, will exit now.");
		return ret;
	}
	while (!g_pApp->IsQuit()) {
		g_pApp->Tick();
	}

	g_pApp->Finalize();

	return 0;
}