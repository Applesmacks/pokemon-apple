#define IV_SPREAD_MAX TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
#define IV_SPREAD_MAX_NO_SPEED TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0)
#define IV_SPREAD_HIGH TRAINER_PARTY_IVS(23, 23, 23, 23, 23, 23)
#define IV_SPREAD_MEDIUM TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16)
#define IV_SPREAD_LOW TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10)

static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 67,
    .species = SPECIES_QUAGSIRE,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_RECOVER, MOVE_ICE_PUNCH},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 67,
    .species = SPECIES_SIMIPOUR,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_ACROBATICS, MOVE_BRICK_BREAK, MOVE_WATERFALL, MOVE_SHADOW_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 68,
    .species = SPECIES_DREDNAW,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_CRUNCH, MOVE_JAW_LOCK, MOVE_LIQUIDATION, MOVE_HEAD_SMASH},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 67,
    .species = SPECIES_OMASTAR,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_SPIKES, MOVE_STEALTH_ROCK},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_ALOMOMOLA,
    .ability = ABILITY_FRIEND_GUARD,
    .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_WISH, MOVE_PROTECT},
    .nature = NATURE_BRAVE,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 68,
    .species = SPECIES_CORSOLA,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_STEALTH_ROCK, MOVE_SCALD, MOVE_POWER_GEM, MOVE_EARTH_POWER},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 67,
    .species = SPECIES_CLAWITZER,
    .ability = ABILITY_MEGA_LAUNCHER,
    .moves = {MOVE_DRAGON_PULSE, MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 68,
    .species = SPECIES_MANTINE,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_ROOST},
    .nature = NATURE_HASTY,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 67,
    .species = SPECIES_LAPRAS,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_ICE_BEAM, MOVE_PERISH_SONG, MOVE_HYDRO_PUMP, MOVE_REST},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_DONDOZO,
    .ability = ABILITY_WATER_VEIL,
    .moves = {MOVE_WAVE_CRASH, MOVE_DOUBLE_EDGE, MOVE_HEAVY_SLAM, MOVE_REST},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_WAILORD,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_HEAVY_SLAM, MOVE_WHIRLPOOL, MOVE_WATER_SPOUT, MOVE_REST},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 83,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_WOOD_HAMMER, MOVE_EXPLOSION, MOVE_KNOCK_OFF, MOVE_LOW_KICK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 83,
    .species = SPECIES_HONCHKROW,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_BRAVE_BIRD, MOVE_NIGHT_SLASH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 83,
    .species = SPECIES_GOREBYSS,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHELL_SMASH},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 83,
    .species = SPECIES_SWAMPERT,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_AVALANCHE, MOVE_STEALTH_ROCK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WACAN_BERRY,
    .lvl = 83,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_DRAGON_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 83,
    .species = SPECIES_MUK_ALOLAN,
    .ability = ABILITY_POISON_TOUCH,
    .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_EXPLOSION, MOVE_FOCUS_PUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 83 ,
    .species = SPECIES_CLOYSTER,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_HYDRO_PUMP, MOVE_EXPLOSION, MOVE_TOXIC_SPIKES, MOVE_SHELL_SMASH},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 83 ,
    .species = SPECIES_MALAMAR,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_FACADE},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 83 ,
    .species = SPECIES_BRUXISH,
    .ability = ABILITY_DAZZLING,
    .moves = {MOVE_AQUA_TAIL, MOVE_PSYCHIC_FANGS, MOVE_AQUA_JET, MOVE_CRUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 62,
    .species = SPECIES_EXEGGUTOR,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_GLACEON,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_MIRROR_COAT, MOVE_BARRIER},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 11,
    .species = SPECIES_SCRAGGY,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_LOW_KICK, MOVE_PAYBACK, MOVE_HEADBUTT, MOVE_FAKE_OUT},
    .nature = NATURE_LONELY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SALAC_BERRY,
    .lvl = 11 ,
    .species = SPECIES_CROAGUNK,
    .ability = ABILITY_POISON_TOUCH,
    .moves = {MOVE_BELCH, MOVE_ROCK_SMASH, MOVE_POISON_STING, MOVE_FAKE_OUT},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 12,
    .species = SPECIES_MIENFOO,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_ROCK_TOMB, MOVE_REVERSAL, MOVE_FAKE_OUT, MOVE_DETECT},
    .nature = NATURE_JOLLY,
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_JELLICENT,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_SCALD, MOVE_HEX, MOVE_TOXIC, MOVE_STRENGTH_SAP},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_POISON_GEM,
    .lvl = 62,
    .species = SPECIES_SCRAFTY,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_DRAGON_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_NORMAL_GEM,
    .lvl = 63,
    .species = SPECIES_STOUTLAND,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_RETURN, MOVE_RETALIATE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .lvl = 67,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 67,
    .species = SPECIES_SWANNA,
    },
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .lvl = 67,
    .species = SPECIES_PERSIAN,
    },
    {
    .lvl = 67,
    .species = SPECIES_PERSIAN_ALOLAN,
    },
    {
    .lvl = 67,
    .species = SPECIES_PERRSERKER,
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 83,
    .species = SPECIES_SCOLIPEDE,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_MEGAHORN, MOVE_AQUA_TAIL, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 83,
    .species = SPECIES_DREDNAW,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_JAW_LOCK, MOVE_STEALTH_ROCK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 83,
    .species = SPECIES_DHELMISE,
    .ability = ABILITY_STEELWORKER,
    .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_ANCHOR_SHOT, MOVE_SYNTHESIS},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 72,
    .species = SPECIES_CRAMORANT,
    },
    {
    .lvl = 72,
    .species = SPECIES_DREDNAW,
    },
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 23,
    .species = SPECIES_CARVANHA,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_BITE, MOVE_WATER_PULSE, MOVE_AQUA_JET, MOVE_POISON_FANG},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 23,
    .species = SPECIES_FRILLISH,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_HEX, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_RECOVER},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 23 ,
    .species = SPECIES_SPHEAL,
    .ability = ABILITY_ICE_BODY,
    .moves = {MOVE_AURORA_BEAM, MOVE_WHIRLPOOL, MOVE_SNOWSCAPE, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_BAND,
    .lvl = 53,
    .species = SPECIES_DRAMPA,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_SURF, MOVE_ROOST},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 53,
    .species = SPECIES_FERROTHORN,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_POWER_WHIP, MOVE_IRON_HEAD, MOVE_EXPLOSION, MOVE_BULLDOZE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 54,
    .species = SPECIES_EXEGGUTOR,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_EXPLOSION, MOVE_LOW_KICK},
    .nature = NATURE_BRAVE,
    },
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 53,
    .species = SPECIES_NIDOKING,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LOADED_DICE,
    .lvl = 54,
    .species = SPECIES_TORTERRA,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_SHELL_SMASH, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_HEADLONG_RUSH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOPLE_BERRY,
    .lvl = 53,
    .species = SPECIES_PORYGON_Z,
    .ability = ABILITY_DOWNLOAD,
    .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_PSYCHIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 53,
    .species = SPECIES_SLOWBRO_GALARIAN,
    .ability = ABILITY_QUICK_DRAW,
    .moves = {MOVE_SHELL_SIDE_ARM, MOVE_FLAMETHROWER, MOVE_SCALD, MOVE_SLACK_OFF},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 54,
    .species = SPECIES_HAXORUS,
    .ability = ABILITY_UNNERVE,
    .moves = {MOVE_DUAL_CHOP, MOVE_AQUA_TAIL, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 54,
    .species = SPECIES_WEAVILE,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_TRIPLE_AXEL, MOVE_PSYCHO_CUT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 27,
    .species = SPECIES_SHUPPET,
    .ability = ABILITY_POISON_PUPPETEER,
    .moves = {MOVE_HEX, MOVE_POISON_JAB, MOVE_CURSE, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 27,
    .species = SPECIES_EELEKTRIK,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_MEGA_DRAIN, MOVE_SUPER_FANG, MOVE_TOXIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 28,
    .species = SPECIES_SEVIPER,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_POISON_FANG, MOVE_VENOSHOCK, MOVE_CRUNCH, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 27,
    .species = SPECIES_MURKROW,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_TOXIC, MOVE_TAILWIND, MOVE_ACROBATICS, MOVE_PAYBACK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 27,
    .species = SPECIES_FRILLISH,
    .gender = FEMALE,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_HEX, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_RECOVER},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 28,
    .species = SPECIES_WHIRLIPEDE,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_VENOSHOCK, MOVE_POISON_TAIL, MOVE_PIN_MISSILE, MOVE_ROLLOUT},
    .nature = NATURE_SASSY,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 77,
    .species = SPECIES_CLODSIRE,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_MEGAHORN, MOVE_STEALTH_ROCK},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 77,
    .species = SPECIES_TOEDSCRUEL,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_MUDDY_WATER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 78,
    .species = SPECIES_GLISCOR,
    .ability = ABILITY_CONTAGION,
    .moves = {MOVE_CROSS_POISON, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROOST},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 62,
    .species = SPECIES_CRAWDAUNT,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 62,
    .species = SPECIES_KINGDRA,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_DRACO_METEOR, MOVE_LIQUIDATION, MOVE_OCTAZOOKA, MOVE_FOCUS_ENERGY},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 63,
    .species = SPECIES_GUMSHOOS,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_FRUSTRATION, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDEAVOR},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_DRAGON_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 62,
    .species = SPECIES_FLOATZEL,
    .ability = ABILITY_WATER_VEIL,
    .moves = {MOVE_HYDRO_PUMP, MOVE_WATERFALL, MOVE_ICE_BEAM, MOVE_LOW_KICK},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 63,
    .species = SPECIES_DRAGONITE,
    .ability = ABILITY_MULTISCALE,
    .moves = {MOVE_DRAGON_RUSH, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_ROOST},
    .nature = NATURE_HASTY,
    },
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .lvl = 64,
    .species = SPECIES_PINCURCHIN,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 64,
    .species = SPECIES_ARCTOZOLT,
    .ability = ABILITY_SLUSH_RUSH,
    .moves = {MOVE_BOLT_BEAK, MOVE_SLAM, MOVE_ICICLE_CRASH, MOVE_LOW_KICK},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ELECTRIC_GEM,
    .lvl = 65,
    .species = SPECIES_AMPHAROS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK, MOVE_BREAKING_SWIPE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 53,
    .species = SPECIES_BARBARACLE,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_STONE_EDGE, MOVE_LIQUIDATION, MOVE_AERIAL_ACE, MOVE_STEALTH_ROCK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 53,
    .species = SPECIES_HITMONTOP,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_TRIPLE_KICK, MOVE_TRIPLE_AXEL, MOVE_ROCK_TOMB, MOVE_FAKE_OUT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_HYPNOSIS},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 67,
    .species = SPECIES_CARRACOSTA,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_HYDRO_PUMP, MOVE_STONE_EDGE, MOVE_ICE_BEAM, MOVE_STEALTH_ROCK},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_POLIWRATH,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_LIQUIDATION, MOVE_DRAIN_PUNCH, MOVE_DARKEST_LARIAT, MOVE_BELLY_DRUM},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_BAND,
    .lvl = 68,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_WATERFALL, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
    .nature = NATURE_LONELY,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 68,
    .gender = FEMALE,
    .species = SPECIES_BASCULEGION,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_SHADOW_BALL, MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 68,
    .species = SPECIES_GOODRA,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_SCALD},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .lvl = 66,
    .species = SPECIES_FROSLASS,
    },
    {
    .lvl = 67,
    .species = SPECIES_ORBEETLE,
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 68,
    .species = SPECIES_TAPU_KOKO,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 69,
    .species = SPECIES_LANTURN,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 69,
    .species = SPECIES_BELLIBOLT,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .moves = {MOVE_TOXIC, MOVE_SLACK_OFF, MOVE_MUDDY_WATER, MOVE_PARABOLIC_CHARGE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 68,
    .species = SPECIES_AMPHAROS,
    .ability = ABILITY_COTTON_DOWN,
    .moves = {MOVE_THUNDER, MOVE_DRAGON_PULSE, MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 68,
    .species = SPECIES_IRON_THORNS,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_STONE_EDGE, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_MANECTITE,
    .lvl = 70,
    .species = SPECIES_MANECTRIC,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_STRENGTH, MOVE_FIRE_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 62,
    .species = SPECIES_HARIYAMA,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_HEAVY_SLAM},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHESTO_BERRY,
    .lvl = 63,
    .species = SPECIES_ANNIHILAPE,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_BULK_UP, MOVE_REST, MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 53,
    .species = SPECIES_AURORUS,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_AURORA_VEIL, MOVE_STEALTH_ROCK, MOVE_BLIZZARD, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 55,
    .species = SPECIES_GLALIE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_SPIKES, MOVE_TAUNT, MOVE_FREEZE_DRY, MOVE_EXPLOSION},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 54,
    .species = SPECIES_BEARTIC,
    .ability = ABILITY_SLUSH_RUSH,
    .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_AQUA_JET, MOVE_STONE_EDGE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 54,
    .species = SPECIES_ROTOM_FROST,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_NASTY_PLOT, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 53,
    .species = SPECIES_MAMOSWINE,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_TRAILBLAZE, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 54,
    .species = SPECIES_ARCTOVISH,
    .ability = ABILITY_SLUSH_RUSH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_CRUNCH, MOVE_ICICLE_CRASH, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_NAIVE,
    },
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 84,
    .species = SPECIES_AURORUS,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_STEALTH_ROCK, MOVE_BLIZZARD, MOVE_ENCORE, MOVE_THUNDER_WAVE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 84,
    .species = SPECIES_ARCTOVISH,
    .ability = ABILITY_SLUSH_RUSH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_FREEZE_DRY, MOVE_ICICLE_CRASH, MOVE_PROTECT},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 84,
    .species = SPECIES_ROTOM_FROST,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_NASTY_PLOT, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_HEX},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 84,
    .species = SPECIES_ARTICUNO,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_ROOST, MOVE_FREEZE_DRY, MOVE_HURRICANE, MOVE_BLIZZARD},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LOADED_DICE,
    .lvl = 84,
    .species = SPECIES_BAXCALIBUR,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .moves = {MOVE_ICICLE_SPEAR, MOVE_GLAIVE_RUSH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_GLALITITE,
    .lvl = 85,
    .species = SPECIES_GLALIE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_GIGA_IMPACT, MOVE_SUPER_FANG, MOVE_EARTHQUAKE, MOVE_GYRO_BALL},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 83,
    .species = SPECIES_KYOGRE,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_REST, MOVE_ICE_BEAM},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 84,
    .species = SPECIES_MILOTIC,
    .ability = ABILITY_MARVEL_SCALE,
    .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC, MOVE_HAZE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 84,
    .species = SPECIES_KINGDRA,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_SURF, MOVE_ICE_BEAM},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 84,
    .species = SPECIES_WAILORD,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_BLOCK, MOVE_REST, MOVE_NOBLE_ROAR, MOVE_TOXIC},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 85,
    .species = SPECIES_ZOROARK,
    .ability = ABILITY_ILLUSION,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_DARK_PULSE, MOVE_LOW_KICK, MOVE_EXTRASENSORY},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SHARPEDONITE,
    .lvl = 85,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 62,
    .species = SPECIES_POLTEAGEIST,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_SHADOW_BALL, MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_SHELL_SMASH},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_DUSKNOIR,
    .ability = ABILITY_LONG_REACH,
    .moves = {MOVE_SUBSTITUTE, MOVE_SHADOW_PUNCH, MOVE_FOCUS_PUNCH, MOVE_SHADOW_SNEAK},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 33,
    .species = SPECIES_BUDEW,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_SPIKES, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 33,
    .species = SPECIES_PETILIL,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .moves = {MOVE_PETAL_DANCE, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_QUIVER_DANCE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 33,
    .species = SPECIES_LILEEP,
    .ability = ABILITY_FLOWER_VEIL,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_BUTTERFREE,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PSYBEAM, MOVE_QUIVER_DANCE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Rose1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MIRROR_HERB,
    .lvl = 52,
    .species = SPECIES_BELLOSSOM,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_PROTECT, MOVE_PETAL_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_MOONBLAST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MIRROR_HERB,
    .lvl = 52,
    .species = SPECIES_LUDICOLO,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_ENERGY_BALL, MOVE_HYDRO_PUMP, MOVE_MIST, MOVE_ICE_BEAM},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 95,
    .species = SPECIES_PORYGON_Z,
    .ability = ABILITY_DOWNLOAD,
    .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AGILITY},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 96,
    .species = SPECIES_EXPLOUD,
    .ability = ABILITY_PUNK_ROCK,
    .moves = {MOVE_OVERDRIVE, MOVE_TORCH_SONG, MOVE_BOOMBURST, MOVE_SURF},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 96,
    .species = SPECIES_ZOROARK_HISUIAN,
    .ability = ABILITY_ILLUSION,
    .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 95,
    .species = SPECIES_SLAKING,
    .ability = ABILITY_STALL,
    .moves = {MOVE_EARTHQUAKE, MOVE_GIGA_IMPACT, MOVE_PLAY_ROUGH, MOVE_GUNK_SHOT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 95,
    .species = SPECIES_MELOETTA,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_ALLURING_VOICE, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_ENERGY_BALL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_KANGASKHANITE,
    .lvl = 97,
    .species = SPECIES_KANGASKHAN,
    .ability = ABILITY_SCRAPPY,
    .moves = {MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS, MOVE_SHADOW_CLAW, MOVE_BODY_SLAM},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 67,
    .species = SPECIES_VILEPLUME,
    },
    {
    .lvl = 67,
    .species = SPECIES_GARBODOR,
    },
        {
    .lvl = 68,
    .species = SPECIES_SKUNTANK,
    },
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 47,
    .species = SPECIES_POLIWHIRL,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_EARTH_POWER, MOVE_WEATHER_BALL, MOVE_MUDDY_WATER, MOVE_ICE_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 48,
    .species = SPECIES_GASTRODON,
    .ability = ABILITY_SAND_FORCE,
    .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BABIRI_BERRY,
    .lvl = 47,
    .species = SPECIES_CARBINK,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_MOONBLAST, MOVE_GYRO_BALL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TANGA_BERRY,
    .lvl = 47,
    .species = SPECIES_GRUMPIG,
    .ability = ABILITY_WONDER_SKIN,
    .moves = {MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_PSYCHIC, MOVE_DARK_PULSE},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Chip[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_IAPAPA_BERRY,
    .lvl = 63,
    .species = SPECIES_ARMALDO,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_LEECH_LIFE, MOVE_ROCK_TOMB, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_CRADILY,
    .ability = ABILITY_SUCTION_CUPS,
    .moves = {MOVE_POWER_WHIP, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DRAGON_GEM,
    .lvl = 63,
    .species = SPECIES_TYRANTRUM,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_HEAD_SMASH, MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ICE_GEM,
    .lvl = 63,
    .species = SPECIES_AURORUS,
    .ability = ABILITY_REFRIGERATE,
    .moves = {MOVE_HYPER_VOICE, MOVE_FREEZE_DRY, MOVE_EARTH_POWER, MOVE_SUBSTITUTE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .lvl = 52,
    .species = SPECIES_ARMALDO,
    },
    {
    .lvl = 52,
    .species = SPECIES_FALINKS,
    },
    {
    .lvl = 52,
    .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 17,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 17,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_EXPLOUD,
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_SURF, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_ROOST},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 26,
    .species = SPECIES_MARSHTOMP,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_EARTHQUAKE, MOVE_WATERFALL},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_SEED_BOMB, MOVE_WATERFALL, MOVE_ZEN_HEADBUTT, MOVE_THUNDERPUNCH},
    .nature = NATURE_NAUGHTY,
    },
};

