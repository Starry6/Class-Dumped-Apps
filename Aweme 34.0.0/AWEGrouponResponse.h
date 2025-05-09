@interface AWEGrouponResponse : NSObject
@property (nonatomic) AWEGrouponResourceResponse resourceResponse;
@property (nonatomic) NSError resourceError;
@property (nonatomic) Q from;
@property (nonatomic) AWEGrouponResponsePageViewModel pageViewModel;
@property (nonatomic) AWEGrouponListDataResponse listDataResponse;
@property (nonatomic) AWEGrouponSettingsResponse settingsResponse;
@property (nonatomic) NSDictionary tabsListResDict;
@property (nonatomic) NSArray transformerCardList;
@property (nonatomic) NSArray transformerAwemeList;
@property (nonatomic) AWEGrouponMutipleTabModel tabsModel;
@property (nonatomic) q currentFeedTabID;
@property (nonatomic) BOOL needForceUpdateTabs;
@property (nonatomic) q updateType;
@property (nonatomic) NSDictionary lifeTrackParams;
@property (nonatomic) NSDictionary dualSearchBarSetting;
@property (nonatomic) NSString diamondGlobalConfig;
@property (nonatomic) AWEGrouponActivityBgModel activityBg;
@property (nonatomic) AWEGrouponActivityModel activityModel;
@property (nonatomic) AWEGrouponSettingsControlInfo settingsControlInfo;
@property (nonatomic) NSString geckoConfigString;
@property (nonatomic) NSString serverLatency;
@property (nonatomic) AWEGrouponC2HeaderToolEntranceResponse headerToolEntranceResponse;
@property (nonatomic) NSArray geckoConfig;
@property (nonatomic) double ditoParseDuration;
@property (nonatomic) NSArray filteredDiff;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) NSArray asyncUpdateModuleList;
- (id)settingsResponse;
- (id)activityModel;
- (void)setActivityModel:;
- (id)pageViewModel;
- (void)setPageViewModel:;
- (id)transformerAwemeList;
- (id)resourceResponse;
- (id)dualSearchBarSetting;
- (id)headerToolEntranceResponse;
- (void)setSettingsResponse:;
- (id)geckoConfigString;
- (id)settingsControlInfo;
- (long long)currentFeedTabID;
- (id)tabsListResDict;
- (id)listDataResponse;
- (void)setDualSearchBarSetting:;
- (void)setListDataResponse:;
- (id)transformerCardList;
- (void)setTransformerAwemeList:;
- (id)asyncUpdateModuleList;
- (double)ditoParseDuration;
- (void)setDitoParseDuration:;
- (void)setCurrentFeedTabID:;
- (void)setLifeTrackParams:;
- (void)setNeedForceUpdateTabs:;
- (void)setAsyncUpdateModuleList:;
- (void)setTabsListResDict:;
- (void)setTransformerCardList:;
- (void)setTabsModel:;
- (void)setDiamondGlobalConfig:;
- (void)setGeckoConfigString:;
- (id)geckoConfig;
- (void)setGeckoConfig:;
- (id)activityBg;
- (void)setActivityBg:;
- (void)setSettingsControlInfo:;
- (void)setResourceResponse:;
- (void)setHeaderToolEntranceResponse:;
- (void)setResourceError:;
- (id)tabsModel;
- (BOOL)needForceUpdateTabs;
- (id)lifeTrackParams;
- (id)diamondGlobalConfig;
- (id)filteredDiff;
- (void)setFilteredDiff:;
- (void).cxx_destruct;
- (void)setUpdateType:;
- (long long)updateType;
- (void)setFrom:;
- (unsigned long long)from;
- (id)serverLatency;
- (void)setServerLatency:;
- (id)requestParams;
- (void)setRequestParams:;
- (id)resourceError;
@end
