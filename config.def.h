/* user and group to drop privileges to */
static const char *user  = "anon";
static const char *group = "video";
static int requireuser = 0; /* Whether or not to allow only *user to lock */
static int requiregroup = 0; /* Whether or not to allow only *group to lock */

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
static const char* background_image = "/home/anon/.config/dwm-de/swal/CurrentWallpaper";
