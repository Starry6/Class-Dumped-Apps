@interface AWEIMSkylightVirtualAvatarComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMSkylightViewInterface> skylightViewInterface;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateCurrentUserUseVirutalOrOriginAvatar:;
- (void)didFinishRequestCreateOrEditVirtualAvatarIsFirstTime:emotionText:emotionIcon:;
- (void)didUpdateVirtualAvatarWithNewUserModel:;
- (void)skylightVirtualAvatarDidUpdatedUserSetting:;
- (void)p_updateLoginUser;
- (void)p_deleteBatchViewModelTypes:inSectionIdentifier:;
- (void)p_resetRefreshTimeAndUpdateLoginUser;
- (id)skylightViewInterface;
- (void)setSkylightViewInterface:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
