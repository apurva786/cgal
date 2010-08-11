if ( NOT CGAL_GMP_SETUP )
  
  find_package( GMP )
  find_package( MPFR )

  if( GMP_FOUND )
    if( MPFR_FOUND )
      
      include(CGAL_Macros)
    
      message( STATUS "GMP include:     ${GMP_INCLUDE_DIR}" )
      message( STATUS "GMP libraries:   ${GMP_LIBRARIES}" )
      message( STATUS "GMP definitions: ${GMP_DEFINITIONS}" )
      get_dependency_version(GMP)
      set(CGAL_GMP_VERSION "${GMP_VERSION}")
      hide_variable(CGAL_GMP_VERSION)

      message( STATUS "MPFR include:      ${MPFR_INCLUDE_DIR}" )
      message( STATUS "MPFR libraries:    ${MPFR_LIBRARIES}" )
      message( STATUS "MPFR definitions:  ${MPFR_DEFINITIONS}" )
      set( MPFR_DEPENDENCY_LIBRARIES   ${GMP_LIBRARIES} )
      set( MPFR_DEPENDENCY_INCLUDE_DIR ${GMP_INCLUDE_DIR} )
      get_dependency_version(MPFR)
          
      set ( CGAL_USE_GMP 1 )
      set ( CGAL_USE_MPFR 1 )
	
      add_to_cached_list(CGAL_3RD_PARTY_INCLUDE_DIRS   ${MPFR_INCLUDE_DIR}   )
      add_to_cached_list(CGAL_3RD_PARTY_LIBRARIES_DIRS ${MPFR_LIBRARIES_DIR} )
      add_to_cached_list(CGAL_3RD_PARTY_DEFINITIONS    ${MPFR_DEFINITIONS}   )
    
      add_to_cached_list(CGAL_3RD_PARTY_INCLUDE_DIRS   ${GMP_INCLUDE_DIR}   )
      add_to_cached_list(CGAL_3RD_PARTY_LIBRARIES_DIRS ${GMP_LIBRARIES_DIR} )
      add_to_cached_list(CGAL_3RD_PARTY_DEFINITIONS    ${GMP_DEFINITIONS}   )
    
      if ( NOT CGAL_AUTO_LINK_MPFR )
	add_to_cached_list(CGAL_3RD_PARTY_LIBRARIES ${MPFR_LIBRARIES} )
      endif()
      if ( NOT CGAL_AUTO_LINK_GMP )
	add_to_cached_list(CGAL_3RD_PARTY_LIBRARIES ${GMP_LIBRARIES} )
      endif()
      if ( MSVC AND NOT CGAL_AUTO_LINK_MPFR )
        add_to_cached_list(CGAL_3RD_PARTY_DEFINITIONS    -DCGAL_NO_AUTOLINK_MPFR   )
      endif()
      if ( MSVC AND NOT CGAL_AUTO_LINK_GMP )
        add_to_cached_list(CGAL_3RD_PARTY_DEFINITIONS    -DCGAL_NO_AUTOLINK_GMP   )
      endif()
    else( MPFR_FOUND )

      message("CGAL GMP support needs MPFR. GMP will not be supported.")

    endif( MPFR_FOUND )
    
  endif( GMP_FOUND)
  
  set( CGAL_GMP_SETUP TRUE )
  
endif()
