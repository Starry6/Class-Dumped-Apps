@interface BUPLUtils : NSObject
+ (id)base64DecodedWithString:;
+ (id)base64EncodedWithString:;
+ (float)dictionary:floatValueForKey:;
+ (long long)dictionary:integerValueForKey:;
+ (id)dictionary:stringValueForKey:;
+ (id)dictionary:stringValueForKey:default:;
+ (BOOL)isEmptyArray:;
+ (BOOL)isEmptyDictionary:;
+ (BOOL)isEmptyString:;
+ (id)jsonDictionaryWithString:;
+ (id)stringByURLDecodeWithString:;
+ (id)stringByURLEncodeWithString:;
@end
