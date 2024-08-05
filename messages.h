#ifdef _SALAM_LANGUAGE_

const char* messages[LANGUAGE_COUNT][MESSAGE_COUNT] = {
	[LANGUAGE_PERSIAN] = {
		[MESSAGE_NAME] = "سلام",
		[MESSAGE_ENTRY_POINT_FUNCTION_NAME] = "سلام",
		[MESSAGE_WELCOME] = "خوش آمدید به زبان برنامه‌نویسی سلام!\n"
			"سلام اولین زبان اسکریپتی ایرانی فارسی/عربی برای کامپیوتر است.\n\n"

			"استفاده:\n"
			"  sialk <filename>\t\t\t# اجرای یک اسکریپت سلام\n\n"
			"مثال:\n"
			"  sialk my_script.sialk\t\t# اجرای اسکریپت سلام به نام 'my_script.sialk'\n\n"

			"با استفاده از سلام، به کشف و خلق بپردازید!\n"
			"برای اطلاعات بیشتر، به وبسایت ما مراجعه کنید: https://sialklang.ir\n\n",
		[MESSAGE_LEXER_UNEXPECTED_CHAR] = "خطا: نویسه غیرمنتظره '%c' در خط %zu، ستون %zu\n",
		[MESSAGE_LEXER_COMMENT_MULTI_NOT_CLOSED] = "خطا: شما باید نظرات چندخطی خود را ببندید. ترک آنها بدون بستن مجاز نیست!\n",
		[MESSAGE_LEXER_NUMBER_FLOAT_NEED_NUMBER_AFTER_DOT] = "خطای نحوی: پس از نقطه در مقدار اعشاری باید عددی وجود داشته باشد\n",
		[MESSAGE_LEXER_TOKEN_UNREAD_UNICODE] = "خطای نحوی: نویسه یونیکد خوانده نشده نامعتبر است\n",
		[MESSAGE_LEXER_TOKEN_READ_UNICODE] = "خطای نحوی: نویسه یونیکد نامعتبر در نشانه‌گر استفاده شده است\n",
		[MESSAGE_LEXER_STRING_READ_MEMORY] = "خطا: بازپردازی حافظه ناموفق بوده است در حالی که رشته خوانده می‌شود.\n",
		[MESSAGE_LEXER_STRING_UNKNOWN_ESCAPE] = "خطا: دنباله فرار نامعتبر در رشته\n",
		[MESSAGE_LEXER_STRING_CONVERT_MULTIBYTE] = "خطا: تبدیل ناموفق از نویسه گسترده به چندبایتی در رشته\n",
		[MESSAGE_LEXER_IDENTIFIER_CONVERT_MULTIBYTE] = "خطا: تبدیل ناموفق از نویسه گسترده به چندبایتی در شناسه\n",
		[MESSAGE_LEXER_STRING_GET_LENGTH_UNICODE] = "خطا: شمارش طول در mbstowcs ناموفق بوده است\n",
		[MESSAGE_LEXER_CHAR_LENGTH_ISSUE] = "خطا: مشکل wcrtomb با نویسه گسترده\n",
		[MESSAGE_LEXER_ARRAY_NOT_CLOSED] = "خطا: مورد ',' یا ']' در مقدار آرایه مورد انتظار است\n",
		[MESSAGE_INTERPRETER_MAIN_NORETURN] = "مقدار بازگشتی از تابع اصلی وجود ندارد، استفاده از پیش‌فرض.\n",
		[MESSAGE_INTERPRETER_CANNOT_HAVE_RET_BREAK_CON_OUT_OF_LOOP] = "خطا: break/continue نمی‌تواند خارج از یک حلقه استفاده شود!\n",
		[MESSAGE_INTERPRETER_VARIABLE_NOT_FOUND] = "خطا: متغیر پیدا نشد: %s\n",
		[MESSAGE_INTERPRETER_EXPRESSION_INVALID_VALUE_IN_BINARY] = "خطا: مقادیر نامعتبر برای عملگر دودویی!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_COMPARE_THIS_KIND_OF_VALUE_TYPES] = "خطا: نمی‌توان انواع ناشناخته را مقایسه کرد!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_AND_FOR_THIS_VALUES] = "خطا: نمی‌توان عملیات AND را بر روی این مقادیر انجام داد!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_OR_FOR_THIS_VALUES] = "خطا: نمی‌توان عملیات OR را بر روی این مقادیر انجام داد!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_BINARY_OP_FOR_NON_INT] = "خطا: عملگر دودویی نیازمند مقادیر صحیح است!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_MODULE_OP_FOR_FLOAT] = "خطا: نمی‌توان عملیات باقی‌مانده بر روی مقادیر اعشاری انجام داد!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_DIVIDE_BY_ZERO] = "خطا: تقسیم بر صفر!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_DO_THIS_OPERATOR] = "خطا: عملگر ناشناخته: %s\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_IS_MORE] = "خطا: تعداد زیادی ورودی برای تابع!\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_IS_LESS] = "خطا: تعداد کافی ورودی برای تابع نیست!\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_SHOULD_BE_ONLY_ZERO] = "خطا: تابع %s() باید بدون ورودی باشد!\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_SHOULD_BE_ONLY_ONE] = "خطا: تابع %s() باید دارای یک ورودی باشد!\n",
		[MESSAGE_INTERPRETER_FUNCTION_NOT_EXISTS] = "خطا: تابع وجود ندارد!\n",
		[MESSAGE_INTERPRETER_CANNOT_ASSIGN_VARIABLE_WITH_A_NON_IDENTIFIER_AS_NAME] = "خطا: اختصاص به یک غیرمتغیر\n",
		[MESSAGE_INTERPRETER_EXPRESSION_DONT_SUPPORT_THIS_TYPE_IN_EXPRESSION] = "خطا: نوع تعبیر پشتیبانی نمی‌شود: %d\n",
		[MESSAGE_PARSER_UNEXPECTED_TOKEN] = "خطا: نشانه غیرمنتظره در بیانیه: %s\n",
		[MESSAGE_PARSER_BLOCK_MEMORY_ISSUE] = "خطا: بازپردازی حافظه ناموفق بوده است در حین تجزیه بلوک.\n",
		[MESSAGE_PARSER_BAD_TOKEN_AS_STATEMENT] = "خطا: نشانه نامعتبر در بیانیه: %s\n",
		[MESSAGE_TOKEN_TRUE] = "غلط",
		[MESSAGE_TOKEN_FALSE] = "غلط",
		[MESSAGE_TOKEN_NULL] = "پوچ",
		[MESSAGE_TOKEN_UNKNOWN] = "نامشخص",

		[MESSAGE_TOKEN_OR] = "یا",
		[MESSAGE_TOKEN_AND] = "و",
		[MESSAGE_TOKEN_NUMBER_INT] = "عددصحیح",
		[MESSAGE_TOKEN_NUMBER_FLOAT] = "عدداعشار",
		[MESSAGE_TOKEN_BOOL] = "بولی",
		[MESSAGE_TOKEN_STRING] = "رشته",
		[MESSAGE_TOKEN_ARRAY] = "دسته",

		[MESSAGE_TOKEN_FUNCTION_TYPE] = "نوع",
		[MESSAGE_TOKEN_FUNCTION_EVEN] = "زوج",
		[MESSAGE_TOKEN_FUNCTION_ODD] = "فرد",
		[MESSAGE_TOKEN_FUNCTION_READ] = "خواندن",
		[MESSAGE_TOKEN_FUNCTION_LENGTH] = "طول",
		[MESSAGE_TOKEN_FUNCTION_STRING] = "رشته",

		[MESSAGE_INTERPRETER_FUNCTION_CALL_FIRST_ARGUMENT_SHOULD_BE_ONLY_A_STRING] = "خطا: اولین ورودی تابع %S() باید یک رشته باشد!\n",
		[MESSAGE_LEXER_FILE_NOT_EXISTS] = "خطا: فایل %s یافت نشد\n",
		[MESSAGE_MEMORY_ALLOCATE_ERROR] = "خطا در تخصیص حافظه\n",
		[MESSAGE_MEMORY_REALLOCATE_ERROR] = "خطا در افزایش حافظه تخصیص یافته\n",

		[MESSAGE_INTERPRETER_MAIN_RETURN_CODE] = "بازگشت تابع سلام: ",
		[MESSAGE_INTERPRETER_UNKNOWN_NODE_AS_INTERPRETER_ONCE] = "خطا: نود ناشناخته در برنامه تفسیر!\n",
	},

	[LANGUAGE_ARABIC] = {
		[MESSAGE_NAME] = "سلام",
		[MESSAGE_ENTRY_POINT_FUNCTION_NAME] = "سلام",
		[MESSAGE_WELCOME] = "مرحبًا بكم في لغة البرمجة سلام!\n"
			"سلام هي أول لغة برمجة إيرانية باللغة الفارسية/العربية.\n\n"

			"الاستخدام:\n"
			"  sialk <filename>\t\t\t# تنفيذ برنامج سلام\n\n"
			"مثال:\n"
			"  sialk my_script.sialk\t\t# تشغيل برنامج سلام 'my_script.sialk'\n\n"

			"استمتع بالاكتشاف والإبداع باستخدام سلام!\n"
			"لمزيد من المعلومات، قم بزيارة: https://sialklang.ir\n\n",
		[MESSAGE_LEXER_UNEXPECTED_CHAR] = "خطأ: حرف غير متوقع '%c' في السطر %zu، العمود %zu\n",
		[MESSAGE_LEXER_COMMENT_MULTI_NOT_CLOSED] = "خطأ: يجب إغلاق التعليقات متعددة الأسطر. لا يمكن تركها غير مغلقة!\n",
		[MESSAGE_LEXER_NUMBER_FLOAT_NEED_NUMBER_AFTER_DOT] = "خطأ في الصياغة: نتوقع رقمًا بعد النقطة في القيمة العشرية\n",
		[MESSAGE_LEXER_TOKEN_UNREAD_UNICODE] = "خطأ في الصياغة: حرف يونيكود غير صالح غير مقروء\n",
		[MESSAGE_LEXER_TOKEN_READ_UNICODE] = "خطأ في الصياغة: حرف يونيكود غير صالح في التوكن\n",
		[MESSAGE_LEXER_STRING_READ_MEMORY] = "خطأ: فشل في إعادة تخصيص الذاكرة أثناء قراءة النص.\n",
		[MESSAGE_LEXER_STRING_UNKNOWN_ESCAPE] = "خطأ: تسلسل هروب غير معروف في النص\n",
		[MESSAGE_LEXER_STRING_CONVERT_MULTIBYTE] = "خطأ: فشل في تحويل الحرف العريض إلى متعدد البايتات في النص\n",
		[MESSAGE_LEXER_IDENTIFIER_CONVERT_MULTIBYTE] = "خطأ: فشل في تحويل الحرف العريض إلى متعدد البايتات في المعرف\n",
		[MESSAGE_LEXER_STRING_GET_LENGTH_UNICODE] = "خطأ: فشل في حساب الطول في mbstowcs\n",
		[MESSAGE_LEXER_CHAR_LENGTH_ISSUE] = "خطأ: مشكلة wcrtomb في الحرف العريض\n",
		[MESSAGE_LEXER_ARRAY_NOT_CLOSED] = "خطأ: توقع ',' أو ']' في قيمة المصفوفة\n",
		[MESSAGE_INTERPRETER_MAIN_NORETURN] = "لا توجد قيمة إرجاع من الدالة الرئيسية، الافتراضية مستخدمة.\n",
		[MESSAGE_INTERPRETER_CANNOT_HAVE_RET_BREAK_CON_OUT_OF_LOOP] = "خطأ: لا يمكن استخدام break/continue خارج حلقة!\n",
		[MESSAGE_INTERPRETER_VARIABLE_NOT_FOUND] = "خطأ: المتغير غير موجود: %s\n",
		[MESSAGE_INTERPRETER_EXPRESSION_INVALID_VALUE_IN_BINARY] = "خطأ: قيم غير صالحة لمشغل ثنائي!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_COMPARE_THIS_KIND_OF_VALUE_TYPES] = "خطأ: لا يمكن مقارنة الأنواع غير المعروفة!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_AND_FOR_THIS_VALUES] = "خطأ: لا يمكن تنفيذ عملية AND على هذه القيم!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_OR_FOR_THIS_VALUES] = "خطأ: لا يمكن تنفيذ عملية OR على هذه القيم!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_BINARY_OP_FOR_NON_INT] = "خطأ: يتطلب المشغل الثنائي قيمًا صحيحة!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_MODULE_OP_FOR_FLOAT] = "خطأ: لا يمكن تنفيذ عملية باقي القسمة على القيم العشرية!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_DIVIDE_BY_ZERO] = "خطأ: لا يمكن القسمة على الصفر!\n",
		[MESSAGE_INTERPRETER_EXPRESSION_CANNOT_DO_THIS_OPERATOR] = "خطأ: مشغل غير معروف: %s\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_IS_MORE] = "خطأ: عدد الوسائط أكبر من المطلوب للدالة!\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_IS_LESS] = "خطأ: عدد الوسائط أقل من المطلوب للدالة!\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_SHOULD_BE_ONLY_ZERO] = "خطأ: الدالة %s() يجب أن تحتوي على صفر وسيط!\n",
		[MESSAGE_INTERPRETER_FUNCTION_CALL_NUMBER_ARGS_SHOULD_BE_ONLY_ONE] = "خطأ: الدالة %s() يجب أن تحتوي على وسيط واحد!\n",
		[MESSAGE_INTERPRETER_FUNCTION_NOT_EXISTS] = "خطأ: الدالة غير موجودة!\n",
		[MESSAGE_INTERPRETER_CANNOT_ASSIGN_VARIABLE_WITH_A_NON_IDENTIFIER_AS_NAME] = "خطأ: تعيين إلى غير متغير\n",
		[MESSAGE_INTERPRETER_EXPRESSION_DONT_SUPPORT_THIS_TYPE_IN_EXPRESSION] = "خطأ: نوع تعبير غير مدعوم: %d\n",
		[MESSAGE_PARSER_UNEXPECTED_TOKEN] = "خطأ: توكن غير متوقع في البيان: %s\n",
		[MESSAGE_PARSER_BLOCK_MEMORY_ISSUE] = "خطأ: فشل في إعادة تخصيص الذاكرة أثناء تحليل الكتلة.\n",
		[MESSAGE_PARSER_BAD_TOKEN_AS_STATEMENT] = "خطأ: توكن غير صالح في البيان: %s\n",
		[MESSAGE_TOKEN_TRUE] = "غلط",
		[MESSAGE_TOKEN_FALSE] = "غلط",
		[MESSAGE_TOKEN_NULL] = "پوچ",
		[MESSAGE_TOKEN_UNKNOWN] = "نامشخص",

		[MESSAGE_TOKEN_OR] = "یا",
		[MESSAGE_TOKEN_AND] = "و",
		[MESSAGE_TOKEN_NUMBER_INT] = "عددصحیح",
		[MESSAGE_TOKEN_NUMBER_FLOAT] = "عدداعشار",
		[MESSAGE_TOKEN_BOOL] = "بولی",
		[MESSAGE_TOKEN_STRING] = "رشته",
		[MESSAGE_TOKEN_ARRAY] = "دسته",

		[MESSAGE_TOKEN_FUNCTION_TYPE] = "نوع",
		[MESSAGE_TOKEN_FUNCTION_EVEN] = "زوج",
		[MESSAGE_TOKEN_FUNCTION_ODD] = "فرد",
		[MESSAGE_TOKEN_FUNCTION_READ] = "خواندن",
		[MESSAGE_TOKEN_FUNCTION_LENGTH] = "طول",
		[MESSAGE_TOKEN_FUNCTION_STRING] = "رشته",

		[MESSAGE_INTERPRETER_FUNCTION_CALL_FIRST_ARGUMENT_SHOULD_BE_ONLY_A_STRING] = "خطأ: نوع الوسيط الأول للدالة %S() يجب أن يكون نص!\n",
		[MESSAGE_LEXER_FILE_NOT_EXISTS] = "خطأ: الملف %s غير موجود\n",
		[MESSAGE_MEMORY_ALLOCATE_ERROR] = "خطأ في تخصيص الذاكرة\n",
		[MESSAGE_MEMORY_REALLOCATE_ERROR] = "خطأ في تخصيص الذاكرة\n",

		[MESSAGE_INTERPRETER_MAIN_RETURN_CODE] = "القيمة التي أرجعها الدالة الرئيسية: ",
		[MESSAGE_INTERPRETER_UNKNOWN_NODE_AS_INTERPRETER_ONCE] = "خطأ: عقدة غير معروفة في محلل المفسر!\n",
	},
};

