@interface AWEUserLoginBackgroundComponent : NSObject
@property (nonatomic) AWEUserLoginBackgroundView bgView;
@property (nonatomic) AWEUserLoginBaseViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showHeaderView;
- (BOOL)shouldSetupDifferentiatingTheme;
- (id)aAWEUserLoginThemeAdapter;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (void)setupHalfScreenComponentView;
- (void)setupFullScreenComponentView;
- (BOOL)isAvatarPanelStyle;
- (id)viewModel;
- (unsigned long long)componentType;
- (void).cxx_destruct;
- (id)bgView;
- (id)componentView;
- (void)setBgView:;
- (void)hideHeaderView;
- (void)updateModel;
+ (Class)aAWEUserLoginThemeAdapterClass;
@end
