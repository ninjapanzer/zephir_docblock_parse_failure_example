#### Fails Installing with Docblock

##### Reproduction
- $ `zephir init docblockfail`
- create file `docblockfail.zep`
- add namespace `namespace DocBlockFail;`
- add class `class DocBlockTest {}`
- place a docblock above the class
    ```
    /**
     * DocBlockFail
     *
     * @author Paul Scarrone <paul@phalconphp.com>
     */
    ```
- $ `zephir compile` -> will pass
- $ `sudo zephir build` || `zephir build` ->
    ```
    Compiling...
    Installing...
    Zephir\CompilerException: Internal extension compilation failed. Check compile-errors.log for more information
    ```

# compile-errros.log
```
/Users/paulscoder/personalrepos/docblockfail/ext/docblockfail/docblocktest.zep.c:20:4: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
 * DocBlockFail
   ^
/Users/paulscoder/personalrepos/docblockfail/ext/docblockfail/docblocktest.zep.c:20:16: error: expected ';' after top level declarator
 * DocBlockFail
               ^
               ;
1 warning and 1 error generated.
make: *** [docblockfail/docblocktest.lo] Error 1
/Users/paulscoder/personalrepos/docblockfail/ext/docblockfail/docblocktest.zep.c:20:4: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
 * DocBlockFail
   ^
/Users/paulscoder/personalrepos/docblockfail/ext/docblockfail/docblocktest.zep.c:20:16: error: expected ';' after top level declarator
 * DocBlockFail
               ^
               ;
1 warning and 1 error generated.
make: *** [docblockfail/docblocktest.lo] Error 1
```
