#pragma once

#include "util/logger.hpp"
#include "Qounter.hpp"
#include "QounterRegistry.hpp"

#include "custom-types/shared/macros.hpp"
#include "questui/shared/BeatSaberUI.hpp"

#include "GlobalNamespace/ColorType.hpp"

DECLARE_CLASS_CUSTOM(QountersMinus::Qounters, MissedQounter, QountersMinus::Qounter,
    static bool Enabled;
    static int Position;
    static float Distance;
    static bool CountBadCuts;

    DECLARE_INSTANCE_FIELD_DEFAULT(int, misses, 0);

    DECLARE_STATIC_METHOD(void, Register);
    DECLARE_INSTANCE_METHOD(void, Start);
    DECLARE_INSTANCE_METHOD(void, OnNoteCut, GlobalNamespace::NoteData* data, GlobalNamespace::NoteCutInfo* info);
    DECLARE_INSTANCE_METHOD(void, OnNoteMiss, GlobalNamespace::NoteData* data);
    DECLARE_INSTANCE_METHOD(void, UpdateValue);
)
