@interface AWEMyMusicSettingViewModel : AWESettingBaseViewModel
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (id)aAWEPadModuleAdapter;
- (id)__settingModel:withIndex:isSelected:;
- (void)tapMyCollectedMusic;
- (void)tapMyCollectedPlaylist;
- (void)tapDouyinVideo2Luna:;
- (void)showActionSheetWithPrivacy:trackInfo:type:;
- (id)subtitleOfPrivacyActionSheet:;
- (id)nameOfPrivacyActionSheet:;
- (id)nameOfPrivacyFieldParam:;
- (void)__trackMyCollectedMusicPrivacySelect:to_status:enterMethod:;
- (void)__showActionSheetVCWithItems:headerText:useCardUIStyle:confirmBlock:;
- (id)nameOfMyCollectedMusicPrivacy:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)refreshStatus;
+ (Class)aAWEPadModuleAdapterClass;
@end