const keyword_mapping_t keyword_mapping[LANGUAGE_COUNT][50] = {
	[LANGUAGE_PERSIAN] = {
		{"تابع", TOKEN_TYPE_FUNCTION},
		{"برگشت", TOKEN_TYPE_RETURN},
		{"ادامه", TOKEN_TYPE_CONTINUE},
		{"توقف", TOKEN_TYPE_BREAK},
		{"نمایش", TOKEN_TYPE_PRINT},
		{"واگرنه", TOKEN_TYPE_ELSEIF},
		{"اگر", TOKEN_TYPE_IF},

		{"مخالف", TOKEN_TYPE_NOT_EQUAL},
		{"برابر", TOKEN_TYPE_EQUAL_EQUAL},

		{"بزرگتر", TOKEN_TYPE_GREATER_THAN},
		{"کوچکتر", TOKEN_TYPE_LESS_THAN},

		{"پوچ", TOKEN_TYPE_NULL},
		{"تا", TOKEN_TYPE_UNTIL},
		{"تکرار", TOKEN_TYPE_REPEAT},
		{"درست", TOKEN_TYPE_TRUE},
		{"غلط", TOKEN_TYPE_FALSE},
		{"و", TOKEN_TYPE_AND},
		{"یا", TOKEN_TYPE_OR},
		{NULL, TOKEN_TYPE_ERROR},
	},

	[LANGUAGE_ARABIC] = {
		{"وظیفه", TOKEN_TYPE_FUNCTION},
		{"برگشت", TOKEN_TYPE_RETURN},
		{"ادامه", TOKEN_TYPE_CONTINUE},
		{"توقف", TOKEN_TYPE_BREAK},
		{"چاپ", TOKEN_TYPE_PRINT},
		{"والاگرنه", TOKEN_TYPE_ELSEIF},
		{"اگر", TOKEN_TYPE_IF},
		{"تهی", TOKEN_TYPE_NULL},
		{"تا", TOKEN_TYPE_UNTIL},
		{"تکرار", TOKEN_TYPE_REPEAT},
		{"درست", TOKEN_TYPE_TRUE},
		{"غلط", TOKEN_TYPE_FALSE},
		{"و", TOKEN_TYPE_AND},
		{"یا", TOKEN_TYPE_OR},
		{NULL, TOKEN_TYPE_ERROR},
	},
};

#endif
