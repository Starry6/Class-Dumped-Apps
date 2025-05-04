@interface AWEVideoClipSwitchModeView : UIView
@property (nonatomic) ACCAnimatedButton AIModeButton;
@property (nonatomic) ACCAnimatedButton normalModeButton;
@property (nonatomic) UIView separatorView;
@property (nonatomic) UIImageView triangleIndicator;
@property (nonatomic) Q clipMode;
@property (nonatomic) @? didSwitchModeBlock;
@property (nonatomic) <AWEVideoClipSwitchModeViewDelegate> delegate;
- (unsigned long long)clipMode;
- (void)setClipMode:;
- (id)AIModeButton;
- (id)normalModeButton;
- (id)triangleIndicator;
- (void)p_didClickModeButton:;
- (id)p_buttonForMode:;
- (id)didSwitchModeBlock;
- (void)setAIModeButton:;
- (void)setNormalModeButton:;
- (void)setTriangleIndicator:;
- (void)setDidSwitchModeBlock:;
- (id)init;
- (id)delegate;
- (void)setSeparatorView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)separatorView;
@end
