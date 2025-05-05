@interface SBSLockScreenPluginService : NSObject
- (id)_serializedDataForContext:;
- (void)enableLockScreenBundle:withContext:;
- (void)disableLockScreenBundle:withContext:;
@end
