@interface AWELeftSideBarOverallEmptyView : UIView
@property (nonatomic) DUXBaseLabel loginLabel;
@property (nonatomic) DUXButton loginButton;
@property (nonatomic) DUXVacantView vacantView;
@property (nonatomic) BOOL hasTrack;
- (void)p_initUI;
- (void)setHasTrack:;
- (id)vacantView;
- (void)setVacantView:;
- (void)p_resetUI;
- (void)onLeftSideBarDidOpen;
- (void)onLeftSideBarDidClose;
- (void)themeStyleDidChange:;
- (id)loginLabel;
- (void)setLoginLabel:;
- (void)p_loginAction;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)hasTrack;
- (void)setLoginButton:;
- (id)loginButton;
@end
