@interface EAccountAPIEncryptorRSA : NSObject
+ (id)addPublicKey:;
+ (id)encryptData:publicKey:;
+ (id)encryptData:withKeyRef:;
+ (id)encryptString:publicKey:;
+ (id)stripPublicKeyHeader:;
+ (id)hexStringForData:;
@end
