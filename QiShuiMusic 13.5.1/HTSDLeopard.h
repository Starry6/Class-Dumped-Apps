@interface HTSDLeopard : NSObject
+ (id)AESDecryptData:keyString:ivString:;
+ (id)AESDecryptString:keyString:ivString:;
+ (id)AESEncryptData:keyString:ivString:;
+ (id)AESEncryptString:keyString:ivString:;
+ (id)MD5Data:;
+ (id)RSADecryptData:publicKey:;
+ (id)RSAEncryptData:publicKey:;
+ (id)AESDecryptData:keyData:ivData:;
+ (id)AESDecryptString:keyData:ivData:;
+ (id)AESEncryptData:keyData:ivData:;
+ (id)AESEncryptString:keyData:ivData:;
+ (id)MD5File:;
+ (id)RSADecryptString:publicKey:;
+ (id)RSAEncryptString:publicKey:;
+ (id)randomKeyString;
+ (id)base64Decode:;
+ (id)base64Encode:;
+ (id)defaultSymmetricKeyData;
+ (id)paddedDataOfKey:numberOfBytes:;
+ (id)randomDataOfNumberOfBytes:;
+ (id)randomIVData;
+ (id)randomKeyData;
@end
