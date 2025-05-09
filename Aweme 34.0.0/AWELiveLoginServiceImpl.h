@interface AWELiveLoginServiceImpl : NSObject
@property (nonatomic) <IESLiveCompoundSubscription> actionDisposable;
@property (nonatomic) NSDictionary tintTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? loginBlock;
@property (nonatomic) @? liveFollowChangeBlock;
- (void)didFinishLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishUpdateAwemeUserWithtintTags:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)requirePadCastLoginTokenWithState:completion:;
- (id)currentUserId;
- (void)loginWithUserInfo:completion:;
- (void)loginWithUserInfo:;
- (void)loginWithUserInfo:isFIFARoom:completion:;
- (void)loginWithUserInfo:themeId:loginDesc:completion:;
- (void)localFollowStatusWithUserID:extraLog:completion:;
- (void)showBindMobileWithCompletion:;
- (void)showBindMobileWithDidCancelBindBlock:didFinishBindBlock:;
- (void)showBindSafeMobileViewControllerWithMobileUserType:successCompletion:;
- (void)getSwitchAccountResultWithSource:switchUserComplete:finishComplete:;
- (id)loginBlock;
- (void)setLoginBlock:;
- (id)requestTintTags;
- (id)currentEncryptedUserId;
- (id)liveFollowChangeBlock;
- (void)setLiveFollowChangeBlock:;
- (id)actionDisposable;
- (void)setActionDisposable:;
- (void)bindFollowStatusChangeSignalForOutterService;
- (void)setTintTags:;
- (id)tintTags;
- (void)didFollowUser:secUserID:status:;
- (void)didUnfollowUser:secUserID:status:;
- (void)logout;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentSessionID;
- (BOOL)isLogin;
@end
