@interface IESLiveLoginServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) @? loginBlock;
@property (nonatomic) @? liveFollowChangeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentUserId;
- (void)loginWithUserInfo:completion:;
- (void)loginWithUserInfo:themeId:loginDesc:completion:;
- (void)showBindMobileWithCompletion:;
- (void)showBindMobileWithDidCancelBindBlock:didFinishBindBlock:;
- (void)showBindSafeMobileViewControllerWithMobileUserType:successCompletion:;
- (void)logout;
- (BOOL)isLogin;
@end
