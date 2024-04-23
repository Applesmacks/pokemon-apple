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
    .lvl = 32,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .lvl = 36,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .lvl = 36,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .lvl = 26,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 26,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 26,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 26,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 30,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .lvl = 30,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 30,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
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
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 27,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .lvl = 26,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 26,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
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
    .lvl = 32,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .lvl = 30,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 33,
    .species = SPECIES_BUDEW,
    .ability = ABILITY_TECHNICIAN,
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
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 26,
    .species = SPECIES_GLOOM,
    }
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
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 25,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
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
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_SURF, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_ROOST},
    .nature = NATURE_RELAXED,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 25,
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
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
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
    .lvl = 26,
    .species = SPECIES_MARILL,
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
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_TRAPINCH,
    .moves = {MOVE_BITE, MOVE_DIG, MOVE_FEINT_ATTACK, MOVE_SAND_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 28,
    .species = SPECIES_SHIFTRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER}
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KADABRA,
    }
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
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Wendy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_MAWILE,
    .moves = {MOVE_BATON_PASS, MOVE_FEINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_FLY, MOVE_WATER_GUN, MOVE_MIST, MOVE_PROTECT}
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 30,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TROPIUS,
    }
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
    .lvl = 30,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 30,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .lvl = 29,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 29,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .lvl = 32,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 32,
    .species = SPECIES_SHUPPET,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .lvl = 26,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_NUMEL,
    }
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
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 40,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET
    }
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
    .lvl = 29,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .lvl = 29,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 40,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 35,
    .species = SPECIES_CLAMPERL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_CORPHISH,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
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
    .lvl = 19,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 25,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .lvl = 31,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .lvl = 20,
    .species = SPECIES_NUMEL,
    }
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
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
    .lvl = 26,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 31,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
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
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ROCKY_HELMET,
    .lvl = 33,
    .species = SPECIES_TOGEDEMARU,
    .ability = ABILITY_IRON_BARBS,
    .moves = {MOVE_TOXIC, MOVE_ZING_ZAP, MOVE_SPIKY_SHIELD, MOVE_SUPER_FANG},
    .nature = NATURE_BRAVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 33,
    .species = SPECIES_DRIFLOON,
    .ability = ABILITY_FLARE_BOOST,
    .moves = {MOVE_HEX, MOVE_ACROBATICS, MOVE_THUNDERBOLT, MOVE_STRENGTH_SAP},
    .nature = NATURE_QUIET,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_MAGNET,
    .lvl = 33,
    .species = SPECIES_EELEKTRIK,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_ACID_SPRAY, MOVE_FLASH_CANNON, MOVE_SUPER_FANG},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SHUCA_BERRY,
    .lvl = 33,
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
    .lvl = 30,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 15,
    .species = SPECIES_WHISMUR,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 22,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 22,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 23,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 18,
    .species = SPECIES_WINGULL,
    }
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

