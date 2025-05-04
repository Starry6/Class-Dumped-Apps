@interface AWECFHalcyon : NSObject
+ (id)base64Encode:;
+ (id)base64Decode:;
+ (id)AESDecryptData:keyString:ivString:;
+ (id)MD5File:;
+ (id)randomKeyString;
+ (id)AESDecryptString:keyString:ivString:;
+ (id)AESEncryptString:keyString:ivString:;
+ (id)MD5Data:;
+ (id)randomDataOfNumberOfBytes:;
+ (id)randomKeyData;
+ (id)paddedDataOfKey:numberOfBytes:;
+ (id)defaultSymmetricKeyData;
+ (id)AESEncryptData:keyData:ivData:;
+ (id)AESEncryptString:keyData:ivData:;
+ (id)AESDecryptData:keyData:ivData:;
+ (id)AESDecryptString:keyData:ivData:;
+ (id)randomIVData;
+ (id)AESEncryptData:keyString:ivString:;
+ (id)RSAEncryptData:publicKey:;
+ (id)RSADecryptData:publicKey:;
+ (id)RSAEncryptString:publicKey:;
+ (id)RSADecryptString:publicKey:;
@end
