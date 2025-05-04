@interface AWEBrowsingHistorySettingViewModel : AWESettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (void)switchUserVisitedHistory:;
- (void)switchVideoMediaVisitedHistory:;
- (void)switchLiveVisitedHistory:;
- (void)initModel;
- (void)updateFreqVisitedPeopleItem;
- (void)updateVideoMediaVisitedHistoryItem;
- (void)updateVideoLiveVisitedHistoryItem;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (BOOL)shouldShowLiveVisitedHistory;
@end
