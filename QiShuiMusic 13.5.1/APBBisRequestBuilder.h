@interface APBBisRequestBuilder : NSObject
+ (id)rsaImage:image:;
+ (id)buildEKYCRequestWithContentData:behaveLog:andCypherData:;
+ (id)buildRequestwithpubKey:token:contentData:behaveLog:andCypherData:encrypt:;
+ (id)compressImage:;
@end
