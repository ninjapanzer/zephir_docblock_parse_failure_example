
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_DOCBLOCKFAIL_H
#define PHP_DOCBLOCKFAIL_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_DOCBLOCKFAIL_NAME        "docblockfail"
#define PHP_DOCBLOCKFAIL_VERSION     "0.0.1"
#define PHP_DOCBLOCKFAIL_EXTNAME     "docblockfail"
#define PHP_DOCBLOCKFAIL_AUTHOR      ""
#define PHP_DOCBLOCKFAIL_ZEPVERSION  "0.9.11-534bd284df"
#define PHP_DOCBLOCKFAIL_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(docblockfail)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(docblockfail)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(docblockfail)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(docblockfail, v)
#else
	#define ZEPHIR_GLOBAL(v) (docblockfail_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_docblockfail_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(docblockfail_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(docblockfail_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def docblockfail_globals
#define zend_zephir_globals_def zend_docblockfail_globals

extern zend_module_entry docblockfail_module_entry;
#define phpext_docblockfail_ptr &docblockfail_module_entry

#endif
