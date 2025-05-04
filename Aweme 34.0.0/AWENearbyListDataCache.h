@interface AWENearbyListDataCache : NSObject
@property (nonatomic) AWENearbyListDataResponse listDataResp;
@property (nonatomic) AWENearbySettingsResponse settingsResp;
@property (nonatomic) NSError listDataError;
@property (nonatomic) NSError settingsError;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL forcelyUpdateCityTitle;
- (id)settingsError;
- (void)setSettingsError:;
- (id)listDataResp;
- (void)setListDataResp:;
- (id)settingsResp;
- (void)setSettingsResp:;
- (id)listDataError;
- (void)setListDataError:;
- (BOOL)forcelyUpdateCityTitle;
- (void)setForcelyUpdateCityTitle:;
- (BOOL)hasPermission;
- (void)setHasPermission:;
- (void).cxx_destruct;
@end
