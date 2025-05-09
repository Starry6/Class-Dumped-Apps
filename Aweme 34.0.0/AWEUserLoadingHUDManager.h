@interface AWEUserLoadingHUDManager : NSObject
@property (nonatomic) AWEUserAccountLoadingHUD loadingHUD;
@property (nonatomic) BOOL isHUDShowing;
@property (nonatomic) q showingCount;
@property (nonatomic) NSString title;
@property (nonatomic) q verifyAccountSnapshot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:;
- (long long)showingCount;
- (void)setShowingCount:;
- (BOOL)isHUDShowing;
- (void)setIsHUDShowing:;
- (void)_windowDidBecomeKeyNotification;
- (void)_windowDidResignKeyNotification;
- (void)_showLogingHUD;
- (void)_hideLogingHUD;
- (void)uniqueActionWhenStartLogin:;
- (void)_hideThirdPartyLoadingIfNeeded;
- (id)loadingHUD;
- (void)setLoadingHUD:;
- (BOOL)shouldHideLoadingWhenNeeded;
- (long long)verifyAccountSnapshot;
- (void)setVerifyAccountSnapshot:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)_keyWindow;
+ (void)showWithTitle:;
+ (void)showWithLastConfig;
+ (BOOL)isLoading;
+ (id)sharedManager;
+ (void)dismiss;
+ (void)start;
@end