static const struct TrainerMon sParty_Austina[] = {
    {
    .lvl = 52,
    .species = SPECIES_WISHIWASHI,
    },
    {
    .lvl = 52,
    .species = SPECIES_TATSUGIRI,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
    .lvl = 52,
    .species = SPECIES_HIPPOWDON,
    },
    {
    .lvl = 52,
    .species = SPECIES_PALOSSAND,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 25,
    .species = SPECIES_KRABBY,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_RAZOR_SHELL, MOVE_X_SCISSOR, MOVE_METAL_CLAW, MOVE_STOMP},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 25,
    .species = SPECIES_CORPHISH,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_DRAGON_DANCE, MOVE_CRABHAMMER, MOVE_AQUA_JET, MOVE_X_SCISSOR},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 26,
    .species = SPECIES_KLAWF,
    .ability = ABILITY_ANGER_SHELL,
    .moves = {MOVE_ROCK_THROW, MOVE_X_SCISSOR, MOVE_HIGH_HORSEPOWER, MOVE_METAL_CLAW},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Simon[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26,
    .species = SPECIES_HIPPOPOTAS,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_SLACK_OFF},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 26,
    .species = SPECIES_NOSEPASS,
    .ability = ABILITY_SAND_FORCE,
    .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26,
    .species = SPECIES_HERDIER,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_SUBMISSION, MOVE_HOWL},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 27,
    .species = SPECIES_GIBLE,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SHADOW_CLAW},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 52,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 52,
    .species = SPECIES_COMFEY,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_POWER_HERB,
    .lvl = 47,
    .species = SPECIES_NINJASK,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_X_SCISSOR, MOVE_DUAL_WINGBEAT, MOVE_DIG, MOVE_SWORDS_DANCE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 47,
    .species = SPECIES_YANMEGA,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_DETECT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 48,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 47,
    .species = SPECIES_BARBARACLE,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_STONE_EDGE, MOVE_RAZOR_SHELL, MOVE_CROSS_CHOP, MOVE_SHADOW_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 47,
    .species = SPECIES_HONCHKROW,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_AIR_CUTTER, MOVE_HEAT_WAVE},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 48,
    .species = SPECIES_DRAPION,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 47,
    .species = SPECIES_THWACKEY,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 47,
    .species = SPECIES_TOXAPEX,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_SURF, MOVE_RECOVER, MOVE_TOXIC, MOVE_BANEFUL_BUNKER},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 48,
    .species = SPECIES_CHANSEY,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_SOFT_BOILED, MOVE_PROTECT, MOVE_TOXIC, MOVE_HYPER_VOICE},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 47,
    .species = SPECIES_STARAVIA,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 48,
    .species = SPECIES_FLOETTE_ETERNAL_FLOWER,
    .ability = ABILITY_FLOWER_VEIL,
    .moves = {MOVE_LIGHT_OF_RUIN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 47,
    .species = SPECIES_BOUFFALANT,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HEAD_CHARGE, MOVE_WILD_CHARGE, MOVE_LASH_OUT, MOVE_REVERSAL},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .lvl = 66,
    .species = SPECIES_MILTANK,
    },
    {
    .lvl = 66,
    .species = SPECIES_MUDSDALE,
    },
    {
    .lvl = 67,
    .species = SPECIES_KROOKODILE,
    },
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 38,
    .species = SPECIES_HIPPOPOTAS,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_YAWN, MOVE_SAND_TOMB, MOVE_ROAR, MOVE_SLACK_OFF},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 37,
    .species = SPECIES_ONIX,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_SAND_TOMB, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 37,
    .species = SPECIES_LAIRON,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_BODY_PRESS, MOVE_SLEEP_TALK, MOVE_REST, MOVE_HEAVY_SLAM},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 37,
    .species = SPECIES_CARKOL,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_POWER_GEM, MOVE_FIRE_SPIN, MOVE_CURSE, MOVE_HEAVY_SLAM},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EJECT_BUTTON,
    .lvl = 95,
    .species = SPECIES_PALAFIN,
    .ability = ABILITY_ZERO_TO_HERO,
    .moves = {MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_WAVE_CRASH, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 96,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_ROOST, MOVE_TOXIC},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 96,
    .species = SPECIES_SAMUROTT_HISUIAN,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_SUCKER_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 95,
    .species = SPECIES_KINGDRA,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_HURRICANE, MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_VOLCANION,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_GYARADOSITE,
    .lvl = 97,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_BOUNCE, MOVE_EARTHQUAKE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 95,
    .species = SPECIES_QUAQUAVAL,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .lvl = 96,
    .species = SPECIES_SLITHER_WING,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_FLARE_BLITZ},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 96,
    .species = SPECIES_KOMMO_O,
    .ability = ABILITY_SOUNDPROOF,
    .moves = {MOVE_CLANGOROUS_SOUL, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 95,
    .species = SPECIES_IRON_HANDS,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_PROTECT, MOVE_FAKE_OUT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ROSELI_BERRY,
    .lvl = 95,
    .species = SPECIES_ZAPDOS_GALARIAN,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_BRAVE_BIRD, MOVE_THUNDEROUS_KICK, MOVE_COACHING, MOVE_KNOCK_OFF},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_MEDICHAMITE,
    .lvl = 97,
    .species = SPECIES_MEDICHAM,
    .ability = ABILITY_PURE_POWER,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_FAKE_OUT, MOVE_BULLET_PUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_VIKAVOLT,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_STICKY_WEB, MOVE_BUG_BUZZ, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_KILOWATTREL,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_THUNDERBOLT, MOVE_HURRICANE, MOVE_ROOST, MOVE_TAILWIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 96,
    .species = SPECIES_TOXTRICITY,
    .ability = ABILITY_PUNK_ROCK,
    .moves = {MOVE_SHIFT_GEAR, MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 96,
    .species = SPECIES_RAICHU_ALOLAN,
    .ability = ABILITY_SURGE_SURFER,
    .moves = {MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_RISING_VOLTAGE, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 95,
    .species = SPECIES_RAIKOU,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AMPHAROSITE,
    .lvl = 97,
    .species = SPECIES_AMPHAROS,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_ELECTRODE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 47,
    .species = SPECIES_DOUBLADE,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_HEAD_SMASH, MOVE_SACRED_SWORD},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 47,
    .species = SPECIES_MACHOKE,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MEGA_KICK, MOVE_STONE_EDGE, MOVE_BULK_UP},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 48,
    .species = SPECIES_LYCANROC_MIDNIGHT,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_STONE_EDGE, MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_FIRE_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 47,
    .species = SPECIES_MUDSDALE,
    .ability = ABILITY_STAMINA,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_STEALTH_ROCK},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 47,
    .species = SPECIES_FERROTHORN,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_POWER_WHIP, MOVE_BODY_PRESS, MOVE_LEECH_SEED, MOVE_IRON_DEFENSE},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 48,
    .species = SPECIES_CLAYDOL,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_DRILL_RUN, MOVE_STORED_POWER, MOVE_BODY_PRESS, MOVE_COSMIC_POWER},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 47,
    .species = SPECIES_RAMPARDOS,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 46,
    .species = SPECIES_VIGOROTH,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_GIGA_IMPACT, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_THICK_CLUB,
    .lvl = 48,
    .species = SPECIES_MAROWAK,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_BONEMERANG, MOVE_DOUBLE_EDGE, MOVE_RETALIATE, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Wendy[] = {
    {
    .lvl = 66,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 66,
    .species = SPECIES_NOCTOWL,
    },    
    {
    .lvl = 67,
    .species = SPECIES_SALAMENCE,
    },
};

static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_SNOVER,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_LEAF_STORM, MOVE_FROST_BREATH, MOVE_CHILLING_WATER, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_TENTACOOL,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_CHILLING_WATER, MOVE_HEX, MOVE_ICE_BEAM, MOVE_TOXIC},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 37,
    .species = SPECIES_MAGMAR,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_ACID_SPRAY},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .lvl = 38,
    .species = SPECIES_CASTFORM,
    .ability = ABILITY_FORECAST,
    .moves = {MOVE_WEATHER_BALL, MOVE_HEADBUTT, MOVE_HEX, MOVE_WATER_PULSE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_GOLEM_ALOLAN,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_ROCK_BLAST, MOVE_STEALTH_ROCK},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 62,
    .species = SPECIES_URSALUNA,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FACADE, MOVE_RETALIATE, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 95,
    .species = SPECIES_TYRANITAR,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 95,
    .species = SPECIES_GLIMMORA,
    .ability = ABILITY_TOXIC_DEBRIS,
    .moves = {MOVE_MORTAL_SPIN, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_SPIKES},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 96,
    .species = SPECIES_STONJOURNER,
    .ability = ABILITY_POWER_SPOT,
    .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 96,
    .species = SPECIES_AVALUGG_HISUIAN,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_MOUNTAIN_GALE, MOVE_BODY_PRESS, MOVE_RECOVER, MOVE_EARTHQUAKE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CORNERSTONE_MASK,
    .lvl = 95,
    .species = SPECIES_OGERPON_CORNERSTONE_MASK,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, MOVE_SPIKY_SHIELD},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AERODACTYLITE,
    .lvl = 97 ,
    .species = SPECIES_AERODACTYL,
    .ability = ABILITY_PRESSURE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_FIRE_FANG, MOVE_CRUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 95,
    .species = SPECIES_LANDORUS_THERIAN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 96,
    .species = SPECIES_NOIVERN,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_AIR_SLASH},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_VESPIQUEN,
    .ability = ABILITY_GOOD_AS_GOLD,
    .moves = {MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_POWER_GEM, MOVE_AIR_SLASH},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 96,
    .species = SPECIES_CORVIKNIGHT,
    .ability = ABILITY_PRESSURE,
    .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_IRON_DEFENSE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 95,
    .species = SPECIES_BRAVIARY_HISUIAN,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_AGILITY, MOVE_PSYCHIC, MOVE_HURRICANE, MOVE_HEAT_WAVE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_PIDGEOTITE,
    .lvl = 97,
    .species = SPECIES_PIDGEOT_MEGA,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_TOXIC},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EJECT_BUTTON,
    .lvl = 95,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_MEMENTO, MOVE_HEALING_WISH},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 96,
    .species = SPECIES_ORICORIO,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_U_TURN, MOVE_ALLURING_VOICE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 96,
    .species = SPECIES_SKELEDIRGE,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_TORCH_SONG, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_SLACK_OFF},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_VOLCARONA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_MORNING_SUN, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_MOLTRES,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_WILL_O_WISP, MOVE_ROOST},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLAZIKENITE,
    .lvl = 97,
    .species = SPECIES_BLAZIKEN,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
    .lvl = 66,
    .species = SPECIES_MISMAGIUS,
    },
    {
    .lvl = 66,
    .species = SPECIES_SABLEYE,
    },    
    {
    .lvl = 67,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 62,
    .species = SPECIES_WEEZING_GALARIAN,
    .ability = ABILITY_MISTY_SURGE,
    .moves = {MOVE_STRANGE_STEAM, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_MISTY_EXPLOSION},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_CLEFABLE,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_FOLLOW_ME, MOVE_MISTY_EXPLOSION},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_RUNERIGUS,
    .ability = ABILITY_WANDERING_SPIRIT,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_POLTERGEIST, MOVE_ROCK_SLIDE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_SINISTCHA,
    .ability = ABILITY_HEATPROOF,
    .moves = {MOVE_CALM_MIND, MOVE_MATCHA_GOTCHA, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 63,
    .species = SPECIES_MISMAGIUS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_MYSTICAL_FIRE, MOVE_DESTINY_BOND},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 62,
    .species = SPECIES_SPIRITOMB,
    .ability = ABILITY_PRESSURE,
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_PURSUIT, MOVE_CALM_MIND},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 62,
    .species = SPECIES_SHEDINJA,
    .ability = ABILITY_WONDER_GUARD,
    .moves = {MOVE_PROTECT, MOVE_TOXIC, MOVE_SWORDS_DANCE, MOVE_POLTERGEIST},
    .nature = NATURE_NAUGHTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GHOST_GEM,
    .lvl = 63,
    .species = SPECIES_GENGAR,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 9,
    .species = SPECIES_HAPPINY,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_STOMP, MOVE_ATTRACT, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_BOLD,
    .gender = FEMALE,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 9,
    .species = SPECIES_AUDINO,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_POUND, MOVE_ATTRACT, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    .gender = FEMALE,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 10,
    .species = SPECIES_MINCCINO,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_SWIFT, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_NONE},
    .nature = NATURE_HASTY,
    .gender = FEMALE,
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_AMOONGUSS,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_STUN_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_HEX},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 87,
    .species = SPECIES_ARBOK,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EARTHQUAKE, MOVE_LEECH_LIFE, MOVE_POISON_JAB, MOVE_CRUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 88,
    .species = SPECIES_NIDOKING,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_TYRANITARITE,
    .lvl = 78,
    .species = SPECIES_TYRANITAR,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_STEALTH_ROCK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 77,
    .species = SPECIES_KLEAVOR,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_TAILWIND, MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 78,
    .species = SPECIES_URSALUNA,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_PROTECT, MOVE_FACADE, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 77,
    .species = SPECIES_ARCHALUDON,
    .ability = ABILITY_STAMINA,
    .moves = {MOVE_DRACO_METEOR, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 77,
    .species = SPECIES_STAKATAKA,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_ROCK_BLAST, MOVE_IRON_HEAD},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 79,
    .species = SPECIES_ZYGARDE,
    .ability = ABILITY_DRAGONS_MAW,
    .moves = {MOVE_THOUSAND_ARROWS, MOVE_DRAGON_CLAW, MOVE_IRON_TAIL, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 87,
    .species = SPECIES_SCOLIPEDE,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_SWORDS_DANCE, MOVE_POISON_JAB, MOVE_MEGAHORN, MOVE_AQUA_TAIL},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 87,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_BRAVE_BIRD, MOVE_TOXIC, MOVE_ROOST, MOVE_CROSS_POISON},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 88,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_POISON_HEAL,
    .moves = {MOVE_PROTECT, MOVE_CLOSE_COMBAT, MOVE_SEED_BOMB, MOVE_CUT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
    .lvl = 21,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 21,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ICE_GEM,
    .lvl = 62,
    .species = SPECIES_FROSLASS,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_FREEZE_DRY, MOVE_SPIKES},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 62,
    .species = SPECIES_JYNX,
    .ability = ABILITY_DRY_SKIN,
    .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_LOVELY_KISS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_FLORGES,
    .ability = ABILITY_FLOWER_VEIL,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 87,
    .species = SPECIES_DRAPION,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_AQUA_TAIL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 87,
    .species = SPECIES_SALAZZLE,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_NASTY_PLOT, MOVE_OVERHEAT, MOVE_SLUDGE_BOMB, MOVE_TOXIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AIR_BALLOON,
    .lvl = 88,
    .species = SPECIES_REVAVROOM,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_SHIFT_GEAR, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_LIQUID_OOZE,
    .moves = {MOVE_FLIP_TURN, MOVE_KNOCK_OFF, MOVE_TOXIC_SPIKES, MOVE_SLUDGE_BOMB},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 87,
    .species = SPECIES_PINCURCHIN,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_ZING_ZAP, MOVE_BARB_BARRAGE, MOVE_LIQUIDATION, MOVE_BANEFUL_BUNKER},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 88,
    .species = SPECIES_WEEZING_GALARIAN,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_STRANGE_STEAM, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_DEFOG},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 87,
    .species = SPECIES_SEVIPER,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_DRAGON_RUSH, MOVE_FIRE_FANG},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 87,
    .species = SPECIES_SWALOT,
    .ability = ABILITY_LIQUID_OOZE,
    .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CLEAR_AMULET,
    .lvl = 88,
    .species = SPECIES_IRON_MOTH,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_FIERY_DANCE, MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_MUK,
    .ability = ABILITY_POISON_TOUCH,
    .moves = {MOVE_LIQUIDATION, MOVE_GUNK_SHOT, MOVE_ACID_ARMOR, MOVE_TOXIC},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_DRAGALGE,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_DRAGON_TAIL, MOVE_SURF},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 88,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 13,
    .species = SPECIES_SHUPPET,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_CURSE, MOVE_SHADOW_SNEAK, MOVE_VENOSHOCK, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_BERRY_JUICE,
    .lvl = 13,
    .species = SPECIES_DWEBBLE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_BUG_BITE, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF, MOVE_STICKY_WEB},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SALAC_BERRY,
    .lvl = 14,
    .species = SPECIES_MUNCHLAX,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_TACKLE, MOVE_BELLY_DRUM, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .lvl = 37,
    .species = SPECIES_MR_MIME_GALARIAN,
    .ability = ABILITY_SCREEN_CLEANER,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYBEAM, MOVE_FREEZE_DRY, MOVE_ICE_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 38,
    .species = SPECIES_GRIMER,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_STRENGTH, MOVE_WILL_O_WISP},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GANLON_BERRY,
    .lvl = 37,
    .species = SPECIES_MUDBRAY,
    .ability = ABILITY_STAMINA,
    .moves = {MOVE_STRENGTH, MOVE_HIGH_HORSEPOWER, MOVE_HEAVY_SLAM, MOVE_REST},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 52,
    .species = SPECIES_FLORGES,
    },
    {
    .lvl = 52,
    .species = SPECIES_LOPUNNY,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WACAN_BERRY,
    .lvl = 62,
    .species = SPECIES_CRAMORANT,
    .ability = ABILITY_GULP_MISSILE,
    .moves = {MOVE_HURRICANE, MOVE_SURF, MOVE_BELCH, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 62,
    .species = SPECIES_RHYDON,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_STEALTH_ROCK},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_POWER_HERB,
    .lvl = 63,
    .species = SPECIES_BEHEEYEM,
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_PSYCHIC, MOVE_METEOR_BEAM, MOVE_SIGNAL_BEAM, MOVE_RECOVER},
    .nature = NATURE_QUIET,
    },
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_POOCHYENA,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_HEADBUTT, MOVE_YAWN, MOVE_TAUNT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_RATTATA_ALOLAN,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_CRUNCH, MOVE_HYPER_FANG, MOVE_ENDEAVOR, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
    .lvl = 52,
    .species = SPECIES_CRAWDAUNT,
    },
    {
    .lvl = 52,
    .species = SPECIES_CLAWITZER,
    },
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .lvl = 52,
    .species = SPECIES_BARRASKEWDA,
    },
    {
    .lvl = 52,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .lvl = 52,
    .species = SPECIES_WALREIN,
    },
    {
    .lvl = 52,
    .species = SPECIES_DREDNAW,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
    .lvl = 52,
    .species = SPECIES_GOLDUCK,
    },
    {
    .lvl = 52,
    .species = SPECIES_LANTURN,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 52,
    .species = SPECIES_SEADRA,
    },
    {
    .lvl = 52,
    .species = SPECIES_OMASTAR,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
    .lvl = 52,
    .species = SPECIES_SEISMITOAD,
    },
    {
    .lvl = 52,
    .species = SPECIES_SWAMPERT,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .lvl = 52,
    .species = SPECIES_MASQUERAIN,
    },
    {
    .lvl = 52,
    .species = SPECIES_MANTINE,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .lvl = 52,
    .species = SPECIES_INTELEON,
    },
    {
    .lvl = 52,
    .species = SPECIES_DRACOVISH,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 72,
    .species = SPECIES_LUMINEON,
    },
    {
    .lvl = 72,
    .species = SPECIES_WHISCASH,
    },
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 72,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 72,
    .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 72,
    .species = SPECIES_CLOYSTER,
    },
    {
    .lvl = 72,
    .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 72,
    .species = SPECIES_KINGLER,
    },
    {
    .lvl = 72,
    .species = SPECIES_BIBAREL,
    },
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 81,
    .species = SPECIES_GASTRODON_EAST_SEA,
    },
    {
    .lvl = 81,
    .species = SPECIES_MASQUERAIN,
    },
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 81,
    .species = SPECIES_FLOATZEL,
    },
    {
    .lvl = 81,
    .species = SPECIES_CARRACOSTA,
    },
};

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 72,
    .species = SPECIES_ARMALDO,
    },
    {
    .lvl = 72,
    .species = SPECIES_DRAGALGE,
    },
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 23,
    .species = SPECIES_MASCHIFF,
    .ability = ABILITY_STAKEOUT,
    .moves = {MOVE_BITE, MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_SWAGGER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 23,
    .species = SPECIES_SPOINK,
    .ability = ABILITY_WONDER_SKIN,
    .moves = {MOVE_SNARL, MOVE_PSYBEAM, MOVE_REST, MOVE_POWER_GEM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 23,
    .species = SPECIES_MURKROW,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_WING_ATTACK, MOVE_PAYBACK, MOVE_NIGHT_SHADE, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 38,
    .species = SPECIES_COMBUSKEN,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_BLAZE_KICK, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_BOUNCE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_BELT,
    .lvl = 38,
    .species = SPECIES_MONFERNO,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 38,
    .species = SPECIES_RABOOT,
    .ability = ABILITY_LIBERO,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 38,
    .species = SPECIES_PRIMEAPE,
    .ability = ABILITY_ANGER_POINT,
    .moves = {MOVE_CROSS_CHOP, MOVE_ASSURANCE, MOVE_RAGE_FIST, MOVE_SWAGGER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 37,
    .species = SPECIES_SAWK,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_BULK_UP, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MEGA_PUNCH},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 37,
    .species = SPECIES_HITMONCHAN,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_BULLET_PUNCH, MOVE_THUNDER_PUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 62,
    .species = SPECIES_INFERNAPE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_FLAMETHROWER, MOVE_VACUUM_WAVE, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_POLIWRATH,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_DOUBLE_TEAM, MOVE_HYPNOSIS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 63,
    .species = SPECIES_ELECTIVIRE,
    .ability = ABILITY_VITAL_SPIRIT,
    .moves = {MOVE_WILD_CHARGE, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK},
    .nature = NATURE_NAIVE,
    },
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 31,
    .species = SPECIES_TOGEDEMARU,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_TOXIC, MOVE_ZING_ZAP, MOVE_SPIKY_SHIELD, MOVE_SUPER_FANG},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 31,
    .species = SPECIES_DRIFLOON,
    .ability = ABILITY_FLARE_BOOST,
    .moves = {MOVE_HEX, MOVE_ACROBATICS, MOVE_THUNDERBOLT, MOVE_STRENGTH_SAP},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 32,
    .species = SPECIES_EELEKTRIK,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_ACID_SPRAY, MOVE_FLASH_CANNON, MOVE_SUPER_FANG},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 67,
    .species = SPECIES_KABUTOPS,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_CUT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_WHISCASH,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_AQUA_TAIL, MOVE_REST, MOVE_SLEEP_TALK, MOVE_CURSE},
    .nature = NATURE_BRAVE,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 68,
    .species = SPECIES_KINGDRA,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLASH_CANNON},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 68,
    .species = SPECIES_WALREIN,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ICE_FANG, MOVE_LIQUIDATION, MOVE_FIRE_FANG, MOVE_IRON_HEAD},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .ability = ABILITY_PLUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_SUPER_FANG, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 33,
    .species = SPECIES_YAMPER,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
    .lvl = 67,
    .nature = NATURE_NAIVE,
    .species = SPECIES_TOXTRICITY,
    },
    {
    .lvl = 67,
    .nature = NATURE_MODEST,
    .species = SPECIES_TOXTRICITY,
    },    
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_BOLTUND,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 52,
    .species = SPECIES_RAICHU,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_SURF},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 53,
    .species = SPECIES_ZEBSTRIKA,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE, MOVE_SMART_STRIKE, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 42,
    .species = SPECIES_SALAZZLE,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_DRAGON_PULSE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 42,
    .species = SPECIES_OCTILLERY,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_THUNDER_WAVE},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 43,
    .species = SPECIES_WEEZING_GALARIAN,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_STRANGE_STEAM, MOVE_PAYBACK, MOVE_OVERHEAT},
    .nature = NATURE_BRAVE,
    },
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_FIRE_BLAST, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_BODY_PRESS},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 42,
    .species = SPECIES_MAROWAK_ALOLAN,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_SHADOW_BONE, MOVE_STOMPING_TANTRUM, MOVE_FIRE_PUNCH, MOVE_AERIAL_ACE},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHARTI_BERRY,
    .lvl = 43,
    .species = SPECIES_CENTISKORCH,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_THUNDER_FANG, MOVE_COIL},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 42,
    .species = SPECIES_CROCALOR,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_DISARMING_VOICE, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 42,
    .species = SPECIES_RABOOT,
    .ability = ABILITY_LIBERO,
    .moves = {MOVE_BOUNCE, MOVE_FLAME_CHARGE, MOVE_HEADBUTT, MOVE_DOUBLE_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 42,
    .species = SPECIES_BRAIXEN,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_WILL_O_WISP, MOVE_PSYBEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 42,
    .species = SPECIES_CHARMELEON,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_DRAGON_BREATH, MOVE_FIRE_PLEDGE, MOVE_SMOKESCREEN, MOVE_ROCK_TOMB},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 42,
    .species = SPECIES_TORRACAT,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_FAKE_OUT, MOVE_DOUBLE_KICK, MOVE_CRUNCH},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 43,
    .species = SPECIES_QUILAVA,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_ERUPTION, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 42,
    .species = SPECIES_HOUNDOOM,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_FOUL_PLAY, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_MUD_SHOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 42,
    .species = SPECIES_FLETCHINDER,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ACROBATICS, MOVE_WILL_O_WISP, MOVE_ROOST},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GROUND_GEM,
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_ERUPTION, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_FIRE_SPIN},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_HYDRO_STEAM, MOVE_ANCIENT_POWER},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOPLE_BERRY,
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_COUNTER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 42,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .ability = ABILITY_CUTE_CHARM,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_MYSTICAL_FIRE, MOVE_WILL_O_WISP},
    .nature = NATURE_HASTY,
    },
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PASSHO_BERRY,
    .lvl = 37,
    .species = SPECIES_GROWLITHE_HISUIAN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PASSHO_BERRY,
    .lvl = 38,
    .species = SPECIES_PIGNITE,
    .ability = ABILITY_TURBOBLAZE,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_BRICK_BREAK, MOVE_FLAME_CHARGE, MOVE_HEAD_SMASH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PASSHO_BERRY,
    .lvl = 36,
    .species = SPECIES_ROTOM_HEAT,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HEX, MOVE_SHOCK_WAVE, MOVE_FIRE_BLAST, MOVE_DARK_PULSE},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

