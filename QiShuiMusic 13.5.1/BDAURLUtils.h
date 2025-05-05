@interface BDAURLUtils : NSObject
+ (id)fragmentForURL:;
+ (id)URLByInsertOrUpdateParameters:toURL:;
+ (id)URLWithString:queryItems:;
+ (id)URLWithString:queryItems:fragment:;
+ (id)_URLQueryStringWithParameters:;
+ (id)hostForURL:;
+ (id)pathForURL:;
+ (id)queryItemAddingPercentEscapes:;
+ (id)queryItemsForURL:;
+ (id)queryItemsWithoutDecodingForURL:;
+ (id)URLWithString:;
@end
