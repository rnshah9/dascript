/*
 * uriparser - RFC 3986 URI parsing library
 *
 * Copyright (C) 2007, Weijia Song <songweijia@gmail.com>
 * Copyright (C) 2007, Sebastian Pipping <webmaster@hartwork.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *     * Redistributions of source code must retain the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 *     * Neither the name of the <ORGANIZATION> nor the names of its
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written
 *       permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifdef URI_TWICE_C_ENABLE



/* For prototypes */
#define URI_TWICE_H_ENABLE
#include <uriparser/UriTwice.h>
#undef  URI_TWICE_H_ENABLE


#ifdef URI_ANSI
# include <uriparser/UriAnsi.h>
#else
# include <uriparser/UriUnicode.h>
#endif



/* For NULL */
#include <stdio.h>

/* For strlen */
#include <string.h>



/* Prototypes */
const URI_CHAR * URI_FUNC(ParseAuthority)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseAuthorityTwo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseHexZero)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseHierPart)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseIpFutLoop)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseIpFutStopGo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseIpLit2)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseIpLiteral)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseIPv6address)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseMustBeSegmentNzNc)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseOwnHost)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseOwnHost2)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseOwnHostUserInfo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseOwnHostUserInfoNz)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseOwnPortUserInfo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseOwnUserInfo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePartHelperTwo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePathAbsEmpty)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePathAbsNoLeadSlash)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePathRootless)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePchar)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePctEncoded)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePctSubUnres)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParsePort)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseQueryFrag)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseSegment)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseSegmentNz)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseSegmentNzNcOrScheme2)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseUriReference)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseUriTail)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseUriTailTwo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);
const URI_CHAR * URI_FUNC(ParseZeroMoreSlashSegs)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast);



/*
 * [authority]->[ipLiteral][authorityTwo]
 * [authority]->[ownHostUserInfoNz]
 * [authority]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseAuthority)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('['):
		{
			const URI_CHAR * const afterIpLiteral
					= URI_FUNC(ParseIpLiteral)(parser, first, afterLast);
			if (afterIpLiteral == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseAuthorityTwo)(parser, afterIpLiteral, afterLast);
		}

	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(':'):
	case _UT(';'):
	case _UT('@'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return URI_FUNC(ParseOwnHostUserInfoNz)(parser, first, afterLast);

	default:
		return first;
	}
}

/*
 * [authorityTwo]-><:>[port]
 * [authorityTwo]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseAuthorityTwo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT(':'):
		return URI_FUNC(ParsePort)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [hexZero]->[HEXDIG][hexZero]
 * [hexZero]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseHexZero)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
		return URI_FUNC(ParseHexZero)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [hierPart]->[pathRootless]
 * [hierPart]-></>[partHelperTwo]
 * [hierPart]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseHierPart)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(':'):
	case _UT(';'):
	case _UT('@'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return URI_FUNC(ParsePathRootless)(parser, first, afterLast);

	case _UT('/'):
		return URI_FUNC(ParsePartHelperTwo)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [ipFutLoop]->[subDelims][ipFutStopGo]
 * [ipFutLoop]->[unreserved][ipFutStopGo]
 * [ipFutLoop]-><:>[ipFutStopGo]
 */
const URI_CHAR * URI_FUNC(ParseIpFutLoop)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('*'):
	case _UT(','):
	case _UT(';'):
	case _UT('\''):
	case _UT('+'):
	case _UT('='):
	case _UT('-'):
	case _UT('.'):
	case _UT('_'):
	case _UT('~'):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
	case _UT(':'):
		return URI_FUNC(ParseIpFutStopGo)(parser, first + 1, afterLast);

	default:
		return NULL;
	}
}



/*
 * [ipFutStopGo]->[ipFutLoop]
 * [ipFutStopGo]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseIpFutStopGo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(':'):
	case _UT(';'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return URI_FUNC(ParseIpFutLoop)(parser, first, afterLast);

	default:
		return first;
	}
}



/*
 * [ipFuture]-><v>[HEXDIG][hexZero]<.>[ipFutLoop]
 */
