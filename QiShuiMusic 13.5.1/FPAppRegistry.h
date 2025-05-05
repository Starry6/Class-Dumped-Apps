@interface FPAppRegistry : NSObject
@property (nonatomic) <FPAppRegistryDelegate> delegate;
@property (nonatomic) NSArray listOfMonitoredApps;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)addApps:;
- (void)removeAppsWithBundleIDs:;
- (int)_registerForNotification:handler:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateAppList;
- (id)promoteItemToAppLibraryIfNeeded:;
- (BOOL)isAppLibrary:;
- (id)listOfMonitoredApps;
- (id)appForBundleID:;
- (id)appForDisplayName:;
- (void)_setApps:;
- (void)_addApps:;
- (void)_removeAppsWithBundleIDs:;
- (BOOL)_isAppLibrary:appMetadata:userVisible:;
- (id)_bundleIDForHomonymOfApp:;
+ (id)sharedRegistry;
+ (void)setSharedRegistry:;
+ (id)daemonConnectionOverride;
+ (void)setDaemonConnectionOverride:;
+ (BOOL)keepInSync;
@end
