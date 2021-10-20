#pragma once

#include "util/logger.hpp"
#include "util/pp.hpp"
#include "config.hpp"
#include "QounterRegistry.hpp"
#include "Qounter.hpp"

#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"

#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "GlobalNamespace/ScoreController.hpp"
// #include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder.hpp"
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder_CutScoreHandler.hpp"
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
#include "GlobalNamespace/QuestAppInit.hpp"
#include "GlobalNamespace/NoteWasCutDelegate.hpp"
#include "System/Action_3.hpp"
#include "System/Action_2.hpp"

typedef System::Action_2<GlobalNamespace::NoteData*, int>* NoteMissDelegate;
typedef System::Action_2<int, int>* ScoreChangeDelegate;

namespace QountersMinus {
    void InstallHooks();
}
