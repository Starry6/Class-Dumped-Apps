@interface AWEPrivacySettingFindMyWayViewModel : AWESettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> updateSerialQueue;
@property (nonatomic) NSString enterFrom;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)setupSectionArray;
- (void)updateSectionDataArray;
- (void)fetchUserSettingsWithCompletion:;
- (id)updateSerialQueue;
- (void)setUpdateSerialQueue:;
- (void)viewDidLoad;
- (void)reload;
- (void).cxx_destruct;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (BOOL)shouldShowSearchedByStranger;
+ (void)syncSearchByMobileStatusIfNeed;
@end