const URI_CHAR * URI_FUNC(ParseIpFuture)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('v'):
		if (first + 1 >= afterLast) {
			return NULL;
		}

		switch (first[1]) {
		case _UT('0'):
		case _UT('1'):
		case _UT('2'):
		case _UT('3'):
		case _UT('4'):
		case _UT('5'):
		case _UT('6'):
		case _UT('7'):
		case _UT('8'):
		case _UT('9'):
		case _UT('a'):
		case _UT('A'):
		case _UT('b'):
		case _UT('B'):
		case _UT('c'):
		case _UT('C'):
		case _UT('d'):
		case _UT('D'):
		case _UT('e'):
		case _UT('E'):
		case _UT('f'):
		case _UT('F'):
			{
				const URI_CHAR * const afterHexZero
						= URI_FUNC(ParseHexZero)(parser, first + 2, afterLast);
				if (afterHexZero == NULL) {
					return NULL;
				}
				if (*afterHexZero != _UT('.')) {
					return NULL;
				}
				return URI_FUNC(ParseIpFutLoop)(parser, afterHexZero + 1, afterLast);
			}

		default:
			return NULL;
		}

	default:
		return NULL;
	}
}



/*
 * [ipLit2]->[ipFuture]<]>
 * [ipLit2]->[IPv6address]<]>
 */
const URI_CHAR * URI_FUNC(ParseIpLit2)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check */
	}

	switch (*first) {
	case _UT('v'):
		{
			const URI_CHAR * const afterIpFuture
					= URI_FUNC(ParseIpFuture)(parser, first, afterLast);
			if (afterIpFuture == NULL) {
				return NULL;
			}
			if (*afterIpFuture != _UT(']')) {
				return NULL;
			}
			return afterIpFuture + 1;
		}

	case _UT(':'):
	case _UT(']'):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
		{
			const URI_CHAR * const afterIPv6address
					= URI_FUNC(ParseIPv6address)(parser, first, afterLast);
			if (afterIPv6address == NULL) {
				return NULL;
			}
			if (*afterIPv6address != _UT(']')) {
				return NULL;
			}
			return afterIPv6address + 1;
		}

	default:
		return NULL;
	}
}



/*
 * [ipLiteral]-><[>[ipLit2]
 */
const URI_CHAR * URI_FUNC(ParseIpLiteral)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	/* TODO resolve rule*/
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('['):
		return URI_FUNC(ParseIpLit2)(parser, first + 1, afterLast);

	default:
		return NULL;
	}
}



/*
 * [IPv6address]->[HEXDIG][IPv6address]
 * [IPv6address]-><:>[IPv6address]
 * [IPv6address]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseIPv6address)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT(':'):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
		return URI_FUNC(ParseIPv6address)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [mustBeSegmentNzNc]->[pctEncoded][mustBeSegmentNzNc]
 * [mustBeSegmentNzNc]->[subDelims][mustBeSegmentNzNc]
 * [mustBeSegmentNzNc]->[unreserved][mustBeSegmentNzNc]
 * [mustBeSegmentNzNc]->[uriTail]
 * [mustBeSegmentNzNc]-></>[segment][zeroMoreSlashSegs][uriTail]
 * [mustBeSegmentNzNc]-><@>[mustBeSegmentNzNc]
 */
const URI_CHAR * URI_FUNC(ParseMustBeSegmentNzNc)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check */
	}

	switch (*first) {
	case _UT('%'):
		{
			const URI_CHAR * const afterPctEncoded
					= URI_FUNC(ParsePctEncoded)(parser, first, afterLast);
			if (afterPctEncoded == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseMustBeSegmentNzNc)(parser, afterPctEncoded, afterLast);
		}

	case _UT('@'):
	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('*'):
	case _UT(','):
	case _UT(';'):
	case _UT('\''):
	case _UT('+'):
	case _UT('='):
	case _UT('-'):
	case _UT('.'):
	case _UT('_'):
	case _UT('~'):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return URI_FUNC(ParseMustBeSegmentNzNc)(parser, first + 1, afterLast);

	case _UT('/'):
		{
			const URI_CHAR * afterZeroMoreSlashSegs;
			const URI_CHAR * const afterSegment
					= URI_FUNC(ParseSegment)(parser, first, afterLast);
			if (afterSegment == NULL) {
				return NULL;
			}
			afterZeroMoreSlashSegs
					= URI_FUNC(ParseZeroMoreSlashSegs)(parser, afterSegment, afterLast);
			if (afterZeroMoreSlashSegs == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseUriTail)(parser, afterZeroMoreSlashSegs, afterLast);
		}

	default:
		return URI_FUNC(ParseUriTail)(parser, first, afterLast);
	}
}



