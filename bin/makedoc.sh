#!/bin/sh

TITLE="Roundcube Webmail"
PACKAGES="Webmail"

INSTALL_PATH="`dirname $0`/.."
PATH_PROJECT=$INSTALL_PATH/lib/Office.web/include
PATH_FRAMEWORK=$INSTALL_PATH/lib/Office.web/lib/Roundcube
PATH_DOCS=$INSTALL_PATH/doc/phpdoc
BIN_PHPDOC="`/usr/bin/which phpdoc`"

if [ ! -x "$BIN_PHPDOC" ]
then
  echo "phpdoc not found: $BIN_PHPDOC"
  exit 1
fi

OUTPUTFORMAT=HTML
TEMPLATE=responsive-twig

# make documentation
$BIN_PHPDOC -d $PATH_PROJECT,$PATH_FRAMEWORK -t $PATH_DOCS --title "$TITLE" --defaultpackagename $PACKAGES \
	--template=$TEMPLATE