//Aqua Leader Hunter - Meteor Falls
static const struct TrainerMon sParty_Drew[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_MYSTIC_WATER,
    .lvl = 38,
    .species = SPECIES_WINGULL,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_WATER_PULSE, MOVE_AIR_SLASH, MOVE_MIST, MOVE_SUPERSONIC},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 42,
    .species = SPECIES_GOLISOPOD,
    .ability = ABILITY_EMERGENCY_EXIT,
    .moves = {MOVE_SLASH, MOVE_RAZOR_SHELL, MOVE_FURY_CUTTER, MOVE_SUCKER_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 38,
    .species = SPECIES_WISHIWASHI,
    .ability = ABILITY_SCHOOLING,
    .moves = {MOVE_SCALD, MOVE_REST, MOVE_SLEEP_TALK, MOVE_ICE_BEAM},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 39,
    .species = SPECIES_SEADRA,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_SCALD, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 39,
    .species = SPECIES_ZORUA,
    .ability = ABILITY_ILLUSION,
    .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_EXTRASENSORY, MOVE_SLUDGE_BOMB},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 40,
    .species = SPECIES_QWILFISH,
    .ability = ABILITY_POISON_POINT,
    .moves = {MOVE_AQUA_TAIL, MOVE_TOXIC, MOVE_POISON_JAB, MOVE_FELL_STINGER},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 45,
    .species = SPECIES_CACTURNE,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_SUCKER_PUNCH, MOVE_BULLET_SEED, MOVE_PAYBACK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 45,
    .species = SPECIES_COFAGRIGUS,
    .ability = ABILITY_MUMMY,
    .moves = {MOVE_WILL_O_WISP, MOVE_HEX, MOVE_CURSE, MOVE_DARK_PULSE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 46,
    .species = SPECIES_DUSCLOPS,
    .ability = ABILITY_MUMMY,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_FIRE_PUNCH},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_THICK_CLUB,
    .lvl = 36,
    .species = SPECIES_CUBONE,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_BRUTAL_SWING, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 36,
    .species = SPECIES_KABUTO,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_AQUA_JET, MOVE_BRINE, MOVE_ANCIENT_POWER, MOVE_MUD_SHOT},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_RHYDON,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_HAMMER_ARM, MOVE_DRILL_RUN, MOVE_TAKE_DOWN, MOVE_MEGAHORN},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 37,
    .species = SPECIES_SHIELDON,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_TAKE_DOWN, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SCORCHING_SANDS},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 37,
    .species = SPECIES_NIDORINA,
    .ability = ABILITY_POISON_POINT,
    .moves = {MOVE_CRUNCH, MOVE_POISON_TAIL, MOVE_STOMPING_TANTRUM, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 38,
    .species = SPECIES_SKORUPI,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_CROSS_POISON, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .lvl = 24,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SPELL_TAG,
    .lvl = 41,
    .species = SPECIES_HAUNTER,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_DESTINY_BOND},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 41,
    .species = SPECIES_FORRETRESS,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_HEAVY_SLAM, MOVE_GYRO_BALL, MOVE_CURSE, MOVE_ROLLOUT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_BELT,
    .lvl = 42,
    .species = SPECIES_PANGORO,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_NIGHT_SLASH, MOVE_BULLET_PUNCH, MOVE_LOW_SWEEP, MOVE_BODY_SLAM},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Autumn[] = {
    {
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 35,
    .species = SPECIES_RELLOR,
    .ability = ABILITY_SYNCHRONIZE,
    .moves = {MOVE_MUD_SHOT, MOVE_X_SCISSOR, MOVE_GUNK_SHOT, MOVE_ROLLOUT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 35,
    .species = SPECIES_SIGILYPH,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 36,
    .species = SPECIES_STUNFISK,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_MUDDY_WATER, MOVE_THUNDERBOLT, MOVE_MUD_SHOT, MOVE_BOUNCE},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_WORMADAM_PLANT_CLOAK,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_WORMADAM_TRASH_CLOAK,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_WORMADAM_SANDY_CLOAK,
    },    
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_GALVANTULA,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_VIVILLON_ARCHIPELAGO,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_VESPIQUEN,
    }, 
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_PARASECT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_ARIADOS,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_SCYTHER,
    },    
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 63,
    .species = SPECIES_VIVILLON_OCEAN,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_ELECTROWEB, MOVE_ENDEAVOR},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 63,
    .species = SPECIES_VIVILLON_SUN,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_QUIVER_DANCE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 63,
    .species = SPECIES_VIVILLON_ICY_SNOW,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Derek[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 33,
    .species = SPECIES_TEDDIURSA,
    .ability = ABILITY_QUICK_FEET,
    .moves = {MOVE_FACADE, MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 33,
    .species = SPECIES_CUBCHOO,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_SLASH, MOVE_ICE_FANG, MOVE_BRICK_BREAK, MOVE_LIQUIDATION},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 33,
    .species = SPECIES_STUFFUL,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_BRUTAL_SWING, MOVE_HAMMER_ARM, MOVE_STRENGTH, MOVE_FLAIL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FIGHTING_GEM,
    .lvl = 33,
    .species = SPECIES_PANCHAM,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 33,
    .species = SPECIES_KOMALA,
    .ability = ABILITY_COMATOSE,
    .moves = {MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_SLAM, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 32,
    .species = SPECIES_KADABRA,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_PSYSHOCK, MOVE_PSYBEAM, MOVE_DAZZLING_GLEAM, MOVE_RECOVER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 32,
    .species = SPECIES_PONYTA_GALARIAN,
    .ability = ABILITY_DAZZLING,
    .moves = {MOVE_STOMP, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_WILD_CHARGE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 33,
    .species = SPECIES_BRUXISH,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_CRUNCH, MOVE_AQUA_TAIL, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Drake118[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_EJECT_BUTTON,
    .lvl = 52,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_OVERHEAT, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 53,
    .species = SPECIES_ROARING_MOON,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 53,
    .species = SPECIES_GOUGING_FIRE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 53,
    .species = SPECIES_RAGING_BOLT,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_CALM_MIND, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_WEATHER_BALL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 53,
    .species = SPECIES_WALKING_WAKE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_HYDRO_STEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SALAMENCITE,
    .lvl = 54,
    .species = SPECIES_SALAMENCE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROOST},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73,
    .species = SPECIES_MISMAGIUS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FAIRY_GEM,
    .lvl = 73,
    .species = SPECIES_HATTERENE,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, MOVE_THUNDER_WAVE},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73,
    .species = SPECIES_DELPHOX,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 73,
    .species = SPECIES_VELUZA,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_FILLET_AWAY, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_CUT},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 73,
    .species = SPECIES_GOTHITELLE,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_PSYCHIC, MOVE_STORED_POWER, MOVE_SIGNAL_BEAM, MOVE_FAKE_OUT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73 ,
    .gender = FEMALE,
    .species = SPECIES_MEOWSTIC,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FAKE_OUT, MOVE_IMPRISON},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_William[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_MALAMAR,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_SUBSTITUTE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 63,
    .species = SPECIES_ORICORIO_SENSU,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_AIR_SLASH, MOVE_REVELATION_DANCE, MOVE_CALM_MIND, MOVE_ICY_WIND},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
    .lvl = 66,
    .species = SPECIES_ORANGURU,
    },
    {
    .lvl = 66,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 67,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_EVIOLITE,
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .lvl = 16,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .ability = ABILITY_DAZZLING,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_CLAYDOL,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_TOXIC, MOVE_PSYCHIC, MOVE_SCORCHING_SANDS, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 73,
    .species = SPECIES_OBSTAGOON,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_OBSTRUCT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_FIRE_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_SCRAFTY,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73,
    .species = SPECIES_WEAVILE,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_ICE_SPINNER, MOVE_POISON_JAB, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_MANDIBUZZ,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_ROOST, MOVE_BRAVE_BIRD},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WIDE_LENS,
    .lvl = 62,
    .species = SPECIES_MUSHARNA,
    .ability = ABILITY_BAD_DREAMS,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_MOONBLAST, MOVE_PSYCHIC},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MENTAL_HERB,
    .lvl = 62,
    .species = SPECIES_WOBBUFFET,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_AMNESIA, MOVE_ENCORE},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 63,
    .species = SPECIES_ALAKAZAM,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
    .lvl = 66,
    .species = SPECIES_TOXICROAK,
    },
    {
    .lvl = 67,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_IAPAPA_BERRY,
    .lvl = 62,
    .species = SPECIES_GRANBULL,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_LOW_KICK, MOVE_SUPER_FANG, MOVE_THUNDER_WAVE},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_BEWEAR,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_PAYBACK, MOVE_BULK_UP, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 63,
    .species = SPECIES_MANECTRIC,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ELECTRO_BALL, MOVE_MAGNET_RISE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SOUL_DEW,
    .lvl = 97,
    .species = SPECIES_LATIAS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_MIST_BALL, MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SOUL_DEW,
    .lvl = 97,
    .species = SPECIES_LATIOS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_DRACO_METEOR, MOVE_LUSTER_PURGE, MOVE_AURA_SPHERE, MOVE_THUNDERBOLT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 98,
    .species = SPECIES_GOODRA,
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_SCALD, MOVE_ICE_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 98,
    .species = SPECIES_HYDREIGON,
    .ability = ABILITY_DRAGONS_MAW,
    .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_FLASH_CANNON},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 98,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_BUG_BUZZ, MOVE_BOOMBURST, MOVE_DRACO_METEOR, MOVE_EARTH_POWER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ALTARIANITE,
    .lvl = 100,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_ROOST, MOVE_TOXIC},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 98,
    .species = SPECIES_CERULEDGE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_AIR_BALLOON,
    .lvl = 97,
    .species = SPECIES_GHOLDENGO,
    .ability = ABILITY_GOOD_AS_GOLD,
    .moves = {MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_PSYSHOCK},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_BANETTITE,
    .lvl = 98,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_POISON_PUPPETEER,
    .moves = {MOVE_DIRE_CLAW, MOVE_SUCKER_PUNCH, MOVE_SHADOW_CLAW, MOVE_TOXIC},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SPELL_TAG,
    .lvl = 97,
    .species = SPECIES_MARSHADOW,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_SPECTRAL_THIEF, MOVE_ROCK_TOMB, MOVE_LOW_KICK, MOVE_SHADOW_SNEAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_RED_CARD,
    .lvl = 98,
    .species = SPECIES_MIMIKYU,
    .ability = ABILITY_DISGUISE,
    .isShiny = TRUE,
    .moves = {MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_SHADOW_SNEAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 100,
    .species = SPECIES_GOLURK,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_HEAT_CRASH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ABOMASITE,
    .lvl = 98,
    .species = SPECIES_ABOMASNOW,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_AURORA_VEIL, MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .lvl = 97,
    .species = SPECIES_IRON_BUNDLE,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_TAUNT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SALAC_BERRY,
    .lvl = 98,
    .species = SPECIES_EISCUE,
    .ability = ABILITY_ICE_FACE,
    .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_SPEAR, MOVE_ZEN_HEADBUTT, MOVE_WATERFALL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 97,
    .species = SPECIES_CHIEN_PAO,
    .ability = ABILITY_SWORD_OF_RUIN,
    .moves = {MOVE_CRUNCH, MOVE_ICE_SPINNER, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 97,
    .species = SPECIES_DARMANITAN_GALARIAN,
    .ability = ABILITY_ZEN_MODE,
    .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 100,
    .species = SPECIES_FROSLASS,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_POLTERGEIST, MOVE_ICE_SHARD, MOVE_CRUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 98,
    .species = SPECIES_ALCREMIE,
    .ability = ABILITY_AROMA_VEIL,
    .moves = {MOVE_CALM_MIND, MOVE_ACID_ARMOR, MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 98,
    .species = SPECIES_TOGEKISS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_AURA_SPHERE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 97,
    .species = SPECIES_GARDEVOIR,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_THUNDERBOLT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 97,
    .species = SPECIES_JIRACHI,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ABSOLITE,
    .lvl = 98,
    .species = SPECIES_ABSOL,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 100,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_IRON_HEAD, MOVE_EXTREMESPEED, MOVE_WILD_CHARGE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 17,
    .species = SPECIES_RALTS,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_OCCA_BERRY,
    .lvl = 17,
    .species = SPECIES_VULPIX_ALOLAN,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_MIST, MOVE_ICY_WIND, MOVE_HEX, MOVE_DRAINING_KISS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 18,
    .species = SPECIES_FENNEKIN,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_FIRE_SPIN, MOVE_PSYBEAM, MOVE_EMBER, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TANGA_BERRY,
    .lvl = 18,
    .species = SPECIES_GOTHITA,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_SNARL, MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_CHARGE_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 19,
    .species = SPECIES_MORELULL,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_MEGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_DRAINING_KISS, MOVE_SLEEP_POWDER},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PETAYA_BERRY,
    .lvl = 20,
    .species = SPECIES_DEDENNE,
    .ability = ABILITY_CHEEK_POUCH,
    .moves = {MOVE_SUBSTITUTE, MOVE_NUZZLE, MOVE_PARABOLIC_CHARGE, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_SNEASEL,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_TRAILBLAZE, MOVE_SHADOW_CLAW, MOVE_TRIPLE_AXEL, MOVE_METAL_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 24,
    .species = SPECIES_IMPIDIMP,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TAUNT, MOVE_FOUL_PLAY},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 25,
    .species = SPECIES_ZORUA,
    .ability = ABILITY_ILLUSION,
    .moves = {MOVE_SNARL, MOVE_SHADOW_BALL, MOVE_UPROAR, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 23,
    .species = SPECIES_ABSOL,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_SLASH, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_AIR_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 23,
    .species = SPECIES_HOUNDOUR,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_INCINERATE, MOVE_MUD_SHOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MENTAL_HERB,
    .lvl = 25,
    .species = SPECIES_WYNAUT,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND, MOVE_ENCORE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EJECT_BUTTON,
    .lvl = 32,
    .species = SPECIES_SANDY_SHOCKS,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_TRI_ATTACK, MOVE_CHARGE_BEAM, MOVE_SCORCHING_SANDS, MOVE_STEALTH_ROCK},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 34,
    .species = SPECIES_JOLTIK,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_STICKY_WEB, MOVE_THUNDER, MOVE_LUNGE, MOVE_THUNDER_WAVE},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_DISCHARGE, MOVE_CONFUSE_RAY, MOVE_AQUA_RING},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 33,
    .species = SPECIES_ROTOM_MOW,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_CHARGE_BEAM, MOVE_LEAF_STORM, MOVE_NASTY_PLOT, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 33,
    .species = SPECIES_HELIOPTILE,
    .ability = ABILITY_DRY_SKIN,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SCALE_SHOT, MOVE_DARK_PULSE, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 35,
    .species = SPECIES_DRACOZOLT,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_SLAM, MOVE_DRAGON_CLAW, MOVE_PLUCK},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_MENTAL_HERB,
    .lvl = 43,
    .species = SPECIES_LURANTIS,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_X_SCISSOR, MOVE_SOLAR_BLADE, MOVE_SYNTHESIS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 44,
    .species = SPECIES_IVYSAUR,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_COLBUR_BERRY,
    .lvl = 43,
    .species = SPECIES_BRAMBLEGHAST,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_POLTERGEIST, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP, MOVE_POWER_WHIP},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FIRE_GEM,
    .lvl = 44,
    .species = SPECIES_SUNFLORA,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_TOXIC},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_DRAGON_FANG,
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MAGICAL_LEAF, MOVE_GROWTH},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 45,
    .species = SPECIES_LEAFEON,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_TOXIC},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = IV_SPREAD_MAX,
    .ev = TRAINER_PARTY_EVS(0, 236, 116, 28, 0, 116),
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 50,
    .species = SPECIES_BIDOOF,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK, MOVE_AQUA_TAIL, MOVE_DOUBLE_EDGE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WIDE_LENS,
    .lvl = 49,
    .species = SPECIES_MAUSHOLD,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_BULLET_SEED, MOVE_LOW_SWEEP},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 48,
    .species = SPECIES_JIGGLYPUFF,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_FLAMETHROWER},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 49,
    .species = SPECIES_PIDGEOTTO,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_U_TURN},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 48,
    .species = SPECIES_FARIGIRAF,
    .ability = ABILITY_CUD_CHEW,
    .moves = {MOVE_AGILITY, MOVE_NASTY_PLOT, MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 50,
    .species = SPECIES_MILTANK,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_MILK_DRINK, MOVE_SEISMIC_TOSS, MOVE_BODY_SLAM, MOVE_ROLLOUT},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 58,
    .species = SPECIES_FERROTHORN,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_POWER_WHIP, MOVE_LEECH_SEED, MOVE_SPIKES, MOVE_STEALTH_ROCK},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 58,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_MIRROR_COAT, MOVE_BODY_PRESS},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 58,
    .species = SPECIES_EMPOLEON,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_AQUA_JET, MOVE_DRILL_PECK, MOVE_SWORDS_DANCE, MOVE_LIQUIDATION},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SPELL_TAG,
    .lvl = 59,
    .species = SPECIES_AEGISLASH,
    .ability = ABILITY_STANCE_CHANGE,
    .moves = {MOVE_SHADOW_BALL, MOVE_CLOSE_COMBAT, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD},
    .nature = NATURE_MILD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 59,
    .species = SPECIES_BISHARP,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_SWORDS_DANCE, MOVE_THROAT_CHOP, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SCIZORITE,
    .lvl = 60,
    .species = SPECIES_SCIZOR,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_DUAL_WINGBEAT},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 75,
    .species = SPECIES_ESPEON,
    .ability = ABILITY_MYSTIC_MIND,
    .moves = {MOVE_PSYSHOCK, MOVE_ALLURING_VOICE, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 75,
    .species = SPECIES_UMBREON,
    .ability = ABILITY_DARK_AURA,
    .moves = {MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GRASS_GEM,
    .lvl = 73,
    .species = SPECIES_MEOWSCARADA,
    .ability = ABILITY_OVERGROW,
    .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL, MOVE_LOW_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 73,
    .species = SPECIES_GRENINJA,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_LOW_KICK},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 74,
    .species = SPECIES_METAGROSS,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GALLADITE,
    .lvl = 75,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_AQUA_CUTTER, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 88,
    .species = SPECIES_SNEASLER,
    .ability = ABILITY_MERCILESS,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_ICY_WIND, MOVE_FAKE_OUT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 89,
    .species = SPECIES_CLODSIRE,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES, MOVE_TOXIC, MOVE_POISON_JAB},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 89,
    .species = SPECIES_TOXAPEX,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_LIQUIDATION, MOVE_TOXIC, MOVE_HAZE, MOVE_RECOVER},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 89,
    .species = SPECIES_GENGAR,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HEX, MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 88,
    .species = SPECIES_NAGANADEL,
    .ability = ABILITY_TOXIC_CHAIN,
    .moves = {MOVE_NASTY_PLOT, MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BEEDRILLITE,
    .lvl = 90,
    .species = SPECIES_BEEDRILL,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_PURSUIT, MOVE_X_SCISSOR},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_SURSKIT,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_CUTTER, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILVER_POWDER,
    .lvl = 22,
    .species = SPECIES_SCYTHER,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_FURY_CUTTER, MOVE_DUAL_WINGBEAT, MOVE_DOUBLE_HIT, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 15,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 15,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 15,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 23,
    .species = SPECIES_LITTEN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_BITE, MOVE_FIRE_FANG, MOVE_LEECH_LIFE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SALAC_BERRY,
    .lvl = 23,
    .species = SPECIES_SPRIGATITO,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_SEED_BOMB, MOVE_U_TURN, MOVE_ACROBATICS, MOVE_PLAY_ROUGH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 23,
    .species = SPECIES_MEOWTH_GALARIAN,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_METAL_CLAW, MOVE_FAKE_OUT, MOVE_DIG, MOVE_LASH_OUT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 16,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RED_CARD,
    .lvl = 63,
    .species = SPECIES_SMEARGLE,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB},
    .nature = NATURE_HARDY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RED_CARD,
    .lvl = 63,
    .species = SPECIES_SMEARGLE,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SAFEGUARD, MOVE_GIGA_IMPACT},
    .nature = NATURE_HARDY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RED_CARD,
    .lvl = 63,
    .species = SPECIES_SMEARGLE,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_NASTY_PLOT, MOVE_ROAR_OF_TIME, MOVE_ASTRAL_BARRAGE, MOVE_BLOOD_MOON},
    .nature = NATURE_HARDY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RED_CARD,
    .lvl = 63,
    .species = SPECIES_SMEARGLE,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_GLACIAL_LANCE, MOVE_DRAGON_ASCENT, MOVE_GIGATON_HAMMER},
    .nature = NATURE_HARDY,
    },
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_ASSURANCE, MOVE_HAZE},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 33,
    .species = SPECIES_WEEPINBELL,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_TOXIC, MOVE_KNOCK_OFF, MOVE_RAZOR_LEAF, MOVE_GROWTH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 33,
    .species = SPECIES_EKANS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_TOXIC, MOVE_CRUNCH, MOVE_DIG, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 33,
    .species = SPECIES_GULPIN,
    .ability = ABILITY_LIQUID_OOZE,
    .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_ICE_PUNCH, MOVE_STRENGTH},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 34,
    .species = SPECIES_ORTHWORM,
    .ability = ABILITY_EARTH_EATER,
    .moves = {MOVE_SHED_TAIL, MOVE_BODY_PRESS, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_MAGNET,
    .lvl = 34,
    .species = SPECIES_GRAVELER_ALOLAN,
    .ability = ABILITY_GALVANIZE,
    .moves = {MOVE_SMACK_DOWN, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_SELF_DESTRUCT},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LIGHT_BALL,
    .lvl = 33,
    .species = SPECIES_PIKACHU,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_NUZZLE, MOVE_ELECTRO_BALL, MOVE_QUICK_ATTACK, MOVE_IRON_TAIL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 33,
    .species = SPECIES_ZORUA_HISUIAN,
    .ability = ABILITY_ILLUSION,
    .moves = {MOVE_SHADOW_BALL, MOVE_BITTER_MALICE, MOVE_KNOCK_OFF, MOVE_CURSE},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_MIMIKYU,
    .ability = ABILITY_DISGUISE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_DRAIN_PUNCH, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 34,
    .species = SPECIES_STANTLER,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_STOMP, MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_IRON_TAIL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 34,
    .species = SPECIES_GIRAFARIG,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_TWIN_BEAM, MOVE_CHARGE_BEAM, MOVE_GRASS_KNOT, MOVE_TERA_BLAST},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_IRON_BALL,
    .lvl = 62,
    .species = SPECIES_MIMIKYU,
    .ability = ABILITY_DISGUISE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_IRON_BALL,
    .lvl = 62,
    .species = SPECIES_SLURPUFF,
    .ability = ABILITY_AROMA_VEIL,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 63,
    .species = SPECIES_REUNICLUS,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_TRICK_ROOM},
    .nature = NATURE_QUIET,
    },
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 87,
    .species = SPECIES_ARIADOS,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_X_SCISSOR, MOVE_SLASH, MOVE_CROSS_POISON, MOVE_TOXIC_THREAD},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_VENUSAUR,
    .ability = ABILITY_OVERGROW,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_GROWTH},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 88,
    .species = SPECIES_TOXICROAK,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_CLOSE_COMBAT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 27,
    .species = SPECIES_ROCKRUFF,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_ROCK_SLIDE, MOVE_ACCELEROCK, MOVE_STOMPING_TANTRUM, MOVE_HOWL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_METAL_COAT,
    .lvl = 27,
    .species = SPECIES_KLANG,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_GEAR_GRIND, MOVE_RETURN, MOVE_WILD_CHARGE, MOVE_AUTOTOMIZE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 27,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 35,
    .species = SPECIES_CORSOLA_GALARIAN,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_STEALTH_ROCK, MOVE_SHADOW_BALL, MOVE_TOXIC, MOVE_STRENGTH_SAP},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 36,
    .species = SPECIES_BEEDRILL,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_POISON_JAB, MOVE_BUG_BITE, MOVE_ASSURANCE, MOVE_DRILL_RUN},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 6,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 6,
    .species = SPECIES_LILLIPUP,
    .moves = {MOVE_BITE, MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_TACKLE, MOVE_SWAGGER, MOVE_SAND_ATTACK, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 9,
    .species = SPECIES_CORPHISH,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_AQUA_JET, MOVE_HARDEN, MOVE_MUD_SHOT, MOVE_NONE},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 9,
    .species = SPECIES_MAKUHITA,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_TACKLE, MOVE_FOCUS_ENERGY},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_IRON_BALL,
    .lvl = 10,
    .ability = ABILITY_SPEED_BOOST,
    .species = SPECIES_YANMA,
    .moves = {MOVE_SONIC_BOOM, MOVE_METRONOME, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 16,
    .species = SPECIES_MIME_JR,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_CONFUSION, MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_OCCA_BERRY,
    .lvl = 16,
    .species = SPECIES_COTTONEE,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_FAIRY_WIND, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_ATTRACT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 17,
    .species = SPECIES_AZURILL,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_AQUA_JET, MOVE_BELLY_DRUM, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 16,
    .species = SPECIES_CUTIEFLY,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_DRAINING_KISS, MOVE_STRUGGLE_BUG, MOVE_STICKY_WEB, MOVE_STUN_SPORE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 17,
    .species = SPECIES_FLABEBE,
    .ability = ABILITY_FLOWER_VEIL,
    .moves = {MOVE_CALM_MIND, MOVE_SYNTHESIS, MOVE_DAZZLING_GLEAM, MOVE_MAGICAL_LEAF},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 23,
    .species = SPECIES_FLETCHLING,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_PLUCK, MOVE_FLAME_CHARGE, MOVE_ROOST, MOVE_STEEL_WING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 23,
    .species = SPECIES_STARLY,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_PLUCK, MOVE_TAKE_DOWN, MOVE_ROOST, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 23,
    .species = SPECIES_PIDOVE,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_SWIFT, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_NIGHT_SLASH},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Ben[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 31,
    .species = SPECIES_WATTREL,
    .ability = ABILITY_KEEN_EYE,
    .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 31,
    .species = SPECIES_VOLTORB_HISUIAN,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_THUNDER, MOVE_CHLOROBLAST, MOVE_ELECTRO_BALL, MOVE_EXPLOSION},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 32,
    .species = SPECIES_HAWLUCHA,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_FLYING_PRESS, MOVE_LOW_SWEEP, MOVE_BOUNCE, MOVE_SWORDS_DANCE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_DUSCLOPS,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_BARBOACH,
    .ability = ABILITY_WATER_BUBBLE,
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_WHIRLPOOL, MOVE_REST},
    .nature = NATURE_HARDY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WIDE_LENS,
    .lvl = 38,
    .species = SPECIES_PHANPY,
    .ability = ABILITY_EARTH_EATER,
    .moves = {MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER, MOVE_IRON_TAIL, MOVE_ROCK_TOMB},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 37,
    .species = SPECIES_DRAMPA,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_EXTRASENSORY, MOVE_DRAGON_PULSE, MOVE_TERA_BLAST, MOVE_HEAT_WAVE},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_RATTATA,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_GRASS_KNOT, MOVE_SUPER_FANG},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_ZIGZAGOON,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_TAKE_DOWN, MOVE_IRON_TAIL, MOVE_BELLY_DRUM, MOVE_SUPER_FANG},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_BIDOOF,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_YAWN, MOVE_SUPER_FANG},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_BUNNELBY,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_DOUBLE_KICK, MOVE_SUPER_FANG},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_YUNGOOS,
    .ability = ABILITY_STAKEOUT,
    .moves = {MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_WORK_UP, MOVE_SUPER_FANG},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_SKWOVET,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_TAKE_DOWN, MOVE_BULLET_SEED, MOVE_TRAILBLAZE, MOVE_SUPER_FANG},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 7,
    .species = SPECIES_DARUMAKA,
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 8,
    .species = SPECIES_TREECKO,
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 7,
    .species = SPECIES_TYMPOLE,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_BASHFUL,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 28,
    .species = SPECIES_ELECTRIKE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_VOLT_SWITCH, MOVE_HOWL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 28,
    .species = SPECIES_DEERLING,
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_DOUBLE_EDGE, MOVE_MEGAHORN},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 28,
    .species = SPECIES_HONEDGE,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, MOVE_AUTOTOMIZE},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 100,
    .species = SPECIES_KELDEO,
    .ability = ABILITY_JUSTIFIED,
    .moves = {MOVE_MUDDY_WATER, MOVE_SECRET_SWORD, MOVE_AIR_SLASH, MOVE_FLASH_CANNON},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 100,
    .species = SPECIES_FLAPPLE,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_GRAV_APPLE, MOVE_ACROBATICS, MOVE_DRAGON_RUSH, MOVE_GIGA_IMPACT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 100,
    .species = SPECIES_CHANDELURE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 100,
    .species = SPECIES_TINKATON,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_CRABHAMMER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_POWER_HERB,
    .lvl = 100,
    .species = SPECIES_NIHILEGO,
    .ability = ABILITY_BEAST_BOOST,
    .moves = {MOVE_METEOR_BEAM, MOVE_SLUDGE_WAVE, MOVE_POWER_GEM, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LUCARIONITE,
    .lvl = 100,
    .species = SPECIES_LUCARIO,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_STONE_EDGE, MOVE_ICE_PUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Andrew[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_ARROKUDA,
    .ability = ABILITY_PROPELLER_TAIL,
    .moves = {MOVE_AQUA_JET, MOVE_DIVE, MOVE_POISON_JAB, MOVE_ICE_FANG},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_WIGLETT,
    .ability = ABILITY_GOOEY,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_DIG, MOVE_HEADBUTT, MOVE_AQUA_JET},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_FROGADIER,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_DARK_PULSE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 33,
    .species = SPECIES_MANTYKE,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_ROOST},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 17,
    .species = SPECIES_SEWADDLE,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 17,
    .species = SPECIES_BURMY,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 17,
    .species = SPECIES_WURMPLE,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 17,
    .species = SPECIES_WEEDLE,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 17,
    .species = SPECIES_BLIPBUG,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 37,
    .species = SPECIES_CLAUNCHER,
    .ability = ABILITY_MEGA_LAUNCHER,
    .moves = {MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 37,
    .species = SPECIES_CHEWTLE,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_JAW_LOCK, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_JAB},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 38,
    .species = SPECIES_DRIZZILE,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_LIQUIDATION, MOVE_TAKE_DOWN, MOVE_WORK_UP},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_NORMAL_GEM,
    .lvl = 23,
    .species = SPECIES_MAGIKARP,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 23,
    .species = SPECIES_MAGIKARP,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_BOUNCE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 23,
    .species = SPECIES_MAGIKARP,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_HYDRO_PUMP, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22 ,
    .species = SPECIES_BINACLE,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_ANCIENT_POWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_CLAMPERL,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_BODY_SLAM, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_IRON_DEFENSE},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_TOTODILE,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_BITE, MOVE_ICE_FANG, MOVE_FLAIL, MOVE_WATERFALL},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 14,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 14,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 37,
    .species = SPECIES_TADBULB,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .moves = {MOVE_MUD_SHOT, MOVE_DISCHARGE, MOVE_MUDDY_WATER, MOVE_CONFUSE_RAY},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 38,
    .species = SPECIES_CROCONAW,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_LOW_KICK, MOVE_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 37,
    .species = SPECIES_DUCKLETT,
    .ability = ABILITY_HYDRATION,
    .moves = {MOVE_LIQUIDATION, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_STEEL_WING},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RED_CARD,
    .lvl = 52,
    .species = SPECIES_GRAPPLOCT,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_OCTOLOCK, MOVE_DIG, MOVE_DIVE, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 52,
    .species = SPECIES_SLOWKING,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_POWER_GEM, MOVE_SURF, MOVE_PSYCHIC, MOVE_FLAMETHROWER},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 53,
    .species = SPECIES_LAPRAS,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_FROST_BREATH, MOVE_SURF, MOVE_MIST, MOVE_PSYCHIC},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DEEP_SEA_TOOTH,
    .lvl = 52,
    .species = SPECIES_CLAMPERL,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_SUBSTITUTE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 53,
    .species = SPECIES_GOREBYSS,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHELL_SMASH},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WACAN_BERRY,
    .lvl = 53,
    .species = SPECIES_HUNTAIL,
    .ability = ABILITY_WATER_VEIL,
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SHELL_SMASH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .lvl = 52,
    .species = SPECIES_POLIWRATH,
    },
    {
    .lvl = 52,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 19,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 21,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 23,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 26,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 35,
    .species = SPECIES_BUIZEL,
    .ability = ABILITY_WATER_VEIL,
    .moves = {MOVE_HYDRO_PUMP, MOVE_AQUA_JET, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_POWER_HERB,
    .lvl = 36,
    .species = SPECIES_DEERLING,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_HEADBUTT, MOVE_JUMP_KICK, MOVE_BOUNCE, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 36,
    .species = SPECIES_SALANDIT,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_FLAMETHROWER, MOVE_VENOSHOCK, MOVE_PROTECT, MOVE_TOXIC},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 35,
    .species = SPECIES_FARFETCHD_GALARIAN,
    .ability = ABILITY_STEADFAST,
    .moves = {MOVE_BRICK_BREAK, MOVE_BRUTAL_SWING, MOVE_SLAM, MOVE_LEAF_BLADE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 35,
    .species = SPECIES_LINOONE_GALARIAN,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_HEADBUTT, MOVE_DIG, MOVE_SHADOW_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 36,
    .species = SPECIES_DARUMAKA_GALARIAN,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_ICE_FANG, MOVE_HEADBUTT, MOVE_FIRE_FANG, MOVE_ROCK_SLIDE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 35 ,
    .species = SPECIES_TRANQUILL,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH, MOVE_FOCUS_ENERGY},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 35 ,
    .species = SPECIES_RATICATE,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_STOMPING_TANTRUM, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 36 ,
    .species = SPECIES_SKIPLOOM,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_SPORE, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 35,
    .species = SPECIES_QUAXWELL,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_LOW_SWEEP, MOVE_AQUA_CUTTER, MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .lvl = 35,
    .species = SPECIES_AMAURA,
    .ability = ABILITY_REFRIGERATE,
    .moves = {MOVE_TERA_BLAST, MOVE_FREEZE_DRY, MOVE_THUNDERBOLT, MOVE_EARTH_POWER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 36,
    .species = SPECIES_TAUROS,
    .ability = ABILITY_ANGER_POINT,
    .moves = {MOVE_RAGING_BULL, MOVE_ZEN_HEADBUTT, MOVE_ASSURANCE, MOVE_SWAGGER},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 36 ,
    .species = SPECIES_PONYTA_GALARIAN,
    .ability = ABILITY_CUTE_CHARM,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_HYPNOSIS, MOVE_WILL_O_WISP},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_GLASSES,
    .lvl = 35 ,
    .species = SPECIES_ZORUA,
    .ability = ABILITY_ILLUSION,
    .moves = {MOVE_NIGHT_DAZE, MOVE_KNOCK_OFF, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 35 ,
    .species = SPECIES_MACHOKE,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 38,
    .species = SPECIES_PORYGON,
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_TRI_ATTACK, MOVE_PSYBEAM, MOVE_CHARGE_BEAM, MOVE_ICE_BEAM},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 38,
    .species = SPECIES_FLITTLE,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_PSYBEAM, MOVE_THUNDERBOLT, MOVE_UPROAR, MOVE_PROTECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_STEEL_WING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 33,
    .species = SPECIES_COMBUSKEN,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_PROTECT, MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_BLAZE_KICK},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_MINCCINO,
    .ability = ABILITY_SKILL_LINK,
    .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_TRIPLE_AXEL, MOVE_SING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FAIRY_FEATHER,
    .lvl = 33,
    .species = SPECIES_MORGREM,
    .ability = ABILITY_CURIOUS_MEDICINE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_SWAGGER, MOVE_CHILLING_WATER, MOVE_PLAY_ROUGH},
    .nature = NATURE_HARDY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_STEEL_WING},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 33,
    .species = SPECIES_VULLABY,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_ROOST, MOVE_FACADE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 52,
    .species = SPECIES_OBSTAGOON,
    },
    {
    .lvl = 52,
    .species = SPECIES_RATICATE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 81,
    .species = SPECIES_FERALIGATR,
    },
    {
    .lvl = 81,
    .species = SPECIES_DRAGAPULT,
    },
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 81,
    .species = SPECIES_CRADILY,
    },
    {
    .lvl = 81,
    .species = SPECIES_AERODACTYL,
    },
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 52,
    .species = SPECIES_TALONFLAME,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_TAILWIND},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 53,
    .species = SPECIES_UNFEZANT,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_TERA_BLAST, MOVE_TAILWIND},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_BRAVE_BIRD, MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEALTH_ROCK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 53,
    .species = SPECIES_MANTINE,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_HURRICANE, MOVE_SCALD, MOVE_SUPERSONIC, MOVE_ROOST},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIECHI_BERRY,
    .lvl = 54,
    .species = SPECIES_FLAPPLE,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_DRAGON_RUSH, MOVE_GRAV_APPLE, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 52,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_SUPER_FANG, MOVE_CROSS_POISON, MOVE_ROOST},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 53,
    .species = SPECIES_AERODACTYL,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_AERIAL_ACE, MOVE_PSYCHIC_FANGS, MOVE_ROCK_SLIDE, MOVE_SKY_DROP},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 57,
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_ROOST, MOVE_SPIKES},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 57,
    .species = SPECIES_TINKATUFF,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_ICE_HAMMER, MOVE_STONE_EDGE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_METAL_COAT,
    .lvl = 58,
    .species = SPECIES_EXCADRILL,
    .ability = ABILITY_SAND_FORCE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_IRON_HEAD},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 57,
    .species = SPECIES_LAIRON,
    .ability = ABILITY_HEAVY_METAL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_EARTHQUAKE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_METAL_COAT,
    .lvl = 57,
    .species = SPECIES_PERRSERKER,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_HONE_CLAWS, MOVE_SWAGGER, MOVE_DOUBLE_EDGE, MOVE_IRON_HEAD},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 58,
    .species = SPECIES_ESCAVALIER,
    .ability = ABILITY_VICTORY_STAR,
    .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 33,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 57,
    .species = SPECIES_KLEFKI,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_SPIKES, MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE, MOVE_TOXIC},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 58,
    .species = SPECIES_STUNFISK_GALARIAN,
    .ability = ABILITY_MIMICRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FOUL_PLAY, MOVE_CURSE},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 61,
    .species = SPECIES_SQUAWKABILLY_BLUE_PLUMAGE,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_LASH_OUT, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 61,
    .species = SPECIES_AROMATISSE,
    .ability = ABILITY_AROMA_VEIL,
    .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT, MOVE_TOXIC},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 62,
    .species = SPECIES_BLAZIKEN,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_POWER_HERB,
    .lvl = 57,
    .species = SPECIES_VIKAVOLT,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_THUNDERBOLT, MOVE_SOLAR_BEAM, MOVE_GUILLOTINE},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 57,
    .species = SPECIES_TROPIUS,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_AIR_SLASH, MOVE_EARTHQUAKE, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 57,
    .species = SPECIES_DELIBIRD,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_TRIPLE_AXEL, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 52,
    .species = SPECIES_KILOWATTREL,
    .ability = ABILITY_WIND_POWER,
    .moves = {MOVE_ELECTRO_BALL, MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_HYPER_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 53,
    .species = SPECIES_PIDGEOT,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_ELECTRO_BALL, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 56,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_POISON_PUPPETEER,
    .moves = {MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_ICY_WIND, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 57,
    .species = SPECIES_CASTFORM,
    .ability = ABILITY_FORECAST,
    .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_ICY_WIND},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_SAMUROTT_HISUIAN,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_RAZOR_SHELL, MOVE_CEASELESS_EDGE, MOVE_SACRED_SWORD, MOVE_X_SCISSOR},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 53,
    .species = SPECIES_ABSOL,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_SLASH, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILVER_POWDER,
    .lvl = 52,
    .species = SPECIES_BUTTERFREE,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_TAILWIND, MOVE_BUG_BUZZ, MOVE_RAGE_POWDER, MOVE_AIR_SLASH},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 52,
    .species = SPECIES_UNFEZANT,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_HEAT_WAVE, MOVE_FLY},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 37,
    .species = SPECIES_GRIMER_ALOLAN,
    .ability = ABILITY_POISON_TOUCH,
    .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_CURSE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 38,
    .species = SPECIES_KOFFING,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_PSYBEAM, MOVE_VENOSHOCK, MOVE_FLAMETHROWER, MOVE_TOXIC},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 37,
    .species = SPECIES_GROVYLE,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_QUICK_ATTACK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 37,
    .species = SPECIES_SKRELP,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_POISON_TAIL, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 38,
    .species = SPECIES_NOIBAT,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_SUPER_FANG, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE},
    .nature = NATURE_HASTY,
    },
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 23,
    .species = SPECIES_PAWNIARD,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_NIGHT_SLASH, MOVE_METAL_CLAW, MOVE_SWORDS_DANCE, MOVE_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 23,
    .species = SPECIES_PURRLOIN,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 23,
    .species = SPECIES_SANDILE,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_AERIAL_ACE, MOVE_BULLDOZE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 38,
    .species = SPECIES_DRAGONAIR,
    .ability = ABILITY_MARVEL_SCALE,
    .moves = {MOVE_AQUA_TAIL, MOVE_DRAGON_RUSH, MOVE_SLAM, MOVE_BRUTAL_SWING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 38,
    .species = SPECIES_HAKAMO_O,
    .ability = ABILITY_BULLETPROOF,
    .moves = {MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_HEADBUTT, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 38,
    .species = SPECIES_DRAKLOAK,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_PHANTOM_FORCE, MOVE_DOUBLE_HIT, MOVE_DRAGON_TAIL, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 38,
    .species = SPECIES_ARCTIBAX,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .moves = {MOVE_ICE_FANG, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_CRUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_ROCK_TOMB, MOVE_WEATHER_BALL},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 37,
    .species = SPECIES_LOMBRE,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_WATER_PULSE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 38,
    .species = SPECIES_QWILFISH,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_POISON_JAB, MOVE_AQUA_TAIL, MOVE_FELL_STINGER, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 57,
    .species = SPECIES_GREEDENT,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 57,
    .species = SPECIES_AMOONGUSS,
    .ability = ABILITY_EFFECT_SPORE,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_FOUL_PLAY, MOVE_SPORE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 57,
    .species = SPECIES_HATTERENE,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 62,
    .species = SPECIES_DUBWOOL,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_WILD_CHARGE, MOVE_ZEN_HEADBUTT, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILVER_POWDER,
    .lvl = 62,
    .species = SPECIES_GOLISOPOD,
    .ability = ABILITY_EMERGENCY_EXIT,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_AQUA_JET},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GHOST_GEM,
    .lvl = 62,
    .species = SPECIES_MISMAGIUS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_NASTY_PLOT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .lvl = 52,
    .species = SPECIES_MUK,
    },
    {
    .lvl = 52,
    .species = SPECIES_PYUKUMUKU,
    },
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 52,
    .species = SPECIES_LUMINEON,
    },
    {
    .lvl = 52,
    .species = SPECIES_BRUXISH,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 52,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 52,
    .species = SPECIES_CLOYSTER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 52,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 52,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 52,
    .species = SPECIES_ARAQUANID,
    },
    {
    .lvl = 52,
    .species = SPECIES_BASCULEGION,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 52,
    .species = SPECIES_DHELMISE,
    },
    {
    .lvl = 52,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 52,
    .species = SPECIES_JELLICENT,
    },
    {
    .lvl = 52,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 52,
    .species = SPECIES_SIMIPOUR,
    },
    {
    .lvl = 52,
    .species = SPECIES_VAPOREON,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .lvl = 72,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 72,
    .species = SPECIES_TOEDSCRUEL,
    },
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 72,
    .species = SPECIES_FLOATZEL,
    },
    {
    .lvl = 72,
    .species = SPECIES_FERALIGATR,
    },
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 72,
    .species = SPECIES_VAPOREON,
    },
    {
    .lvl = 72,
    .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 72,
    .species = SPECIES_AVALUGG,
    },
    {
    .lvl = 72,
    .species = SPECIES_WALREIN,
    },
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 81,
    .species = SPECIES_GOREBYSS,
    },
    {
    .lvl = 81,
    .species = SPECIES_HUNTAIL,
    },
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 81,
    .species = SPECIES_GOLDUCK,
    },
    {
    .lvl = 81,
    .species = SPECIES_MILOTIC,
    },
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 81,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 81,
    .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 45,
    .species = SPECIES_VENOMOTH,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_PSYCHIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 45,
    .species = SPECIES_XATU,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_EXTRASENSORY, MOVE_DRILL_PECK, MOVE_HEAT_WAVE, MOVE_LIGHT_SCREEN},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 46,
    .species = SPECIES_HYPNO,
    .ability = ABILITY_BAD_DREAMS,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_DREAM_EATER, MOVE_SWAGGER},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PETAYA_BERRY,
    .lvl = 46,
    .species = SPECIES_CHIMECHO,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_GLASSES,
    .lvl = 46,
    .species = SPECIES_THIEVUL,
    .ability = ABILITY_STAKEOUT,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH, MOVE_TAIL_SLAP, MOVE_PLAY_ROUGH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 45,
    .species = SPECIES_FRAXURE,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_DRAGON_CLAW, MOVE_POISON_JAB},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 36,
    .species = SPECIES_VIVILLON_JUNGLE,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_BUG_BUZZ, MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_HURRICANE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 36,
    .species = SPECIES_CORVISQUIRE,
    .ability = ABILITY_MIRROR_ARMOR,
    .moves = {MOVE_DRILL_PECK, MOVE_POWER_TRIP, MOVE_TAUNT, MOVE_ROOST},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 37,
    .species = SPECIES_KLEFKI,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_THUNDER_WAVE, MOVE_DAZZLING_GLEAM, MOVE_FOUL_PLAY, MOVE_FLASH_CANNON},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 38,
    .species = SPECIES_GIMMIGHOUL_CHEST,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_CONFUSE_RAY, MOVE_POWER_GEM, MOVE_SHADOW_BALL, MOVE_REST},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 37,
    .species = SPECIES_GREAVARD,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_HEADBUTT, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 37,
    .species = SPECIES_URSARING,
    .ability = ABILITY_QUICK_FEET,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SLASH, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .lvl = 23,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 23,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 41,
    .species = SPECIES_PIKACHU,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_ELECTRO_BALL, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWEET_KISS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 42,
    .species = SPECIES_ORICORIO_PAU,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_TEETER_DANCE, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 42,
    .species = SPECIES_GRAFAIAI,
    .ability = ABILITY_POISON_TOUCH,
    .moves = {MOVE_POISON_FANG, MOVE_SLASH, MOVE_TRAILBLAZE, MOVE_SUPER_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_HATTERENE,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 62,
    .species = SPECIES_BRUXISH,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_PSYCHIC_FANGS, MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_POISON_FANG},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 63,
    .species = SPECIES_MAGMORTAR,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 35,
    .species = SPECIES_SWADLOON,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_FLAIL, MOVE_GRASS_WHISTLE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 35,
    .species = SPECIES_QUILLADIN,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_ROLLOUT, MOVE_TAKE_DOWN, MOVE_PIN_MISSILE, MOVE_SEED_BOMB},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 36,
    .species = SPECIES_SUNKERN,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS, MOVE_SUNNY_DAY},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_WOOBAT,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PASSHO_BERRY,
    .lvl = 33,
    .species = SPECIES_NUMEL,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_LAVA_PLUME, MOVE_FLAMETHROWER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_MISDREAVUS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_THUNDER_WAVE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 33,
    .species = SPECIES_DRILBUR,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 15,
    .species = SPECIES_PLUSLE,
    .ability = ABILITY_PLUS,
    .moves = {MOVE_NUZZLE, MOVE_THUNDERSHOCK, MOVE_HELPING_HAND, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 15,
    .species = SPECIES_MINUN,
    .ability = ABILITY_MINUS,
    .moves = {MOVE_NUZZLE, MOVE_SPARK, MOVE_HELPING_HAND, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 16,
    .species = SPECIES_EMOLGA,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_NUZZLE, MOVE_WING_ATTACK, MOVE_ELECTRO_BALL, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 16,
    .species = SPECIES_PACHIRISU,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_NUZZLE, MOVE_CHARM, MOVE_FAKE_OUT, MOVE_THUNDER_SHOCK},
    .nature = NATURE_BASHFUL,
    },
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .lvl = 67,
    .species = SPECIES_SOLROCK,
    .ability = ABILITY_PURIFYING_SALT,
    },
    {
    .lvl = 67,
    .species = SPECIES_LUNATONE,
    .ability = ABILITY_PURIFYING_SALT,
    },
        {
    .lvl = 68,
    .species = SPECIES_TURTONATOR,
    },
    {
    .lvl = 68,
    .species = SPECIES_DRAMPA,
    },
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 25,
    .species = SPECIES_VENONAT,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_BUG_BUZZ, MOVE_PSYBEAM, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 25,
    .species = SPECIES_FOMANTIS,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_NIGHT_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26,
    .species = SPECIES_DURANT,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_THUNDER_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 25,
    .species = SPECIES_SIZZLIPEDE,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_FIRE_SPIN, MOVE_INFERNO},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 25 ,
    .species = SPECIES_COMBUSKEN,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_BLAZE_KICK, MOVE_DOUBLE_KICK, MOVE_FEATHER_DANCE, MOVE_DETECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 26,
    .species = SPECIES_HEATMOR,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_FIRE_SPIN, MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_SLASH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 72,
    .species = SPECIES_MACHAMP,
    },
    {
    .lvl = 72,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26,
    .species = SPECIES_SOLROCK,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_PSYCHO_CUT, MOVE_FLAME_CHARGE, MOVE_MORNING_SUN},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 26,
    .species = SPECIES_FLAREON,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PROTECT, MOVE_SUPERPOWER, MOVE_FACADE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 26,
    .species = SPECIES_MAGMAR,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SCORCHING_SANDS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 27,
    .species = SPECIES_CHARMELEON,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_ANCIENT_POWER, MOVE_FIRE_PLEDGE, MOVE_DRAGON_BREATH, MOVE_REST},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 52,
    .species = SPECIES_MACHAMP,
    },
    {
    .lvl = 52,
    .species = SPECIES_CONKELDURR,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FIRE_GEM,
    .lvl = 43,
    .species = SPECIES_ROSELIA,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_WEATHER_BALL, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 42,
    .species = SPECIES_HELIOLISK,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_THUNDERBOLT, MOVE_WEATHER_BALL, MOVE_GRASS_KNOT, MOVE_DRAGON_PULSE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 42,
    .species = SPECIES_TANGROWTH,
    .ability = ABILITY_LEAF_GUARD,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_ROCK_TOMB},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 87,
    .species = SPECIES_TOXTRICITY,
    .ability = ABILITY_PUNK_ROCK,
    .moves = {MOVE_SHIFT_GEAR, MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SNARL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 87,
    .species = SPECIES_SKUNTANK,
    .ability = ABILITY_AFTERMATH,
    .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 88,
    .species = SPECIES_GLISCOR,
    .ability = ABILITY_POISON_HEAL,
    .moves = {MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_POISON_JAB},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 67,
    .species = SPECIES_GRANBULL,
    },
    {
    .lvl = 68,
    .species = SPECIES_TAUROS_PALDEAN_COMBAT_BREED,
    },
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 66,
    .species = SPECIES_DECIDUEYE,
    },
    {
    .lvl = 67,
    .species = SPECIES_ZANGOOSE,
    },
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 66,
    .species = SPECIES_FLORGES,
    },
    {
    .lvl = 67,
    .species = SPECIES_MOTHIM,
    },
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MIRACLE_SEED,
    .lvl = 32,
    .species = SPECIES_GROTLE,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_SEED_BOMB, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_LEECH_SEED},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 32,
    .species = SPECIES_MONFERNO,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_FIRE_PUNCH, MOVE_MACH_PUNCH, MOVE_POISON_JAB, MOVE_FAKE_OUT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MYSTIC_WATER,
    .lvl = 32,
    .species = SPECIES_PRINPLUP,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_WATERFALL, MOVE_SHADOW_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 37,
    .species = SPECIES_SNEASEL_HISUIAN,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_SHADOW_CLAW, MOVE_FACADE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 37,
    .species = SPECIES_HAWLUCHA,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_ACROBATICS, MOVE_FLYING_PRESS, MOVE_BRICK_BREAK, MOVE_POISON_JAB},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 37,
    .species = SPECIES_HITMONLEE,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_BLAZE_KICK, MOVE_WIDE_GUARD, MOVE_MEGA_KICK, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 78,
    .species = SPECIES_WO_CHIEN,
    .ability = ABILITY_TABLETS_OF_RUIN,
    .moves = {MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_RUINATION},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 79,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_LEAF_STORM, MOVE_SYNTHESIS, MOVE_WEATHER_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_VENUSAURITE,
    .lvl = 80,
    .species = SPECIES_VENUSAUR,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 95,
    .species = SPECIES_BRAIXEN,
    .ability = ABILITY_MAGIC_BOUNCE,
    .gender = FEMALE,
    .moves = {MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 94,
    .species = SPECIES_TSAREENA,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .gender = FEMALE,
    .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 94,
    .species = SPECIES_LOPUNNY,
    .ability = ABILITY_LIBERO,
    .gender = FEMALE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_BOUNCE, MOVE_ICE_PUNCH, MOVE_RETURN},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 94,
    .species = SPECIES_SALAZZLE,
    .ability = ABILITY_CORROSION,
    .gender = FEMALE,
    .moves = {MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 94,
    .species = SPECIES_VAPOREON,
    .ability = ABILITY_WATER_ABSORB,
    .gender = FEMALE,
    .moves = {MOVE_SCALD, MOVE_MIST, MOVE_SHADOW_BALL, MOVE_ATTRACT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GARDEVOIRITE,
    .lvl = 95,
    .species = SPECIES_GARDEVOIR,
    .ability = ABILITY_TELEPATHY,
    .gender = FEMALE,
    .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_AURA_SPHERE, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    .isShiny = TRUE,
    },
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 29,
    .species = SPECIES_MAREEP,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TOXIC, MOVE_THUNDERBOLT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 29,
    .species = SPECIES_WOOPER,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_EARTHQUAKE, MOVE_YAWN},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 29,
    .species = SPECIES_TIRTOUGA,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_AQUA_JET},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 29,
    .species = SPECIES_MUDBRAY,
    .ability = ABILITY_STAMINA,
    .moves = {MOVE_EARTHQUAKE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 29,
    .species = SPECIES_BLITZLE,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_WILD_CHARGE, MOVE_FLAME_CHARGE, MOVE_DOUBLE_EDGE, MOVE_TRAILBLAZE},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 30,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_IRON_TAIL, MOVE_PSYCHIC_FANGS, MOVE_DOUBLE_EDGE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 54,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 54,
    .species = SPECIES_NOIVERN,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_BOOMBURST, MOVE_TAILWIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 54,
    .species = SPECIES_LUXRAY,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 54,
    .species = SPECIES_MIENSHAO,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_DRAGON_RUSH, MOVE_BOUNCE, MOVE_ICE_SPINNER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 54,
    .species = SPECIES_PAWMOT,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_REVIVAL_BLESSING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 55,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CURSE, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 29,
    .species = SPECIES_MAREEP,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TOXIC, MOVE_THUNDERBOLT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 29,
    .species = SPECIES_WOOPER,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_EARTHQUAKE, MOVE_YAWN},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 29,
    .species = SPECIES_TIRTOUGA,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_AQUA_JET},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 29,
    .species = SPECIES_MUDBRAY,
    .ability = ABILITY_STAMINA,
    .moves = {MOVE_EARTHQUAKE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 29,
    .species = SPECIES_BLITZLE,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_WILD_CHARGE, MOVE_FLAME_CHARGE, MOVE_DOUBLE_EDGE, MOVE_TRAILBLAZE},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 30,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_IRON_TAIL, MOVE_PSYCHIC_FANGS, MOVE_DOUBLE_EDGE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 54,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 54,
    .species = SPECIES_NOIVERN,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_BOOMBURST, MOVE_TAILWIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 54,
    .species = SPECIES_LUXRAY,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 54,
    .species = SPECIES_MIENSHAO,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_DRAGON_RUSH, MOVE_BOUNCE, MOVE_ICE_SPINNER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 54,
    .species = SPECIES_PAWMOT,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_REVIVAL_BLESSING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 55,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CURSE, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 29,
    .species = SPECIES_MAREEP,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TOXIC, MOVE_THUNDERBOLT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 29,
    .species = SPECIES_WOOPER,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_EARTHQUAKE, MOVE_YAWN},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 29,
    .species = SPECIES_TIRTOUGA,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_AQUA_JET},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 29,
    .species = SPECIES_MUDBRAY,
    .ability = ABILITY_STAMINA,
    .moves = {MOVE_EARTHQUAKE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 29,
    .species = SPECIES_BLITZLE,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_WILD_CHARGE, MOVE_FLAME_CHARGE, MOVE_DOUBLE_EDGE, MOVE_TRAILBLAZE},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 30,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_IRON_TAIL, MOVE_PSYCHIC_FANGS, MOVE_DOUBLE_EDGE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 54,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 54,
    .species = SPECIES_NOIVERN,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_BOOMBURST, MOVE_TAILWIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 54,
    .species = SPECIES_LUXRAY,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_PROTECT, MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 54,
    .species = SPECIES_MIENSHAO,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_DRAGON_RUSH, MOVE_BOUNCE, MOVE_ICE_SPINNER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 54,
    .species = SPECIES_PAWMOT,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_REVIVAL_BLESSING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 55,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CURSE, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_BALTOY,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_EARTH_POWER, MOVE_EXTRASENSORY, MOVE_SIGNAL_BEAM, MOVE_ANCIENT_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 33,
    .species = SPECIES_BUNNELBY,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_STRENGTH, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_VOLTORB,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_ELECTRO_BALL, MOVE_FOUL_PLAY, MOVE_FLASH_CANNON, MOVE_DOUBLE_TEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_SNORUNT,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_ICE_SHARD, MOVE_ICE_FANG, MOVE_BITE, MOVE_HEADBUTT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .lvl = 67,
    .species = SPECIES_LYCANROC,
    },
    {
    .lvl = 68,
    .species = SPECIES_PYROAR,
    },
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 95,
    .species = SPECIES_TAPU_LELE,
    .ability = ABILITY_PSYCHIC_SURGE,
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_PSYSHOCK},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 96,
    .species = SPECIES_ARMAROUGE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_ARMOR_CANNON, MOVE_EXPANDING_FORCE, MOVE_STORED_POWER, MOVE_ENERGY_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 95,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_SWORDS_DANCE, MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_X_SCISSOR},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 96,
    .species = SPECIES_SLOWKING_GALARIAN,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_THUNDER_WAVE},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 95,
    .species = SPECIES_ESPATHRA,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CALM_MIND, MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ALAKAZITE,
    .lvl = 97,
    .species = SPECIES_ALAKAZAM,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 33,
    .species = SPECIES_LITLEO,
    .ability = ABILITY_RIVALRY,
    .moves = {MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 33,
    .species = SPECIES_MEOWTH,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_METAL_CLAW, MOVE_SLASH, MOVE_SEED_BOMB, MOVE_FAKE_OUT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 33,
    .species = SPECIES_FLORAGATO,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_SEED_BOMB, MOVE_NIGHT_SLASH, MOVE_AERIAL_ACE, MOVE_THUNDER_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_ESPURR,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_PSYBEAM, MOVE_PSYSHOCK, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 33,
    .species = SPECIES_LUXIO,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_POWER_HERB,
    .lvl = 52,
    .species = SPECIES_BEHEEYEM,
    .ability = ABILITY_SYNCHRONIZE,
    .moves = {MOVE_PSYCHIC, MOVE_METEOR_BEAM, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GROUND_GEM,
    .lvl = 52,
    .species = SPECIES_TRAPINCH,
    .ability = ABILITY_ARENA_TRAP,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_FIRST_IMPRESSION, MOVE_QUICK_ATTACK, MOVE_PROTECT},
    .nature = NATURE_BRAVE,
    },
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 52,
    .species = SPECIES_MORPEKO,
    .ability = ABILITY_HUNGER_SWITCH,
    .moves = {MOVE_AURA_WHEEL, MOVE_SEED_BOMB, MOVE_STOMPING_TANTRUM, MOVE_SUPER_FANG},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 52,
    .species = SPECIES_AMBIPOM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_TAIL_SLAP, MOVE_LOW_KICK, MOVE_COVET, MOVE_FAKE_OUT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 53,
    .species = SPECIES_KINGLER,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_CRABHAMMER, MOVE_HIGH_HORSEPOWER, MOVE_X_SCISSOR, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOPLE_BERRY,
    .lvl = 62,
    .species = SPECIES_LICKILICKY,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_EXPLOSION, MOVE_BODY_SLAM, MOVE_POWER_WHIP, MOVE_KNOCK_OFF},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 62,
    .species = SPECIES_APPLETUN,
    .ability = ABILITY_WELL_BAKED_BODY,
    .moves = {MOVE_APPLE_ACID, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_RECOVER},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 63,
    .species = SPECIES_MILTANK,
    .ability = ABILITY_SCRAPPY,
    .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_ZEN_HEADBUTT, MOVE_CURSE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 52,
    .species = SPECIES_MR_RIME,
    .ability = ABILITY_VITAL_SPIRIT,
    .moves = {MOVE_FREEZE_DRY, MOVE_HYPNOSIS, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 52,
    .species = SPECIES_LINOONE,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP, MOVE_BELLY_DRUM},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 53,
    .species = SPECIES_DECIDUEYE,
    .ability = ABILITY_LONG_REACH,
    .moves = {MOVE_POLTERGEIST, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 62,
    .species = SPECIES_LILLIGANT,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .moves = {MOVE_PETAL_DANCE, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_QUIVER_DANCE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 62,
    .species = SPECIES_MR_MIME,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 63,
    .species = SPECIES_GOTHITELLE,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_MYSTICAL_FIRE, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 41,
    .species = SPECIES_BELLIBOLT,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .moves = {MOVE_MUDDY_WATER, MOVE_DISCHARGE, MOVE_ACID_SPRAY, MOVE_TOXIC},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 42,
    .species = SPECIES_MANECTRIC,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_BODY_SLAM},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 83,
    .species = SPECIES_TOXICROAK,
    .ability = ABILITY_DRY_SKIN,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_VACUUM_WAVE, MOVE_DARK_PULSE, MOVE_NASTY_PLOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 83,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_PSYCHIC_FANGS, MOVE_PROTECT},
    .nature = NATURE_RASH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 83,
    .species = SPECIES_HUNTAIL,
    .ability = ABILITY_WATER_VEIL,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SHELL_SMASH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 64,
    .species = SPECIES_AURORUS,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_AURORA_VEIL, MOVE_STEALTH_ROCK, MOVE_BLIZZARD, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 64,
    .species = SPECIES_ARCTOVISH,
    .ability = ABILITY_SLUSH_RUSH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_CRUNCH, MOVE_ICICLE_CRASH, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 65,
    .species = SPECIES_BAXCALIBUR,
    .ability = ABILITY_ICE_BODY,
    .moves = {MOVE_GLAIVE_RUSH, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 50,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 50,
    .species = SPECIES_POOCHYENA,
    },
        {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 50,
    .species = SPECIES_POOCHYENA,
    },
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BERRY_JUICE,
    .lvl = 16,
    .species = SPECIES_BONSLY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_THROW, MOVE_TRAILBLAZE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PETAYA_BERRY,
    .lvl = 17,
    .species = SPECIES_MILCERY,
    .ability = ABILITY_SWEET_VEIL,
    .moves = {MOVE_DRAINING_KISS, MOVE_SWEET_KISS, MOVE_ACID_ARMOR, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_GLASSES,
    .lvl = 23,
    .species = SPECIES_MEOWTH_ALOLAN,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_BITE, MOVE_AERIAL_ACE, MOVE_DIG, MOVE_METAL_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GANLON_BERRY,
    .lvl = 23,
    .species = SPECIES_STUNKY,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_BITE, MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_BELCH},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 23,
    .species = SPECIES_SPIRITOMB,
    .ability = ABILITY_NEUTRALIZING_GAS,
    .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_CURSE, MOVE_MEMENTO},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_MUK_ALOLAN,
    .ability = ABILITY_POISON_TOUCH,
    .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_PROTECT, MOVE_DRAIN_PUNCH},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 73,
    .species = SPECIES_HONCHKROW,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_TAUNT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 81,
    .species = SPECIES_KINGDRA,
    },
    {
    .lvl = 81,
    .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 82,
    .species = SPECIES_FLORGES,
    .ability = ABILITY_FLOWER_VEIL,
    .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_PSYCHIC_NOISE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 82,
    .species = SPECIES_PAWMOT,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_NUMEL,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_TERA_BLAST, MOVE_WILL_O_WISP},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_POISON_FANG, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_LEECH_LIFE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 73,
    .species = SPECIES_MALAMAR,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SALAC_BERRY,
    .lvl = 73,
    .species = SPECIES_KROOKODILE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_FLING},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 73,
    .species = SPECIES_SHIFTRY,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_RAZOR_LEAF, MOVE_CUT, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 73,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_PROTECT, MOVE_POISON_FANG, MOVE_LIQUIDATION, MOVE_CRUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 73,
    .species = SPECIES_INCINEROAR,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_POWER_TRIP, MOVE_BULK_UP, MOVE_LEECH_LIFE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_GRIMMSNARL,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_BULK_UP, MOVE_SPIRIT_BREAK, MOVE_SUCKER_PUNCH, MOVE_SUBSTITUTE},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_SLOWBRO,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_SLACK_OFF, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 73,
    .species = SPECIES_SLOWKING,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_SCALD, MOVE_FUTURE_SIGHT, MOVE_SLACK_OFF, MOVE_PROTECT},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 77,
    .species = SPECIES_REVAVROOM,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_GUNK_SHOT, MOVE_IRON_HEAD, MOVE_PARTING_SHOT, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 77,
    .species = SPECIES_EMPOLEON,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_IRON_HEAD, MOVE_LIQUIDATION, MOVE_ICE_SPINNER, MOVE_BRICK_BREAK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 78,
    .species = SPECIES_ESCAVALIER,
    .ability = ABILITY_VICTORY_STAR,
    .moves = {MOVE_FELL_STINGER, MOVE_IRON_HEAD, MOVE_HEADBUTT, MOVE_IRON_DEFENSE},
    .nature = NATURE_BRAVE,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 77,
    .species = SPECIES_ARCANINE_HISUIAN,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_DOUBLE_EDGE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 77,
    .species = SPECIES_CRUSTLE,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_EARTHQUAKE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 78,
    .species = SPECIES_RHYPERIOR,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_DRAGON_TAIL},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 77,
    .species = SPECIES_TALONFLAME,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_ROOST, MOVE_WILL_O_WISP},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 78,
    .species = SPECIES_RAPIDASH,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_WILL_O_WISP},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 77,
    .species = SPECIES_MAGCARGO,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_FLAMETHROWER, MOVE_SCALD},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 78,
    .species = SPECIES_MAGMORTAR,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SCORCHING_SANDS},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 78,
    .species = SPECIES_ROTOM_HEAT,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_OVERHEAT, MOVE_THUNDERBOLT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 79,
    .species = SPECIES_CHANDELURE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_FIRE_BLAST, MOVE_PSYCHIC},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73,
    .species = SPECIES_DARMANITAN,
    .ability = ABILITY_ZEN_MODE,
    .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_WORK_UP},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_PSYCHIC_GEM,
    .lvl = 73,
    .species = SPECIES_ESPATHRA,
    .ability = ABILITY_OPPORTUNIST,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 72,
    .species = SPECIES_BARRASKEWDA,
    },
    {
    .lvl = 72,
    .species = SPECIES_MILOTIC,
    },
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 53,
    .species = SPECIES_NIDOQUEEN,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 54,
    .species = SPECIES_STEELIX,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_IRON_DEFENSE, MOVE_HEAVY_SLAM, MOVE_TOXIC, MOVE_BODY_PRESS},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 37,
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_DRILL_PECK, MOVE_STEEL_WING},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 38,
    .species = SPECIES_WORMADAM_SANDY_CLOAK,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_EARTHQUAKE, MOVE_BUG_BITE, MOVE_ATTRACT, MOVE_TOXIC},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 38,
    .species = SPECIES_GURDURR,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_SMART_STRIKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_BRUTAL_SWING},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 39,
    .species = SPECIES_TINKATUFF,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_CRABHAMMER, MOVE_BRUTAL_SWING, MOVE_PLAY_ROUGH, MOVE_METAL_CLAW},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 39,
    .species = SPECIES_MAROWAK,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_SWORDS_DANCE, MOVE_BONEMERANG, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 39,
    .species = SPECIES_ZYGARDE_10_AURA_BREAK,
    .ability = ABILITY_TERRA_FIRMA,
    .moves = {MOVE_THOUSAND_ARROWS, MOVE_SKITTER_SMACK, MOVE_CRUNCH, MOVE_DRAGON_CLAW},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 24,
    .species = SPECIES_NIDORAN_M,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_BITE, MOVE_DOUBLE_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 24,
    .species = SPECIES_SNIVY,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_SLAM, MOVE_DRAGON_PULSE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 25 ,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_RETALIATE, MOVE_CRUNCH, MOVE_PLAY_ROUGH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 68,
    .species = SPECIES_SKELEDIRGE,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_TORCH_SONG, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SLACK_OFF},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AIR_BALLOON,
    .lvl = 68,
    .species = SPECIES_ARCANINE_HISUIAN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_SCOVILLAIN,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_STOMPING_TANTRUM},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHARIZARDITE_X,
    .lvl = 69,
    .species = SPECIES_CHARIZARD,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_METAL_CLAW, MOVE_FIRE_FANG, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_GOUGING_FIRE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_CRUNCH, MOVE_FLARE_BLITZ, MOVE_BREAKING_SWIPE, MOVE_MORNING_SUN},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 70,
    .species = SPECIES_GROUDON,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_HAMMER_ARM, MOVE_PRECIPICE_BLADES, MOVE_SOLAR_BEAM, MOVE_ERUPTION},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EJECT_BUTTON,
    .lvl = 38,
    .species = SPECIES_KROKOROK,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_BREAKING_SWIPE, MOVE_IRON_TAIL, MOVE_BULLDOZE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_OCCA_BERRY,
    .lvl = 39,
    .species = SPECIES_CACNEA,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SEED_BOMB, MOVE_DRAIN_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .lvl = 39,
    .species = SPECIES_SHELLDER,
    .ability = ABILITY_SKILL_LINK,
    .moves = {MOVE_WEATHER_BALL, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_SHELL_SMASH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .lvl = 37,
    .species = SPECIES_GREAT_TUSK,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_BRICK_BREAK, MOVE_STOMPING_TANTRUM, MOVE_ICE_SPINNER, MOVE_SMACK_DOWN},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 40,
    .species = SPECIES_GLIGAR,
    .ability = ABILITY_CONTAGION,
    .moves = {MOVE_EARTHQUAKE, MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_ICE_FANG},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 42,
    .species = SPECIES_EXCADRILL,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_RAPID_SPIN, MOVE_SHADOW_CLAW, MOVE_METAL_CLAW, MOVE_DRILL_RUN},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Tiana[] = {
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 8,
    .species = SPECIES_WOOBAT,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_WORK_UP, MOVE_GUST, MOVE_ATTRACT, MOVE_CONFUSION},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 9,
    .species = SPECIES_SHELLOS,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_MUD_SLAP, MOVE_HARDEN, MOVE_WATER_GUN, MOVE_ICY_WIND},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 9,
    .ability = ABILITY_CONTRARY,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_FAKE_OUT, MOVE_METRONOME, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_BASHFUL,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 14 ,
    .species = SPECIES_SMOOCHUM,
    .ability = ABILITY_TANGLING_HAIR,
    .moves = {MOVE_CONFUSION, MOVE_DAZZLING_GLEAM, MOVE_LOVELY_KISS, MOVE_ENCORE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MAGNET,
    .lvl = 14 ,
    .species = SPECIES_ELEKID,
    .ability = ABILITY_VITAL_SPIRIT,
    .moves = {MOVE_THUNDERSHOCK, MOVE_THUNDER_WAVE, MOVE_SWIFT, MOVE_QUICK_ATTACK},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 15 ,
    .species = SPECIES_MAGBY,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_EMBER, MOVE_ROCK_SMASH, MOVE_MACH_PUNCH, MOVE_CONFUSE_RAY},
    .nature = NATURE_NAIVE,
    },
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_GLAMEOW,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_FAKE_OUT, MOVE_SUPER_FANG, MOVE_FAKE_TEARS, MOVE_HYPNOSIS},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 22,
    .species = SPECIES_TRUBBISH,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_SLUDGE, MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_TAKE_DOWN},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_KINGS_ROCK,
    .lvl = 34,
    .species = SPECIES_TRUMBEAK,
    .ability = ABILITY_SKILL_LINK,
    .moves = {MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_BULLET_SEED, MOVE_ROOST},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 34,
    .species = SPECIES_ORICORIO_BAILE,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_DOUBLE_TEAM, MOVE_ALLURING_VOICE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .lvl = 16,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .lvl = 14,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 14,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 87,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_DIRE_CLAW, MOVE_SUCKER_PUNCH, MOVE_POISON_JAB, MOVE_SHADOW_SNEAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_VENOMOTH,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 88,
    .species = SPECIES_SLOWBRO_GALARIAN,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_PSYCHIC, MOVE_SHELL_SIDE_ARM, MOVE_FLAMETHROWER, MOVE_SURF},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 87,
    .species = SPECIES_SLOWKING_GALARIAN,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_SLACK_OFF},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 87,
    .species = SPECIES_VICTREEBEL,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_REST, MOVE_SLEEP_TALK},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 88,
    .species = SPECIES_OVERQWIL,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_BARB_BARRAGE, MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Rick[] = {
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 7,
    .species = SPECIES_SEWADDLE,
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 7,
    .species = SPECIES_WURMPLE,
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .lvl = 8,
    .species = SPECIES_SURSKIT,
    .nature = NATURE_BASHFUL,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 10,
    .species = SPECIES_KARRABLAST,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_PECK, MOVE_FURY_CUTTER, MOVE_ACID_SPRAY, MOVE_LEER},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 10,
    .species = SPECIES_KRICKETOT,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_FURY_CUTTER, MOVE_TACKLE, MOVE_ABSORB, MOVE_SING},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ORAN_BERRY,
    .lvl = 11,
    .species = SPECIES_VENIPEDE,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_ROLLOUT, MOVE_POISON_TAIL, MOVE_PROTECT, MOVE_NONE},
    .nature = NATURE_NAUGHTY,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 23,
    .species = SPECIES_DEWPIDER,
    .ability = ABILITY_WATER_BUBBLE,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_HEADBUTT, MOVE_BUG_BITE, MOVE_GIGA_DRAIN},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 23,
    .species = SPECIES_SPINARAK,
    .ability = ABILITY_SNIPER,
    .moves = {MOVE_BUG_BITE, MOVE_SUCKER_PUNCH, MOVE_DIG, MOVE_POISON_JAB},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ICE_GEM,
    .lvl = 23,
    .species = SPECIES_SNOM,
    .ability = ABILITY_ICE_SCALES,
    .moves = {MOVE_STRUGGLE_BUG, MOVE_ICY_WIND, MOVE_REST, MOVE_SLEEP_TALK},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_MOTHIM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_FROSMOTH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_KRICKETUNE,
    },    
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_DURANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_SPIDOPS,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_PINSIR,
    }, 
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_LEDIAN,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_YANMEGA,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .lvl = 52,
    .species = SPECIES_SHUCKLE,
    }, 
};

