FIND_PATH(UTILSBOX_INCLUDE_DIR utilsbox.h /usr/include /usr/local/include)
FIND_LIBRARY(UTILSBOX_LIBRARY NAMES utilsbox PATH /usr/lib /usr/local/lib)

IF(UTILSBOX_INCLUDE_DIR AND UTILSBOX_LIBRARY)
    SET(UTILSBOX_FOUND TRUE)
ENDIF()

IF(UTILSBOX_FOUND)
    IF (NOT UTILSBOX_FIND_QUIETLY)
        MESSAGE(STATUS "Found UtilsBox: ${UTILSBOX_LIBRARY}")
    ENDIF()
ELSE()
    IF (UTILSBOX_FIND_REQUIRED)
        MESSAGE(FATAL_ERROR "Could not find utilsbox library")
    ENDIF()
ENDIF()