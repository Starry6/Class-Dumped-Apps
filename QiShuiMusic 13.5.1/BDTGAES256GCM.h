@interface BDTGAES256GCM : NSObject
+ (id)decryptData:key:error:;
+ (id)decryptHexString:hexKey:error:;
+ (id)encryptData:key:error:;
+ (id)encryptString:hexKey:error:;
@end
