set "_BUILDTIME_NDDSHOME=C:\Program Files\rti_connext_dds-5.3.1"

:: Give priority to the Connext installation found when the workspace was built, if it's valid.
:: If it's not valid, the current value of the NDDSHOME environment variable will be used.
:: The one detected at buildtime may refer to an invalid path for users using "fat archive" binaries, for example.
if exist "%_BUILDTIME_NDDSHOME%\" (
  :: Warn about unused environment variable.
  if "%NDDSHOME%" NEQ "" (
    if "%NDDSHOME%" NEQ "%_BUILDTIME_NDDSHOME%" (
      echo [connext_cmake_module] Warning: NDDSHOME environment variable is set to [[%NDDSHOME%]]. When the workspace was built, Connext was found at [[%_BUILDTIME_NDDSHOME%]], which is what will actually be used. Manually modify the environment now if this is not the configuration you want. 1>&2
    )
  )
  set "_NDDSHOME_TO_USE=%_BUILDTIME_NDDSHOME%"
) else (
  if "%NDDSHOME%" == "" (
    echo [connext_cmake_module] Warning: The location at which Connext was found when the workspace was built [[%_BUILDTIME_NDDSHOME%]] does not point to a valid directory, and the NDDSHOME environment variable has not been set. Support for Connext will not be available. 1>&2
    set "_BUILDTIME_NDDSHOME="
    goto :eof
  )

  if not exist "%NDDSHOME%\" (
    echo [connext_cmake_module] Warning: Neither the location at which Connext was found when the workspace was built [[%_BUILDTIME_NDDSHOME%]] nor the NDDSHOME environment variable [[%NDDSHOME%]] point to a valid directory. Support for Connext will not be available. 1>&2
    set "_BUILDTIME_NDDSHOME="
    goto :eof
  )
  set "_NDDSHOME_TO_USE=%NDDSHOME%"
)

set "_Connext_ENV_SETUP_SCRIPT=%_NDDSHOME_TO_USE%\resource\scripts\rtisetenv_x64Win64VS2017.bat"
if not exist "%_Connext_ENV_SETUP_SCRIPT%" (
  echo [connext_cmake_module] Error: The expected location of the Connext environment setup script [[%_Connext_ENV_SETUP_SCRIPT%]] does not exist. Support for Connext will not be available. 1>&2
  set "_Connext_ENV_SETUP_SCRIPT="
  set "_BUILDTIME_NDDSHOME="
  set "_NDDSHOME_TO_USE="
  goto :eof
)

:: Call RTI's env setup script, piping stdout to nul, since they have echo on.
call "%_Connext_ENV_SETUP_SCRIPT%" 1> nul

set "NDDSHOME=%_NDDSHOME_TO_USE%"

set "_Connext_ENV_SETUP_SCRIPT="
set "_BUILDTIME_NDDSHOME="
set "_NDDSHOME_TO_USE="