/*
 * [ownHost]->[ipLiteral][authorityTwo]
 * [ownHost]->[ownHost2]
 */
const URI_CHAR * URI_FUNC(ParseOwnHost)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check */
	}

	switch (*first) {
	case _UT('['):
		{
			const URI_CHAR * const afterIpLiteral
					= URI_FUNC(ParseIpLiteral)(parser, first, afterLast);
			if (afterIpLiteral == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseAuthorityTwo)(parser, afterIpLiteral, afterLast);
		}

	default:
		return URI_FUNC(ParseOwnHost2)(parser, first, afterLast);
	}
}



/*
 * [ownHost2]->[authorityTwo]
 * [ownHost2]->[pctSubUnres][ownHost2]
 */
const URI_CHAR * URI_FUNC(ParseOwnHost2)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check*/
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(';'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		{
			const URI_CHAR * const afterPctSubUnres
					= URI_FUNC(ParsePctSubUnres)(parser, first, afterLast);
			if (afterPctSubUnres == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseOwnHost2)(parser, afterPctSubUnres, afterLast);
		}

	default:
		return URI_FUNC(ParseAuthorityTwo)(parser, first, afterLast);
	}
}



/*
 * [ownHostUserInfo]->[ownHostUserInfoNz]
 * [ownHostUserInfo]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseOwnHostUserInfo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(':'):
	case _UT(';'):
	case _UT('@'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return URI_FUNC(ParseOwnHostUserInfoNz)(parser, first, afterLast);

	default:
		return first;
	}
}



/*
 * [ownHostUserInfoNz]->[pctSubUnres][ownHostUserInfo]
 * [ownHostUserInfoNz]-><:>[ownPortUserInfo]
 * [ownHostUserInfoNz]-><@>[ownHost]
 */
const URI_CHAR * URI_FUNC(ParseOwnHostUserInfoNz)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(';'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		{
			const URI_CHAR * const afterPctSubUnres
					= URI_FUNC(ParsePctSubUnres)(parser, first, afterLast);
			if (afterPctSubUnres == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseOwnHostUserInfo)(parser, afterPctSubUnres, afterLast);
		}

	case _UT(':'):
		return URI_FUNC(ParseOwnPortUserInfo)(parser, first + 1, afterLast);

	case _UT('@'):
		return URI_FUNC(ParseOwnHost)(parser, first + 1, afterLast);

	default:
		return NULL;
	}
}



/*
 * [ownPortUserInfo]->[ALPHA][ownUserInfo]
 * [ownPortUserInfo]->[DIGIT][ownPortUserInfo]
 * [ownPortUserInfo]-><.>[ownUserInfo]
 * [ownPortUserInfo]-><_>[ownUserInfo]
 * [ownPortUserInfo]-><~>[ownUserInfo]
 * [ownPortUserInfo]-><->[ownUserInfo]
 * [ownPortUserInfo]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseOwnPortUserInfo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
	case _UT('.'):
	case _UT('_'):
	case _UT('~'):
	case _UT('-'):
		return URI_FUNC(ParseOwnUserInfo)(parser, first + 1, afterLast);

	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
		return URI_FUNC(ParseOwnPortUserInfo)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [ownUserInfo]->[pctSubUnres][ownUserInfo]
 * [ownUserInfo]-><:>[ownUserInfo]
 * [ownUserInfo]-><@>[ownHost]
 */
const URI_CHAR * URI_FUNC(ParseOwnUserInfo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(';'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		{
			const URI_CHAR * const afterPctSubUnres
					= URI_FUNC(ParsePctSubUnres)(parser, first, afterLast);
			if (afterPctSubUnres == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseOwnUserInfo)(parser, afterPctSubUnres, afterLast);
		}

	case _UT(':'):
		return URI_FUNC(ParseOwnUserInfo)(parser, first + 1, afterLast);

	case _UT('@'):
		return URI_FUNC(ParseOwnHost)(parser, first + 1, afterLast);

	default:
		return NULL;
	}
}



/*
 * [partHelperTwo]->[pathAbsNoLeadSlash]
 * [partHelperTwo]-></>[authority][pathAbsEmpty]
 */
