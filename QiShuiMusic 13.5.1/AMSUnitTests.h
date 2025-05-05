@interface AMSUnitTests : NSObject
+ (void)_sync:;
+ (BOOL)isRunningUnitTests;
+ (void)setEncryptionKey:forDataProtectionClass:;
+ (id)_encryptionKeys;
+ (id)encryptionKeyForDataProtectionClass:;
@end
