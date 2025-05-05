@interface QQApiSignatureTool : NSObject
+ (id)hmacSha1WithContentString:hmacKey:;
+ (id)signatureForGroupProWithParameters:path:signKey:;
@end