const URI_CHAR * URI_FUNC(ParsePartHelperTwo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check */
	}

	switch (*first) {
	case _UT('/'):
		{
			const URI_CHAR * const afterAuthority
					= URI_FUNC(ParseAuthority)(parser, first + 1, afterLast);
			if (afterAuthority == NULL) {
				return NULL;
			}
			return URI_FUNC(ParsePathAbsEmpty)(parser, afterAuthority, afterLast);
		}

	default:
		return URI_FUNC(ParsePathAbsNoLeadSlash)(parser, first, afterLast);
	}
}



/*
 * [pathAbsEmpty]-></>[segment][pathAbsEmpty]
 * [pathAbsEmpty]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParsePathAbsEmpty)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('/'):
		{
			const URI_CHAR * const afterSegment
					= URI_FUNC(ParseSegment)(parser, first + 1, afterLast);
			if (afterSegment == NULL) {
				return NULL;
			}
			return URI_FUNC(ParsePathAbsEmpty)(parser, afterSegment, afterLast);
		}


	default:
		return first;
	}
}



/*
 * [pathAbsNoLeadSlash]->[segmentNz][zeroMoreSlashSegs]
 * [pathAbsNoLeadSlash]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParsePathAbsNoLeadSlash)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('k'):
	case _UT('O'):
	case _UT('+'):
	case _UT('0'):
	case _UT('_'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('V'):
	case _UT('v'):
	case _UT(';'):
	case _UT('I'):
	case _UT(')'):
	case _UT('a'):
	case _UT('F'):
	case _UT('u'):
	case _UT('U'):
	case _UT('='):
	case _UT('j'):
	case _UT('d'):
	case _UT('S'):
	case _UT('z'):
	case _UT('D'):
	case _UT('K'):
	case _UT('w'):
	case _UT('R'):
	case _UT(':'):
	case _UT('g'):
	case _UT('B'):
	case _UT('b'):
	case _UT('Q'):
	case _UT(','):
	case _UT('@'):
	case _UT('M'):
	case _UT('&'):
	case _UT('f'):
	case _UT('y'):
	case _UT('T'):
	case _UT('9'):
	case _UT('%'):
	case _UT('x'):
	case _UT('e'):
	case _UT('~'):
	case _UT('3'):
	case _UT('('):
	case _UT('h'):
	case _UT('c'):
	case _UT('W'):
	case _UT('H'):
	case _UT('G'):
	case _UT('6'):
	case _UT('1'):
	case _UT('i'):
	case _UT('5'):
	case _UT('A'):
	case _UT('!'):
	case _UT('t'):
	case _UT('N'):
	case _UT('4'):
	case _UT('*'):
	case _UT('s'):
	case _UT('X'):
	case _UT('o'):
	case _UT('Z'):
	case _UT('$'):
	case _UT('7'):
	case _UT('r'):
	case _UT('2'):
	case _UT('C'):
	case _UT('l'):
	case _UT('\''):
	case _UT('L'):
	case _UT('-'):
	case _UT('m'):
	case _UT('J'):
	case _UT('Y'):
	case _UT('.'):
	case _UT('n'):
	case _UT('8'):
	case _UT('E'):
		{
			const URI_CHAR * const afterSegmentNz
					= URI_FUNC(ParseSegmentNz)(parser, first, afterLast);
			if (afterSegmentNz == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseZeroMoreSlashSegs)(parser, afterSegmentNz, afterLast);
		}

	default:
		return first;
	}
}



/*
 * [pathRootless]->[segmentNz][zeroMoreSlashSegs]
 */
const URI_CHAR * URI_FUNC(ParsePathRootless)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	const URI_CHAR * const afterSegmentNz
			= URI_FUNC(ParseSegmentNz)(parser, first, afterLast);
	if (afterSegmentNz == NULL) {
		return NULL;
	}
	return URI_FUNC(ParseZeroMoreSlashSegs)(parser, afterSegmentNz, afterLast);
}



/*
 * [pchar]->[pctEncoded]
 * [pchar]->[subDelims]
 * [pchar]->[unreserved]
 * [pchar]-><:>
 * [pchar]-><@>
 */
const URI_CHAR * URI_FUNC(ParsePchar)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('%'):
		return URI_FUNC(ParsePctEncoded)(parser, first, afterLast);

	case _UT(':'):
	case _UT('@'):
	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('*'):
	case _UT(','):
	case _UT(';'):
	case _UT('\''):
	case _UT('+'):
	case _UT('='):
	case _UT('-'):
	case _UT('.'):
	case _UT('_'):
	case _UT('~'):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return first + 1;

	default:
		return NULL;
	}
}