static const struct TrainerMon sParty_James1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MYSTIC_WATER,
    .lvl = 16,
    .species = SPECIES_ANORITH,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_SMACK_DOWN, MOVE_SKITTER_SMACK, MOVE_PROTECT, MOVE_TOXIC},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 16,
    .species = SPECIES_LARVESTA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_SKITTER_SMACK, MOVE_FLAME_CHARGE, MOVE_ROOST, MOVE_WILL_O_WISP},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 16,
    .species = SPECIES_NINCADA,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_DIG, MOVE_SKITTER_SMACK, MOVE_SAND_ATTACK, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 16,
    .species = SPECIES_LEDYBA,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_SKITTER_SMACK, MOVE_THUNDER_PUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_RED_CARD,
    .lvl = 36,
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_BODY_PRESS, MOVE_SPIKES, MOVE_STEALTH_ROCK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_RED_CARD,
    .lvl = 36,
    .species = SPECIES_GLIMMET,
    .ability = ABILITY_TOXIC_DEBRIS,
    .moves = {MOVE_ANCIENT_POWER, MOVE_VENOSHOCK, MOVE_DAZZLING_GLEAM, MOVE_CONFUSE_RAY},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_RED_CARD,
    .lvl = 37,
    .species = SPECIES_DRUDDIGON,
    .ability = ABILITY_DRAGONS_MAW,
    .moves = {MOVE_DRAGON_TAIL, MOVE_REST, MOVE_SLEEP_TALK, MOVE_TOXIC},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 36,
    .species = SPECIES_VULPIX,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_STONE_EDGE, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_SAND_TOMB},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 36,
    .species = SPECIES_NIDORINO,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 37,
    .species = SPECIES_MARACTUS,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_ENERGY_BALL, MOVE_POISON_JAB, MOVE_WEATHER_BALL, MOVE_SPIKY_SHIELD},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 37,
    .species = SPECIES_FERROSEED,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_GYRO_BALL, MOVE_SELF_DESTRUCT},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 38,
    .species = SPECIES_STUNFISK_GALARIAN,
    .ability = ABILITY_MIMICRY,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_BOUNCE, MOVE_METAL_CLAW, MOVE_IRON_DEFENSE},
    .nature = NATURE_NAUGHTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 37,
    .species = SPECIES_FURFROU,
    .ability = ABILITY_FLUFFY,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_RETALIATE, MOVE_HEADBUTT, MOVE_CRUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 37,
    .species = SPECIES_DIGLETT,
    .ability = ABILITY_ARENA_TRAP,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_SLASH, MOVE_BULLDOZE, MOVE_STONE_EDGE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_AIR_BALLOON,
    .lvl = 38,
    .species = SPECIES_VAROOM,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_IRON_HEAD, MOVE_HEADBUTT, MOVE_POISON_JAB, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_CUFANT,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_IRON_HEAD, MOVE_STRENGTH, MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .lvl = 22,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 22,
    .species = SPECIES_NOSEPASS,
    },
    {
    .lvl = 22,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 21,
    .species = SPECIES_TRAPINCH,
    .ability = ABILITY_ARENA_TRAP,
    .moves = {MOVE_DIG, MOVE_BITE, MOVE_BULLDOZE, MOVE_BUG_BITE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 21,
    .species = SPECIES_GOLETT,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_BRICK_BREAK, MOVE_GYRO_BALL},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 41,
    .species = SPECIES_STONJOURNER,
    .ability = ABILITY_POWER_SPOT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_BRUTAL_SWING, MOVE_SAND_TOMB},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 42,
    .species = SPECIES_LYCANROC,
    .ability = ABILITY_KEEN_EYE,
    .moves = {MOVE_ACCELEROCK, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_BULK_UP},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_SILICOBRA,
    .ability = ABILITY_SAND_SPIT,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_FIRE_FANG, MOVE_GLARE},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    .ability = ABILITY_SAND_FORCE,
    .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_VIBRAVA,
    .ability = ABILITY_EARTH_EATER,
    .moves = {MOVE_DRAGON_BREATH, MOVE_BUG_BUZZ, MOVE_EARTH_POWER, MOVE_SUPERSONIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PIXIE_PLATE,
    .lvl = 33,
    .species = SPECIES_CLEFAIRY,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_MYSTICAL_FIRE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 63,
    .species = SPECIES_PLUSLE,
    .ability = ABILITY_PLUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_HELPING_HAND, MOVE_SWIFT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 63,
    .species = SPECIES_MINUN,
    .ability = ABILITY_MINUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_BATON_PASS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 63,
    .gender = MALE,
    .species = SPECIES_MEOWSTIC,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_YAWN, MOVE_PSYCHIC},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 63,
    .gender = FEMALE,
    .species = SPECIES_MEOWSTIC,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_PSYSHOCK, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 63,
    .gender = MALE,
    .species = SPECIES_INDEEDEE,
    .ability = ABILITY_PSYCHIC_SURGE,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MENTAL_HERB,
    .lvl = 63,
    .gender = FEMALE,
    .species = SPECIES_INDEEDEE,
    .ability = ABILITY_PSYCHIC_SURGE,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_PROTECT},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 52,
    .species = SPECIES_ESCAVALIER,
    },
    {
    .lvl = 52,
    .species = SPECIES_ACCELGOR,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26,
    .species = SPECIES_VANILLISH,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_EXPLOSION},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 26,
    .species = SPECIES_PILOSWINE,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_ICE_FANG, MOVE_SMACK_DOWN, MOVE_HIGH_HORSEPOWER, MOVE_STRENGTH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 26,
    .species = SPECIES_SEALEO,
    .ability = ABILITY_ICE_BODY,
    .moves = {MOVE_SURF, MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_BODY_SLAM},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 27,
    .species = SPECIES_CRYOGONAL,
    .ability = ABILITY_WONDER_GUARD,
    .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_ANCIENT_POWER, MOVE_EXPLOSION},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DRAGON_GEM,
    .lvl = 42,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_DRAGON_HAMMER, MOVE_SEED_BOMB, MOVE_ZEN_HEADBUTT, MOVE_LOW_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 42,
    .species = SPECIES_DRIFBLIM,
    .ability = ABILITY_FLARE_BOOST,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_SELF_DESTRUCT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 43,
    .species = SPECIES_SCOVILLAIN,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_FIRE_FANG, MOVE_ZEN_HEADBUTT, MOVE_CRUNCH, MOVE_SEED_BOMB},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 31,
    .species = SPECIES_CHARJABUG,
    .ability = ABILITY_BATTERY,
    .moves = {MOVE_X_SCISSOR, MOVE_STICKY_WEB, MOVE_BITE, MOVE_THUNDERBOLT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 31,
    .species = SPECIES_JOLTEON,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SING},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 32,
    .species = SPECIES_VOLBEAT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_BUG_BUZZ, MOVE_DISCHARGE, MOVE_ENCORE, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 42,
    .species = SPECIES_SLOWBRO_GALARIAN,
    .ability = ABILITY_QUICK_DRAW,
    .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SHELL_SIDE_ARM, MOVE_ICE_BEAM},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 42,
    .species = SPECIES_GOLURK,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_PUNCH, MOVE_HEAT_CRASH, MOVE_BLOCK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 43,
    .species = SPECIES_MARACTUS,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_WEATHER_BALL, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 56,
    .species = SPECIES_FORRETRESS,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_GYRO_BALL, MOVE_EXPLOSION, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RED_CARD,
    .lvl = 57,
    .species = SPECIES_DUSKNOIR,
    .ability = ABILITY_PRESSURE,
    .moves = {MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_THUNDER_PUNCH, MOVE_REVENGE},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 57,
    .species = SPECIES_TOGEDEMARU,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STEEL_ROLLER, MOVE_IRON_HEAD, MOVE_ZING_ZAP, MOVE_REVERSAL},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 62,
    .species = SPECIES_MEDICHAM,
    .ability = ABILITY_PURE_POWER,
    .moves = {MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 63,
    .species = SPECIES_CURSOLA,
    .ability = ABILITY_PERISH_BODY,
    .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_HYDRO_PUMP, MOVE_ENDURE},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_GLALIE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FREEZE_DRY, MOVE_ICY_WIND, MOVE_WEATHER_BALL, MOVE_PROTECT},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 63,
    .species = SPECIES_DUDUNSPARCE,
    .ability = ABILITY_RATTLED,
    .moves = {MOVE_BOOMBURST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_ROOST},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 62,
    .species = SPECIES_GRENINJA,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_HYDRO_PUMP, MOVE_GUNK_SHOT, MOVE_ICE_BEAM, MOVE_EXTRASENSORY},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GROUND_GEM,
    .lvl = 62,
    .species = SPECIES_DUGTRIO,
    .ability = ABILITY_ARENA_TRAP,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_FINAL_GAMBIT, MOVE_MEMENTO},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 62,
    .species = SPECIES_TREVENANT,
    .ability = ABILITY_NATURAL_CURE,
    .moves = {MOVE_POLTERGEIST, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_SHADOW_CLAW},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 63,
    .species = SPECIES_EELEKTROSS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDER, MOVE_GIGA_DRAIN, MOVE_ACID_SPRAY, MOVE_KNOCK_OFF},
    .nature = NATURE_SASSY,
    },
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 57,
    .species = SPECIES_TOGEDEMARU,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_IRON_HEAD, MOVE_ZING_ZAP, MOVE_TOXIC},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 58,
    .species = SPECIES_DOUBLADE,
    .ability = ABILITY_NO_GUARD,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_NIGHT_SLASH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 57,
    .species = SPECIES_METANG,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 58,
    .species = SPECIES_KLINKLANG,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_TOXIC},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WIDE_LENS,
    .lvl = 58,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .ability = ABILITY_SLUSH_RUSH,
    .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 35,
    .species = SPECIES_BRAIXEN,
    .gender = FEMALE,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHOCK_WAVE, MOVE_PSYCHIC, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 34,
    .species = SPECIES_BUNEARY,
    .ability = ABILITY_LIBERO,
    .gender = FEMALE,
    .moves = {MOVE_MEGA_KICK, MOVE_HIGH_JUMP_KICK, MOVE_BOUNCE, MOVE_ICE_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_PETAYA_BERRY,
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    .gender = FEMALE,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_ENERGY_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 34,
    .species = SPECIES_SALANDIT,
    .gender = FEMALE,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 34,
    .species = SPECIES_STEENEE,
    .gender = FEMALE,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_TROP_KICK, MOVE_LOW_SWEEP, MOVE_TRIPLE_AXEL, MOVE_PLAY_ROUGH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 34,
    .species = SPECIES_VAPOREON,
    .ability = ABILITY_WATER_ABSORB,
    .gender = FEMALE,
    .moves = {MOVE_MUDDY_WATER, MOVE_AURORA_BEAM, MOVE_ACID_ARMOR, MOVE_SHADOW_BALL},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 68,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_ENCORE, MOVE_HELPING_HAND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 69,
    .species = SPECIES_SWAMPERT,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_STEALTH_ROCK, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 69,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_DRAGON_PULSE, MOVE_BUG_BUZZ, MOVE_BOOMBURST, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 68,
    .species = SPECIES_VOLCARONA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_MORNING_SUN, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AGGRONITE,
    .lvl = 69,
    .species = SPECIES_AGGRON,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_FIRE_PUNCH},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EXTREMESPEED, MOVE_PLAY_ROUGH, MOVE_FLARE_BLITZ, MOVE_CRUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 68,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_ENCORE, MOVE_HELPING_HAND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 69,
    .species = SPECIES_SWAMPERT,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_STEALTH_ROCK, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 69,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_DRAGON_PULSE, MOVE_BUG_BUZZ, MOVE_BOOMBURST, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 68,
    .species = SPECIES_VOLCARONA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_MORNING_SUN, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AGGRONITE,
    .lvl = 69,
    .species = SPECIES_AGGRON,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_FIRE_PUNCH},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EXTREMESPEED, MOVE_PLAY_ROUGH, MOVE_FLARE_BLITZ, MOVE_CRUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 68,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_ENCORE, MOVE_HELPING_HAND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 69,
    .species = SPECIES_SWAMPERT,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_STEALTH_ROCK, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 69,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_DRAGON_PULSE, MOVE_BUG_BUZZ, MOVE_BOOMBURST, MOVE_EARTH_POWER},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 68,
    .species = SPECIES_VOLCARONA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_MORNING_SUN, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_AGGRONITE,
    .lvl = 69,
    .species = SPECIES_AGGRON,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_FIRE_PUNCH},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 70,
    .species = SPECIES_ARCANINE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EXTREMESPEED, MOVE_PLAY_ROUGH, MOVE_FLARE_BLITZ, MOVE_CRUNCH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 81,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 81,
    .species = SPECIES_LUMINEON,
    },
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 81,
    .species = SPECIES_LAPRAS,
    },
    {
    .lvl = 81,
    .species = SPECIES_STUNFISK,
    },
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SPELL_TAG,
    .lvl = 82,
    .species = SPECIES_DHELMISE,
    .ability = ABILITY_STEELWORKER,
    .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_ANCHOR_SHOT, MOVE_SYNTHESIS},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 82,
    .species = SPECIES_BARRASKEWDA,
    .ability = ABILITY_PROPELLER_TAIL,
    .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 82,
    .species = SPECIES_CONKELDURR,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 82,
    .species = SPECIES_BUZZWOLE,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_LEECH_LIFE, MOVE_POISON_JAB},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 82,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SUPER_FANG, MOVE_CROSS_POISON},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 82,
    .species = SPECIES_MINIOR,
    .ability = ABILITY_SHIELDS_DOWN,
    .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 37,
    .species = SPECIES_GOTHORITA,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_SNARL, MOVE_HYPNOSIS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 37,
    .species = SPECIES_CHATOT,
    .ability = ABILITY_PUNK_ROCK,
    .moves = {MOVE_OVERDRIVE, MOVE_TORCH_SONG, MOVE_HYPER_VOICE, MOVE_CHATTER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 38,
    .species = SPECIES_SPRITZEE,
    .ability = ABILITY_HEALER,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_CHARGE_BEAM, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 38,
    .species = SPECIES_RUFFLET,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_CRUSH_CLAW, MOVE_AERIAL_ACE, MOVE_SHADOW_CLAW, MOVE_STEEL_WING},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 73,
    .species = SPECIES_NINETALES_ALOLAN,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_AURORA_VEIL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCK_GEM,
    .lvl = 73,
    .species = SPECIES_MEDICHAM,
    .ability = ABILITY_PURE_POWER,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 73,
    .species = SPECIES_FROSMOTH,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_BLIZZARD, MOVE_ICY_WIND, MOVE_INFESTATION, MOVE_AURORA_VEIL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_OCCA_BERRY,
    .lvl = 73,
    .species = SPECIES_JYNX,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_FAKE_OUT},
    .nature = NATURE_TIMID,
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GRASSY_SEED,
    .lvl = 37,
    .species = SPECIES_THWACKEY,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_LOW_SWEEP, MOVE_STRENGTH, MOVE_ACROBATICS},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 38,
    .species = SPECIES_PHANTUMP,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_LEECH_SEED, MOVE_PHANTOM_FORCE, MOVE_HORN_LEECH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GRASSY_SEED,
    .lvl = 38,
    .species = SPECIES_NUZLEAF,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SUCKER_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GRASSY_SEED,
    .lvl = 38,
    .species = SPECIES_GLOOM,
    .ability = ABILITY_EFFECT_SPORE,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_SLEEP_POWDER},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 52,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 52,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 72,
    .species = SPECIES_PALAFIN,
    },
    {
    .lvl = 72,
    .species = SPECIES_ARAQUANID,
    },
    {
    .lvl = 72,
    .species = SPECIES_JELLICENT,
    },
    {
    .lvl = 72,
    .species = SPECIES_GASTRODON,
    },
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 52,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 52,
    .species = SPECIES_SLOWBRO,
    },
    {
    .lvl = 52,
    .species = SPECIES_KABUTOPS,
    },
    {
    .lvl = 52,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 53,
    .species = SPECIES_GASTRODON,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_REST},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 53,
    .species = SPECIES_SEISMITOAD,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_INFESTATION, MOVE_SLUDGE_BOMB},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 54,
    .species = SPECIES_SWAMPERT,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_WEATHER_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_RINDO_BERRY,
    .lvl = 53,
    .species = SPECIES_WHISCASH,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_REST},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MYSTIC_WATER,
    .lvl = 22,
    .species = SPECIES_PANPOUR,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_WATER_PLEDGE, MOVE_BRINE, MOVE_ICY_WIND, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 22,
    .species = SPECIES_PANSEAR,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_FIRE_PLEDGE, MOVE_FLAME_BURST, MOVE_ROCK_TOMB, MOVE_ROUND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MIRACLE_SEED,
    .lvl = 22,
    .species = SPECIES_PANSAGE,
    .ability = ABILITY_OVERGROW,
    .moves = {MOVE_GRASS_PLEDGE, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_DIG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_SHINX,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_SPARK, MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_HOWL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_MAGNET,
    .lvl = 22,
    .species = SPECIES_MAREEP,
    .ability = ABILITY_COTTON_DOWN,
    .moves = {MOVE_SHOCK_WAVE, MOVE_FIRE_PUNCH, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 22,
    .species = SPECIES_BIDOOF,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_HEADBUTT, MOVE_AQUA_JET, MOVE_PLUCK, MOVE_SUPER_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_NORMAL_GEM,
    .lvl = 12,
    .species = SPECIES_FEEBAS,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 12,
    .species = SPECIES_FINNEON,
    .ability = ABILITY_OBLIVIOUS,
    .moves = {MOVE_POUND, MOVE_WATER_GUN, MOVE_GUST, MOVE_NONE},
    .nature = NATURE_HASTY,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 25 ,
    .species = SPECIES_TYRUNT,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_SLIDE, MOVE_BREAKING_SWIPE, MOVE_STOMPING_TANTRUM, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 25 ,
    .species = SPECIES_ARCHEN,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26 ,
    .species = SPECIES_CRANIDOS,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_ROCK_TOMB, MOVE_ZEN_HEADBUTT, MOVE_ICE_FANG, MOVE_BITE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 25,
    .species = SPECIES_TANGELA,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_ANCIENT_POWER, MOVE_STUN_SPORE},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 25,
    .species = SPECIES_MIENFOO,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_JUMP_KICK, MOVE_FAKE_OUT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 26,
    .species = SPECIES_SOLOSIS,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL},
    .nature = NATURE_QUIET,
    },
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 27,
    .species = SPECIES_CHANSEY,
    .ability = ABILITY_NATURAL_CURE,
    .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_CALM_MIND, MOVE_THUNDER_WAVE},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 27,
    .species = SPECIES_PALPITOAD,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_ICY_WIND, MOVE_REST},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 31,
    .species = SPECIES_TOXEL,
    .ability = ABILITY_PUNK_ROCK,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_TOXIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_YACHE_BERRY,
    .lvl = 31,
    .species = SPECIES_SWABLU,
    .ability = ABILITY_CLOUD_NINE,
    .moves = {MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_SING},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    .ability = ABILITY_PUNK_ROCK,
    .moves = {MOVE_HYPER_VOICE, MOVE_OVERDRIVE, MOVE_SUPERSONIC, MOVE_ICE_BEAM},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 35,
    .species = SPECIES_SANDYGAST,
    .ability = ABILITY_WATER_COMPACTION,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_MUDDY_WATER},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 35,
    .species = SPECIES_DOLLIV,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_WEATHER_BALL, MOVE_GRASS_KNOT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 36,
    .species = SPECIES_MARILL,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_AQUA_JET, MOVE_BELLY_DRUM, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 33,
    .species = SPECIES_FLETCHINDER,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_ACROBATICS, MOVE_TAILWIND},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_IAPAPA_BERRY,
    .lvl = 33,
    .species = SPECIES_TOGETIC,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_FOLLOW_ME, MOVE_TAILWIND},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 33,
    .species = SPECIES_GURDURR,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_SMART_STRIKE, MOVE_ROCK_THROW, MOVE_SLAM, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FLAME_ORB,
    .lvl = 33,
    .species = SPECIES_HERACROSS,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_LEECH_LIFE, MOVE_BRICK_BREAK, MOVE_FACADE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_SANDSHREW,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_CRUSH_CLAW, MOVE_ROLLOUT, MOVE_DIG, MOVE_GYRO_BALL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_BOLDORE,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_SANDSTORM, MOVE_STEALTH_ROCK, MOVE_HEADBUTT, MOVE_ROCK_SLIDE},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_FLOETTE,
    .ability = ABILITY_SYMBIOSIS,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_PETAL_BLIZZARD},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 32,
    .species = SPECIES_IVYSAUR,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_LEECH_SEED, MOVE_SEED_BOMB, MOVE_TAKE_DOWN, MOVE_SLUDGE_BOMB},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_CHERUBI,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_DRAINING_KISS, MOVE_TOXIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_NACLSTACK,
    .ability = ABILITY_PURIFYING_SALT,
    .moves = {MOVE_SALT_CURE, MOVE_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_MILCERY,
    .ability = ABILITY_SWEET_VEIL,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_PSYSHOCK, MOVE_CALM_MIND},
    .nature = NATURE_CALM,
    },
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_INCINERATE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_PONYTA,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FLAME_CHARGE, MOVE_STOMP, MOVE_WILD_CHARGE, MOVE_WILL_O_WISP},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 32,
    .species = SPECIES_RABOOT,
    .ability = ABILITY_LIBERO,
    .moves = {MOVE_COUNTER, MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_HEADBUTT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 37,
    .species = SPECIES_SWIRLIX,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_STICKY_WEB},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 38,
    .species = SPECIES_LICKITUNG,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_POWER_WHIP, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MIRACLE_SEED,
    .lvl = 37,
    .species = SPECIES_DIPPLIN,
    .ability = ABILITY_SUPERSWEET_SYRUP,
    .moves = {MOVE_SYRUP_BOMB, MOVE_DRAGON_PULSE, MOVE_ENERGY_BALL, MOVE_PROTECT},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 37,
    .species = SPECIES_HOOTHOOT,
    .ability = ABILITY_KEEN_EYE,
    .moves = {MOVE_MOONBLAST, MOVE_AIR_SLASH, MOVE_EXTRASENSORY, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 37,
    .species = SPECIES_PIDGEOTTO,
    .ability = ABILITY_KEEN_EYE,
    .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_HARD_STONE,
    .lvl = 38,
    .species = SPECIES_BOMBIRDIER,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .moves = {MOVE_ROCK_SLIDE, MOVE_DRILL_RUN, MOVE_AERIAL_ACE, MOVE_ROOST},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ICE_GEM,
    .lvl = 37,
    .species = SPECIES_SANDSHREW_ALOLAN,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_MIST, MOVE_SLASH, MOVE_IRON_HEAD, MOVE_ICE_SPINNER},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_DARK_GEM,
    .lvl = 38,
    .species = SPECIES_NICKIT,
    .ability = ABILITY_STAKEOUT,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH, MOVE_TAIL_SLAP, MOVE_DIG},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_GRASS_GEM,
    .lvl = 37,
    .species = SPECIES_GOSSIFLEUR,
    .ability = ABILITY_COTTON_DOWN,
    .moves = {MOVE_LEAF_TORNADO, MOVE_HYPER_VOICE, MOVE_POLLEN_PUFF, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_DUNSPARCE,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_HEADBUTT, MOVE_COIL, MOVE_GLARE, MOVE_ROOST},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 37,
    .species = SPECIES_KECLEON,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_POWER_UP_PUNCH, MOVE_SHADOW_SNEAK},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 38,
    .species = SPECIES_CYCLIZAR,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_QUICK_ATTACK, MOVE_ICE_SPINNER},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 37,
    .species = SPECIES_CHINGLING,
    .ability = ABILITY_SIMPLE,
    .moves = {MOVE_BATON_PASS, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC},
    .nature = NATURE_HARDY,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_ORBEETLE,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_BUG_BUZZ, MOVE_PSYBEAM, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 38,
    .species = SPECIES_HATTREM,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYBEAM, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 37,
    .species = SPECIES_SINISTEA,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SCALD, MOVE_SUCKER_PUNCH, MOVE_SHADOW_BALL},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 37,
    .species = SPECIES_SLUGMA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_LAVA_PLUME, MOVE_ANCIENT_POWER, MOVE_SCALD, MOVE_CLEAR_SMOG},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MYSTIC_WATER,
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_WATER_PULSE, MOVE_DRAINING_KISS, MOVE_SCALE_SHOT, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 37,
    .species = SPECIES_DODUO,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_PLUCK, MOVE_LUNGE, MOVE_AERIAL_ACE, MOVE_CURSE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 37,
    .species = SPECIES_WARTORTLE,
    .ability = ABILITY_RAIN_DISH,
    .moves = {MOVE_CHILLING_WATER, MOVE_MUD_SHOT, MOVE_AURA_SPHERE, MOVE_SHELL_SMASH},
    .nature = NATURE_RASH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_KINGS_ROCK,
    .lvl = 38,
    .species = SPECIES_AIPOM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_LOW_SWEEP, MOVE_DOUBLE_HIT, MOVE_SHOCK_WAVE, MOVE_TRAILBLAZE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 52,
    .species = SPECIES_VENOMOTH,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 52,
    .species = SPECIES_MASQUERAIN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_SCALD},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 67,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_HEAT_WAVE, MOVE_POWER_GEM, MOVE_STEAM_ERUPTION, MOVE_CURSE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 67,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_MOODY,
    .moves = {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HYPER_BEAM, MOVE_REST},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .lvl = 68,
    .species = SPECIES_BOMBIRDIER,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 67,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 67,
    .species = SPECIES_KABUTOPS,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_BASTIODON,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_ROCK_SLIDE, MOVE_METAL_BURST, MOVE_TOXIC, MOVE_HEAVY_SLAM},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_SLUDGE,
    .lvl = 67,
    .species = SPECIES_CLODSIRE,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_BULLDOZE, MOVE_RECOVER, MOVE_TOXIC, MOVE_POISON_JAB},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 67,
    .species = SPECIES_DIGGERSBY,
    .ability = ABILITY_HUGE_POWER,
    .friendship = 255,
    .moves = {MOVE_QUICK_ATTACK, MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 68,
    .species = SPECIES_EXCADRILL,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_CRUSH_CLAW},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 67,
    .species = SPECIES_MAROWAK,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_BONEMERANG, MOVE_THRASH, MOVE_REST, MOVE_PROTECT},
    .nature = NATURE_NAUGHTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 67,
    .species = SPECIES_SANDACONDA,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_GLARE, MOVE_COIL, MOVE_HIGH_HORSEPOWER, MOVE_SKITTER_SMACK},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 68,
    .species = SPECIES_SANDSLASH,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_CURSE},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 67,
    .species = SPECIES_SUDOWOODO,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_HEAD_SMASH, MOVE_PLAY_ROUGH, MOVE_MIMIC, MOVE_LOW_KICK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .lvl = 67,
    .species = SPECIES_AVALUGG_HISUIAN,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_WIDE_GUARD, MOVE_CURSE},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 68,
    .species = SPECIES_MINIOR,
    .ability = ABILITY_SHIELDS_DOWN,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_POWER_GEM, MOVE_ACROBATICS, MOVE_COSMIC_POWER},
    .nature = NATURE_NAIVE,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 68,
    .species = SPECIES_CENTISKORCH,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_COIL, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_BAND,
    .lvl = 68,
    .species = SPECIES_TALONFLAME,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SWORDS_DANCE, MOVE_WILL_O_WISP},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 67,
    .species = SPECIES_HEATMOR,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_HONE_CLAWS, MOVE_AMNESIA},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 68,
    .species = SPECIES_EMBOAR,
    .ability = ABILITY_TURBOBLAZE,
    .moves = {MOVE_HEAT_CRASH, MOVE_HEADLONG_RUSH, MOVE_GYRO_BALL, MOVE_BODY_PRESS},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MYSTIC_WATER,
    .lvl = 68,
    .species = SPECIES_MAGCARGO,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER},
    .nature = NATURE_QUIET,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_HOUNDOOM,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 68,
    .species = SPECIES_CHARIZARD,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WHITE_HERB,
    .lvl = 68,
    .species = SPECIES_TURTONATOR,
    .ability = ABILITY_SHELL_ARMOR,
    .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_BURNING_BULWARK},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHELL_BELL,
    .lvl = 67,
    .species = SPECIES_RAPIDASH,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ, MOVE_HEADLONG_RUSH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    .ability = ABILITY_ANGER_POINT,
    .moves = {MOVE_RAGING_BULL, MOVE_HEADBUTT, MOVE_ZEN_HEADBUTT, MOVE_SWAGGER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 68,
    .species = SPECIES_SALAZZLE,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_VENOSHOCK, MOVE_TOXIC},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_METAL_COAT,
    .lvl = 68,
    .species = SPECIES_FORRETRESS,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_STEEL_BEAM, MOVE_SPIKES, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_METAL_COAT,
    .lvl = 68,
    .species = SPECIES_BASTIODON,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_STEEL_BEAM, MOVE_METAL_SOUND, MOVE_HEAVY_SLAM, MOVE_ANCIENT_POWER},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_METAL_COAT,
    .lvl = 68,
    .species = SPECIES_BRONZONG,
    .ability = ABILITY_HEATPROOF,
    .moves = {MOVE_STEEL_BEAM, MOVE_EXTRASENSORY, MOVE_METAL_SOUND, MOVE_CONFUSE_RAY},
    .nature = NATURE_RELAXED,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 67,
    .species = SPECIES_INCINEROAR,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_DARKEST_LARIAT, MOVE_STOMPING_TANTRUM},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 67,
    .species = SPECIES_DARMANITAN,
    .ability = ABILITY_GORILLA_TACTICS,
    .moves = {MOVE_FIRE_FANG, MOVE_HAMMER_ARM, MOVE_HEADBUTT, MOVE_ZEN_HEADBUTT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 68,
    .species = SPECIES_CERULEDGE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_BITTER_BLADE, MOVE_PSYCHO_CUT, MOVE_POISON_JAB, MOVE_SHADOW_CLAW},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_VICTREEBEL,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SLAM, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MIRACLE_SEED,
    .lvl = 68,
    .species = SPECIES_TANGROWTH,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_SHOCK_WAVE, MOVE_TOXIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 68,
    .species = SPECIES_LEAVANNY,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_NIGHT_SLASH},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_ORICORIO,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_ALLURING_VOICE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 68,
    .species = SPECIES_CHANDELURE,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_SHOCK_WAVE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WISE_GLASSES,
    .lvl = 68,
    .species = SPECIES_IRON_MOTH,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_OVERHEAT, MOVE_BUG_BUZZ, MOVE_SLUDGE_WAVE, MOVE_HURRICANE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_MAWILE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_CRUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 67,
    .species = SPECIES_COPPERAJAH,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_STRENGTH, MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_AIR_BALLOON,
    .lvl = 68,
    .species = SPECIES_KINGAMBIT,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_KOWTOW_CLEAVE, MOVE_NIGHT_SLASH, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_WAVE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_QUICK_CLAW,
    .lvl = 68,
    .species = SPECIES_COALOSSAL,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_BURN_UP, MOVE_STONE_EDGE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TOXIC_ORB,
    .lvl = 68,
    .species = SPECIES_FLAREON,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_FLAME_CHARGE, MOVE_SUPERPOWER, MOVE_FACADE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 67,
    .species = SPECIES_CASTFORM,
    .ability = ABILITY_FORECAST,
    .moves = {MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_THUNDERBOLT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 67,
    .species = SPECIES_PYROAR,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_IRON_TAIL},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SPELL_TAG,
    .lvl = 68,
    .species = SPECIES_TYPHLOSION_HISUIAN,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_INFERNAL_PARADE, MOVE_FLAMETHROWER, MOVE_HEX, MOVE_SHADOW_BALL},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 67,
    .species = SPECIES_RILLABOOM,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 67,
    .species = SPECIES_SHIINOTIC,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_SPORE, MOVE_DREAM_EATER, MOVE_MOONBLAST, MOVE_GIGA_DRAIN},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CLEAR_AMULET,
    .lvl = 68,
    .species = SPECIES_LILLIGANT_HISUIAN,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_VICTORY_DANCE, MOVE_TEETER_DANCE, MOVE_AXE_KICK, MOVE_LEAF_BLADE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_GRASS_GEM,
    .lvl = 68,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_WEATHER_BALL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 67,
    .species = SPECIES_WO_CHIEN,
    .ability = ABILITY_TABLETS_OF_RUIN,
    .moves = {MOVE_GIGA_DRAIN, MOVE_RUINATION, MOVE_DARK_PULSE, MOVE_MUD_SHOT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_VENUSAURITE,
    .lvl = 69,
    .species = SPECIES_VENUSAUR,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SOLAR_BEAM, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHARIZARDITE_Y,
    .lvl = 78,
    .species = SPECIES_CHARIZARD,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_SCORCHING_SANDS, MOVE_FOCUS_BLAST},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 79,
    .species = SPECIES_GOUGING_FIRE,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_MORNING_SUN},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_RED_ORB,
    .lvl = 80,
    .species = SPECIES_GROUDON,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD},
    .nature = NATURE_IMPISH,
    },
};

