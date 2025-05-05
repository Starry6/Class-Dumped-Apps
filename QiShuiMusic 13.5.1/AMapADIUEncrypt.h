@interface AMapADIUEncrypt : NSObject
+ (id)decryptStr:;
+ (id)doCipher:key:context:;
+ (id)encryptStr:;
+ (id)getDESEncryptKey;
+ (id)decodeBase64:;
@end
