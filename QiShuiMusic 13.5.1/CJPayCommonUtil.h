@interface CJPayCommonUtil : NSObject
+ (id)generateScheme:;
+ (id)appendParamsToUrl:params:;
+ (id)arrayToJson:;
+ (id)cj_base64:;
+ (void)cj_catransactionAction:completion:;
+ (id)cj_decodeBase64:;
+ (id)createMD5With:;
+ (id)dateStringFromTimeStamp:dateFormat:;
+ (id)dictionaryFromJsonObject:;
+ (id)dictionaryToJson:;
+ (id)getMMSSFromSS:;
+ (id)getMoneyFormatStringFromDouble:formatString:;
+ (id)jsonStringToDictionary:;
+ (id)parseScheme:;
+ (id)replaceNoEncoding:;
+ (id)replcaeAutoEncoding:;
+ (id)snapViewToImageView:;
@end
