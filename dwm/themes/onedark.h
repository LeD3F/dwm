static char c000000[]                    = "#bc7ad9"; // placeholder value

static char normfgcolor[]                = "#efefef";
static char normbgcolor[]                = "#1e222a";
static char normbordercolor[]            = "#282c34";
static char normfloatcolor[]             = "#1e222a";

static char selfgcolor[]                 = "#ffffff";
static char selbgcolor[]                 = "#4d78cc";
static char selbordercolor[]             = "#4d78cc";
static char selfloatcolor[]              = "#4d78cc";

static char titlenormfgcolor[]           = "#efefef";
static char titlenormbgcolor[]           = "#1e222a";
static char titlenormbordercolor[]       = "#282c34";
static char titlenormfloatcolor[]        = "#1e222a";

static char titleselfgcolor[]            = "#98c379";
static char titleselbgcolor[]            = "#1e222a";
static char titleselbordercolor[]        = "#1e222a";
static char titleselfloatcolor[]         = "#4d78cc";

static char tagsnormfgcolor[]            = "#efefef";
static char tagsnormbgcolor[]            = "#1e222a";
static char tagsnormbordercolor[]        = "#282c34";
static char tagsnormfloatcolor[]         = "#1e222a";

static char tagsselfgcolor[]             = "#71abeb";
static char tagsselbgcolor[]             = "#282c34";
static char tagsselbordercolor[]         = "#71abeb";
static char tagsselfloatcolor[]          = "#71abeb";

static char hidnormfgcolor[]             = "#e06c75";
static char hidselfgcolor[]              = "#71abeb";
static char hidnormbgcolor[]             = "#1e222a";
static char hidselbgcolor[]              = "#1e222a";

static char urgfgcolor[]                 = "#efefef";
static char urgbgcolor[]                 = "#1e222a";
static char urgbordercolor[]             = "#6bb2c0";
static char urgfloatcolor[]              = "#1e222a";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#e06c75",        normbgcolor,			normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#c9866f",        normbordercolor,		selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#39D7E5",        normbgcolor,  		titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#6bb2c0",        normbordercolor,		titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ebcb8d",        normbgcolor,			tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#bc7ad9",        normbordercolor,		tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#71abeb",        normbgcolor,			c000000,              c000000 },
	[SchemeHidSel]       = { "#9ec07c",        normbordercolor,		c000000,              c000000 },
	[SchemeUrg]          = { "#4d78cc",        normbgcolor,			urgbordercolor,       urgfloatcolor },
};