@interface CSJNetworkSecurity : NSObject
+ (id)decryptAdMarkUp:error:;
+ (id)decryptRequestModel:error:;
+ (id)decryptSettingModel:error:;
+ (id)encryptData:key:iv:;
+ (id)encryptJSONObject:key:iv:;
+ (id)encryptRequestArray:;
+ (id)encryptRequestDictionary:;
+ (id)encryptRequestDictionaryWithOutSign:;
+ (id)encryptRequestModel:adslot:;
+ (id)encryptString:key:iv:;
+ (BOOL)needEncrypt;
+ (long long)pbu_checkNetworkResultWithCypher:message:resultProxy:;
+ (void)pbu_errorCode:error:;
+ (id)encryptString:;
@end
