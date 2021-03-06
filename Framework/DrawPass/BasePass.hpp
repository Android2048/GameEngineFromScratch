#pragma once
#include "GraphicsManager.hpp"
#include "IDrawPass.hpp"
#include "IDrawPhase.hpp"
#include <vector>

namespace My {
    class BasePass : implements IDrawPass
    {
    public:
        ~BasePass() override = default;

        void Draw(Frame& frame) override;

    protected:
        BasePass() = default;

    protected:
        std::vector<std::shared_ptr<IDrawPhase>> m_DrawPhases;
    };
}
