@interface HMDExtensionCrashTracker : NSObject
- (void)startWithGroupID:;
- (void)updateConfig;
+ (id)sharedTracker;
@end
