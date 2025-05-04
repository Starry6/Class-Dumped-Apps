@interface AWEIMAccountCardMessageViewModel : AWEIMMessageViewModel
- (void)__roleViewClickTrack;
- (void)p_transferToProfileWithUserID:secUserID:additionalParams:;
- (void)p_trackEnterPersonalDetail:;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)__roleViewShowTrack;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (void)__roleViewTrackWithEvent:;
- (id)verifyIconImage;
- (void)handleRoleViewTapped;
- (void)transferToIdentify;
- (void)transToUserProfile;
- (id)__toEnterpriseRoleId;
- (id)nameFont;
- (id)nameColor;
@end
