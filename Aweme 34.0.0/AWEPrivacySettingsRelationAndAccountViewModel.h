@interface AWEPrivacySettingsRelationAndAccountViewModel : AWESettingBaseViewModel
@property (nonatomic) AWENewPrivacySettingDataController controller;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)configDataSourceWithPrivacySettingDataController:;
- (void)updateModelDetail:completion:;
- (void)setPrivacySettingDataController:;
- (void)updateModelDetailWhenNeedFetchData:;
- (void)updateModelDetailAfterDismissSecondaryHalfVC:;
- (id)modelDetailWithType:;
- (void).cxx_destruct;
- (id)controller;
@end
