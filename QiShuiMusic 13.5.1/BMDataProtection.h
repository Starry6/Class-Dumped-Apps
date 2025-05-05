@interface BMDataProtection : NSObject
+ (BOOL)canOpenFilesForProtectionClass:createNewFile:;
+ (int)biomeProtectionClassToOSProtectionClass:;
+ (BOOL)losesReadAccessOnLock:;
+ (BOOL)requiresUnlockToOpen:;
+ (BOOL)canOpenFilesForProtectionClass:;
@end
