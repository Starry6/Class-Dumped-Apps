@interface IESLiveMultiLinkerLastResultView : UIView
@property (nonatomic) UIButton lastResultButton;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)onButtonClicked;
- (id)initWithDIContext:;
- (id)lastResultButton;
- (void)lastResultViewGradientLayer:endColor:andLocations:;
- (void)setGradientLayerHidden:;
- (void)setLastResultButton:;
- (void)updateGradientLayerWidth:;
- (id)connectionType;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setGradientLayer:;
- (void)setupUI;
@end
