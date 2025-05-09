@interface AWEStudioFriendsModuleServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)syncTipsAlertManagerClass;
- (Class)AWEPrivacyPermissionDecouplingManagerClass;
- (BOOL)disabledPublishSync;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:;
- (void)trackSelectPrivacyEvent:extraParam:;
- (id)privacyStatusWithParamsModel:;
- (void)videoNewPublishViewControllerPublishButtonClicked:;
- (void)exitSameStyleShoot:;
- (void)presentPrivacySettingsWithPublishViewModel:storyTTLBlock:selectPrivacyBlock:dismissBlock:enterFrom:;
- (void)presentPrivacySettingsWithPublishViewModel:storyTTLBlock:dismissBlock:;
- (BOOL)isTextStickerShortcutEnabled;
- (double)enterQuickRecordInFamiliarDateDiff;
- (id)duetOrStoryPermissionSettingViewControllerWithDataController:;
- (id)getLatestWatchedMaskIDList;
- (BOOL)isEnableCloseFriendsFeature;
- (id)privacyStatusWithPublishModel:;
- (id)privacyStatusFor24StoryWithPublishModel:;
- (id)publishPrivacyStatusWithPublishModel:;
- (id)familiarPrivacyStatusWithPublishModel:;
- (void)restStoryPrivacyToLastChoice:publishViewModel:;
- (void)showSelectUserViewControllerWithTitle:completeButtonTitle:limitCount:limitToastDesc:selectedUserList:selectCompletionBlock:;
- (BOOL)p_shouldAddAdvanceSettingWithPublishViewModel:;
- (BOOL)enableOnlyEditPageShowAdvanceSettingWithModel:launchStyle:;
- (void)p_showAdvanceSettingPanelWithPublishModel:dismissBlock:;
- (void)p_showNormalSettingPanelWithPublishModel:paramsModel:disallowedCellTypes:repoAuthority:shouldAddAdvanceSetting:xiguaPrivacyBeforeChange:selectPrivacyBlock:dismissBlock:;
+ (void)privacySelectedConfirm:publishViewModel:;
@end
