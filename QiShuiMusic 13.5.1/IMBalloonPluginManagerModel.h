@interface IMBalloonPluginManagerModel : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dataQueue;
@property (nonatomic) IMThreadSafeBalloonPluginMap pluginsMap;
@property (nonatomic) @ extensionMatchingContext;
@property (nonatomic) @ highMemoryExtensionMatchingContext;
@property (nonatomic) NSString pluginMetaDataFolder;
@property (nonatomic) NSDictionary pluginIDToMetadataCache;
@property (nonatomic) NSSet pluginsToRemoveAfterExtensionsUpdate;
@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDeferredInstalledAppsChangedNotification;
- (id)init;
- (void)setExtensionMatchingContext:;
- (void).cxx_destruct;
- (id)extensionMatchingContext;
- (id)dataQueue;
- (BOOL)hasCompletedInitialization;
- (void)setHasCompletedInitialization:;
- (void)setHighMemoryExtensionMatchingContext:;
- (id)highMemoryExtensionMatchingContext;
- (void)setPluginMetaDataFolder:;
- (id)pluginMetaDataFolder;
- (void)setPluginsToRemoveAfterExtensionsUpdate:;
- (void)setPluginIDToMetadataCache:;
- (BOOL)hasDeferredInstalledAppsChangedNotification;
- (void)setHasDeferredInstalledAppsChangedNotification:;
- (id)pluginIDToMetadataCache;
- (id)pluginsMap;
- (id)pluginsToRemoveAfterExtensionsUpdate;
@end
