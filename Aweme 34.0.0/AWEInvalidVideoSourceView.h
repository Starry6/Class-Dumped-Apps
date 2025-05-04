@interface AWEInvalidVideoSourceView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) BOOL useSmallIcon;
@property (nonatomic) BOOL textHidden;
@property (nonatomic) BOOL forceLightMode;
- (id)descLabel;
- (void)setDescLabel:;
- (void)onAWEUIThemeChangeNotification;
- (void)updateUIForCurrentTheme;
- (BOOL)forceLightMode;
- (void)updateUIForLightTheme;
- (void)updateUIForDarkTheme;
- (BOOL)textHidden;
- (void)setTextHidden:;
- (void)setForceLightMode:;
- (id)init;
- (void)dealloc;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUseSmallIcon:;
- (BOOL)useSmallIcon;
@end
