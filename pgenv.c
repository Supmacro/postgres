
#include <stdlib.h>

#define staticAssertStmt(cond, emsg) \
        do{ _Static_assert(cond, emsg);} while(0);

#define unconstify(_type, expr) \
        staticAssertStmt(__builtin_types_compatible_p(__typeof(expr), const _type), "const char")

const char *pg_varenv[] = {
                "PG_COLORS",  /* pg_logging_init(argv[0]) */
                "PG_COLOR",   /* pg_logging_init(argv[0]) */

                "PGLOCALEDIR",
                "PGSYSCONFDIR", 
                "PGDATA",
            };


