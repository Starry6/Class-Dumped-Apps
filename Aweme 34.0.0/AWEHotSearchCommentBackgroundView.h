@interface AWEHotSearchCommentBackgroundView : UIView
@property (nonatomic) DUXBaseImageView atmosphereImageView;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) DUXBaseImageView flameImage;
@property (nonatomic) q themeType;
- (void)awe_themeDidChange:;
- (void)updateTheme:;
- (id)atmosphereImageView;
- (id)flameImage;
- (void)makeConstraint;
- (void)updateDarkTheme;
- (void)updateGrayTheme;
- (void)setAtmosphereImageView:;
- (void)setFlameImage:;
- (id)init;
- (id)gradientView;
- (long long)themeType;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setupUI;
- (void)updateWithContext:;
- (void)setThemeType:;
@end
