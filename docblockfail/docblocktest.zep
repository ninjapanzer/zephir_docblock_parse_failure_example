namespace DocBlockFail;

/**
 * DocBlockFail
 *
 * @author Paul Scarrone <paul@phalconphp.com>
 */

class DocBlockTest {
  /**
   * String identity function
   *
   * @param string
   *
   * @return string
   */
  private function identity(string str) -> string
  {
      return str;
  }
}
