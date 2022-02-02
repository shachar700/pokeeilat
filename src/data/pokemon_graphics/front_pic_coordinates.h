// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_CASTFORM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_TURTWIG] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GROTLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_TORTERRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHIMCHAR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_MONFERNO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_INFERNAPE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PIPLUP] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_PRINPLUP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_EMPOLEON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_STARLY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_STARAVIA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_STARAPTOR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_BIDOOF] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_BIBAREL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_KRICKETOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_KRICKETUNE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SHINX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_LUXIO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_LUXRAY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_BUDEW] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_ROSERADE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_CRANIDOS] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_RAMPARDOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SHIELDON] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_BASTIODON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_BURMY] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 13,
    },
    [SPECIES_WORMADAM] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
    [SPECIES_MOTHIM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 12,
    },
    [SPECIES_COMBEE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 16,
    },
    [SPECIES_VESPIQUEN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_PACHIRISU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 12,
    },
    [SPECIES_BUIZEL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_FLOATZEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHERUBI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_CHERRIM] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 8,
    },
    [SPECIES_SHELLOS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GASTRODON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_AMBIPOM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_DRIFLOON] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_DRIFBLIM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_BUNEARY] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 9,
    },
    [SPECIES_LOPUNNY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MISMAGIUS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_HONCHKROW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_GLAMEOW] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_PURUGLY] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CHINGLING] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_STUNKY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 13,
    },
    [SPECIES_SKUNTANK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_BRONZOR] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_BRONZONG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_BONSLY] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_MIME_JR] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 9,
    },
    [SPECIES_HAPPINY] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 12,
    },
    [SPECIES_CHATOT] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SPIRITOMB] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GIBLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_GABITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GARCHOMP] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUNCHLAX] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_RIOLU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_LUCARIO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_HIPPOPOTAS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_HIPPOWDON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SKORUPI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DRAPION] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_CROAGUNK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_TOXICROAK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_CARNIVINE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_FINNEON] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_LUMINEON] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MANTYKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_SNOVER] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ABOMASNOW] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WEAVILE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MAGNEZONE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_LICKILICKY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_RHYPERIOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TANGROWTH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_ELECTIVIRE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MAGMORTAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TOGEKISS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_YANMEGA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_LEAFEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_GLACEON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_GLISCOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_MAMOSWINE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_PORYGON_Z] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_GALLADE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_PROBOPASS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_DUSKNOIR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_FROSLASS] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ROTOM] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_UXIE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MESPRIT] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_AZELF] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_DIALGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PALKIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HEATRAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_REGIGIGAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_GIRATINA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CRESSELIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_PHIONE] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_MANAPHY] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_DARKRAI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SHAYMIN] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_ARCEUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VICTINI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
    [SPECIES_SNIVY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_SERVINE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_SERPERIOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TEPIG] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 15,
    },
    [SPECIES_PIGNITE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_EMBOAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_OSHAWOTT] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_DEWOTT] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_SAMUROTT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PATRAT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_WATCHOG] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 2,
    },
    [SPECIES_LILLIPUP] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_HERDIER] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_STOUTLAND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PURRLOIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_LIEPARD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_PANSAGE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SIMISAGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PANSEAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SIMISEAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PANPOUR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SIMIPOUR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MUNNA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_MUSHARNA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_PIDOVE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_TRANQUILL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_UNFEZANT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_BLITZLE] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
    },
    [SPECIES_ZEBSTRIKA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ROGGENROLA] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_BOLDORE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_GIGALITH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_WOOBAT] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_SWOOBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_DRILBUR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_EXCADRILL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_AUDINO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_TIMBURR] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_GURDURR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CONKELDURR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_TYMPOLE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_PALPITOAD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SEISMITOAD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_THROH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SAWK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SEWADDLE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SWADLOON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 12,
    },
    [SPECIES_LEAVANNY] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_VENIPEDE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_WHIRLIPEDE] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_SCOLIPEDE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_COTTONEE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_WHIMSICOTT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PETILIL] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 12,
    },
    [SPECIES_LILLIGANT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_BASCULIN] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_SANDILE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_KROKOROK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_KROOKODILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DARUMAKA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_DARMANITAN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MARACTUS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DWEBBLE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_CRUSTLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SCRAGGY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SCRAFTY] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SIGILYPH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_YAMASK] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_COFAGRIGUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TIRTOUGA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_CARRACOSTA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ARCHEN] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_ARCHEOPS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_TRUBBISH] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_GARBODOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ZORUA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_ZOROARK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MINCCINO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_CINCCINO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_GOTHITA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_GOTHORITA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOTHITELLE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_SOLOSIS] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_DUOSION] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_REUNICLUS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_DUCKLETT] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_SWANNA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_VANILLITE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_VANILLISH] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 5,
    },
    [SPECIES_VANILLUXE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_DEERLING] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_SAWSBUCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_EMOLGA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 17,
    },
    [SPECIES_KARRABLAST] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 13,
    },
    [SPECIES_ESCAVALIER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FOONGUS] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_AMOONGUSS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_FRILLISH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_JELLICENT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ALOMOMOLA] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 0,
    },
    [SPECIES_JOLTIK] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_GALVANTULA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_FERROSEED] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_FERROTHORN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_KLINK] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_KLANG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_KLINKLANG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TYNAMO] =
    {
        .size = MON_COORDS_SIZE(40, 24),
        .y_offset = 22,
    },
    [SPECIES_EELEKTRIK] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 6,
    },
    [SPECIES_EELEKTROSS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_ELGYEM] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_BEHEEYEM] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_LITWICK] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_LAMPENT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_CHANDELURE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_AXEW] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_FRAXURE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_HAXORUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CUBCHOO] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_BEARTIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CRYOGONAL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SHELMET] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_ACCELGOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_STUNFISK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 14,
    },
    [SPECIES_MIENFOO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_MIENSHAO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_DRUDDIGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_GOLETT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_GOLURK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PAWNIARD] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_BISHARP] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_BOUFFALANT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_RUFFLET] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_BRAVIARY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_VULLABY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MANDIBUZZ] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_HEATMOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_DURANT] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_DEINO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_ZWEILOUS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_HYDREIGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LARVESTA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 13,
    },
    [SPECIES_VOLCARONA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_COBALION] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_TERRAKION] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_VIRIZION] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_TORNADUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_THUNDURUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RESHIRAM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_ZEKROM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LANDORUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_KYUREM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_KELDEO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MELOETTA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_GENESECT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CHESPIN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_QUILLADIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_CHESNAUGHT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_FENNEKIN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_BRAIXEN] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 4,
    },
    [SPECIES_DELPHOX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FROAKIE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_FROGADIER] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_GRENINJA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_BUNNELBY] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 5,
    },
    [SPECIES_DIGGERSBY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_FLETCHLING] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_FLETCHINDER] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_TALONFLAME] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SCATTERBUG] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_SPEWPA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_VIVILLON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LITLEO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_PYROAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FLABEBE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FLOETTE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_FLORGES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SKIDDO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOGOAT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_PANCHAM] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 12,
    },
    [SPECIES_PANGORO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FURFROU] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_ESPURR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_MEOWSTIC] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_HONEDGE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_DOUBLADE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_AEGISLASH] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SPRITZEE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_AROMATISSE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SWIRLIX] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SLURPUFF] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_INKAY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 14,
    },
    [SPECIES_MALAMAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BINACLE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 9,
    },
    [SPECIES_BARBARACLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SKRELP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_DRAGALGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CLAUNCHER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_CLAWITZER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 10,
    },
    [SPECIES_HELIOPTILE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_HELIOLISK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TYRUNT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TYRANTRUM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AMAURA] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 8,
    },
    [SPECIES_AURORUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SYLVEON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_HAWLUCHA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_DEDENNE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_CARBINK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_GOOMY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_SLIGGOO] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 6,
    },
    [SPECIES_GOODRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KLEFKI] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 4,
    },
    [SPECIES_PHANTUMP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TREVENANT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PUMPKABOO] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GOURGEIST] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_BERGMITE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_AVALUGG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_NOIBAT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_NOIVERN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_XERNEAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_YVELTAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DIANCIE] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },
    [SPECIES_HOOPA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_VOLCANION] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ROWLET] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_DARTRIX] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_DECIDUEYE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_LITTEN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_TORRACAT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_INCINEROAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_POPPLIO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_BRIONNE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_PRIMARINA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PIKIPEK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_TRUMBEAK] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_TOUCANNON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_YUNGOOS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_GUMSHOOS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_GRUBBIN] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_CHARJABUG] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_VIKAVOLT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_CRABRAWLER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_CRABOMINABLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ORICORIO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_CUTIEFLY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_RIBOMBEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ROCKRUFF] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_LYCANROC] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_WISHIWASHI] =
    {
        .size = MON_COORDS_SIZE(40, 24),
        .y_offset = 20,
    },
    [SPECIES_MAREANIE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_TOXAPEX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MUDBRAY] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_MUDSDALE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DEWPIDER] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_ARAQUANID] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_FOMANTIS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_LURANTIS] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_MORELULL] =
    {
        .size = MON_COORDS_SIZE(24, 48),
        .y_offset = 10,
    },
    [SPECIES_SHIINOTIC] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SALANDIT] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_SALAZZLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_STUFFUL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_BEWEAR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_BOUNSWEET] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_STEENEE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_TSAREENA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_COMFEY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_ORANGURU] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PASSIMIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_WIMPOD] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_GOLISOPOD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SANDYGAST] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_PALOSSAND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PYUKUMUKU] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_TYPE_NULL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SILVALLY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MINIOR] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_KOMALA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_TURTONATOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TOGEDEMARU] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_MIMIKYU] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_BRUXISH] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_DRAMPA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DHELMISE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_JANGMO_O] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_HAKAMO_O] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_KOMMO_O] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TAPU_KOKO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_TAPU_LELE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_TAPU_BULU] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TAPU_FINI] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_COSMOG] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_COSMOEM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SOLGALEO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUNALA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_NIHILEGO] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_BUZZWOLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PHEROMOSA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_XURKITREE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CELESTEELA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KARTANA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GUZZLORD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_NECROZMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MAGEARNA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_MARSHADOW] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 9,
    },
    [SPECIES_POIPOLE] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 8,
    },
    [SPECIES_NAGANADEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_STAKATAKA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLACEPHALON] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_ZERAORA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MELTAN] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_MELMETAL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GROOKEY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_THWACKEY] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_RILLABOOM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SCORBUNNY] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 8,
    },
    [SPECIES_RABOOT] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_CINDERACE] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_SOBBLE] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 11,
    },
    [SPECIES_DRIZZILE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_INTELEON] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_SKWOVET] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_GREEDENT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_ROOKIDEE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CORVISQUIRE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CORVIKNIGHT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_BLIPBUG] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_DOTTLER] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_ORBEETLE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_NICKIT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_THIEVUL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GOSSIFLEUR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 11,
    },
    [SPECIES_ELDEGOSS] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_WOOLOO] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_DUBWOOL] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_CHEWTLE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_DREDNAW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_YAMPER] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_BOLTUND] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_ROLYCOLY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CARKOL] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_COALOSSAL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_APPLIN] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_FLAPPLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_APPLETUN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SILICOBRA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_SANDACONDA] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_CRAMORANT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARROKUDA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_BARRASKEWDA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_TOXEL] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_TOXTRICITY] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_SIZZLIPEDE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_CENTISKORCH] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_CLOBBOPUS] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_GRAPPLOCT] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_SINISTEA] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_POLTEAGEIST] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_HATENNA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_HATTREM] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_HATTERENE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_IMPIDIMP] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MORGREM] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GRIMMSNARL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OBSTAGOON] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_PERRSERKER] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_CURSOLA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SIRFETCHD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MR_RIME] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_RUNERIGUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MILCERY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_ALCREMIE] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_FALINKS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_PINCURCHIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_SNOM] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 20,
    },
    [SPECIES_FROSMOTH] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_STONJOURNER] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_EISCUE] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_INDEEDEE] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 9,
    },
    [SPECIES_MORPEKO] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_CUFANT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_COPPERAJAH] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_DRACOZOLT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_ARCTOZOLT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_DRACOVISH] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCTOVISH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_DURALUDON] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DREEPY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_DRAKLOAK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_DRAGAPULT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_ZACIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ZAMAZENTA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ETERNATUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_KUBFU] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_URSHIFU] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ZARUDE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_REGIELEKI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_REGIDRAGO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_GLASTRIER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SPECTRIER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CALYREX] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    // Megas
    [SPECIES_VENUSAUR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLASTOISE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BEEDRILL_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_PIDGEOT_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ALAKAZAM_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SLOWBRO_MEGA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_GENGAR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 7,
    },
    [SPECIES_KANGASKHAN_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PINSIR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_GYARADOS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AERODACTYL_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MEWTWO_MEGA_X] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_AMPHAROS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_STEELIX_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SCIZOR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HERACROSS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TYRANITAR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SCEPTILE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SWAMPERT_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SABLEYE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_MAWILE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_AGGRON_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEDICHAM_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MANECTRIC_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SHARPEDO_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CAMERUPT_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ALTARIA_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BANETTE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ABSOL_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GLALIE_MEGA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SALAMENCE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_METAGROSS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIOS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LOPUNNY_MEGA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_GARCHOMP_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUCARIO_MEGA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_GALLADE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_AUDINO_MEGA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 6,
    },
    [SPECIES_DIANCIE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Special Mega + Primals
    [SPECIES_RAYQUAZA_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KYOGRE_PRIMAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_GROUDON_PRIMAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Alolan Forms
    [SPECIES_RATTATA_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_RATICATE_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_RAICHU_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SANDSHREW_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_SANDSLASH_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_VULPIX_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_NINETALES_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_DIGLETT_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 19,
    },
    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_MEOWTH_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_PERSIAN_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_GEODUDE_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_GRAVELER_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_GOLEM_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_GRIMER_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_MUK_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MAROWAK_ALOLAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    // Galarian Forms
    [SPECIES_MEOWTH_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PONYTA_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 19,
    },
    [SPECIES_SLOWBRO_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_WEEZING_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MR_MIME_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_MOLTRES_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SLOWKING_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_CORSOLA_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_LINOONE_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_DARUMAKA_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_DARMANITAN_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_YAMASK_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_STUNFISK_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    // Misc Forms
    // Cosplay Pikachu
    [SPECIES_PIKACHU_COSPLAY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_BELLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_POP_STAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_PH_D] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_LIBRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    // Cap Pikachu
    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    // Pichu
    [SPECIES_PICHU_SPIKY_EARED] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    // Unown
    [SPECIES_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },
    [SPECIES_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 21,
    },
    [SPECIES_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_EMARK] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_QMARK] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 13,
    },
    // Castform
    [SPECIES_CASTFORM_SUNNY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_CASTFORM_RAINY] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_CASTFORM_SNOWY] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 8,
    },
    // Deoxys
    [SPECIES_DEOXYS_ATTACK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DEOXYS_DEFENSE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DEOXYS_SPEED] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    // Burmy
    [SPECIES_BURMY_SANDY_CLOAK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 12,
    },
    [SPECIES_BURMY_TRASH_CLOAK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 8,
    },
    // Wormadam
    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 10,
    },
    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
    // Cherrim
    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    // Shellos
    [SPECIES_SHELLOS_EAST_SEA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    // Gastrodon
    [SPECIES_GASTRODON_EAST_SEA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    // Rotom
    [SPECIES_ROTOM_HEAT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_ROTOM_WASH] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_ROTOM_FROST] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ROTOM_FAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_ROTOM_MOW] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    // Giratina
    [SPECIES_GIRATINA_ORIGIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Shaymin
    [SPECIES_SHAYMIN_SKY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    // Arceus
    [SPECIES_ARCEUS_FIGHTING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_FLYING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_POISON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_GROUND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_ROCK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_BUG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_GHOST] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_STEEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_FIRE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_WATER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_GRASS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_ELECTRIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_PSYCHIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_ICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_DRAGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_DARK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARCEUS_FAIRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Basculin
    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    // Darmanitan
    [SPECIES_DARMANITAN_ZEN_MODE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    // Deerling
    [SPECIES_DEERLING_SUMMER] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_DEERLING_AUTUMN] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_DEERLING_WINTER] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    // Sawsbuck
    [SPECIES_SAWSBUCK_SUMMER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SAWSBUCK_AUTUMN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SAWSBUCK_WINTER] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    // Therian Forms
    [SPECIES_TORNADUS_THERIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_THUNDURUS_THERIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_LANDORUS_THERIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Kyurem
    [SPECIES_KYUREM_WHITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KYUREM_BLACK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Keldeo
    [SPECIES_KELDEO_RESOLUTE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    // Meloetta
    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 2,
    },
    // Genesect
    [SPECIES_GENESECT_DOUSE_DRIVE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_GENESECT_SHOCK_DRIVE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_GENESECT_BURN_DRIVE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_GENESECT_CHILL_DRIVE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    // Greninja
    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GRENINJA_ASH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Vivillon
    [SPECIES_VIVILLON_POLAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_TUNDRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_CONTINENTAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_GARDEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_ELEGANT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MEADOW] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MODERN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MARINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_ARCHIPELAGO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_HIGH_PLAINS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_SANDSTORM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_RIVER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_MONSOON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_SAVANNA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_SUN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_OCEAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_JUNGLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_FANCY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_VIVILLON_POKE_BALL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Flabébé
    [SPECIES_FLABEBE_YELLOW_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FLABEBE_ORANGE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FLABEBE_BLUE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FLABEBE_WHITE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    // Floette
    [SPECIES_FLOETTE_YELLOW_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_ORANGE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_BLUE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_WHITE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_FLOETTE_ETERNAL_FLOWER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    // Florges
    [SPECIES_FLORGES_YELLOW_FLOWER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FLORGES_ORANGE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FLORGES_BLUE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FLORGES_WHITE_FLOWER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Furfrou
    [SPECIES_FURFROU_HEART_TRIM] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_STAR_TRIM] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_DIAMOND_TRIM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_DEBUTANTE_TRIM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_MATRON_TRIM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_DANDY_TRIM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_LA_REINE_TRIM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_KABUKI_TRIM] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_FURFROU_PHARAOH_TRIM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    // Meowstic
    [SPECIES_MEOWSTIC_FEMALE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    // Aegislash
    [SPECIES_AEGISLASH_BLADE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Pumpkaboo
    [SPECIES_PUMPKABOO_SMALL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_PUMPKABOO_LARGE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_PUMPKABOO_SUPER] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    // Gourgeist
    [SPECIES_GOURGEIST_SMALL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 5,
    },
    [SPECIES_GOURGEIST_LARGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GOURGEIST_SUPER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Xerneas
    [SPECIES_XERNEAS_ACTIVE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Zygarde
    [SPECIES_ZYGARDE_10] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Hoopa
    [SPECIES_HOOPA_UNBOUND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Oricorio
    [SPECIES_ORICORIO_POM_POM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ORICORIO_PAU] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_ORICORIO_SENSU] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    // Rockruff
    [SPECIES_ROCKRUFF_OWN_TEMPO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    // Lycanroc
    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_LYCANROC_DUSK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    // Wishiwashi
    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    // Silvally
    [SPECIES_SILVALLY_FIGHTING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_FLYING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_POISON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_GROUND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_ROCK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_BUG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_GHOST] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_STEEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_FIRE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_WATER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_GRASS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_ELECTRIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_PSYCHIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_ICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_DRAGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_DARK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SILVALLY_FAIRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Minior
    [SPECIES_MINIOR_METEOR_ORANGE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_YELLOW] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_GREEN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_BLUE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_INDIGO] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_MINIOR_METEOR_VIOLET] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_MINIOR_CORE_RED] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_MINIOR_CORE_ORANGE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_MINIOR_CORE_YELLOW] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_MINIOR_CORE_GREEN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_MINIOR_CORE_BLUE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_MINIOR_CORE_INDIGO] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_MINIOR_CORE_VIOLET] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    // Mimikyu
    [SPECIES_MIMIKYU_BUSTED] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    // Necrozma
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_NECROZMA_ULTRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Magearna
    [SPECIES_MAGEARNA_ORIGINAL_COLOR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    // Cramorant
    [SPECIES_CRAMORANT_GULPING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CRAMORANT_GORGING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Toxtricity
    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    // Sinistea
    [SPECIES_SINISTEA_ANTIQUE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    // Polteageist
    [SPECIES_POLTEAGEIST_ANTIQUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    // Alcremie
    [SPECIES_ALCREMIE_RUBY_CREAM] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_MATCHA_CREAM] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_MINT_CREAM] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_LEMON_CREAM] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_SALTED_CREAM] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_RUBY_SWIRL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_CARAMEL_SWIRL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_ALCREMIE_RAINBOW_SWIRL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    // Eiscue
    [SPECIES_EISCUE_NOICE_FACE] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    // Indeedee
    [SPECIES_INDEEDEE_FEMALE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    // Morpeko
    [SPECIES_MORPEKO_HANGRY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    // Zacian
    [SPECIES_ZACIAN_CROWNED_SWORD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Zamazenta
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    // Eternatus
    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    // Urshifu
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    // Zarude
    [SPECIES_ZARUDE_DADA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    // Calyrex
    [SPECIES_CALYREX_ICE_RIDER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CALYREX_SHADOW_RIDER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    // Egg
    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 20,
    },
};
