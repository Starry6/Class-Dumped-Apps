@interface AWEPraiseAndCommentSettingViewModel : AWESettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q prePushSwitch;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (id)aAWEPadModuleAdapter;
- (id)__settingModel:withIndex:isSelected:;
- (void)tapLikeListCell;
- (void)tapPraiseListCell;
- (void)tapCommentOnPostCell;
- (void)tapPushCommentToFansCell;
- (void)tapCommentBlockKeywordsCell;
- (void)setPrePushSwitch:;
- (void)__trackLikePrivacySelect:to_status:;
- (void)__showActionSheetVCWithItems:headerText:useCardUIStyle:dismissBlock:;
- (void)__trackCommentPrivacySelect:originIndex:;
- (long long)prePushSwitch;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateMessage;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
@end
