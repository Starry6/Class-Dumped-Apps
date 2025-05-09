@interface PuzzleFullScreenControllerUIConfig : PuzzleBaseUIConfig
@property (nonatomic) NSNumber forbidRightBack;
@property (nonatomic) NSNumber forbidFullscreenBack;
@property (nonatomic) NSNumber forceDarkStyle;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) NSString statusBarBackgroundColor;
@property (nonatomic) NSString statusBarColor;
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString navBarColor;
@property (nonatomic) BOOL transStatusBar;
@property (nonatomic) BOOL supportExchangeTheme;
@property (nonatomic) BOOL topLevel;
@property (nonatomic) BOOL showError;
@property (nonatomic) BOOL enablePadAdapter;
@property (nonatomic) BOOL enableContentFullScreen;
@property (nonatomic) double padRatio;
@property (nonatomic) BOOL disableResetNaviBarHidden;
- (id)forbidRightBack;
- (void)setNavBarColor:;
- (BOOL)disableResetNaviBarHidden;
- (BOOL)enableContentFullScreen;
- (BOOL)enablePadAdapter;
- (id)forbidFullscreenBack;
- (id)forceDarkStyle;
- (BOOL)hideNavBar;
- (id)initWithURL:keneralType:;
- (id)navBarColor;
- (double)padRatio;
- (void)setDisableResetNaviBarHidden:;
- (void)setEnableContentFullScreen:;
- (void)setEnablePadAdapter:;
- (void)setForbidFullscreenBack:;
- (void)setForbidRightBack:;
- (void)setForceDarkStyle:;
- (void)setHideNavBar:;
- (void)setPadRatio:;
- (void)setStatusBarBackgroundColor:;
- (void)setStatusBarColor:;
- (void)setSupportExchangeTheme:;
- (void)setTransStatusBar:;
- (id)statusBarBackgroundColor;
- (id)statusBarColor;
- (BOOL)supportExchangeTheme;
- (BOOL)transStatusBar;
- (id)initWithParams:;
- (void)setTitleColor:;
- (void)setTitle:;
- (id)titleColor;
- (id)title;
- (void).cxx_destruct;
- (BOOL)hideStatusBar;
- (id)initWithSchema:;
- (BOOL)showError;
- (void)setShowError:;
- (BOOL)topLevel;
- (void)setTopLevel:;
- (void)setHideStatusBar:;
@end
