@echo off

cd /D "%~dp0"

IF exist "P:Dayz-ui-ux\" (
	echo Removing existing link P:\Dayz-ui-ux
	rmdir "P:Dayz-ui-ux\"
)

echo Creating link P:\ModTemplate
mklink /J "P:\Dayz-ui-ux\" "%cd%\Dayz-ui-ux\"

echo Done