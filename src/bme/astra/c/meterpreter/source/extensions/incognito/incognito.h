#ifndef _METERPRETER_SOURCE_EXTENSION_INCOGNITO_INCOGNITO_H
#define _METERPRETER_SOURCE_EXTENSION_INCOGNITO_INCOGNITO_H

#define BUF_SIZE 4096

#define TLV_TYPE_EXTENSION_INCOGNITO	0

#define TLV_TYPE_INCOGNITO_LIST_TOKENS_DELEGATION	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_STRING,				\
				TLV_TYPE_EXTENSION_INCOGNITO,		\
				TLV_EXTENSIONS + 2)

#define TLV_TYPE_INCOGNITO_LIST_TOKENS_IMPERSONATION	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_STRING,				\
				TLV_TYPE_EXTENSION_INCOGNITO,		\
				TLV_EXTENSIONS + 3)

#define TLV_TYPE_INCOGNITO_LIST_TOKENS_TOKEN_ORDER	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_UINT,				\
				TLV_TYPE_EXTENSION_INCOGNITO,		\
				TLV_EXTENSIONS + 4)

#define TLV_TYPE_INCOGNITO_IMPERSONATE_TOKEN		\
		MAKE_CUSTOM_TLV(						\
				TLV_META_TYPE_STRING,			\
				TLV_TYPE_EXTENSION_INCOGNITO,   \
				TLV_EXTENSIONS + 5)

#define TLV_TYPE_INCOGNITO_GENERIC_RESPONSE		\
		MAKE_CUSTOM_TLV(						\
				TLV_META_TYPE_STRING,			\
				TLV_TYPE_EXTENSION_INCOGNITO,   \
				TLV_EXTENSIONS + 6)

#define TLV_TYPE_INCOGNITO_USERNAME		\
		MAKE_CUSTOM_TLV(						\
				TLV_META_TYPE_STRING,			\
				TLV_TYPE_EXTENSION_INCOGNITO,   \
				TLV_EXTENSIONS + 7)

#define TLV_TYPE_INCOGNITO_PASSWORD		\
		MAKE_CUSTOM_TLV(						\
				TLV_META_TYPE_STRING,			\
				TLV_TYPE_EXTENSION_INCOGNITO,   \
				TLV_EXTENSIONS + 8)

#define TLV_TYPE_INCOGNITO_SERVERNAME		\
		MAKE_CUSTOM_TLV(						\
				TLV_META_TYPE_STRING,			\
				TLV_TYPE_EXTENSION_INCOGNITO,   \
				TLV_EXTENSIONS + 9)

#define TLV_TYPE_INCOGNITO_GROUPNAME			\
		MAKE_CUSTOM_TLV(						\
				TLV_META_TYPE_STRING,			\
				TLV_TYPE_EXTENSION_INCOGNITO,   \
				TLV_EXTENSIONS + 10)

#endif
