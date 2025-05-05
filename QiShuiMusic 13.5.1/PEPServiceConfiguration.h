@interface PEPServiceConfiguration : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)registerNetworkDefaultsForAppID:;
- (void)_postNotification;
- (void)_updateDefaults:;
- (BOOL)registerNetworkDefaultsForAppIDs:forceUpdate:;
+ (id)sharedInstance;
@end
