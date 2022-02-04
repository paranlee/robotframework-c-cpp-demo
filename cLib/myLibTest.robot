*** Settings ***
Library    myLibTest.py

*** Test Case ***
Validate Users
    [Template]    Login with valid user should succeed
    john    long
    demo    mode

Login With Invalid User Should Fail
    [Template]    Login with invalid user should Fail
    de123       mo123
    invalid     invalid
    long        invalid
    ${EMPTY}    ${EMPTY}

*** Keyword ***
Login with valid user should succeed
    [Arguments]     ${username}     ${password}
    Check User      ${username}     ${password}

Login with invalid user should fail
    [Arguments]     ${username}     ${password}
    Run Keyword And Expect Error    Wrong username/password combination
    ...    Check User   ${username}   ${password}