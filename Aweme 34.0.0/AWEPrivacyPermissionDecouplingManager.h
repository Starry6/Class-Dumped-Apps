@interface AWEPrivacyPermissionDecouplingManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldShowDuetDecouplingTipsPopupWithPrivacyType:originalDuetPermission:duetPermission:;
+ (BOOL)showDuetDecouplingTipsPopupWithPrivacyType:confirmBlock:enterMethod:enterFrom:;
+ (BOOL)shouldShowStoryShareDecouplingTipsPopupWithPrivacyType:originalStorySharePermission:storySharePermission:;
+ (BOOL)showStoryShareDecouplingTipsPopupWithPrivacyType:confirmBlock:enterMethod:enterFrom:;
+ (BOOL)shouldShowDownloadDecouplingTipsPopupWithPrivacyType:originalDownloadPermission:downloadPermission:;
+ (BOOL)showDownloadDecouplingTipsPopupWithPrivacyType:confirmBlock:cancelBlock:enterMethod:enterFrom:;
+ (long long)decouplingPopupForPrivateAccountShowTimes;
+ (long long)decouplingHintForPrivateAccountShowTimes;
+ (long long)duetDecouplingTipsPopupShownTimes;
+ (long long)storyShareDecouplingTipsPopupShownTimes;
+ (long long)downloadDecouplingTipsPopupShownTimes;
+ (void)updateDecouplingPopupForPrivateAccountShowTimes;
+ (void)updateDuetDecouplingTipsPopupShownTimes;
+ (void)updateStoryShareDecouplingTipsPopupShownTimes;
+ (void)updateDownloadDecouplingTipsPopupShownTimes;
+ (id)privacyDecoulingHintText;
+ (void)updateDecouplingHintForPrivateAccountShowTimes;
+ (void)showDecouplingPopupForPrivateAccountWithConfirmBlock:dismissBlock:confirmText:enterMethod:;
+ (id)currentUser;
@end
