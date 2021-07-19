#include<baseApplication.h>
namespace BYTETROOP {
	int BaseApplication::Initialize() {
		m_bQuit = false;
		return 0;
	}
	// Finalize all sub modules and clean up all runtime temporary files.
	void BaseApplication::Finalize()
	{
	}
	void BaseApplication::Tick()
	{
	}

	bool BaseApplication::IsQuit()
	{
		return m_bQuit;
	}
}