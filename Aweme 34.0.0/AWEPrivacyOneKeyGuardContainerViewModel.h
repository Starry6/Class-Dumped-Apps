@interface AWEPrivacyOneKeyGuardContainerViewModel : AWESettingBaseViewModel
@property (nonatomic) NSArray oneKeyGuardSelectSectionItems;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)refreshView;
- (id)setupSectionArray;
- (id)topPrefix;
- (id)oneKeyGuardSelectSectionItems;
- (void)postOneKeyGuardSetting:;
- (void)trackItemSelected:fromStatus:;
- (void)setOneKeyGuardSelectSectionItems:;
- (id)init;
- (void).cxx_destruct;
@end
