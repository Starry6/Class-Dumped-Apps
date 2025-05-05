@interface CNVCardParameterEncoder : NSObject
+ (id)substitutions;
+ (id)encodeParameterValue:;
+ (id)stringByReplacingEncodableCharactersInString:;
+ (id)stringByEnclosingInQuotesIfNecessary:;
+ (BOOL)mustEncloseStringInQuotes:;
@end
