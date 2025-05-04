@interface AWEEntertainmentSettingViewModel : AWESettingBaseViewModel
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (id)aAWEPadModuleAdapter;
- (void)tapEntertainmentUserProfileTabEnableListCell;
- (BOOL)entertainmentTabShowAtUserProfileEnable;
- (void)showActionSheetWithItems:confirmBlock:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateStatus;
+ (Class)aAWEPadModuleAdapterClass;
@end
