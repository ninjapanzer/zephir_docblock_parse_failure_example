
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "docblockfail.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *docblockfail_docblocktest_ce;

ZEND_DECLARE_MODULE_GLOBALS(docblockfail)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(docblockfail)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(DocBlockFail_DocBlockTest);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(docblockfail)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_docblockfail_globals *docblockfail_globals TSRMLS_DC)
{
	docblockfail_globals->initialized = 0;

	/* Memory options */
	docblockfail_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	docblockfail_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	docblockfail_globals->cache_enabled = 1;

	/* Recursive Lock */
	docblockfail_globals->recursive_lock = 0;

	/* Static cache */
	memset(docblockfail_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_docblockfail_globals *docblockfail_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(docblockfail)
{

	zend_docblockfail_globals *docblockfail_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	docblockfail_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(docblockfail_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(docblockfail_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(docblockfail)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(docblockfail)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_DOCBLOCKFAIL_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_DOCBLOCKFAIL_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_DOCBLOCKFAIL_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_DOCBLOCKFAIL_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_DOCBLOCKFAIL_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(docblockfail)
{
	php_zephir_init_globals(docblockfail_globals TSRMLS_CC);
	php_zephir_init_module_globals(docblockfail_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(docblockfail)
{

}


zend_function_entry php_docblockfail_functions[] = {
ZEND_FE_END

};

zend_module_entry docblockfail_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_DOCBLOCKFAIL_EXTNAME,
	php_docblockfail_functions,
	PHP_MINIT(docblockfail),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(docblockfail),
#else
	NULL,
#endif
	PHP_RINIT(docblockfail),
	PHP_RSHUTDOWN(docblockfail),
	PHP_MINFO(docblockfail),
	PHP_DOCBLOCKFAIL_VERSION,
	ZEND_MODULE_GLOBALS(docblockfail),
	PHP_GINIT(docblockfail),
	PHP_GSHUTDOWN(docblockfail),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_DOCBLOCKFAIL
ZEND_GET_MODULE(docblockfail)
#endif
