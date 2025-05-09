@interface MTStandardIDService : NSObject
@property (nonatomic) MTPromise configDictPromise;
@property (nonatomic) MTIDConfig cachedConfig;
@property (nonatomic) NSMutableDictionary associatedObjects;
@property (nonatomic) MTIDCache cache;
@property (nonatomic) MTInterprocessChangeNotifier accountChanged;
@property (nonatomic) <MTIDSecretStore> secretStore;
@property (nonatomic) NSNumber defaultDSID;
@property (nonatomic) NSNumber dsId;
@property (nonatomic) NSString applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sync:;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)sync;
- (id)init;
- (id)initWithConfigDictionary:;
- (void)dealloc;
- (void)setConfig:;
- (void)setCache:;
- (id)accountChanged;
- (void)handleApplicationStateChange:;
- (void).cxx_destruct;
- (id)cache;
- (id)cachedConfig;
- (void)setCachedConfig:;
- (void)queryIDForTopic:type:options:completion:;
- (id)IDFieldsForTopic:options:;
- (id)initWithAMSBag:;
- (id)secretValueForNamespace:options:;
- (id)dsId;
- (void)IDFieldsForTopic:options:completion:;
- (void)resetIDForTopics:options:completion:;
- (void)performMaintenanceWithCompletion:;
- (id)resetIDForTopics:options:;
- (void)setDsId:;
- (void)handleResetNotification:;
- (void)handleAccountNotification;
- (id)initWithConfigPromise:;
- (id)initWithConfigDictPromise:bag:;
- (id)configPromise;
- (id)defaultDSID;
- (void)maybeSubscribeToDarwinNotifications;
- (void)handleRecordNotification;
- (id)filledOptions:;
- (id)IDForTopic:type:options:;
- (id)IDsForNamespaces:options:fromConfig:;
- (id)IDInfoForNamespace:options:fromConfig:;
- (id)generateIDInfo:secret:dsId:correlationIDs:;
- (void)_clearLocalData;
- (void)_resetIDs;
- (void)_getSecrets;
- (void)_getIDs;
- (void)_getConfig;
- (id)configDictPromise;
- (void)setConfigDictPromise:;
- (id)associatedObjects;
- (void)setAssociatedObjects:;
- (void)setAccountChanged:;
- (id)secretStore;
- (void)setSecretStore:;
- (void)setDefaultDSID:;
+ (BOOL)isTinkerPaired;
+ (void)setLocalCachePath:;
+ (id)localCachePath;
+ (void)registerInterprocessChangeNotifier:;
+ (void)triggerInterprocessChangeNotifier:;
+ (id)writeDebugData:toFileWithNameFormat:;
@end
