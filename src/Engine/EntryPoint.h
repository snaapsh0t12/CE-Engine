#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	ENGINE_CORE_INFO("Initialized Logs");
	ENGINE_INFO("Starting Game");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif // ENGINE_PLATFORM_WINDOWS
