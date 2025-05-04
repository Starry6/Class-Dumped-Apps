@interface AWEContactAuthorizationViewModel : AWESettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (id)aAWEPadModuleAdapter;
- (void)p_refreshUI;
- (void)configSectionDataArray;
- (void)tapContactSystemAuthorizationCell;
- (void)tapSetContactUploadFrequecyCell;
- (void)tapContactInstantUploadCell;
- (id)_settingModel:withIndex:isSelected:actionSheetVC:;
- (void)setUploadFrequecySettingWithIndex:completion:;
- (void)showNeverUploadDoubleCheckModalView:;
- (id)getDisplayStringWithOption:;
- (void)viewDidLoad;
- (id)optionsArray;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (BOOL)disableManageContactSetUploadFrequency;
@end
