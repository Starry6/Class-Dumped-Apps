@interface AWEPOIAESEncryptor : NSObject
+ (id)poi_aesEncryptWithData:keyData:keySize:ivData:;
+ (id)poi_aesDecryptwithData:KeyData:keySize:ivData:;
+ (id)poi_aesEncodeWithString:size:key:iv:;
+ (id)poi_aesDecodeWithString:size:key:iv:;
@end
