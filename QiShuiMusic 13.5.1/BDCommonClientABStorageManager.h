@interface BDCommonClientABStorageManager : NSObject
@property (nonatomic) BDCommonABKeychainStorage keychainManager;
@property (nonatomic) NSDictionary featureDicts;
@property (nonatomic) NSDictionary serverSettingFeatureDicts;
@property (nonatomic) NSDictionary layer2GroupMap;
- (id)ABGroup;
- (id)ABVersion;
- (id)AppVersion;
- (void)saveAppVersion:;
- (id)featureKeyDicts;
- (id)vidList;
- (id)currentLayer2GroupMap;
- (id)featureDicts;
- (id)layer2GroupMap;
- (id)randomNumber;
- (id)readServerSettingFeatureKeyDicts;
- (void)resetFeatureKeys:;
- (void)resetServerSettingFeatureKeys:;
- (void)saveABGroup:;
- (void)saveABVersion:;
- (void)saveCurrentVersionLayer2GroupMap:;
- (void)saveRandomNumberDicts:;
- (id)serverSettingFeatureDicts;
- (id)serverSettingValueForFeatureKey:;
- (void)setFeatureDicts:;
- (void)setLayer2GroupMap:;
- (void)setServerSettingFeatureDicts:;
- (void)updateDataFromOldClientABStorageAsyncIfNeed;
- (id)valueForFeatureKey:;
- (id)init;
- (id)keychainManager;
- (void).cxx_destruct;
- (void)setKeychainManager:;
+ (id)firstInstallVersionStr;
+ (void)saveAPPVersionInfosIfNeed;
@end