/*
 * [pctEncoded]-><%>[HEXDIG][HEXDIG]
 */
const URI_CHAR * URI_FUNC(ParsePctEncoded)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('%'):
		if (first + 1 >= afterLast) {
			return NULL;
		}

		switch (first[1]) {
		case _UT('0'):
		case _UT('1'):
		case _UT('2'):
		case _UT('3'):
		case _UT('4'):
		case _UT('5'):
		case _UT('6'):
		case _UT('7'):
		case _UT('8'):
		case _UT('9'):
		case _UT('a'):
		case _UT('A'):
		case _UT('b'):
		case _UT('B'):
		case _UT('c'):
		case _UT('C'):
		case _UT('d'):
		case _UT('D'):
		case _UT('e'):
		case _UT('E'):
		case _UT('f'):
		case _UT('F'):
			if (first + 2 >= afterLast) {
				return NULL;
			}

			switch (first[2]) {
			case _UT('0'):
			case _UT('1'):
			case _UT('2'):
			case _UT('3'):
			case _UT('4'):
			case _UT('5'):
			case _UT('6'):
			case _UT('7'):
			case _UT('8'):
			case _UT('9'):
			case _UT('a'):
			case _UT('A'):
			case _UT('b'):
			case _UT('B'):
			case _UT('c'):
			case _UT('C'):
			case _UT('d'):
			case _UT('D'):
			case _UT('e'):
			case _UT('E'):
			case _UT('f'):
			case _UT('F'):
				return first + 3;

			default:
				return NULL;
			}

		default:
			return NULL;
		}

	default:
		return NULL;
	}
}



/*
 * [pctSubUnres]->[pctEncoded]
 * [pctSubUnres]->[subDelims]
 * [pctSubUnres]->[unreserved]
 */
const URI_CHAR * URI_FUNC(ParsePctSubUnres)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return NULL;
	}

	switch (*first) {
	case _UT('%'):
		return URI_FUNC(ParsePctEncoded)(parser, first, afterLast);

	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('*'):
	case _UT(','):
	case _UT(';'):
	case _UT('\''):
	case _UT('+'):
	case _UT('='):
	case _UT('-'):
	case _UT('.'):
	case _UT('_'):
	case _UT('~'):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return first + 1;

	default:
		return NULL;
	}
}



/*
 * [port]->[DIGIT][port]
 * [port]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParsePort)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
		return URI_FUNC(ParsePort)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [queryFrag]->[pchar][queryFrag]
 * [queryFrag]-></>[queryFrag]
 * [queryFrag]-><?>[queryFrag]
 * [queryFrag]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseQueryFrag)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(':'):
	case _UT(';'):
	case _UT('@'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		{
			const URI_CHAR * const afterPchar
					= URI_FUNC(ParsePchar)(parser, first, afterLast);
			if (afterPchar == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseQueryFrag)(parser, afterPchar, afterLast);
		}

	case _UT('/'):
	case _UT('?'):
		return URI_FUNC(ParseQueryFrag)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [segment]->[pchar][segment]
 * [segment]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseSegment)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('!'):
	case _UT('$'):
	case _UT('%'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('-'):
	case _UT('*'):
	case _UT(','):
	case _UT('.'):
	case _UT(':'):
	case _UT(';'):
	case _UT('@'):
	case _UT('\''):
	case _UT('_'):
	case _UT('~'):
	case _UT('+'):
	case _UT('='):
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		{
			const URI_CHAR * const afterPchar
					= URI_FUNC(ParsePchar)(parser, first, afterLast);
			if (afterPchar == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseSegment)(parser, afterPchar, afterLast);
		}

	default:
		return first;
	}
}



/*
 * [segmentNz]->[pchar][segment]
 */
const URI_CHAR * URI_FUNC(ParseSegmentNz)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	const URI_CHAR * const afterPchar
			= URI_FUNC(ParsePchar)(parser, first, afterLast);
	if (afterPchar == NULL) {
		return NULL;
	}
	return URI_FUNC(ParseMustBeSegmentNzNc)(parser, afterPchar, afterLast);
}



