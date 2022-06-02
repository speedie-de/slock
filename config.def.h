/* user and group to drop privileges to */
static const char *user  = "speedie";
static const char *group = "video";

static const char *colorname[NUMCOLS] = {
	[INIT] = "black",       /* after initialization */
	[INPUT] = "#005577",    /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

static const char * message = "";
static const char * text_color = "#ffffff";
static const char * font_name  = "6x13";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
		{ "message",      STRING,  &message },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/speedie/.config/swal/CurrentWallpaper";
