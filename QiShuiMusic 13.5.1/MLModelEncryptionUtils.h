@interface MLModelEncryptionUtils : NSObject
+ (id)sinfData;
+ (BOOL)addEncryptionHeaderToUnencryptedFile:saveToFile:error:;
+ (BOOL)encryptFile:withKey:iv:saveToFile:error:;
@end
