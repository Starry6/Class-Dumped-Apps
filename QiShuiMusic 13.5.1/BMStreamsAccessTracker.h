@interface BMStreamsAccessTracker : NSObject
- (id)init;
- (void)_logMissingEntitlementsForAccess:;
- (BOOL)_checkAccess:;
- (void).cxx_destruct;
- (BOOL)_sandboxCheck:path:;
- (BOOL)checkHasSandboxAccess:;
- (void)logMissingEntitlementsForAccess:;
+ (id)sharedInstance;
@end
