@interface AWELoginBackgroundView : UIView
@property (nonatomic) AWELoginAmbientView ambientView;
@property (nonatomic) AWELoginBackgroundViewNavigationBarConfig navBarConfig;
@property (nonatomic) NSObject<AWEUserLoginUILayoutConfig> layoutConfig;
@property (nonatomic) NSObject<AWEUserLoginUIAmbientConfig> ambientConfig;
@property (nonatomic) BOOL isAmbientHeadViewShown;
@property (nonatomic) q statusBarStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setLayoutConfig:;
- (void)p_updateBackground;
- (void)showHeaderView;
- (id)ambientConfig;
- (void)setAmbientConfig:;
- (void)updateNavigationBarConfig:;
- (void)headerViewLoadImageWithView:;
- (id)ambientView;
- (void)setIsAmbientHeadViewShown:;
- (void)p_updateNavigationBar;
- (id)navBarConfig;
- (BOOL)isAmbientHeadViewShown;
- (void)setAmbientView:;
- (void)setNavBarConfig:;
- (id)initWithFrame:;
- (long long)statusBarStyle;
- (void).cxx_destruct;
- (void)setStatusBarStyle:;
- (void)hideHeaderView;
- (void)updateModel:;
- (id)layoutConfig;
@end
