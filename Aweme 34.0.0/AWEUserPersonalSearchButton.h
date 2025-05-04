@interface AWEUserPersonalSearchButton : UIButton
@property (nonatomic) UIImageView whiteImageView;
@property (nonatomic) UIImageView darkImageView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView accessView;
- (void)updateAlpha:;
- (BOOL)isLightMode;
- (void)setAccessView:;
- (id)accessView;
- (void)followThemeMode;
- (void)showWhiteImage;
- (id)whiteImageView;
- (id)darkImageView;
- (void)p_changeImageAccordingToThemeMode;
- (void)setWhiteImageView:;
- (void)setDarkImageView:;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (void)setHighlighted:;
- (void).cxx_destruct;
@end
