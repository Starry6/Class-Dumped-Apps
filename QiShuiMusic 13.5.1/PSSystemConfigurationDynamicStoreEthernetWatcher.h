@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject
- (id)init;
- (void)dealloc;
- (void)registerForEthernetAdapterNotifications;
- (void)ethernetDynamicStoreDidChange;
- (BOOL)isHiddenEthernetInterface:;
- (id)ethernetNetworkInterfaces;
- (BOOL)hasEthernetNetworkInterfaces;
+ (id)sharedManager;
@end
