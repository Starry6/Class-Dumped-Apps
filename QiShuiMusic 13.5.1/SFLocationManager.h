@interface SFLocationManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)_updateAssertion;
- (void)_handleApplicationStateChange:;
- (void)_setApplication:isForeground:;
- (void)_updateApplicationsToMonitor;
- (void)addClientForApplication:;
- (void)removeClientForApplication:;
+ (id)sharedLocationManager;
+ (void)setDefaultEffectiveBundleIdentifier:;
@end