//Champion Trevor Fiery Path
static const struct TrainerMon sParty_Pete[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 36,
    .species = SPECIES_SPHEAL,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_BITE, MOVE_AURORA_BEAM, MOVE_WATER_PULSE, MOVE_MIST},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 36,
    .species = SPECIES_APPLIN,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_POUNCE, MOVE_ASTONISH, MOVE_TOXIC},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 36,
    .species = SPECIES_TINKATINK,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_FAKE_OUT, MOVE_BRUTAL_SWING, MOVE_METAL_CLAW, MOVE_SLAM},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 36,
    .species = SPECIES_LITWICK,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_HEX, MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_MINIMIZE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .lvl = 37,
    .species = SPECIES_JIGGLYPUFF,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_BODY_SLAM, MOVE_GYRO_BALL, MOVE_TRAILBLAZE, MOVE_ALLURING_VOICE},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CLEAR_AMULET,
    .lvl = 37,
    .species = SPECIES_RIOLU,
    .ability = ABILITY_MEGA_LAUNCHER,
    .moves = {MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_WATER_PULSE},
    .nature = NATURE_TIMID,
    },
};

//UNUSED
static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 15,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_HITMONCHAN,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_PANGORO,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BULLET_PUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_HAWLUCHA,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FOCUS_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_FLAMIGO,
    .ability = ABILITY_SCRAPPY,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_PAYBACK, MOVE_SWORDS_DANCE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 52,
    .species = SPECIES_QWILFISH,
    },
    {
    .lvl = 52,
    .species = SPECIES_DRAGALGE,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 52,
    .species = SPECIES_ALOMOMOLA,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_SOAK, MOVE_CHILLING_WATER, MOVE_PSYCHIC, MOVE_SCALE_SHOT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 52,
    .species = SPECIES_DONDOZO,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_SOAK, MOVE_BODY_SLAM, MOVE_AQUA_TAIL, MOVE_HEAVY_SLAM},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 52,
    .species = SPECIES_VICTREEBEL,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_GROWTH},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 52,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_PUNCH, MOVE_TRIPLE_AXEL, MOVE_SEED_BOMB},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 52,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 52,
    .species = SPECIES_ROTOM_FAN,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHARP_BEAK,
    .lvl = 47,
    .species = SPECIES_SWANNA,
    .ability = ABILITY_HYDRATION,
    .moves = {MOVE_AIR_SLASH, MOVE_BUBBLE_BEAM, MOVE_FEATHER_DANCE, MOVE_ROOST},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TWISTED_SPOON,
    .lvl = 47,
    .species = SPECIES_KIRLIA,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_HYPNOSIS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 48,
    .species = SPECIES_DONPHAN,
    .ability = ABILITY_EARTH_EATER,
    .moves = {MOVE_EARTHQUAKE, MOVE_SLAM, MOVE_ROLLOUT, MOVE_THUNDER_FANG},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Bryan[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 47,
    .species = SPECIES_PUPITAR,
    .ability = ABILITY_SHED_SKIN,
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_STONE_EDGE, MOVE_IRON_DEFENSE},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 47,
    .species = SPECIES_DUGTRIO_ALOLAN,
    .ability = ABILITY_TANGLING_HAIR,
    .moves = {MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_TRI_ATTACK},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SOFT_SAND,
    .lvl = 48,
    .species = SPECIES_GLISCOR,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_FIRE_FANG},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Branden[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILVER_POWDER,
    .lvl = 45,
    .species = SPECIES_RABSCA,
    .ability = ABILITY_SYNCHRONIZE,
    .moves = {MOVE_EXTRASENSORY, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 46,
    .species = SPECIES_RIBOMBEE,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_STUN_SPORE, MOVE_PSYCHIC},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 45,
    .species = SPECIES_PARASECT,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_SPORE, MOVE_X_SCISSOR, MOVE_SLASH, MOVE_CROSS_POISON},
    .nature = NATURE_IMPISH,
    },
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_ABSORB_BULB,
    .lvl = 37,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_POWER_GEM, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_PROTECT},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .lvl = 38,
    .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RAGING_BULL, MOVE_ZEN_HEADBUTT, MOVE_HEADBUTT, MOVE_REST},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 37,
    .species = SPECIES_CAPSAKID,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GROWTH, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 38,
    .species = SPECIES_TANGELA,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
    .nature = NATURE_BOLD,
    },
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 26,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 26,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 26,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 26,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 26,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 37,
    .gender = FEMALE,
    .species = SPECIES_INDEEDEE,
    .ability = ABILITY_PSYCHIC_SURGE,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 37,
    .species = SPECIES_METANG,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_PSYCHIC_FANGS, MOVE_EXPANDING_FORCE, MOVE_IRON_HEAD, MOVE_ICE_PUNCH},
    .nature = NATURE_HASTY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PSYCHIC_SEED,
    .lvl = 37,
    .species = SPECIES_DUOSION,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_SURF, MOVE_EXPANDING_FORCE, MOVE_ENERGY_BALL, MOVE_ROCK_TOMB},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_FLYING_GEM,
    .lvl = 23,
    .species = SPECIES_GLIGAR,
    .ability = ABILITY_HYPER_CUTTER,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_ACROBATICS, MOVE_SKY_UPPERCUT, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_DRAGON_GEM,
    .lvl = 21,
    .species = SPECIES_SWABLU,
    .ability = ABILITY_CLOUD_NINE,
    .moves = {MOVE_ROUND, MOVE_DRAGON_BREATH, MOVE_DISARMING_VOICE, MOVE_SING},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_SILK_SCARF,
    .lvl = 21,
    .species = SPECIES_GLAMEOW,
    .ability = ABILITY_LIMBER,
    .moves = {MOVE_RETALIATE, MOVE_SLASH, MOVE_SUCKER_PUNCH, MOVE_AERIAL_ACE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 33,
    .species = SPECIES_ELECTABUZZ,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_DISCHARGE, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 33,
    .species = SPECIES_FRAXURE,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_BREAKING_SWIPE, MOVE_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 33,
    .species = SPECIES_BASCULIN,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_CRUNCH, MOVE_TAKE_DOWN},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 33,
    .species = SPECIES_ELGYEM,
    .ability = ABILITY_SYNCHRONIZE,
    .moves = {MOVE_PSYBEAM, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_ENERGY_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PAYAPA_BERRY,
    .lvl = 33,
    .species = SPECIES_WOOPER_PALDEAN,
    .ability = ABILITY_POISON_POINT,
    .moves = {MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_CURSE, MOVE_RECOVER},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SALAC_BERRY,
    .lvl = 33,
    .species = SPECIES_SLOWPOKE_GALARIAN,
    .ability = ABILITY_GLUTTONY,
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICY_WIND, MOVE_MUD_SHOT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_ESPEON,
    .ability = ABILITY_SYNCHRONIZE,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ALLURING_VOICE, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 33,
    .species = SPECIES_INKAY,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_SWAGGER},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PAYAPA_BERRY,
    .lvl = 33,
    .species = SPECIES_SNEASEL_HISUIAN,
    .ability = ABILITY_MERCILESS,
    .moves = {MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_METAL_CLAW, MOVE_TRAILBLAZE},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 33,
    .species = SPECIES_CRABRAWLER,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_CRABHAMMER, MOVE_BRICK_BREAK, MOVE_PAYBACK, MOVE_SLAM},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_PASSIMIAN,
    .ability = ABILITY_RECEIVER,
    .moves = {MOVE_BULK_UP, MOVE_ROCK_SMASH, MOVE_TAKE_DOWN, MOVE_BULLDOZE},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 56,
    .species = SPECIES_JOLTEON,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_THUNDER, MOVE_HYPER_VOICE, MOVE_WEATHER_BALL, MOVE_DETECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_NORMAL_GEM,
    .lvl = 57,
    .species = SPECIES_OBSTAGOON,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_FRUSTRATION, MOVE_THROAT_CHOP, MOVE_RETALIATE, MOVE_CLOSE_COMBAT},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 53,
    .species = SPECIES_VELUZA,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_AQUA_CUTTER, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MUSCLE_BAND,
    .lvl = 52,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 53,
    .species = SPECIES_AUDINO,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_HEAL_BELL},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 53,
    .species = SPECIES_PRIMARINA,
    .ability = ABILITY_LIQUID_VOICE,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_ICY_WIND},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_COLBUR_BERRY,
    .lvl = 61,
    .species = SPECIES_DRIFBLIM,
    .ability = ABILITY_FLARE_BOOST,
    .moves = {MOVE_AIR_SLASH, MOVE_FLAMETHROWER, MOVE_THUNDER, MOVE_WEATHER_BALL},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 62,
    .species = SPECIES_CHESNAUGHT,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_SEED_BOMB, MOVE_HAMMER_ARM, MOVE_SPIKY_SHIELD, MOVE_LEECH_SEED},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 62,
    .species = SPECIES_WUGTRIO,
    .ability = ABILITY_GOOEY,
    .moves = {MOVE_TRIPLE_DIVE, MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP, MOVE_TAKE_DOWN},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 62,
    .species = SPECIES_SAWK,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_COACHING, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 62,
    .species = SPECIES_POLIWRATH,
    .ability = ABILITY_SWIFT_SWIM,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_HYDRO_PUMP, MOVE_COACHING, MOVE_HYPNOSIS},
    .nature = NATURE_LONELY,
    },
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SILVER_POWDER,
    .lvl = 63,
    .species = SPECIES_LOKIX,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_U_TURN, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 62,
    .species = SPECIES_RIBOMBEE,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_BUG_BUZZ, MOVE_PSYCHIC_NOISE, MOVE_STUN_SPORE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 62,
    .species = SPECIES_YANMEGA,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_BUG_BUZZ, MOVE_PSYCHIC_NOISE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 62,
    .species = SPECIES_GARBODOR,
    .ability = ABILITY_WEAK_ARMOR,
    .moves = {MOVE_GUNK_SHOT, MOVE_EXPLOSION, MOVE_SEED_BOMB, MOVE_DRAIN_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FIRE_GEM,
    .lvl = 62,
    .species = SPECIES_COALOSSAL,
    .ability = ABILITY_STEAM_ENGINE,
    .moves = {MOVE_BURN_UP, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_WILL_O_WISP},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 63,
    .species = SPECIES_CONKELDURR,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .lvl = 63,
    .species = SPECIES_SUDOWOODO,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STONE_EDGE, MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_FLAIL},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 62,
    .species = SPECIES_PORYGON2,
    .ability = ABILITY_DOWNLOAD,
    .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_AGILITY},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 62,
    .species = SPECIES_MAGNETON,
    .ability = ABILITY_MAGNET_PULL,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_MAGNET_RISE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_BELT,
    .lvl = 63,
    .species = SPECIES_HITMONTOP,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_TRIPLE_KICK, MOVE_TRIPLE_AXEL, MOVE_GYRO_BALL, MOVE_COUNTER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_BELT,
    .lvl = 63,
    .species = SPECIES_HITMONCHAN,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_JET_PUNCH, MOVE_SUCKER_PUNCH, MOVE_BULLET_PUNCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BLACK_BELT,
    .lvl = 63,
    .species = SPECIES_HITMONLEE,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEGA_KICK, MOVE_BLAZE_KICK, MOVE_TROP_KICK},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 24,
    .species = SPECIES_NIDORAN_M,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_BITE, MOVE_DOUBLE_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 24,
    .species = SPECIES_SNIVY,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_SLAM, MOVE_DRAGON_PULSE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 25 ,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_RETALIATE, MOVE_CRUNCH, MOVE_PLAY_ROUGH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 24,
    .species = SPECIES_NIDORAN_M,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_BITE, MOVE_DOUBLE_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 24,
    .species = SPECIES_SNIVY,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_SLAM, MOVE_DRAGON_PULSE},
    .nature = NATURE_BASHFUL,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 25 ,
    .species = SPECIES_GROWLITHE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_RETALIATE, MOVE_CRUNCH, MOVE_PLAY_ROUGH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 32,
    .species = SPECIES_MINUN,
    .ability = ABILITY_MINUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_THUNDER_WAVE, MOVE_HELPING_HAND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 33,
    .species = SPECIES_PAWMO,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH},
    .nature = NATURE_JOLLY,
    },
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_KINGS_ROCK,
    .lvl = 57,
    .species = SPECIES_MAWILE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_AIR_BALLOON,
    .lvl = 57,
    .species = SPECIES_REVAVROOM,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 58,
    .species = SPECIES_DURALUDON,
    .ability = ABILITY_LIGHT_METAL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