/*
 * [segmentNzNcOrScheme2]->[ALPHA][segmentNzNcOrScheme2]
 * [segmentNzNcOrScheme2]->[DIGIT][segmentNzNcOrScheme2]
 * [segmentNzNcOrScheme2]->[pctEncoded][mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]->[uriTail]
 * [segmentNzNcOrScheme2]-><!>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><$>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><&>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><(>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><)>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><*>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><,>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><.>[segmentNzNcOrScheme2]
 * [segmentNzNcOrScheme2]-></>[segment][zeroMoreSlashSegs][uriTail]
 * [segmentNzNcOrScheme2]-><:>[hierPart][uriTail]
 * [segmentNzNcOrScheme2]-><;>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><@>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><_>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><~>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><+>[segmentNzNcOrScheme2]
 * [segmentNzNcOrScheme2]-><=>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><'>[mustBeSegmentNzNc]
 * [segmentNzNcOrScheme2]-><->[segmentNzNcOrScheme2]
 */
const URI_CHAR * URI_FUNC(ParseSegmentNzNcOrScheme2)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check */
	}

	switch (*first) {
	/* ALPHA */
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):

	/* DIGIT */
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):

	/* ... */
	case _UT('.'):
	case _UT('+'):
	case _UT('-'):
		return URI_FUNC(ParseSegmentNzNcOrScheme2)(parser, first + 1, afterLast);

	case _UT('%'):
		{
			const URI_CHAR * const afterPctEncoded
					= URI_FUNC(ParsePctEncoded)(parser, first, afterLast);
			if (afterPctEncoded == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseMustBeSegmentNzNc)(parser, afterPctEncoded, afterLast);
		}

	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('*'):
	case _UT(','):
	case _UT(';'):
	case _UT('@'):
	case _UT('_'):
	case _UT('~'):
	case _UT('='):
	case _UT('\''):
		return URI_FUNC(ParseMustBeSegmentNzNc)(parser, first + 1, afterLast);

	case _UT('/'):
		{
			const URI_CHAR * afterZeroMoreSlashSegs;
			const URI_CHAR * const afterSegment
					= URI_FUNC(ParseSegment)(parser, first, afterLast);
			if (afterSegment == NULL) {
				return NULL;
			}
			afterZeroMoreSlashSegs
					= URI_FUNC(ParseZeroMoreSlashSegs)(parser, afterSegment, afterLast);
			if (afterZeroMoreSlashSegs == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseUriTail)(parser, afterZeroMoreSlashSegs, afterLast);
		}

	case _UT(':'):
		{
			const URI_CHAR * const afterHierPart
					= URI_FUNC(ParseHierPart)(parser, first + 1, afterLast);
			if (afterHierPart == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseUriTail)(parser, afterHierPart, afterLast);
		}

	default:
		return URI_FUNC(ParseUriTail)(parser, first, afterLast);
	}
}



/*
 * [uriReference]->[ALPHA][segmentNzNcOrScheme2]
 * [uriReference]->[DIGIT][mustBeSegmentNzNc]
 * [uriReference]->[pctEncoded][mustBeSegmentNzNc]
 * [uriReference]->[subDelims][mustBeSegmentNzNc]
 * [uriReference]->[uriTail]
 * [uriReference]-><.>[mustBeSegmentNzNc]
 * [uriReference]-></>[partHelperTwo][uriTail]
 * [uriReference]-><@>[mustBeSegmentNzNc]
 * [uriReference]-><_>[mustBeSegmentNzNc]
 * [uriReference]-><~>[mustBeSegmentNzNc]
 * [uriReference]-><->[mustBeSegmentNzNc]
 */
