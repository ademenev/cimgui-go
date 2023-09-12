vcpkg_check_linkage(ONLY_STATIC_LIBRARY)

vcpkg_from_github(
  OUT_SOURCE_PATH SOURCE_PATH
  REPO VirusTotal/yara
  REF v4.1.1
  SHA512 e4474254249d5b3fbb7231fdec5f4e080be042098e1b2bc953aa93513ce0b4742e34acac2911687e75055ecd589d942f71b79c58ca47eee243626ab3ec8add71
  HEAD_REF master
)

file(COPY ${CMAKE_CURRENT_LIST_DIR}/CMakeLists.txt DESTINATION ${SOURCE_PATH})

vcpkg_configure_cmake(
  SOURCE_PATH ${SOURCE_PATH}
  PREFER_NINJA
  OPTIONS_DEBUG 
      -DDISABLE_INSTALL_HEADERS=ON 
      -DDISABLE_INSTALL_TOOLS=ON
)

vcpkg_install_cmake()

# Handle copyright
file(INSTALL ${SOURCE_PATH}/COPYING DESTINATION ${CURRENT_PACKAGES_DIR}/share/${PORT} RENAME copyright)