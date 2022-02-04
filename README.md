# Robot Framework real world example in C / C++

This simple example demonstrates how to use C / C++ language from `Robot Framework` test libraries.  
The example uses Python's standard `ctypes module`,  
which requires that the C code is compiled into a shared library.  

This version is implemented and tested on Linux,  
but adapting it to other operating systems would require only changing compilation and name of the produced shared library.

If you are mainly interested to learn how to create tests cases for Robot Framework or how to extend it with custom libraries,  
you should probably study `other documentation and demo projects` instead.

## Downloading demo package

If you interested in `running tests` yourself, then clone this repository then do `make` and `robot` command!

## System under test

The demo application is a very simple login system `myLib.c`,  
that validates the given user name and password and returns the status.  
There are two valid username password combinations:  

``demo/mode`` and ``john/long``.

Before running the demo,  
you need to compile the demo application by simply running `make` in the directory that was created when you extracted the demo package.  
This will create shared library `myLib.so`.

## Test library

`myLibTest.py`_ is a simple test library that can interact with the system under test using the `ctypes module`.  
The library provides only one keyword `Check User`.  

The ``if __name__ == '__main__'`` block in LoginLibrary.py is not used by the executed tests,  
but it allows using the library code as a tool for manual testing.  

You can test this handy behavior on the command line:  

```bash
    python LoginLibrary.py demo mode
    python LoginLibrary.py demo invalid
```

## Test cases

The `myLibTest.robot` test case file contains all tests for this demo.  
It contains separate tests for valid and invalid login.  

## Preconditions

A precondition for running the tests is having Robot Framework installed.  
`Installation instructions` cover that in detail,  
but if you have pip installed you can simply run:  

```bash
    pip3 install robotframework
```

Robot Framework 3.0 and newer support Python 3 in addition to Python 2.  
Also this demo project is nowadays Python 3 compatible.

## Execution

After Robot Framework is installed, the demo can be executed using the `robot` command:

```bash
    robot myLibTest.robot
```

Run `robot --help` for more information about the command line usage and see  
[Robot Framework User Guide](http://robotframework.org/robotframework/#user-guide) for more details about test execution and Robot Framework in general.  

note: If you are using Robot Framework 2.9 or earlier, you need to use the ``pybot`` command instead.

## Generated results

After running tests you will get report and log in HTML format.  
Example files are also visible online in case you are not interested in running the demo yourself:

- `report.html`
- `log.html`

# Reference

C program library demo: https://bitbucket.org/robotframework/cdemo/src/master/  
`Robot Framework`: http://robotframework.org  
`project downloads`: http://bitbucket.org/robotframework/cdemo/downloads  
`ctypes module`: http://docs.python.org/2/library/ctypes.html  
`Installation instructions`: https://github.com/robotframework/robotframework/blob/master/INSTALL.rst  
`pip`: http://pip-installer.org  
`Robot Framework User Guide`: http://robotframework.org/robotframework/#user-guide  
`report.html`: http://robotframework.bitbucket.org/CDemo/report.html  
`log.html`: http://robotframework.bitbucket.org/CDemo/log.html  