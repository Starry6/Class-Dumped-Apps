@interface AWEAwemeSettings : AWEBaseSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isSettingsUpdated;
@property (nonatomic) {os_unfair_lock_s=I} settingsLock;
@property (nonatomic) BOOL lastUpdateByIncrement;
@property (nonatomic) @? appSettingsNetworkImpl;
@property (nonatomic) BOOL shouldPrintLogWhenUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)incrementalUpdateData:unchangedKeyList:;
- (void)fetchSettings;
- (void)printLog:;
- (void)setLastUpdateByIncrement:;
- (BOOL)lastUpdateByIncrement;
- (id)appSettingsNetworkImpl;
- (BOOL)shouldPrintLogWhenUpdate;
- (void)setIsSettingsUpdated:;
- (void)overrideSettings:needCleanCache:silent:;
- (BOOL)enableLaunchCache;
- (void)removeSettingsDataWithKeys:;
- (void)overrideSettings:needCleanCache:;
- (BOOL)isSettingsUpdated;
- (void)setAppSettingsNetworkImpl:;
- (void)setShouldPrintLogWhenUpdate:;
- (void)setSettings:;
- (id)init;
- (id)settings;
- (void)setSettingsLock:;
- (void).cxx_destruct;
- (void)updateSettings:;
- (id)settingsLock;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (void)doOriginalActions;
+ (void)updateSettingsWithDictionary:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
