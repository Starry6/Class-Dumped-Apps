@interface DMMigrationDeferredExitManager : NSObject
- (void)migrationDidStart;
- (void)migrationDidEnd;
- (void)deferExitWithConnection:;
- (void)cancelDeferredExitWithConnection:;
- (void)_resetGlobalState;
- (id)_deferralDuration;
- (void)_exitClean;
- (BOOL)_isDeferringExit;
+ (id)_serialQueue;
@end
