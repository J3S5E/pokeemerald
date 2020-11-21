#define TUTOR_LEARNSET(moves) ((u8)(moves))
#define TUTOR(move) ((u64)1 << (TUTOR_##move))
#define TUTOR_LEARNSET_END   0xFF

const u16 gTutorMoves[] =
{
    [TUTOR_MOVE_AIR_CUTTER] = MOVE_AIR_CUTTER,
    [TUTOR_MOVE_ANCIENT_POWER] = MOVE_ANCIENT_POWER,
    [TUTOR_MOVE_AQUA_TAIL] = MOVE_AQUA_TAIL,
    [TUTOR_MOVE_BLAST_BURN] = MOVE_BLAST_BURN,
    [TUTOR_MOVE_BLOCK] = MOVE_BLOCK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_BOUNCE] = MOVE_BOUNCE,
    [TUTOR_MOVE_BUG_BITE] = MOVE_BUG_BITE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_DEFENSE_CURL] = MOVE_DEFENSE_CURL,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_DRACO_METEOR] = MOVE_DRACO_METEOR,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_DYNAMIC_PUNCH] = MOVE_DYNAMIC_PUNCH,
    [TUTOR_MOVE_EARTH_POWER] = MOVE_EARTH_POWER,
    [TUTOR_MOVE_ENDEAVOR] = MOVE_ENDEAVOR,
    [TUTOR_MOVE_ENDURE] = MOVE_ENDURE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_FRENZY_PLANT] = MOVE_FRENZY_PLANT,
    [TUTOR_MOVE_FURY_CUTTER] = MOVE_FURY_CUTTER,
    [TUTOR_MOVE_GASTRO_ACID] = MOVE_GASTRO_ACID,
	[TUTOR_MOVE_GRAVITY] = MOVE_GRAVITY,
    [TUTOR_MOVE_GUNK_SHOT] = MOVE_GUNK_SHOT,
    [TUTOR_MOVE_HEADBUTT] = MOVE_HEADBUTT,
    [TUTOR_MOVE_HEAL_BELL] = MOVE_HEAL_BELL,
    [TUTOR_MOVE_HEAT_WAVE] = MOVE_HEAT_WAVE,
    [TUTOR_MOVE_HELPING_HAND] = MOVE_HELPING_HAND,
    [TUTOR_MOVE_HYDRO_CANNON] = MOVE_HYDRO_CANNON,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
    [TUTOR_MOVE_ICY_WIND] = MOVE_ICY_WIND,
    [TUTOR_MOVE_IRON_DEFENSE] = MOVE_IRON_DEFENSE,
    [TUTOR_MOVE_IRON_HEAD] = MOVE_IRON_HEAD,
    [TUTOR_MOVE_KNOCK_OFF] = MOVE_KNOCK_OFF,
    [TUTOR_MOVE_LAST_RESORT] = MOVE_LAST_RESORT,
    [TUTOR_MOVE_LOW_KICK] = MOVE_LOW_KICK,
    [TUTOR_MOVE_MAGIC_COAT] = MOVE_MAGIC_COAT,
    [TUTOR_MOVE_MAGNET_RISE] = MOVE_MAGNET_RISE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_MUD_SLAP] = MOVE_MUD_SLAP,
    [TUTOR_MOVE_OMINOUS_WIND] = MOVE_OMINOUS_WIND,
    [TUTOR_MOVE_OUTRAGE] = MOVE_OUTRAGE,
    [TUTOR_MOVE_PAIN_SPLIT] = MOVE_PAIN_SPLIT,
    [TUTOR_MOVE_PSYCH_UP] = MOVE_PSYCH_UP,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_ROLE_PLAY] = MOVE_ROLE_PLAY,
    [TUTOR_MOVE_ROLLOUT] = MOVE_ROLLOUT,
    [TUTOR_MOVE_SEED_BOMB] = MOVE_SEED_BOMB,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_SIGNAL_BEAM] = MOVE_SIGNAL_BEAM,
    [TUTOR_MOVE_SKY_ATTACK] = MOVE_SKY_ATTACK,
    [TUTOR_MOVE_SLEEP_TALK] = MOVE_SLEEP_TALK,
    [TUTOR_MOVE_SNORE] = MOVE_SNORE,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_SPITE] = MOVE_SPITE,
    [TUTOR_MOVE_STRING_SHOT] = MOVE_STRING_SHOT,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
    [TUTOR_MOVE_SUCKER_PUNCH] = MOVE_SUCKER_PUNCH,
    [TUTOR_MOVE_SUPERPOWER] = MOVE_SUPERPOWER,
    [TUTOR_MOVE_SUPER_FANG] = MOVE_SUPER_FANG,
    [TUTOR_MOVE_SWAGGER] = MOVE_SWAGGER,
    [TUTOR_MOVE_SWIFT] = MOVE_SWIFT,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_SYNTHESIS] = MOVE_SYNTHESIS,
    [TUTOR_MOVE_TAILWIND] = MOVE_TAILWIND,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_TRICK] = MOVE_TRICK,
    [TUTOR_MOVE_TWISTER] = MOVE_TWISTER,
    [TUTOR_MOVE_UPROAR] = MOVE_UPROAR,
    [TUTOR_MOVE_VACUUM_WAVE] = MOVE_VACUUM_WAVE,
    [TUTOR_MOVE_WORRY_SEED] = MOVE_WORRY_SEED,
    [TUTOR_MOVE_ZEN_HEADBUTT] = MOVE_ZEN_HEADBUTT,
};


static const u8 sNoneTUTORLearnset[] =
{
    TUTOR_LEARNSET_END
};

static const u8 sBulbasaurTUTORLearnset[] =
{
    TUTOR_MOVE_FURY_CUTTER,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_KNOCK_OFF,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_SEED_BOMB,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_STRING_SHOT,
    TUTOR_MOVE_SYNTHESIS,
    TUTOR_MOVE_WORRY_SEED,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_DEFENSE CURL,
    TUTOR_MOVE_MIMIC,
    TUTOR_LEARNSET_END
};
   
static const u8 sIvysaurTUTORLearnset[] =
{
	TUTOR_MOVE_FURY_CUTTER,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_KNOCK_OFF,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_SEED_BOMB,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_STRING_SHOT,
    TUTOR_MOVE_SYNTHESIS,
    TUTOR_MOVE_WORRY_SEED,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_MIMIC,
    TUTOR_LEARNSET_END
};
   
static const u8 sVenusaurTUTORLearnset[] =
{
	TUTOR_MOVE_BLOCK,
    TUTOR_MOVE_FRENZY_PLANT,
    TUTOR_MOVE_FURY_CUTTER,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_KNOCK_OFF,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_OUTRAGE,
    TUTOR_MOVE_SEED_BOMB,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_STRING_SHOT,
    TUTOR_MOVE_SYNTHESIS,
    TUTOR_MOVE_WORRY_SEED,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_MIMIC,
    TUTOR_LEARNSET_END
};
   
static const u8 sCharmanderTUTORLearnset[] =
{
	TUTOR_MOVE_FIRE_PUNCH,
    TUTOR_MOVE_FURY_CUTTER,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_HEAT_WAVE,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_SWIFT,
    TUTOR_MOVE_THUNDERPUNCH,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_DYNAMICPUNCH,
    TUTOR_MOVE_MEGA_KICK,
    TUTOR_MOVE_MEGA_PUNCH,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_RAGE,
    TUTOR_MOVE_SEISMIC_TOSS,
    TUTOR_LEARNSET_END
};
   
