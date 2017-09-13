
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


//**
 * DocBlockFail
 *
 * @author Paul Scarrone <paul@phalconphp.com>
 */
ZEPHIR_INIT_CLASS(DocBlockFail_DocBlockTest) {

	ZEPHIR_REGISTER_CLASS(DocBlockFail, DocBlockTest, docblockfail, docblocktest, docblockfail_docblocktest_method_entry, 0);

	return SUCCESS;

}

//**
 * String identity function
 *
 * @param string
 *
 * @return string
 */
PHP_METHOD(DocBlockFail_DocBlockTest, identity) {

	zval *str_param = NULL;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(&str, str_param);


	RETURN_CTOR(&str);

}