const URI_CHAR * URI_FUNC(ParseUriReference)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast; /* TODO check */
	}

	switch (*first) {
	case _UT('a'):
	case _UT('A'):
	case _UT('b'):
	case _UT('B'):
	case _UT('c'):
	case _UT('C'):
	case _UT('d'):
	case _UT('D'):
	case _UT('e'):
	case _UT('E'):
	case _UT('f'):
	case _UT('F'):
	case _UT('g'):
	case _UT('G'):
	case _UT('h'):
	case _UT('H'):
	case _UT('i'):
	case _UT('I'):
	case _UT('j'):
	case _UT('J'):
	case _UT('k'):
	case _UT('K'):
	case _UT('l'):
	case _UT('L'):
	case _UT('m'):
	case _UT('M'):
	case _UT('n'):
	case _UT('N'):
	case _UT('o'):
	case _UT('O'):
	case _UT('p'):
	case _UT('P'):
	case _UT('q'):
	case _UT('Q'):
	case _UT('r'):
	case _UT('R'):
	case _UT('s'):
	case _UT('S'):
	case _UT('t'):
	case _UT('T'):
	case _UT('u'):
	case _UT('U'):
	case _UT('v'):
	case _UT('V'):
	case _UT('w'):
	case _UT('W'):
	case _UT('x'):
	case _UT('X'):
	case _UT('y'):
	case _UT('Y'):
	case _UT('z'):
	case _UT('Z'):
		return URI_FUNC(ParseSegmentNzNcOrScheme2)(parser, first + 1, afterLast);

	/* DIGIT */
	case _UT('0'):
	case _UT('1'):
	case _UT('2'):
	case _UT('3'):
	case _UT('4'):
	case _UT('5'):
	case _UT('6'):
	case _UT('7'):
	case _UT('8'):
	case _UT('9'):

	/* subDelims */
	case _UT('!'):
	case _UT('$'):
	case _UT('&'):
	case _UT('('):
	case _UT(')'):
	case _UT('*'):
	case _UT(','):
	case _UT(';'):
	case _UT('\''):
	case _UT('+'):
	case _UT('='):

	/* ... */
	case _UT('.'):
	case _UT('_'):
	case _UT('~'):
	case _UT('-'):
	case _UT('@'):
		return URI_FUNC(ParseMustBeSegmentNzNc)(parser, first + 1, afterLast);

	case _UT('%'):
		{
			const URI_CHAR * const afterPctEncoded
					= URI_FUNC(ParsePctEncoded)(parser, first, afterLast);
			if (afterPctEncoded == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseMustBeSegmentNzNc)(parser, afterPctEncoded, afterLast);
		}

	case _UT('/'):
		{
			const URI_CHAR * const afterPartHelperTwo
					= URI_FUNC(ParsePartHelperTwo)(parser, first + 1, afterLast);
			if (afterPartHelperTwo == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseUriTail)(parser, afterPartHelperTwo, afterLast);
		}

	default:
		return URI_FUNC(ParseUriTail)(parser, first, afterLast);
	}
}



/*
 * [uriTail]-><#>[queryFrag]
 * [uriTail]-><?>[queryFrag][uriTailTwo]
 * [uriTail]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseUriTail)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('#'):
		return URI_FUNC(ParseQueryFrag)(parser, first + 1, afterLast);

	case _UT('?'):
		{
			const URI_CHAR * const afterQueryFrag
					= URI_FUNC(ParseQueryFrag)(parser, first + 1, afterLast);
			if (afterQueryFrag == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseUriTailTwo)(parser, afterQueryFrag, afterLast);
		}

	default:
		return first;
	}
}



/*
 * [uriTailTwo]-><#>[queryFrag]
 * [uriTailTwo]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseUriTailTwo)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('#'):
		return URI_FUNC(ParseQueryFrag)(parser, first + 1, afterLast);

	default:
		return first;
	}
}



/*
 * [zeroMoreSlashSegs]-></>[segment][zeroMoreSlashSegs]
 * [zeroMoreSlashSegs]-><NULL>
 */
const URI_CHAR * URI_FUNC(ParseZeroMoreSlashSegs)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	if (first >= afterLast) {
		return afterLast;
	}

	switch (*first) {
	case _UT('/'):
		{
			const URI_CHAR * const afterSegment
					= URI_FUNC(ParseSegment)(parser, first + 1, afterLast);
			if (afterSegment == NULL) {
				return NULL;
			}
			return URI_FUNC(ParseZeroMoreSlashSegs)(parser, afterSegment, afterLast);
		}

	default:
		return first;
	}
}



UriBool URI_FUNC(ParseUriEx)(struct UriParser * parser, const URI_CHAR * first, const URI_CHAR * afterLast) {
	const URI_CHAR * const afterUriReference
			= URI_FUNC(ParseUriReference)(parser, first, afterLast);
	if (afterUriReference == NULL) {
		return URI_ERROR;
	}
	if (afterUriReference != afterLast) {
		return URI_ERROR;
	}
	return URI_SUCCESS;
}

UriBool URI_FUNC(ParseUri)(struct UriParser * parser, const URI_CHAR * text) {
	return URI_FUNC(ParseUriEx)(parser, text, text + URI_STRLEN(text));
}



#endif /* URI_TWICE_C_ENABLE */
