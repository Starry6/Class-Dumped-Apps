@interface AWEStartupTrackManager : NSObject
- (void)activeIfNeeded;
- (void)registerNetworkNotification;
- (void)_handleConnectionChanged:;
- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackgroundNotification:;
+ (id)sharedInstance;
@end
