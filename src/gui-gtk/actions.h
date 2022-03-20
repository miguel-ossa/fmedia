
#ifndef ACTION_NAMES
	#define A(id)  id
#else
	#define A(id)  #id
#endif

	A(A_NONE),

	A(A_LIST_ADDFILE),
	A(A_LIST_ADDURL),
	A(A_DLOAD_SHOW),
	A(A_FILE_SHOWPCM),
	A(A_FILE_SHOWINFO),
	A(A_FILE_SHOWDIR),
	A(A_SHOW_RENAME),
	A(A_FILE_DELFILE),
	A(A_SHOW),
	A(A_HIDE),
	A(A_QUIT),

	A(A_PLAY),
	A(A_PLAYPAUSE),
	A(A_SEEK),
	A(A_STOP),
	A(A_STOP_AFTER),
	A(A_NEXT),
	A(A_PREV),
	A(A_PLAY_REPEAT),
	A(A_FFWD),
	A(A_RWND),
	A(A_LEAP_FWD),
	A(A_LEAP_BACK),
	A(A_SETGOPOS),
	A(A_GOPOS),
	A(A_VOL),
	A(A_VOLUP),
	A(A_VOLDOWN),
	A(A_VOLRESET),
	A(A_SHOW_PROPS),

	A(A_LIST_NEW),
	A(A_LIST_DEL),
	A(A_LIST_SEL),
	A(A_LIST_READMETA),
	A(A_LIST_SAVE),
	A(A_LIST_SELECTALL),
	A(A_LIST_TO_NEXT),
	A(A_LIST_REMOVE),
	A(A_LIST_RMDEAD),
	A(A_LIST_CLEAR),
	A(A_LIST_RANDOM),
	A(A_LIST_SORTRANDOM),
	A(A_LIST_SHOWCURTRACK),

	A(A_SHOWCONVERT),
	A(A_CONV_SET_SEEK),
	A(A_CONV_SET_UNTIL),

	A(A_ABOUT),
	A(A_CMD_SHOW),
	A(A_CONF_EDIT),
	A(A_USRCONF_EDIT),
	A(A_FMEDGUI_EDIT),
	A(A_README_SHOW),
	A(A_CHANGES_SHOW),

	A(A_CONVERT),
	A(A_CONV_MOVE_UNTIL),
	A(A_CONVOUTBROWSE),
	A(A_CONV_EDIT),

	A(A_URL_ADD),

	A(A_DLOAD_SHOWFMT),
	A(A_DLOAD_DL),

	A(A_PLAYPROPS_EDIT),

	A(A_CMD_EXEC),
	A(A_CMD_FILTER),

	A(A_RENAME),

	A(A_EXPL_ADDPLAY),
	A(A_EXPL_ADD),

// private:
	A(A_ONCLOSE),
	A(A_ONDROPFILE),
	A(LOADLISTS),
	A(LIST_DISPINFO),
	A(_A_PLAY_REPEAT),
	A(_A_LIST_RANDOM),
	A(_A_URLS_ADD_PLAY),
	A(A_CONV_DISP),
	A(A_PLAYPROPS_DISP),
	A(A_CMD_DISP),

#undef A
