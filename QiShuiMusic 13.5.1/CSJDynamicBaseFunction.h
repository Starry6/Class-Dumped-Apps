@interface CSJDynamicBaseFunction : NSObject
+ (id)brickValueConfigDictionary;
+ (id)brickValueConfigDictionaryWithType:;
+ (id)dictionaryWithObject:;
+ (id)dictionayAfterKeyFormatWithOriginDictionay:key:value1:value2:;
+ (id)dictonaryWithFormatDictionary:keyArray:;
+ (id)getDomSizeFromNative_content:brickType:style:lineFeed:lineLimit:lineCount:;
+ (long long)numberOfLinesWithLineFeed:lineLimit:lineCount:;
+ (id)pbu_dynamicViewClassNameWithType:;
+ (double)pbu_fontWeightWith_webviewFontWeight:;
+ (id)textFontWithFontFamily:fontSize:fontWeight:;
+ (id)textFontWithStyle:;
+ (id)typeClassStringWithType:error:;
+ (id)colorWithString:;
@end
