@interface BDCommonClientABManager : NSObject
@property (nonatomic) NSString appVersionStr;
@property (nonatomic) BDCommonClientABStorageManager localStorageManager;
@property (nonatomic) NSMutableDictionary clientLayers;
- (id)vidList;
- (BOOL)_isPassLayerFiltersVerify:;
- (BOOL)_verifyChannelFilters:;
- (BOOL)_verifyFirstInstallVersion:;
- (BOOL)_verifyNormalFilterKeys:;
- (id)appVersionStr;
- (id)clientLayerByName:;
- (void)launchClientExperimentManager;
- (id)localStorageManager;
- (BOOL)registerClientLayer:;
- (void)saveServerSettingsForClientExperiments:;
- (id)serverSettingValueForFeatureKey:;
- (void)setAppVersionStr:;
- (void)setClientLayers:;
- (void)setLocalStorageManager:;
- (id)valueForFeatureKey:;
- (id)vidForLayerName:;
- (void).cxx_destruct;
- (id)clientLayers;
+ (id)sharedManager;
@end
