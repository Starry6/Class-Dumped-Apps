@interface BDAStringUtils : NSObject
+ (id)URLStringWithString:parameters:;
+ (id)URLQueryStringWithParameters:;
+ (id)URLQueryStringWithoutEncodeWithParameters:;
+ (id)URLWithURLString:;
+ (id)decodeStringFromBase64Str:;
+ (id)jointFragmentParamsDict:toURL:;
+ (id)onlyDateStringSince:;
+ (id)paramItemsForString:;
+ (id)paramStringForDictionary:;
+ (id)parametersOfURLString:;
+ (id)simpleDateStringSince:;
+ (id)URLWithString:relativeToURL:;
@end
