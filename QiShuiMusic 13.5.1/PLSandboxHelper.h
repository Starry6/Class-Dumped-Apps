@interface PLSandboxHelper : NSObject
+ (BOOL)processWithID:canWriteSandboxForPath:;
+ (BOOL)processWithID:canReadSandboxForPath:;
+ (BOOL)fileURLHasSecurityScope:;
+ (BOOL)processCanReadSandboxForPath:;
+ (BOOL)processCanWriteSandboxForPath:;
@end