static const struct TrainerMon sParty_Drew[] = {
    {
    .lvl = 23,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .lvl = 21,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    },
    {
    .lvl = 21,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG}
    },
    {
    .lvl = 21,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
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
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .lvl = 24,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .lvl = 20,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 20,
    .species = SPECIES_TAILLOW,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_SILCOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 24,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_CASCOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    }
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
    .lvl = 60,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_OVERHEAT, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_SOLAR_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 60,
    .species = SPECIES_ROARING_MOON,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .lvl = 60,
    .species = SPECIES_GOUGING_FIRE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 60,
    .species = SPECIES_RAGING_BOLT,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_CALM_MIND, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_WEATHER_BALL},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 60,
    .species = SPECIES_WALKING_WAKE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_HYDRO_STEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SALAMENCITE,
    .lvl = 62,
    .species = SPECIES_SALAMENCE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROOST},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
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
    .lvl = 31,
    .species = SPECIES_SOLROCK,
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .lvl = 26,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .lvl = 26,
    .species = SPECIES_NATU,
    },
    {
    .lvl = 26,
    .species = SPECIES_KADABRA,
    }
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
    .lvl = 30,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 30,
    .species = SPECIES_LUNATONE,
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
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    }
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
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 19,
    .species = SPECIES_RALTS,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYSHOCK, MOVE_ICY_WIND, MOVE_ATTRACT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 20,
    .species = SPECIES_VULPIX_ALOLAN,
    .ability = ABILITY_SNOW_WARNING,
    .moves = {MOVE_AURORA_VEIL, MOVE_ICY_WIND, MOVE_HEX, MOVE_DRAINING_KISS},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHARCOAL,
    .lvl = 19,
    .species = SPECIES_FENNEKIN,
    .ability = ABILITY_MAGIC_BOUNCE,
    .moves = {MOVE_FIRE_SPIN, MOVE_PSYBEAM, MOVE_INCINERATE, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_TANGA_BERRY,
    .lvl = 19,
    .species = SPECIES_GOTHITA,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_SNARL, MOVE_DAZZLING_GLEAM, MOVE_PSYBEAM, MOVE_CHARGE_BEAM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 19,
    .species = SPECIES_MORELULL,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_MEGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_DAZZLING_GLEAM, MOVE_SLEEP_POWDER},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BERRY_JUICE,
    .lvl = 19,
    .species = SPECIES_MESPRIT,
    .ability = ABILITY_PIXILATE,
    .moves = {MOVE_SWIFT, MOVE_PSYBEAM, MOVE_GRASS_KNOT, MOVE_SHOCK_WAVE},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 24,
    .species = SPECIES_WO_CHIEN,
    .ability = ABILITY_TABLETS_OF_RUIN,
    .moves = {MOVE_GIGA_DRAIN, MOVE_DARK_PULSE, MOVE_RUINATION, MOVE_MUD_SHOT},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 24,
    .species = SPECIES_SABLEYE,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TAUNT, MOVE_FOUL_PLAY},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 24,
    .species = SPECIES_MORPEKO,
    .ability = ABILITY_HUNGER_SWITCH,
    .moves = {MOVE_AURA_WHEEL, MOVE_KNOCK_OFF, MOVE_SEED_BOMB, MOVE_VOLT_SWITCH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 25,
    .species = SPECIES_WYNAUT,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND, MOVE_ENCORE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_SCOPE_LENS,
    .lvl = 24,
    .species = SPECIES_ABSOL,
    .ability = ABILITY_SUPER_LUCK,
    .moves = {MOVE_SLASH, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_AIR_SLASH},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 25,
    .species = SPECIES_HOUNDOUR,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_EJECT_BUTTON,
    .lvl = 33,
    .species = SPECIES_IRON_TREADS,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_STEALTH_ROCK, MOVE_THUNDER_FANG, MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 34,
    .species = SPECIES_JOLTIK,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_STICKY_WEB, MOVE_THUNDER, MOVE_LUNGE, MOVE_THUNDER_WAVE},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ELECTRIC_GEM,
    .lvl = 33,
    .species = SPECIES_ZERAORA,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_PLASMA_FISTS, MOVE_KNOCK_OFF, MOVE_VOLT_SWITCH, MOVE_CLOSE_COMBAT},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 33,
    .species = SPECIES_ROTOM_MOW,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDER, MOVE_LEAF_STORM, MOVE_NASTY_PLOT, MOVE_WILL_O_WISP},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 33,
    .species = SPECIES_DRACOZOLT,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_BOLT_BEAK, MOVE_SLAM, MOVE_DRAGON_TAIL, MOVE_PLUCK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 35,
    .species = SPECIES_XURKITREE,
    .ability = ABILITY_BEAST_BOOST,
    .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 24,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_SMOG, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 26,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_TACKLE, MOVE_SUNNY_DAY, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 29,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 27,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ENCORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 27,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SLASH, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 31,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 29,
    .species = SPECIES_SWABLU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PERISH_SONG, MOVE_MIRROR_MOVE, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 29,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_GUN, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 31,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_FURY_ATTACK, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 41,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 41,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 42,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 42,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 41,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 43,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 43,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
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
    .lvl = 30,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .lvl = 32,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
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
    .lvl = 30,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 35,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    }
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
    .lvl = 17,
    .species = SPECIES_MIME_JR,
    .ability = ABILITY_FILTER,
    .moves = {MOVE_CONFUSION, MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_OCCA_BERRY,
    .lvl = 17,
    .species = SPECIES_COTTONEE,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_FAIRY_WIND, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_ATTRACT},
    .nature = NATURE_BOLD,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_WATER_GEM,
    .lvl = 18,
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
    .lvl = 18,
    .species = SPECIES_CUTIEFLY,
    .ability = ABILITY_SHIELD_DUST,
    .moves = {MOVE_DRAINING_KISS, MOVE_STRUGGLE_BUG, MOVE_STICKY_WEB, MOVE_STUN_SPORE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 19,
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
    .lvl = 33,
    .species = SPECIES_WATTREL,
    .ability = ABILITY_KEEN_EYE,
    .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 33,
    .species = SPECIES_VOLTORB_HISUIAN,
    .ability = ABILITY_STATIC,
    .moves = {MOVE_THUNDER, MOVE_CHLOROBLAST, MOVE_ELECTRO_BALL, MOVE_EXPLOSION},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_ELECTRIC_SEED,
    .lvl = 33,
    .species = SPECIES_HAWLUCHA,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_FLYING_PRESS, MOVE_HIGH_JUMP_KICK, MOVE_BOUNCE, MOVE_SWORDS_DANCE},
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
    .lvl = 19,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .lvl = 19,
    .species = SPECIES_ARON,
    }
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
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
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
    .lvl = 16,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 17,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
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
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 16,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_TENTACRUEL,
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
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
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
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
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
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
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
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_DODUO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 30,
    .species = SPECIES_SKARMORY,
    }
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
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_DODUO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .lvl = 28,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 28,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .lvl = 29,
    .species = SPECIES_SWABLU,
    }
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
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    }
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
    .lvl = 26,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    }
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
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 18,
    .species = SPECIES_KOFFING,
    },
    {
    .lvl = 18,
    .species = SPECIES_NINJASK,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 18,
    .species = SPECIES_MAKUHITA,
    }
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
    .lvl = 19,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 28,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 30,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
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
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 26,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 25,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
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
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
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
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .lvl = 22,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG}
    },
    {
    .lvl = 22,
    .species = SPECIES_MARILL,
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
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
    .lvl = 18,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    }
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
    .lvl = 19,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 19,
    .species = SPECIES_ODDISH,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 32,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
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
    .lvl = 26,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 26,
    .species = SPECIES_DUSTOX,
    }
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
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
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
    .lvl = 25,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 25,
    .species = SPECIES_MACHOKE,
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
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 56,
    .species = SPECIES_TYPHLOSION,
    .ability = ABILITY_WHITE_SMOKE,
    .moves = {MOVE_ERUPTION, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CLEAR_AMULET,
    .lvl = 56,
    .species = SPECIES_CINDERACE,
    .ability = ABILITY_LIBERO,
    .moves = {MOVE_PYRO_BALL, MOVE_U_TURN, MOVE_SUCKER_PUNCH, MOVE_HIGH_JUMP_KICK},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 56,
    .species = SPECIES_INFERNAPE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHARIZARDITE_X,
    .lvl = 57,
    .species = SPECIES_CHARIZARD,
    .ability = ABILITY_SOLAR_POWER,
    .moves = {MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
    .nature = NATURE_ADAMANT,
    },
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 27,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 31,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 31,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
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
    .lvl = 18,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
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
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
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
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 29,
    .species = SPECIES_FLAAFFY,
    .ability = ABILITY_STATIC,
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 29,
    .species = SPECIES_FLAAFFY,
    .ability = ABILITY_STATIC,
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

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_LIGHT_CLAY,
    .lvl = 29,
    .species = SPECIES_FLAAFFY,
    .ability = ABILITY_STATIC,
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
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
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
    .lvl = 26,
    .species = SPECIES_SANDSLASH,
    }
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
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    }
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
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    }
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
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
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
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_BERRY_JUICE,
    .lvl = 18,
    .species = SPECIES_BONSLY,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_THROW, MOVE_TRAILBLAZE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_PETAYA_BERRY,
    .lvl = 19,
    .species = SPECIES_DEDENNE,
    .ability = ABILITY_CHEEK_POUCH,
    .moves = {MOVE_SUBSTITUTE, MOVE_NUZZLE, MOVE_PARABOLIC_CHARGE, MOVE_DAZZLING_GLEAM},
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
    .ability = ABILITY_FLUFFY,
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .lvl = 20,
    .species = SPECIES_ZUBAT,
    }
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 36,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 36,
    .species = SPECIES_NATU,
    }
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
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 20,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_ZUBAT,
    }
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
    .moves = {MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_BITE, MOVE_TAKE_DOWN},
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
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 38,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 39,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 24,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 25,
    .species = SPECIES_CAMERUPT,
    }
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
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 22,
    .species = SPECIES_SNEASEL,
    .ability = ABILITY_INNER_FOCUS,
    .moves = {MOVE_ICE_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_BRICK_BREAK},
    .nature = NATURE_JOLLY,
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
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
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
    .lvl = 28,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_HARD_STONE,
    .lvl = 17,
    .species = SPECIES_ANORITH,
    .ability = ABILITY_BATTLE_ARMOR,
    .moves = {MOVE_SMACK_DOWN, MOVE_SKITTER_SMACK, MOVE_PROTECT, MOVE_TOXIC},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_BRIGHT_POWDER,
    .lvl = 17,
    .species = SPECIES_LARVESTA,
    .ability = ABILITY_FLAME_BODY,
    .moves = {MOVE_SKITTER_SMACK, MOVE_FLAME_CHARGE, MOVE_ROOST, MOVE_WILL_O_WISP},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EVIOLITE,
    .lvl = 17,
    .species = SPECIES_NINCADA,
    .ability = ABILITY_COMPOUND_EYES,
    .moves = {MOVE_DIG, MOVE_SKITTER_SMACK, MOVE_SAND_ATTACK, MOVE_NONE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_LOW,
    .heldItem = ITEM_EXPERT_BELT,
    .lvl = 17,
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
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
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
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 20,
    .species = SPECIES_BALTOY,
    }
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
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 31,
    .species = SPECIES_MANECTRIC,
    }
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
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
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
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 27,
    .species = SPECIES_CRYOGONAL,
    .ability = ABILITY_ANGER_SHELL,
    .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_ANCIENT_POWER, MOVE_EXPLOSION},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 33,
    .species = SPECIES_JOLTEON,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_MAGNET_RISE, MOVE_SING},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MEDIUM,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_BUG_BUZZ, MOVE_DISCHARGE, MOVE_BATON_PASS, MOVE_TAIL_GLOW},
    .nature = NATURE_TIMID,
    },
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 28,
    .species = SPECIES_NINCADA,
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
    },
    {
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    }
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

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
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

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
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

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 25,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
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
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
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
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
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
    .lvl = 19,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 35,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .lvl = 20,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .lvl = 27,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
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
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
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
    .lvl = 27,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 29,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 26,
    .species = SPECIES_FEEBAS,
    },
    {
    .lvl = 23,
    .species = SPECIES_CARVANHA,
    }
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
    .ability = ABILITY_STATIC,
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
    .lvl = 17,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 19,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .lvl = 18,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 14,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
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
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 15,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 26,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 22,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 22,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
    .lvl = 22,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 22,
    .species = SPECIES_NUZLEAF,
    }
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
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SPOINK,
    }
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
    .ability = ABILITY_INNER_FOCUS,
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
    .lvl = 26,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .lvl = 25,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 28,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = IV_SPREAD_HIGH,
    .heldItem = ITEM_CHOICE_BAND,
    .lvl = 24,
    .species = SPECIES_NIDORAN_M,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_BITE, MOVE_TAKE_DOWN},
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
    .moves = {MOVE_POISON_JAB, MOVE_AERIAL_ACE, MOVE_BITE, MOVE_TAKE_DOWN},
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
    .lvl = 33,
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
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 30,
    .species = SPECIES_TROPIUS,
    }
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
    .lvl = 5,
    .species = SPECIES_CRESSELIA,
    .ability = ABILITY_HEALER,
    .moves = {MOVE_ICE_BEAM, MOVE_SWAGGER, MOVE_PSYSHOCK, MOVE_TRICK_ROOM},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LUM_BERRY,
    .lvl = 5,
    .species = SPECIES_METAGROSS,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_DRAGON_GEM,
    .lvl = 5,
    .species = SPECIES_HYDREIGON,
    .ability = ABILITY_DARK_AURA,
    .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HABAN_BERRY,
    .lvl = 5,
    .species = SPECIES_GARCHOMP,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOPLE_BERRY,
    .lvl = 5,
    .species = SPECIES_TYRANITAR,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_FIRE_PUNCH, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 5,
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
    .lvl = 5,
    .species = SPECIES_PACHIRISU,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_NUZZLE, MOVE_FOLLOW_ME, MOVE_SUPER_FANG, MOVE_PROTECT},
    .nature = NATURE_IMPISH,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 5,
    .species = SPECIES_GARCHOMP,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_PROTECT},
    .nature = NATURE_JOLLY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 5,
    .species = SPECIES_TALONFLAME,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_OVERHEAT, MOVE_TAUNT, MOVE_PROTECT},
    .nature = NATURE_NAIVE,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 5,
    .species = SPECIES_GARDEVOIR,
    .ability = ABILITY_TELEPATHY,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_SWAGGER},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 5,
    .species = SPECIES_GOTHITELLE,
    .ability = ABILITY_SHADOW_TAG,
    .moves = {MOVE_PSYSHOCK, MOVE_THUNDER_WAVE, MOVE_TICKLE, MOVE_PROTECT},
    .nature = NATURE_CALM,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GYARADOSITE,
    .lvl = 5,
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
    .lvl = 5,
    .species = SPECIES_KROOKODILE,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_TAUNT, MOVE_PROTECT},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_NORMALIUM_Z,
    .lvl = 5,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_NATURE_POWER, MOVE_TAILWIND, MOVE_CHARM, MOVE_PROTECT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 5,
    .species = SPECIES_TAPU_FINI,
    .ability = ABILITY_MISTY_SURGE,
    .moves = {MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 5,
    .species = SPECIES_TAPU_KOKO,
    .ability = ABILITY_ELECTRIC_SURGE,
    .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_DISCHARGE, MOVE_PROTECT},
    .nature = NATURE_MODEST,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_THICK_CLUB,
    .lvl = 5,
    .species = SPECIES_MAROWAK_ALOLAN,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_BRICK_BREAK, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 5,
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
    .lvl = 5,
    .species = SPECIES_POLITOED,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_SCALD, MOVE_ENCORE, MOVE_PERISH_SONG, MOVE_PROTECT},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_FIGY_BERRY,
    .lvl = 5,
    .species = SPECIES_INCINEROAR,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_PROTECT},
    .nature = NATURE_SASSY,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 5,
    .species = SPECIES_TAPU_BULU,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_WOOD_HAMMER, MOVE_STONE_EDGE, MOVE_PROTECT, MOVE_SUPERPOWER},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_PSYCHIUM_Z,
    .lvl = 5,
    .species = SPECIES_LATIAS,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_PROTECT},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GROUNDIUM_Z,
    .lvl = 5,
    .species = SPECIES_LANDORUS_THERIAN,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_PROTECT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_GENGARITE,
    .lvl = 5 ,
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
    .lvl = 5,
    .species = SPECIES_FARIGIRAF,
    .ability = ABILITY_ARMOR_TAIL,
    .moves = {MOVE_PROTECT, MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .lvl = 5,
    .species = SPECIES_INCINEROAR,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT},
    .nature = NATURE_CAREFUL,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_CHOICE_SCARF,
    .lvl = 5,
    .species = SPECIES_URSHIFU_RAPID_STRIKE_STYLE,
    .ability = ABILITY_UNSEEN_FIST,
    .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_U_TURN},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_HEARTHFLAME_MASK,
    .lvl = 5,
    .species = SPECIES_OGERPON_HEARTHFLAME_MASK,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_IVY_CUDGEL, MOVE_SWORDS_DANCE, MOVE_GRASSY_GLIDE},
    .nature = NATURE_ADAMANT,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .lvl = 5,
    .species = SPECIES_FLUTTER_MANE,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_CALM_MIND},
    .nature = NATURE_TIMID,
    },
    {
    .iv = IV_SPREAD_MAX,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 5,
    .species = SPECIES_RILLABOOM,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_FAKE_OUT, MOVE_WOOD_HAMMER, MOVE_U_TURN, MOVE_GRASSY_GLIDE},
    .nature = NATURE_JOLLY,
    },
};