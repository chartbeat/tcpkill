Slightly modified tcpkill util
([original](http://monkey.org/~dugsong/dsniff/)), to allow for only
killing a specific number of connections.

tcpkill
        kills specified in-progress TCP connections (useful for
        libnids-based applications which require a full TCP 3-whs for
        TCB creation).
