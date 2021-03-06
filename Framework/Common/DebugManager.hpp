#pragma once
#ifdef DEBUG
#include "IRuntimeModule.hpp"

namespace My {
    class DebugManager : implements IRuntimeModule
    {
    public:
        int Initialize() override;
        void Finalize() override;
        void Tick() override;

        void ToggleDebugInfo();

        void DrawDebugInfo() override;

    protected:
        static void DrawAxis();
        static void DrawGrid();

        bool m_bDrawDebugInfo = false;
    };

    extern DebugManager* g_pDebugManager;
}

#endif