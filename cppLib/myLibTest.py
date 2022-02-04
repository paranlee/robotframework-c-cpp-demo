from ctypes import CDLL, c_char_p

LIBRARY = CDLL('./myLib.so')

def check_user(username, passwd):

    """ Validates user name and password using imported shared C++ library. """
    username = c_char_p(username.encode('UTF-8'))
    passwd = c_char_p(passwd.encode('UTF-8'))

    if not LIBRARY.validate_user(username, passwd):
        raise AssertionError('Wrong username/password combination')

if __name__ == '__main__':
    import sys
    try:
        check_user(*sys.argv[1:])
    except TypeError:
        print('Usage: %s username password' % sys.argv[0])
    except AssertionError as err:
        print(err)
    else:
        print('Valid password')
