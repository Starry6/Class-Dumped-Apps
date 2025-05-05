@interface AMSMediaTokenServiceDeserializer : NSObject
+ (id)mediaTokenFromDictionary:error:;
+ (id)_deserializeMediaTokenDictionary:;
+ (id)_correctPayload:;
@end