static const u8 sCharmeleonTUTORLearnset[] =
{
	TUTOR_MOVE_FIRE_PUNCH,
    TUTOR_MOVE_FURY_CUTTER,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_HEAT_WAVE,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_SWIFT,
    TUTOR_MOVE_THUNDERPUNCH,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_DYNAMICPUNCH,
    TUTOR_MOVE_MEGA_KICK,
    TUTOR_MOVE_MEGA_PUNCH,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_RAGE,
    TUTOR_MOVE_SEISMIC_TOSS,
    TUTOR_LEARNSET_END
};
   
static const u8 sCharizardTUTORLearnset[] =
{
	TUTOR_MOVE_AIR_CUTTER,
    TUTOR_MOVE_BLAST_BURN,
    TUTOR_MOVE_FIRE_PUNCH,
    TUTOR_MOVE_FURY_CUTTER,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_HEAT_WAVE,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_OMINOUS_WIND,
    TUTOR_MOVE_OUTRAGE,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_SWIFT,
    TUTOR_MOVE_TAILWIND,
    TUTOR_MOVE_THUNDERPUNCH,
    TUTOR_MOVE_TWISTER,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_DYNAMICPUNCH,
    TUTOR_MOVE_MEGA_KICK,
    TUTOR_MOVE_MEGA_PUNCH,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_RAGE,
    TUTOR_MOVE_SEISMIC_TOSS,
    TUTOR_LEARNSET_END
};
   
static const u8 sSquirtleTUTORLearnset[] =
{
	TUTOR_MOVE_AQUA_TAIL,
    TUTOR_MOVE_DIVE,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_ICE_PUNCH,
    TUTOR_MOVE_ICY_WIND,
    TUTOR_MOVE_IRON_DEFENSE,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_ROLLOUT,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_ZEN_HEADBUTT,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_COUNTER,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_DYNAMICPUNCH,
    TUTOR_MOVE_MEGA_KICK,
    TUTOR_MOVE_MEGA_PUNCH,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_SEISMIC_TOSS,
    TUTOR_LEARNSET_END
};
   
static const u8 sWartortleTUTORLearnset[] =
{
	TUTOR_MOVE_AQUA_TAIL,
    TUTOR_MOVE_DIVE,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_ICE_PUNCH,
    TUTOR_MOVE_ICY_WIND,
    TUTOR_MOVE_IRON_DEFENSE,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_ROLLOUT,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_ZEN_HEADBUTT,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_COUNTER,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_DYNAMICPUNCH,
    TUTOR_MOVE_MEGA_KICK,
    TUTOR_MOVE_MEGA_PUNCH,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_SEISMIC_TOSS,
    TUTOR_LEARNSET_END
};
   
static const u8 sBlastoiseTUTORLearnset[] =
{
	TUTOR_MOVE_AQUA_TAIL,
    TUTOR_MOVE_DIVE,
    TUTOR_MOVE_HEADBUTT,
    TUTOR_MOVE_HYDRO_CANNON,
    TUTOR_MOVE_ICE_PUNCH,
    TUTOR_MOVE_ICY_WIND,
    TUTOR_MOVE_IRON_DEFENSE,
    TUTOR_MOVE_MUD_SLAP,
    TUTOR_MOVE_OUTRAGE,
    TUTOR_MOVE_ROLLOUT,
    TUTOR_MOVE_SIGNAL_BEAM,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_ZEN_HEADBUTT,
    TUTOR_MOVE_BODY_SLAM,
    TUTOR_MOVE_COUNTER,
    TUTOR_MOVE_DEFENSE_CURL,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_DYNAMICPUNCH,
    TUTOR_MOVE_MEGA_KICK,
    TUTOR_MOVE_MEGA_PUNCH,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_SEISMIC_TOSS,
    TUTOR_LEARNSET_END
};
   
static const u8 sCaterpieTUTORLearnset[] =
{
	TUTOR_MOVE_BUG_BITE,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_STRING_SHOT,
    TUTOR_LEARNSET_END
};
   
static const u8 sMetapodTUTORLearnset[] =
{
	TUTOR_MOVE_BUG_BITE,
    TUTOR_MOVE_IRON_DEFENSE,
    TUTOR_MOVE_STRING_SHOT,
    TUTOR_LEARNSET_END
};
   
static const u8 sButterfreeTUTORLearnset[] =
{
	TUTOR_MOVE_AIR_CUTTER,
    TUTOR_MOVE_BUG_BITE,
    TUTOR_MOVE_OMINOUS_WIND,
    TUTOR_MOVE_SIGNAL_BEAM,
    TUTOR_MOVE_SNORE,
    TUTOR_MOVE_STRING_SHOT,
    TUTOR_MOVE_SWIFT,
    TUTOR_MOVE_TAILWIND,
    TUTOR_MOVE_TWISTER,
    TUTOR_MOVE_DOUBLE_EDGE,
    TUTOR_MOVE_MIMIC,
    TUTOR_MOVE_MORNING_SUN,
    TUTOR_MOVE_NIGHTMARE,
    TUTOR_LEARNSET_END
};
   
