@interface AMapRSAEncryptor : NSObject
+ (id)addPrivateKey:;
+ (id)addPublicKey:;
+ (id)decryptData:privateKey:;
+ (id)decryptData:withKeyRef:;
+ (id)decryptString:privateKey:;
+ (id)decryptString:privateKeyRef:;
+ (id)decryptString:privateKeyWithContentsOfFile:password:;
+ (id)encryptData:publicKey:;
+ (id)encryptData:withKeyRef:;
+ (id)encryptString:publicKey:;
+ (id)encryptString:publicKeyRef:;
+ (id)encryptString:publicKeyWithContentsOfFile:;
+ (id)getPrivateKeyRefWithContentsOfFile:password:;
+ (id)getPublicKeyRefWithContentsOfFile:;
+ (id)stripPrivateKeyHeader:;
+ (id)stripPublicKeyHeader:;
@end
