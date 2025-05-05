@interface ABUNSManager : NSObject
+ (id)decryptResponseDictionary:key:error:;
+ (id)encriptData:key:;
+ (id)encriptData:key:iv:;
+ (id)encriptJSONObject:key:;
+ (id)encriptJSONObject:key:iv:;
+ (id)encryptRequestDictionary3:;
+ (id)encryptRequestDictionary4:;
+ (id)encryptRequestDictionary:;
@end
