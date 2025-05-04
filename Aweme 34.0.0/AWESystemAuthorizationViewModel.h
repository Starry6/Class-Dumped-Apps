@interface AWESystemAuthorizationViewModel : AWESettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasShownPasteboardSetting;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (BOOL)hasShownPasteboardSetting;
- (void)setHasShownPasteboardSetting:;
- (void)tapCellWithType:;
- (void)switchClipboard:;
- (void)switchAutoReadPasteBoard:;
- (void)tapManageSystemAddressBookCell;
- (void)tapManagePositionAuthorizationCell;
- (void)tapAlbumAuthDetailCell;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (void)showSystemSettingAlertWithType:title:enterFrom:;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (BOOL)enableShowContactGuideEntry;
+ (id)settingParamsWithType:;
@end