static const struct TrainerMon sParty_RayRizzo[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 98,
    .species = SPECIES_CRESSELIA,
    .ability = ABILITY_HEALER,
    .moves = {MOVE_ICE_BEAM, MOVE_SWAGGER, MOVE_PSYSHOCK, MOVE_TRICK_ROOM},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 98,
    .species = SPECIES_METAGROSS,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_DRAGON_GEM,
    .lvl = 98,
    .species = SPECIES_HYDREIGON,
    .ability = ABILITY_DARK_AURA,
    .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HABAN_BERRY,
    .lvl = 98,
    .species = SPECIES_GARCHOMP,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOPLE_BERRY,
    .lvl = 98,
    .species = SPECIES_TYRANITAR,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_FIRE_PUNCH, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 98,
    .species = SPECIES_ROTOM_WASH,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_ENERGY_BALL},
    .nature = NATURE_MODEST,
    },
};

static const struct TrainerMon sParty_SejunPark[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 98,
    .species = SPECIES_PACHIRISU,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_NUZZLE, MOVE_FOLLOW_ME, MOVE_SUPER_FANG, MOVE_PROTECT},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 98,
    .species = SPECIES_GARCHOMP,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 98,
    .species = SPECIES_TALONFLAME,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_OVERHEAT, MOVE_TAUNT, MOVE_PROTECT},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 98,
    .species = SPECIES_GARDEVOIR,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_SWAGGER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 98,
    .species = SPECIES_GOTHITELLE,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_PSYSHOCK, MOVE_THUNDER_WAVE, MOVE_TICKLE, MOVE_PROTECT},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GYARADOSITE,
    .lvl = 98,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_RyotaOtsubo[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GROUNDIUM_Z,
    .lvl = 98,
    .species = SPECIES_KROOKODILE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_TAUNT, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_NORMALIUM_Z,
    .lvl = 98,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_NATURE_POWER, MOVE_TAILWIND, MOVE_CHARM, MOVE_PROTECT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 98,
    .species = SPECIES_TAPU_FINI,
    .ability = ABILITY_MISTY_SURGE,
    .moves = {MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 98,
    .species = SPECIES_TAPU_KOKO,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_DISCHARGE, MOVE_PROTECT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_THICK_CLUB,
    .lvl = 98,
    .species = SPECIES_MAROWAK_ALOLAN,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_BRICK_BREAK, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 98,
    .species = SPECIES_CELESTEELA,
    .ability = ABILITY_BEAST_BOOST,
    .moves = {MOVE_HEAVY_SLAM, MOVE_FLAMETHROWER, MOVE_LEECH_SEED, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
};

static const struct TrainerMon sParty_EmilioForbes[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_WIKI_BERRY,
    .lvl = 98,
    .species = SPECIES_POLITOED,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_SCALD, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_PROTECT},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FIGY_BERRY,
    .lvl = 98,
    .species = SPECIES_INCINEROAR,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_PROTECT},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 98,
    .species = SPECIES_TAPU_BULU,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_WOOD_HAMMER, MOVE_STONE_EDGE, MOVE_PROTECT, MOVE_SUPERPOWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_PSYCHIUM_Z,
    .lvl = 98,
    .species = SPECIES_LATIAS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_PROTECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GROUNDIUM_Z,
    .lvl = 98,
    .species = SPECIES_LANDORUS_THERIAN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GENGARITE,
    .lvl = 98 ,
    .species = SPECIES_GENGAR,
    .ability = ABILITY_CURSED_BODY,
    .moves = {MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_PERISH_SONG, MOVE_PROTECT},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_WolfeGlick[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_THROAT_SPRAY,
    .lvl = 98,
    .species = SPECIES_FARIGIRAF,
    .ability = ABILITY_ARMOR_TAIL,
    .moves = {MOVE_PROTECT, MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .lvl = 98,
    .species = SPECIES_INCINEROAR,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 98,
    .species = SPECIES_URSHIFU_RAPID_STRIKE_STYLE,
    .ability = ABILITY_UNSEEN_FIST,
    .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_U_TURN},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HEARTHFLAME_MASK,
    .lvl = 98,
    .species = SPECIES_OGERPON_HEARTHFLAME_MASK,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_IVY_CUDGEL, MOVE_SWORDS_DANCE, MOVE_GRASSY_GLIDE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .lvl = 98,
    .species = SPECIES_FLUTTER_MANE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 98,
    .species = SPECIES_RILLABOOM,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_FAKE_OUT, MOVE_WOOD_HAMMER, MOVE_U_TURN, MOVE_GRASSY_GLIDE},
    .nature = NATURE_JOLLY,
    },
};