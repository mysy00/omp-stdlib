#if defined _INC_a_http
	#endinput
#endif

#if !defined __PawnBuild
	// Doesn't support `#warning`.
	static Using_a_http_legacy_wrapper;
	static Include_open@mp_directly;
	static Also_update_your_compiler;
	#include <open.mp>
	// The old compiler doesn't like `#warning`, even within `#if`.
	#endinput
#endif
	
// This is just a backwards-compatible wrapper.
#warning Using <a_http> legacy wrapper.  Include <open.mp> directly.
#include <open.mp>
