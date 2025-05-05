@interface BDWebImageCryptoTools : NSObject
+ (void)_fixKeyLengths:ivData:;
+ (id)_runCryptor:cryptor:;
+ (id)aes256:operation:key:iv:;
+ (id)aes256DecryptData:withKey:;
+ (id)rsaEncryptAndBase64EncodeData:withKey:;
+ (id)rsaEncryptAndBase64EncodeString:withKey:;
+ (id)rsaEncryptData:withKey:;
+ (id)secKeyForKey:;
@end
