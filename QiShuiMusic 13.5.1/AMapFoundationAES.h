@interface AMapFoundationAES : NSObject
+ (id)AESKeyWithSize:;
+ (id)encryptUsingECBModeForData:key:;
+ (id)decryptData:customKey:;
+ (id)decryptLocationUploadData:key:iv:;
+ (id)decryptString:customKey:;
+ (id)encryptData:crypt:useECBMode:key:keyLength:iv:;
+ (id)encryptData:customKey:;
+ (id)encryptLocationUploadData:key:iv:;
+ (id)encryptString:customKey:;
+ (id)encryptUsingCBCModeForData:key:iv:;
@end
