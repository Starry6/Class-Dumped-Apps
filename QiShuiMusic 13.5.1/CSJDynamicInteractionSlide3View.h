@interface CSJDynamicInteractionSlide3View : UIView
@property (nonatomic) CSJDynamicBrickValuesModel interactModel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) @? actionBlock;
- (void)_onPanGR:;
- (void)_setupPropertyWithAnimation:;
- (id)initWithFrame:interactModel:;
- (id)interactModel;
- (void)setInteractModel:;
- (void)startSplashBottomAnimation;
- (id)actionBlock;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)setActionBlock:;
@end
