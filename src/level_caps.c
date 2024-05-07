#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "level_caps.h"
#include "pokemon.h"


u32 GetCurrentLevelCap(void)
{
    static const u32 sLevelCapFlagMap[][2] =
    {
        {FLAG_WOODS_GRUNT_BEAT, 13},
        {FLAG_BADGE01_GET, 21},
        {FLAG_DEFEATED_RIVAL_RUSTBORO, 25},
        {FLAG_BADGE02_GET, 26},
        {FLAG_RIVAL_ROUTE110_BEAT, 31},
        {FLAG_BADGE03_GET, 36},
        {FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, 41},
        {FLAG_BADGE04_GET, 46},
        {FLAG_BADGE05_GET, 51},
        {FLAG_ROUTE119_RIVAL_BEAT, 56},
        {FLAG_BADGE06_GET, 61},
        {FLAG_RECEIVED_RED_OR_BLUE_ORB, 66},
        {FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, 71},
        {FLAG_BADGE07_GET, 76},
        {FLAG_DEFEATED_MAGMA_SPACE_CENTER, 81},
        {FLAG_BEAT_ARCHIE_SEAFLOOR, 86},
        {FLAG_BADGE08_GET, 91},
        {FLAG_DEFEATED_WALLY_VICTORY_ROAD, 96},
        {FLAG_IS_CHAMPION, 100},
    };

    u32 i;

    if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
    {
        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                return sLevelCapFlagMap[i][1];
        }
    }
    else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE)
    {
        return VarGet(B_LEVEL_CAP_VARIABLE);
    }

    return MAX_LEVEL;
}

u32 GetSoftLevelCapExpValue(u32 level, u32 expValue)
{
    static const u32 sExpScalingDown[5] = { 4, 8, 16, 32, 64 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetCurrentLevelCap();

    if (B_EXP_CAP_TYPE == EXP_CAP_NONE)
        return expValue;

    if (level < currentLevelCap)
    {
        if (B_LEVEL_CAP_EXP_UP)
        {
            levelDifference = currentLevelCap - level;
            if (levelDifference > ARRAY_COUNT(sExpScalingUp))
                return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingUp) - 1]);
            else
                return expValue + (expValue / sExpScalingUp[levelDifference]);
        }
        else
        {
            return expValue;
        }
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_HARD)
    {
        return 0;
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
    {
       return expValue;
    }
}
