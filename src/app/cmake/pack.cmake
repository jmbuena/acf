set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_FILE "${PROJECT_SOURCE_DIR}/DESCRIPTION")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "ACF")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "acf")
set(CPACK_PACKAGE_CONTACT "dhirvonen@elucideye.com")
set(CPACK_PACKAGE_MAINTAINER "dhirvonen@elucideye.com")
set(CPACK_NSIS_MODIFY_PATH ON)

set(CPACK_STRIP_FILES TRUE)

include(CPack)
