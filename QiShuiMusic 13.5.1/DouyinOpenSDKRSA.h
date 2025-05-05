@interface DouyinOpenSDKRSA : NSObject
+ (id)douyin_decryptString:publicKey:;
+ (id)douyin_encryptString:publicKey:;
+ (id)douyin_addPrivateKey:;
+ (id)douyin_addPublicKey:;
+ (id)douyin_decryptData:privateKey:;
+ (id)douyin_decryptData:publicKey:;
+ (id)douyin_decryptData:withKeyRef:;
+ (id)douyin_decryptString:privateKey:;
+ (id)douyin_encryptData:privateKey:;
+ (id)douyin_encryptData:publicKey:;
+ (id)douyin_encryptData:withKeyRef:isSign:;
+ (id)douyin_encryptString:privateKey:;
+ (id)douyin_stripPrivateKeyHeader:;
+ (id)douyin_stripPublicKeyHeader:;
@end
