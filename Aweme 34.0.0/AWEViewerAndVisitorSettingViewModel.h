@interface AWEViewerAndVisitorSettingViewModel : AWESettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)handleNetworkFailedWithType:;
- (void)updateItemStatusWithType:;
- (void)switchViewerSetting:;
- (void)switchVisitorSetting:;
- (id)refactorSectionDataArray;
- (BOOL)itemStatusWithType:;
- (void).cxx_destruct;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (BOOL)shouldShowViewerSetting;
+ (BOOL)shouldShowVisitorSetting;
@end