static const u8 sWeedleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKakunaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBeedrillTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPidgeyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPidgeottoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPidgeotTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRattataTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRaticateTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSpearowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFearowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sEkansTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sArbokTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPikachuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRaichuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSandshrewTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSandslashTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNidoran_FTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNidorinaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNidoqueenTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNidoran_MTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNidorinoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNidokingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sClefairyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sClefableTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVulpixTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNinetalesTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sJigglypuffTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWigglytuffTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sZubatTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGolbatTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sOddishTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGloomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVileplumeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sParasTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sParasectTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVenonatTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVenomothTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDiglettTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDugtrioTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMeowthTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPersianTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPsyduckTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGolduckTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMankeyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPrimeapeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGrowlitheTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sArcanineTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPoliwagTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPoliwhirlTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPoliwrathTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAbraTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKadabraTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAlakazamTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMachopTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMachokeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMachampTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBellsproutTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWeepinbellTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVictreebelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTentacoolTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTentacruelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGeodudeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGravelerTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGolemTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPonytaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRapidashTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSlowpokeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSlowbroTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagnemiteTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagnetonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFarfetchdTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDoduoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDodrioTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSeelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDewgongTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGrimerTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMukTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShellderTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCloysterTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGastlyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHaunterTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGengarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sOnixTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDrowzeeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHypnoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKrabbyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKinglerTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVoltorbTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sElectrodeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sExeggcuteTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sExeggutorTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCuboneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMarowakTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHitmonleeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHitmonchanTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLickitungTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKoffingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWeezingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRhyhornTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRhydonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChanseyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTangelaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKangaskhanTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHorseaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSeadraTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGoldeenTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSeakingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStaryuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStarmieTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMr_MimeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sScytherTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sJynxTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sElectabuzzTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagmarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPinsirTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTaurosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagikarpTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGyaradosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLaprasTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDittoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sEeveeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVaporeonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sJolteonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFlareonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPorygonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sOmanyteTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sOmastarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKabutoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKabutopsTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAerodactylTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSnorlaxTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sArticunoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sZapdosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMoltresTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDratiniTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDragonairTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDragoniteTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMewtwoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMewTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChikoritaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBayleefTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMeganiumTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCyndaquilTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sQuilavaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTyphlosionTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTotodileTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCroconawTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFeraligatrTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSentretTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFurretTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHoothootTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNoctowlTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLedybaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLedianTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSpinarakTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAriadosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCrobatTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChinchouTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLanturnTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPichuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCleffaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sIgglybuffTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTogepiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTogeticTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNatuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sXatuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMareepTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFlaaffyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAmpharosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBellossomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMarillTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAzumarillTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSudowoodoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPolitoedTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHoppipTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSkiploomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sJumpluffTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAipomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSunkernTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSunfloraTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sYanmaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWooperTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sQuagsireTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sEspeonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sUmbreonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMurkrowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSlowkingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMisdreavusTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sUnownTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWobbuffetTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGirafarigTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPinecoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sForretressTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDunsparceTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGligarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSteelixTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSnubbullTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGranbullTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sQwilfishTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sScizorTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShuckleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHeracrossTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSneaselTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTeddiursaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sUrsaringTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSlugmaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagcargoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSwinubTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPiloswineTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCorsolaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRemoraidTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sOctilleryTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDelibirdTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMantineTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSkarmoryTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHoundourTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHoundoomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKingdraTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPhanpyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDonphanTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPorygon2TUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStantlerTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSmeargleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTyrogueTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHitmontopTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSmoochumTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sElekidTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagbyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMiltankTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBlisseyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRaikouTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sEnteiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSuicuneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLarvitarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPupitarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTyranitarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLugiaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHo_OhTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCelebiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTreeckoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGrovyleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSceptileTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTorchicTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCombuskenTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBlazikenTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMudkipTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMarshtompTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSwampertTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPoochyenaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMightyenaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sZigzagoonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLinooneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWurmpleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSilcoonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBeautiflyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCascoonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDustoxTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLotadTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLombreTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLudicoloTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSeedotTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNuzleafTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShiftryTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNincadaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNinjaskTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShedinjaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTaillowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSwellowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShroomishTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBreloomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSpindaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWingullTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPelipperTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSurskitTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMasquerainTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWailmerTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWailordTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSkittyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDelcattyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKecleonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBaltoyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sClaydolTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNosepassTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTorkoalTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSableyeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBarboachTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWhiscashTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLuvdiscTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCorphishTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCrawdauntTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFeebasTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMiloticTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCarvanhaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSharpedoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTrapinchTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVibravaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFlygonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMakuhitaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHariyamaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sElectrikeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sManectricTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sNumelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCameruptTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSphealTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSealeoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWalreinTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCacneaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCacturneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSnoruntTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGlalieTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLunatoneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSolrockTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAzurillTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSpoinkTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGrumpigTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPlusleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMinunTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMawileTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMedititeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMedichamTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSwabluTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAltariaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWynautTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDuskullTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDusclopsTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRoseliaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSlakothTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVigorothTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSlakingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGulpinTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSwalotTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTropiusTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWhismurTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLoudredTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sExploudTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sClamperlTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHuntailTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGorebyssTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAbsolTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShuppetTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBanetteTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSeviperTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sZangooseTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRelicanthTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAronTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLaironTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAggronTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCastformTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVolbeatTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sIllumiseTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLileepTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCradilyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAnorithTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sArmaldoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRaltsTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKirliaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGardevoirTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBagonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShelgonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSalamenceTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBeldumTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMetangTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMetagrossTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRegirockTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRegiceTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRegisteelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKyogreTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGroudonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRayquazaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLatiasTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLatiosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sJirachiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDeoxysTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChimechoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTurtwigTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGrotleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTorterraTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChimcharTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMonfernoTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sInfernapeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPiplupTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPrinplupTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sEmpoleonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStarlyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStaraviaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStaraptorTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBidoofTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBibarelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKricketotTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sKricketuneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShinxTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLuxioTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLuxrayTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBudewTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRoseradeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCranidosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRampardosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShieldonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBastiodonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBurmyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWormadamTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMothimTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCombeeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sVespiquenTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPachirisuTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBuizelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFloatzelTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCherubiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCherrimTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShellosTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGastrodonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAmbipomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDrifloonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDrifblimTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBunearyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLopunnyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMismagiusTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHonchkrowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGlameowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPuruglyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChinglingTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sStunkyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSkuntankTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBronzorTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBronzongTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sBonslyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMimejrTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHappinyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sChatotTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSpiritombTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGibleTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGabiteTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGarchompTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMunchlaxTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRioluTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLucarioTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHippopotasTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHippowdonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSkorupiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDrapionTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCroagunkTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sToxicroakTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCarnivineTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFinneonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLumineonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMantykeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sSnoverTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAbomasnowTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sWeavileTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagnezoneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLickilickyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRhyperiorTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTangrowthTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sElectivireTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMagmortarTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sTogekissTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sYanmegaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sLeafeonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGlaceonTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGliscorTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMamoswineTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPorygon_ZTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGalladeTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sProbopassTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDusknoirTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sFroslassTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRotomTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sUxieTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sMespritTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sAzelfTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDialgaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPalkiaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sHeatranTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sRegigigasTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sGiratinaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sCresseliaTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sPhioneTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sManaphyTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sDarkraiTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sShayminTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};
   
static const u8 sArceusTUTORLearnset[] =
{
	TUTOR_LEARNSET_END
};



