@interface ISSoftwareMap : NSObject
@property (nonatomic) NSArray applications;
- (id)init;
- (void)dealloc;
- (id)applications;
- (id)applicationForBundleIdentifier:;
- (id)applicationForItemIdentifier:;
- (id)copySoftwareUpdatesPropertyList;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:;
- (void)_loadFromMobileInstallation;
+ (id)applicationForBundleIdentifier:;
+ (void)startObservingNotifications;
+ (BOOL)haveApplicationsOfType:;
+ (id)currentMap;
+ (BOOL)currentMapIsValid;
+ (void)invalidateCurrentMap;
+ (id)loadedMap;
+ (void)setCurrentMap:;
+ (id)applicationForBundleIdentifier:applicationType:;
+ (id)applicationForPluginBundleIdentifier:;
+ (id)applicationForPluginBundleIdentifier:extensionType:;
+ (id)containerPathForApp:homeDirectory:systemMetadataDirectory:;
+ (id)copySoftwareUpdatesPropertyListWithApplications:updatesContext:;
+ (void)enumerateApplicationsForProxies:usingBlock:;
+ (void)enumerateApplicationsOfType:usingBlock:;
+ (void)removableSystemApplicationsWithCompletionBlock:;
+ (id)_newSoftwareUpdateDictionaryForApplication:;
+ (void)_startWatchingInstallationNotifications;
@end
