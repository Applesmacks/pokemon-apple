#define IV_SPREAD_MAX TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)

static const struct TrainerMon sParty_StevenPartner[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_RUSTED_SWORD,
    .lvl = 79,
    .species = SPECIES_ZACIAN,
    .ability = ABILITY_INTREPID_SWORD,
    .moves = {MOVE_BEHEMOTH_BLADE, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 79,
    .species = SPECIES_MELMETAL,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_SUBSTITUTE, MOVE_DOUBLE_IRON_BASH, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ADAMANT_ORB,
    .lvl = 80,
    .species = SPECIES_DIALGA,
    .ability = ABILITY_PRESSURE,
    .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_ROAR_OF_TIME},
    .nature = NATURE_MODEST,
    },
};