const u8 *const sTutorLearnsets[] =
{
	[SPECIES_NONE] = sNoneTUTORLearnset,
	[SPECIES_BULBASAUR] = sBulbasaurTUTORLearnset,
    [SPECIES_IVYSAUR] = sIvysaurTUTORLearnset,
    [SPECIES_VENUSAUR] = sVenusaurTUTORLearnset,
    [SPECIES_CHARMANDER] = sCharmanderTUTORLearnset,
    [SPECIES_CHARMELEON] = sCharmeleonTUTORLearnset,
    [SPECIES_CHARIZARD] = sCharizardTUTORLearnset,
    [SPECIES_SQUIRTLE] = sSquirtleTUTORLearnset,
    [SPECIES_WARTORTLE] = sWartortleTUTORLearnset,
    [SPECIES_BLASTOISE] = sBlastoiseTUTORLearnset,
    [SPECIES_CATERPIE] = sCaterpieTUTORLearnset,
    [SPECIES_METAPOD] = sMetapodTUTORLearnset,
    [SPECIES_BUTTERFREE] = sButterfreeTUTORLearnset,
    [SPECIES_WEEDLE] = sWeedleTUTORLearnset,
    [SPECIES_KAKUNA] = sKakunaTUTORLearnset,
    [SPECIES_BEEDRILL] = sBeedrillTUTORLearnset,
    [SPECIES_PIDGEY] = sPidgeyTUTORLearnset,
    [SPECIES_PIDGEOTTO] = sPidgeottoTUTORLearnset,
    [SPECIES_PIDGEOT] = sPidgeotTUTORLearnset,
    [SPECIES_RATTATA] = sRattataTUTORLearnset,
    [SPECIES_RATICATE] = sRaticateTUTORLearnset,
    [SPECIES_SPEAROW] = sSpearowTUTORLearnset,
    [SPECIES_FEAROW] = sFearowTUTORLearnset,
    [SPECIES_EKANS] = sEkansTUTORLearnset,
    [SPECIES_ARBOK] = sArbokTUTORLearnset,
    [SPECIES_PIKACHU] = sPikachuTUTORLearnset,
    [SPECIES_RAICHU] = sRaichuTUTORLearnset,
    [SPECIES_SANDSHREW] = sSandshrewTUTORLearnset,
    [SPECIES_SANDSLASH] = sSandslashTUTORLearnset,
    [SPECIES_NIDORAN_F] = sNidoran_FTUTORLearnset,
    [SPECIES_NIDORINA] = sNidorinaTUTORLearnset,
    [SPECIES_NIDOQUEEN] = sNidoqueenTUTORLearnset,
    [SPECIES_NIDORAN_M] = sNidoran_MTUTORLearnset,
    [SPECIES_NIDORINO] = sNidorinoTUTORLearnset,
    [SPECIES_NIDOKING] = sNidokingTUTORLearnset,
    [SPECIES_CLEFAIRY] = sClefairyTUTORLearnset,
    [SPECIES_CLEFABLE] = sClefableTUTORLearnset,
    [SPECIES_VULPIX] = sVulpixTUTORLearnset,
    [SPECIES_NINETALES] = sNinetalesTUTORLearnset,
    [SPECIES_JIGGLYPUFF] = sJigglypuffTUTORLearnset,
    [SPECIES_WIGGLYTUFF] = sWigglytuffTUTORLearnset,
    [SPECIES_ZUBAT] = sZubatTUTORLearnset,
    [SPECIES_GOLBAT] = sGolbatTUTORLearnset,
    [SPECIES_ODDISH] = sOddishTUTORLearnset,
    [SPECIES_GLOOM] = sGloomTUTORLearnset,
    [SPECIES_VILEPLUME] = sVileplumeTUTORLearnset,
    [SPECIES_PARAS] = sParasTUTORLearnset,
    [SPECIES_PARASECT] = sParasectTUTORLearnset,
    [SPECIES_VENONAT] = sVenonatTUTORLearnset,
    [SPECIES_VENOMOTH] = sVenomothTUTORLearnset,
    [SPECIES_DIGLETT] = sDiglettTUTORLearnset,
    [SPECIES_DUGTRIO] = sDugtrioTUTORLearnset,
    [SPECIES_MEOWTH] = sMeowthTUTORLearnset,
    [SPECIES_PERSIAN] = sPersianTUTORLearnset,
    [SPECIES_PSYDUCK] = sPsyduckTUTORLearnset,
    [SPECIES_GOLDUCK] = sGolduckTUTORLearnset,
    [SPECIES_MANKEY] = sMankeyTUTORLearnset,
    [SPECIES_PRIMEAPE] = sPrimeapeTUTORLearnset,
    [SPECIES_GROWLITHE] = sGrowlitheTUTORLearnset,
    [SPECIES_ARCANINE] = sArcanineTUTORLearnset,
    [SPECIES_POLIWAG] = sPoliwagTUTORLearnset,
    [SPECIES_POLIWHIRL] = sPoliwhirlTUTORLearnset,
    [SPECIES_POLIWRATH] = sPoliwrathTUTORLearnset,
    [SPECIES_ABRA] = sAbraTUTORLearnset,
    [SPECIES_KADABRA] = sKadabraTUTORLearnset,
    [SPECIES_ALAKAZAM] = sAlakazamTUTORLearnset,
    [SPECIES_MACHOP] = sMachopTUTORLearnset,
    [SPECIES_MACHOKE] = sMachokeTUTORLearnset,
    [SPECIES_MACHAMP] = sMachampTUTORLearnset,
    [SPECIES_BELLSPROUT] = sBellsproutTUTORLearnset,
    [SPECIES_WEEPINBELL] = sWeepinbellTUTORLearnset,
    [SPECIES_VICTREEBEL] = sVictreebelTUTORLearnset,
    [SPECIES_TENTACOOL] = sTentacoolTUTORLearnset,
    [SPECIES_TENTACRUEL] = sTentacruelTUTORLearnset,
    [SPECIES_GEODUDE] = sGeodudeTUTORLearnset,
    [SPECIES_GRAVELER] = sGravelerTUTORLearnset,
    [SPECIES_GOLEM] = sGolemTUTORLearnset,
    [SPECIES_PONYTA] = sPonytaTUTORLearnset,
    [SPECIES_RAPIDASH] = sRapidashTUTORLearnset,
    [SPECIES_SLOWPOKE] = sSlowpokeTUTORLearnset,
    [SPECIES_SLOWBRO] = sSlowbroTUTORLearnset,
    [SPECIES_MAGNEMITE] = sMagnemiteTUTORLearnset,
    [SPECIES_MAGNETON] = sMagnetonTUTORLearnset,
    [SPECIES_FARFETCHD] = sFarfetchdTUTORLearnset,
    [SPECIES_DODUO] = sDoduoTUTORLearnset,
    [SPECIES_DODRIO] = sDodrioTUTORLearnset,
    [SPECIES_SEEL] = sSeelTUTORLearnset,
    [SPECIES_DEWGONG] = sDewgongTUTORLearnset,
    [SPECIES_GRIMER] = sGrimerTUTORLearnset,
    [SPECIES_MUK] = sMukTUTORLearnset,
    [SPECIES_SHELLDER] = sShellderTUTORLearnset,
    [SPECIES_CLOYSTER] = sCloysterTUTORLearnset,
    [SPECIES_GASTLY] = sGastlyTUTORLearnset,
    [SPECIES_HAUNTER] = sHaunterTUTORLearnset,
    [SPECIES_GENGAR] = sGengarTUTORLearnset,
    [SPECIES_ONIX] = sOnixTUTORLearnset,
    [SPECIES_DROWZEE] = sDrowzeeTUTORLearnset,
    [SPECIES_HYPNO] = sHypnoTUTORLearnset,
    [SPECIES_KRABBY] = sKrabbyTUTORLearnset,
    [SPECIES_KINGLER] = sKinglerTUTORLearnset,
    [SPECIES_VOLTORB] = sVoltorbTUTORLearnset,
    [SPECIES_ELECTRODE] = sElectrodeTUTORLearnset,
    [SPECIES_EXEGGCUTE] = sExeggcuteTUTORLearnset,
    [SPECIES_EXEGGUTOR] = sExeggutorTUTORLearnset,
    [SPECIES_CUBONE] = sCuboneTUTORLearnset,
    [SPECIES_MAROWAK] = sMarowakTUTORLearnset,
    [SPECIES_HITMONLEE] = sHitmonleeTUTORLearnset,
    [SPECIES_HITMONCHAN] = sHitmonchanTUTORLearnset,
    [SPECIES_LICKITUNG] = sLickitungTUTORLearnset,
    [SPECIES_KOFFING] = sKoffingTUTORLearnset,
    [SPECIES_WEEZING] = sWeezingTUTORLearnset,
    [SPECIES_RHYHORN] = sRhyhornTUTORLearnset,
    [SPECIES_RHYDON] = sRhydonTUTORLearnset,
    [SPECIES_CHANSEY] = sChanseyTUTORLearnset,
    [SPECIES_TANGELA] = sTangelaTUTORLearnset,
    [SPECIES_KANGASKHAN] = sKangaskhanTUTORLearnset,
    [SPECIES_HORSEA] = sHorseaTUTORLearnset,
    [SPECIES_SEADRA] = sSeadraTUTORLearnset,
    [SPECIES_GOLDEEN] = sGoldeenTUTORLearnset,
    [SPECIES_SEAKING] = sSeakingTUTORLearnset,
    [SPECIES_STARYU] = sStaryuTUTORLearnset,
    [SPECIES_STARMIE] = sStarmieTUTORLearnset,
    [SPECIES_MR_MIME] = sMr_MimeTUTORLearnset,
    [SPECIES_SCYTHER] = sScytherTUTORLearnset,
    [SPECIES_JYNX] = sJynxTUTORLearnset,
    [SPECIES_ELECTABUZZ] = sElectabuzzTUTORLearnset,
    [SPECIES_MAGMAR] = sMagmarTUTORLearnset,
    [SPECIES_PINSIR] = sPinsirTUTORLearnset,
    [SPECIES_TAUROS] = sTaurosTUTORLearnset,
    [SPECIES_MAGIKARP] = sMagikarpTUTORLearnset,
    [SPECIES_GYARADOS] = sGyaradosTUTORLearnset,
    [SPECIES_LAPRAS] = sLaprasTUTORLearnset,
    [SPECIES_DITTO] = sDittoTUTORLearnset,
    [SPECIES_EEVEE] = sEeveeTUTORLearnset,
    [SPECIES_VAPOREON] = sVaporeonTUTORLearnset,
    [SPECIES_JOLTEON] = sJolteonTUTORLearnset,
    [SPECIES_FLAREON] = sFlareonTUTORLearnset,
    [SPECIES_PORYGON] = sPorygonTUTORLearnset,
    [SPECIES_OMANYTE] = sOmanyteTUTORLearnset,
    [SPECIES_OMASTAR] = sOmastarTUTORLearnset,
    [SPECIES_KABUTO] = sKabutoTUTORLearnset,
    [SPECIES_KABUTOPS] = sKabutopsTUTORLearnset,
    [SPECIES_AERODACTYL] = sAerodactylTUTORLearnset,
    [SPECIES_SNORLAX] = sSnorlaxTUTORLearnset,
    [SPECIES_ARTICUNO] = sArticunoTUTORLearnset,
    [SPECIES_ZAPDOS] = sZapdosTUTORLearnset,
    [SPECIES_MOLTRES] = sMoltresTUTORLearnset,
    [SPECIES_DRATINI] = sDratiniTUTORLearnset,
    [SPECIES_DRAGONAIR] = sDragonairTUTORLearnset,
    [SPECIES_DRAGONITE] = sDragoniteTUTORLearnset,
    [SPECIES_MEWTWO] = sMewtwoTUTORLearnset,
    [SPECIES_MEW] = sMewTUTORLearnset,
    [SPECIES_CHIKORITA] = sChikoritaTUTORLearnset,
    [SPECIES_BAYLEEF] = sBayleefTUTORLearnset,
    [SPECIES_MEGANIUM] = sMeganiumTUTORLearnset,
    [SPECIES_CYNDAQUIL] = sCyndaquilTUTORLearnset,
    [SPECIES_QUILAVA] = sQuilavaTUTORLearnset,
    [SPECIES_TYPHLOSION] = sTyphlosionTUTORLearnset,
    [SPECIES_TOTODILE] = sTotodileTUTORLearnset,
    [SPECIES_CROCONAW] = sCroconawTUTORLearnset,
    [SPECIES_FERALIGATR] = sFeraligatrTUTORLearnset,
    [SPECIES_SENTRET] = sSentretTUTORLearnset,
    [SPECIES_FURRET] = sFurretTUTORLearnset,
    [SPECIES_HOOTHOOT] = sHoothootTUTORLearnset,
    [SPECIES_NOCTOWL] = sNoctowlTUTORLearnset,
    [SPECIES_LEDYBA] = sLedybaTUTORLearnset,
    [SPECIES_LEDIAN] = sLedianTUTORLearnset,
    [SPECIES_SPINARAK] = sSpinarakTUTORLearnset,
    [SPECIES_ARIADOS] = sAriadosTUTORLearnset,
    [SPECIES_CROBAT] = sCrobatTUTORLearnset,
    [SPECIES_CHINCHOU] = sChinchouTUTORLearnset,
    [SPECIES_LANTURN] = sLanturnTUTORLearnset,
    [SPECIES_PICHU] = sPichuTUTORLearnset,
    [SPECIES_CLEFFA] = sCleffaTUTORLearnset,
    [SPECIES_IGGLYBUFF] = sIgglybuffTUTORLearnset,
    [SPECIES_TOGEPI] = sTogepiTUTORLearnset,
    [SPECIES_TOGETIC] = sTogeticTUTORLearnset,
    [SPECIES_NATU] = sNatuTUTORLearnset,
    [SPECIES_XATU] = sXatuTUTORLearnset,
    [SPECIES_MAREEP] = sMareepTUTORLearnset,
    [SPECIES_FLAAFFY] = sFlaaffyTUTORLearnset,
    [SPECIES_AMPHAROS] = sAmpharosTUTORLearnset,
    [SPECIES_BELLOSSOM] = sBellossomTUTORLearnset,
    [SPECIES_MARILL] = sMarillTUTORLearnset,
    [SPECIES_AZUMARILL] = sAzumarillTUTORLearnset,
    [SPECIES_SUDOWOODO] = sSudowoodoTUTORLearnset,
    [SPECIES_POLITOED] = sPolitoedTUTORLearnset,
    [SPECIES_HOPPIP] = sHoppipTUTORLearnset,
    [SPECIES_SKIPLOOM] = sSkiploomTUTORLearnset,
    [SPECIES_JUMPLUFF] = sJumpluffTUTORLearnset,
    [SPECIES_AIPOM] = sAipomTUTORLearnset,
    [SPECIES_SUNKERN] = sSunkernTUTORLearnset,
    [SPECIES_SUNFLORA] = sSunfloraTUTORLearnset,
    [SPECIES_YANMA] = sYanmaTUTORLearnset,
    [SPECIES_WOOPER] = sWooperTUTORLearnset,
    [SPECIES_QUAGSIRE] = sQuagsireTUTORLearnset,
    [SPECIES_ESPEON] = sEspeonTUTORLearnset,
    [SPECIES_UMBREON] = sUmbreonTUTORLearnset,
    [SPECIES_MURKROW] = sMurkrowTUTORLearnset,
    [SPECIES_SLOWKING] = sSlowkingTUTORLearnset,
    [SPECIES_MISDREAVUS] = sMisdreavusTUTORLearnset,
    [SPECIES_UNOWN] = sUnownTUTORLearnset,
    [SPECIES_WOBBUFFET] = sWobbuffetTUTORLearnset,
    [SPECIES_GIRAFARIG] = sGirafarigTUTORLearnset,
    [SPECIES_PINECO] = sPinecoTUTORLearnset,
    [SPECIES_FORRETRESS] = sForretressTUTORLearnset,
    [SPECIES_DUNSPARCE] = sDunsparceTUTORLearnset,
    [SPECIES_GLIGAR] = sGligarTUTORLearnset,
    [SPECIES_STEELIX] = sSteelixTUTORLearnset,
    [SPECIES_SNUBBULL] = sSnubbullTUTORLearnset,
    [SPECIES_GRANBULL] = sGranbullTUTORLearnset,
    [SPECIES_QWILFISH] = sQwilfishTUTORLearnset,
    [SPECIES_SCIZOR] = sScizorTUTORLearnset,
    [SPECIES_SHUCKLE] = sShuckleTUTORLearnset,
    [SPECIES_HERACROSS] = sHeracrossTUTORLearnset,
    [SPECIES_SNEASEL] = sSneaselTUTORLearnset,
    [SPECIES_TEDDIURSA] = sTeddiursaTUTORLearnset,
    [SPECIES_URSARING] = sUrsaringTUTORLearnset,
    [SPECIES_SLUGMA] = sSlugmaTUTORLearnset,
    [SPECIES_MAGCARGO] = sMagcargoTUTORLearnset,
    [SPECIES_SWINUB] = sSwinubTUTORLearnset,
    [SPECIES_PILOSWINE] = sPiloswineTUTORLearnset,
    [SPECIES_CORSOLA] = sCorsolaTUTORLearnset,
    [SPECIES_REMORAID] = sRemoraidTUTORLearnset,
    [SPECIES_OCTILLERY] = sOctilleryTUTORLearnset,
    [SPECIES_DELIBIRD] = sDelibirdTUTORLearnset,
    [SPECIES_MANTINE] = sMantineTUTORLearnset,
    [SPECIES_SKARMORY] = sSkarmoryTUTORLearnset,
    [SPECIES_HOUNDOUR] = sHoundourTUTORLearnset,
    [SPECIES_HOUNDOOM] = sHoundoomTUTORLearnset,
    [SPECIES_KINGDRA] = sKingdraTUTORLearnset,
    [SPECIES_PHANPY] = sPhanpyTUTORLearnset,
    [SPECIES_DONPHAN] = sDonphanTUTORLearnset,
    [SPECIES_PORYGON2] = sPorygon2TUTORLearnset,
    [SPECIES_STANTLER] = sStantlerTUTORLearnset,
    [SPECIES_SMEARGLE] = sSmeargleTUTORLearnset,
    [SPECIES_TYROGUE] = sTyrogueTUTORLearnset,
    [SPECIES_HITMONTOP] = sHitmontopTUTORLearnset,
    [SPECIES_SMOOCHUM] = sSmoochumTUTORLearnset,
    [SPECIES_ELEKID] = sElekidTUTORLearnset,
    [SPECIES_MAGBY] = sMagbyTUTORLearnset,
    [SPECIES_MILTANK] = sMiltankTUTORLearnset,
    [SPECIES_BLISSEY] = sBlisseyTUTORLearnset,
    [SPECIES_RAIKOU] = sRaikouTUTORLearnset,
    [SPECIES_ENTEI] = sEnteiTUTORLearnset,
    [SPECIES_SUICUNE] = sSuicuneTUTORLearnset,
    [SPECIES_LARVITAR] = sLarvitarTUTORLearnset,
    [SPECIES_PUPITAR] = sPupitarTUTORLearnset,
    [SPECIES_TYRANITAR] = sTyranitarTUTORLearnset,
    [SPECIES_LUGIA] = sLugiaTUTORLearnset,
    [SPECIES_HO_OH] = sHo_OhTUTORLearnset,
    [SPECIES_CELEBI] = sCelebiTUTORLearnset,
    [SPECIES_TREECKO] = sTreeckoTUTORLearnset,
    [SPECIES_GROVYLE] = sGrovyleTUTORLearnset,
    [SPECIES_SCEPTILE] = sSceptileTUTORLearnset,
    [SPECIES_TORCHIC] = sTorchicTUTORLearnset,
    [SPECIES_COMBUSKEN] = sCombuskenTUTORLearnset,
    [SPECIES_BLAZIKEN] = sBlazikenTUTORLearnset,
    [SPECIES_MUDKIP] = sMudkipTUTORLearnset,
    [SPECIES_MARSHTOMP] = sMarshtompTUTORLearnset,
    [SPECIES_SWAMPERT] = sSwampertTUTORLearnset,
    [SPECIES_POOCHYENA] = sPoochyenaTUTORLearnset,
    [SPECIES_MIGHTYENA] = sMightyenaTUTORLearnset,
    [SPECIES_ZIGZAGOON] = sZigzagoonTUTORLearnset,
    [SPECIES_LINOONE] = sLinooneTUTORLearnset,
    [SPECIES_WURMPLE] = sWurmpleTUTORLearnset,
    [SPECIES_SILCOON] = sSilcoonTUTORLearnset,
    [SPECIES_BEAUTIFLY] = sBeautiflyTUTORLearnset,
    [SPECIES_CASCOON] = sCascoonTUTORLearnset,
    [SPECIES_DUSTOX] = sDustoxTUTORLearnset,
    [SPECIES_LOTAD] = sLotadTUTORLearnset,
    [SPECIES_LOMBRE] = sLombreTUTORLearnset,
    [SPECIES_LUDICOLO] = sLudicoloTUTORLearnset,
    [SPECIES_SEEDOT] = sSeedotTUTORLearnset,
    [SPECIES_NUZLEAF] = sNuzleafTUTORLearnset,
    [SPECIES_SHIFTRY] = sShiftryTUTORLearnset,
    [SPECIES_NINCADA] = sNincadaTUTORLearnset,
    [SPECIES_NINJASK] = sNinjaskTUTORLearnset,
    [SPECIES_SHEDINJA] = sShedinjaTUTORLearnset,
    [SPECIES_TAILLOW] = sTaillowTUTORLearnset,
    [SPECIES_SWELLOW] = sSwellowTUTORLearnset,
    [SPECIES_SHROOMISH] = sShroomishTUTORLearnset,
    [SPECIES_BRELOOM] = sBreloomTUTORLearnset,
    [SPECIES_SPINDA] = sSpindaTUTORLearnset,
    [SPECIES_WINGULL] = sWingullTUTORLearnset,
    [SPECIES_PELIPPER] = sPelipperTUTORLearnset,
    [SPECIES_SURSKIT] = sSurskitTUTORLearnset,
    [SPECIES_MASQUERAIN] = sMasquerainTUTORLearnset,
    [SPECIES_WAILMER] = sWailmerTUTORLearnset,
    [SPECIES_WAILORD] = sWailordTUTORLearnset,
    [SPECIES_SKITTY] = sSkittyTUTORLearnset,
    [SPECIES_DELCATTY] = sDelcattyTUTORLearnset,
    [SPECIES_KECLEON] = sKecleonTUTORLearnset,
    [SPECIES_BALTOY] = sBaltoyTUTORLearnset,
    [SPECIES_CLAYDOL] = sClaydolTUTORLearnset,
    [SPECIES_NOSEPASS] = sNosepassTUTORLearnset,
    [SPECIES_TORKOAL] = sTorkoalTUTORLearnset,
    [SPECIES_SABLEYE] = sSableyeTUTORLearnset,
    [SPECIES_BARBOACH] = sBarboachTUTORLearnset,
    [SPECIES_WHISCASH] = sWhiscashTUTORLearnset,
    [SPECIES_LUVDISC] = sLuvdiscTUTORLearnset,
    [SPECIES_CORPHISH] = sCorphishTUTORLearnset,
    [SPECIES_CRAWDAUNT] = sCrawdauntTUTORLearnset,
    [SPECIES_FEEBAS] = sFeebasTUTORLearnset,
    [SPECIES_MILOTIC] = sMiloticTUTORLearnset,
    [SPECIES_CARVANHA] = sCarvanhaTUTORLearnset,
    [SPECIES_SHARPEDO] = sSharpedoTUTORLearnset,
    [SPECIES_TRAPINCH] = sTrapinchTUTORLearnset,
    [SPECIES_VIBRAVA] = sVibravaTUTORLearnset,
    [SPECIES_FLYGON] = sFlygonTUTORLearnset,
    [SPECIES_MAKUHITA] = sMakuhitaTUTORLearnset,
    [SPECIES_HARIYAMA] = sHariyamaTUTORLearnset,
    [SPECIES_ELECTRIKE] = sElectrikeTUTORLearnset,
    [SPECIES_MANECTRIC] = sManectricTUTORLearnset,
    [SPECIES_NUMEL] = sNumelTUTORLearnset,
    [SPECIES_CAMERUPT] = sCameruptTUTORLearnset,
    [SPECIES_SPHEAL] = sSphealTUTORLearnset,
    [SPECIES_SEALEO] = sSealeoTUTORLearnset,
    [SPECIES_WALREIN] = sWalreinTUTORLearnset,
    [SPECIES_CACNEA] = sCacneaTUTORLearnset,
    [SPECIES_CACTURNE] = sCacturneTUTORLearnset,
    [SPECIES_SNORUNT] = sSnoruntTUTORLearnset,
    [SPECIES_GLALIE] = sGlalieTUTORLearnset,
    [SPECIES_LUNATONE] = sLunatoneTUTORLearnset,
    [SPECIES_SOLROCK] = sSolrockTUTORLearnset,
    [SPECIES_AZURILL] = sAzurillTUTORLearnset,
    [SPECIES_SPOINK] = sSpoinkTUTORLearnset,
    [SPECIES_GRUMPIG] = sGrumpigTUTORLearnset,
    [SPECIES_PLUSLE] = sPlusleTUTORLearnset,
    [SPECIES_MINUN] = sMinunTUTORLearnset,
    [SPECIES_MAWILE] = sMawileTUTORLearnset,
    [SPECIES_MEDITITE] = sMedititeTUTORLearnset,
    [SPECIES_MEDICHAM] = sMedichamTUTORLearnset,
    [SPECIES_SWABLU] = sSwabluTUTORLearnset,
    [SPECIES_ALTARIA] = sAltariaTUTORLearnset,
    [SPECIES_WYNAUT] = sWynautTUTORLearnset,
    [SPECIES_DUSKULL] = sDuskullTUTORLearnset,
    [SPECIES_DUSCLOPS] = sDusclopsTUTORLearnset,
    [SPECIES_ROSELIA] = sRoseliaTUTORLearnset,
    [SPECIES_SLAKOTH] = sSlakothTUTORLearnset,
    [SPECIES_VIGOROTH] = sVigorothTUTORLearnset,
    [SPECIES_SLAKING] = sSlakingTUTORLearnset,
    [SPECIES_GULPIN] = sGulpinTUTORLearnset,
    [SPECIES_SWALOT] = sSwalotTUTORLearnset,
    [SPECIES_TROPIUS] = sTropiusTUTORLearnset,
    [SPECIES_WHISMUR] = sWhismurTUTORLearnset,
    [SPECIES_LOUDRED] = sLoudredTUTORLearnset,
    [SPECIES_EXPLOUD] = sExploudTUTORLearnset,
    [SPECIES_CLAMPERL] = sClamperlTUTORLearnset,
    [SPECIES_HUNTAIL] = sHuntailTUTORLearnset,
    [SPECIES_GOREBYSS] = sGorebyssTUTORLearnset,
    [SPECIES_ABSOL] = sAbsolTUTORLearnset,
    [SPECIES_SHUPPET] = sShuppetTUTORLearnset,
    [SPECIES_BANETTE] = sBanetteTUTORLearnset,
    [SPECIES_SEVIPER] = sSeviperTUTORLearnset,
    [SPECIES_ZANGOOSE] = sZangooseTUTORLearnset,
    [SPECIES_RELICANTH] = sRelicanthTUTORLearnset,
    [SPECIES_ARON] = sAronTUTORLearnset,
    [SPECIES_LAIRON] = sLaironTUTORLearnset,
    [SPECIES_AGGRON] = sAggronTUTORLearnset,
    [SPECIES_CASTFORM] = sCastformTUTORLearnset,
    [SPECIES_VOLBEAT] = sVolbeatTUTORLearnset,
    [SPECIES_ILLUMISE] = sIllumiseTUTORLearnset,
    [SPECIES_LILEEP] = sLileepTUTORLearnset,
    [SPECIES_CRADILY] = sCradilyTUTORLearnset,
    [SPECIES_ANORITH] = sAnorithTUTORLearnset,
    [SPECIES_ARMALDO] = sArmaldoTUTORLearnset,
    [SPECIES_RALTS] = sRaltsTUTORLearnset,
    [SPECIES_KIRLIA] = sKirliaTUTORLearnset,
    [SPECIES_GARDEVOIR] = sGardevoirTUTORLearnset,
    [SPECIES_BAGON] = sBagonTUTORLearnset,
    [SPECIES_SHELGON] = sShelgonTUTORLearnset,
    [SPECIES_SALAMENCE] = sSalamenceTUTORLearnset,
    [SPECIES_BELDUM] = sBeldumTUTORLearnset,
    [SPECIES_METANG] = sMetangTUTORLearnset,
    [SPECIES_METAGROSS] = sMetagrossTUTORLearnset,
    [SPECIES_REGIROCK] = sRegirockTUTORLearnset,
    [SPECIES_REGICE] = sRegiceTUTORLearnset,
    [SPECIES_REGISTEEL] = sRegisteelTUTORLearnset,
    [SPECIES_KYOGRE] = sKyogreTUTORLearnset,
    [SPECIES_GROUDON] = sGroudonTUTORLearnset,
    [SPECIES_RAYQUAZA] = sRayquazaTUTORLearnset,
    [SPECIES_LATIAS] = sLatiasTUTORLearnset,
    [SPECIES_LATIOS] = sLatiosTUTORLearnset,
    [SPECIES_JIRACHI] = sJirachiTUTORLearnset,
    [SPECIES_DEOXYS] = sDeoxysTUTORLearnset,
    [SPECIES_CHIMECHO] = sChimechoTUTORLearnset,
    [SPECIES_TURTWIG] = sTurtwigTUTORLearnset,
    [SPECIES_GROTLE] = sGrotleTUTORLearnset,
    [SPECIES_TORTERRA] = sTorterraTUTORLearnset,
    [SPECIES_CHIMCHAR] = sChimcharTUTORLearnset,
    [SPECIES_MONFERNO] = sMonfernoTUTORLearnset,
    [SPECIES_INFERNAPE] = sInfernapeTUTORLearnset,
    [SPECIES_PIPLUP] = sPiplupTUTORLearnset,
    [SPECIES_PRINPLUP] = sPrinplupTUTORLearnset,
    [SPECIES_EMPOLEON] = sEmpoleonTUTORLearnset,
    [SPECIES_STARLY] = sStarlyTUTORLearnset,
    [SPECIES_STARAVIA] = sStaraviaTUTORLearnset,
    [SPECIES_STARAPTOR] = sStaraptorTUTORLearnset,
    [SPECIES_BIDOOF] = sBidoofTUTORLearnset,
    [SPECIES_BIBAREL] = sBibarelTUTORLearnset,
    [SPECIES_KRICKETOT] = sKricketotTUTORLearnset,
    [SPECIES_KRICKETUNE] = sKricketuneTUTORLearnset,
    [SPECIES_SHINX] = sShinxTUTORLearnset,
    [SPECIES_LUXIO] = sLuxioTUTORLearnset,
    [SPECIES_LUXRAY] = sLuxrayTUTORLearnset,
    [SPECIES_BUDEW] = sBudewTUTORLearnset,
    [SPECIES_ROSERADE] = sRoseradeTUTORLearnset,
    [SPECIES_CRANIDOS] = sCranidosTUTORLearnset,
    [SPECIES_RAMPARDOS] = sRampardosTUTORLearnset,
    [SPECIES_SHIELDON] = sShieldonTUTORLearnset,
    [SPECIES_BASTIODON] = sBastiodonTUTORLearnset,
    [SPECIES_BURMY] = sBurmyTUTORLearnset,
    [SPECIES_WORMADAM] = sWormadamTUTORLearnset,
    [SPECIES_MOTHIM] = sMothimTUTORLearnset,
    [SPECIES_COMBEE] = sCombeeTUTORLearnset,
    [SPECIES_VESPIQUEN] = sVespiquenTUTORLearnset,
    [SPECIES_PACHIRISU] = sPachirisuTUTORLearnset,
    [SPECIES_BUIZEL] = sBuizelTUTORLearnset,
    [SPECIES_FLOATZEL] = sFloatzelTUTORLearnset,
    [SPECIES_CHERUBI] = sCherubiTUTORLearnset,
    [SPECIES_CHERRIM] = sCherrimTUTORLearnset,
    [SPECIES_SHELLOS] = sShellosTUTORLearnset,
    [SPECIES_GASTRODON] = sGastrodonTUTORLearnset,
    [SPECIES_AMBIPOM] = sAmbipomTUTORLearnset,
    [SPECIES_DRIFLOON] = sDrifloonTUTORLearnset,
    [SPECIES_DRIFBLIM] = sDrifblimTUTORLearnset,
    [SPECIES_BUNEARY] = sBunearyTUTORLearnset,
    [SPECIES_LOPUNNY] = sLopunnyTUTORLearnset,
    [SPECIES_MISMAGIUS] = sMismagiusTUTORLearnset,
    [SPECIES_HONCHKROW] = sHonchkrowTUTORLearnset,
    [SPECIES_GLAMEOW] = sGlameowTUTORLearnset,
    [SPECIES_PURUGLY] = sPuruglyTUTORLearnset,
    [SPECIES_CHINGLING] = sChinglingTUTORLearnset,
    [SPECIES_STUNKY] = sStunkyTUTORLearnset,
    [SPECIES_SKUNTANK] = sSkuntankTUTORLearnset,
    [SPECIES_BRONZOR] = sBronzorTUTORLearnset,
    [SPECIES_BRONZONG] = sBronzongTUTORLearnset,
    [SPECIES_BONSLY] = sBonslyTUTORLearnset,
    [SPECIES_MIMEJR] = sMimejrTUTORLearnset,
    [SPECIES_HAPPINY] = sHappinyTUTORLearnset,
    [SPECIES_CHATOT] = sChatotTUTORLearnset,
    [SPECIES_SPIRITOMB] = sSpiritombTUTORLearnset,
    [SPECIES_GIBLE] = sGibleTUTORLearnset,
    [SPECIES_GABITE] = sGabiteTUTORLearnset,
    [SPECIES_GARCHOMP] = sGarchompTUTORLearnset,
    [SPECIES_MUNCHLAX] = sMunchlaxTUTORLearnset,
    [SPECIES_RIOLU] = sRioluTUTORLearnset,
    [SPECIES_LUCARIO] = sLucarioTUTORLearnset,
    [SPECIES_HIPPOPOTAS] = sHippopotasTUTORLearnset,
    [SPECIES_HIPPOWDON] = sHippowdonTUTORLearnset,
    [SPECIES_SKORUPI] = sSkorupiTUTORLearnset,
    [SPECIES_DRAPION] = sDrapionTUTORLearnset,
    [SPECIES_CROAGUNK] = sCroagunkTUTORLearnset,
    [SPECIES_TOXICROAK] = sToxicroakTUTORLearnset,
    [SPECIES_CARNIVINE] = sCarnivineTUTORLearnset,
    [SPECIES_FINNEON] = sFinneonTUTORLearnset,
    [SPECIES_LUMINEON] = sLumineonTUTORLearnset,
    [SPECIES_MANTYKE] = sMantykeTUTORLearnset,
    [SPECIES_SNOVER] = sSnoverTUTORLearnset,
    [SPECIES_ABOMASNOW] = sAbomasnowTUTORLearnset,
    [SPECIES_WEAVILE] = sWeavileTUTORLearnset,
    [SPECIES_MAGNEZONE] = sMagnezoneTUTORLearnset,
    [SPECIES_LICKILICKY] = sLickilickyTUTORLearnset,
    [SPECIES_RHYPERIOR] = sRhyperiorTUTORLearnset,
    [SPECIES_TANGROWTH] = sTangrowthTUTORLearnset,
    [SPECIES_ELECTIVIRE] = sElectivireTUTORLearnset,
    [SPECIES_MAGMORTAR] = sMagmortarTUTORLearnset,
    [SPECIES_TOGEKISS] = sTogekissTUTORLearnset,
    [SPECIES_YANMEGA] = sYanmegaTUTORLearnset,
    [SPECIES_LEAFEON] = sLeafeonTUTORLearnset,
    [SPECIES_GLACEON] = sGlaceonTUTORLearnset,
    [SPECIES_GLISCOR] = sGliscorTUTORLearnset,
    [SPECIES_MAMOSWINE] = sMamoswineTUTORLearnset,
    [SPECIES_PORYGON_Z] = sPorygon_ZTUTORLearnset,
    [SPECIES_GALLADE] = sGalladeTUTORLearnset,
    [SPECIES_PROBOPASS] =sProbopassTUTORLearnset,
    [SPECIES_DUSKNOIR] = sDusknoirTUTORLearnset,
    [SPECIES_FROSLASS] = sFroslassTUTORLearnset,
    [SPECIES_ROTOM] = sRotomTUTORLearnset,
    [SPECIES_UXIE] = sUxieTUTORLearnset,
    [SPECIES_MESPRIT] = sMespritTUTORLearnset,
    [SPECIES_AZELF] = sAzelfTUTORLearnset,
    [SPECIES_DIALGA] = sDialgaTUTORLearnset,
    [SPECIES_PALKIA] =sPalkiaTUTORLearnset,
    [SPECIES_HEATRAN] = sHeatranTUTORLearnset,
    [SPECIES_REGIGIGAS] = sRegigigasTUTORLearnset,
    [SPECIES_GIRATINA] = sGiratinaTUTORLearnset,
    [SPECIES_CRESSELIA] = sCresseliaTUTORLearnset,
    [SPECIES_PHIONE] = sPhioneTUTORLearnset,
    [SPECIES_MANAPHY] = sManaphyTUTORLearnset,
    [SPECIES_DARKRAI] = sDarkraiTUTORLearnset,
    [SPECIES_SHAYMIN] = sShayminTUTORLearnset,
    [SPECIES_ARCEUS] = sArceusTUTORLearnset,
};