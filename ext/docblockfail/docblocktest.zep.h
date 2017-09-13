
extern zend_class_entry *docblockfail_docblocktest_ce;

ZEPHIR_INIT_CLASS(DocBlockFail_DocBlockTest);

PHP_METHOD(DocBlockFail_DocBlockTest, identity);

ZEND_BEGIN_ARG_INFO_EX(arginfo_docblockfail_docblocktest_identity, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(docblockfail_docblocktest_method_entry) {
	PHP_ME(DocBlockFail_DocBlockTest, identity, arginfo_docblockfail_docblocktest_identity, ZEND_ACC_PRIVATE)
	PHP_FE_END
};
