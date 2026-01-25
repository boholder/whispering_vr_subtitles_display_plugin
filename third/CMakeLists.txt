# Imported OpenVR library with auto-propagated includes
add_library(openvr_api SHARED IMPORTED GLOBAL)
set(OPENVR_DIR "${CMAKE_CURRENT_SOURCE_DIR}/openvr")
set_target_properties(openvr_api PROPERTIES
    IMPORTED_IMPLIB "${OPENVR_DIR}/lib/win64/openvr_api.lib"
    IMPORTED_LOCATION "${OPENVR_DIR}/bin/win64/openvr_api.dll"
    INTERFACE_INCLUDE_DIRECTORIES "${OPENVR_DIR}/headers"
)

add_library(rawdraw INTERFACE)
set_target_properties(rawdraw PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/rawdraw"
)