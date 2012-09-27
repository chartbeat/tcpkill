/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define if you have the strftime function.  */
#define HAVE_STRFTIME 1

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if your <sys/time.h> declares struct tm.  */
/* #undef TM_IN_SYS_TIME */

/* Define if the X Window System is missing or not being used.  */
#define X_DISPLAY_MISSING 1

/* Define to 'uint32_t' if <sys/types.h> doesn't define. */
/* #undef u_int32_t */

/* Define to 'uint64_t' if <sys/types.h> doesn't define. */
/* #undef u_int64_t */

/* Define to 'u_int32_t' if <sys/types.h> doesn't define. */
#define in_addr_t u_int32_t

/* Define if you have the <db.h> header file.  */
/* #undef HAVE_DB_H */

/* Define if you have the <db_185.h> header file.  */
#define HAVE_DB_185_H 1

/* Should be in <sys/param.h>, *sigh* */
#define HAVE_MINMAX 1
#ifndef HAVE_MINMAX
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif

/* Define if you have the MD5Update function.  */
/* #undef HAVE_MD5UPDATE */

/* Define if you have the dirname function.  */
#define HAVE_DIRNAME 1

/* Define if you have the ether_ntoa function.  */
#define HAVE_ETHER_NTOA 1

/* Define if you have the gethostname function.  */
#define HAVE_GETHOSTNAME 1

/* Define if you have the socket function.  */
#define HAVE_SOCKET 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the strlcat function.  */
/* #undef HAVE_STRLCAT */

/* Define if you have the strlcpy function.  */
/* #undef HAVE_STRLCPY */

/* Define if you have the strsep function.  */
#define HAVE_STRSEP 1

/* Define if you have the strstr function.  */
#define HAVE_STRSTR 1

/* Define if you have the warnx function.  */
#define HAVE_WARNX 1

/* Define if you have the <err.h> header file.  */
#define HAVE_ERR_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <libgen.h> header file.  */
#define HAVE_LIBGEN_H 1

/* Define if you have the <net/if_tun.h> header file.  */
/* #undef HAVE_NET_IF_TUN_H */

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/queue.h> header file.  */
#define HAVE_SYS_QUEUE_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the nsl library (-lnsl).  */
#define HAVE_LIBNSL 1

/* Define if you have the resolv library (-lresolv).  */
/* #undef HAVE_LIBRESOLV */

/* Define if you have the rpcsvc library (-lrpcsvc).  */
#define HAVE_LIBRPCSVC 1

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */
