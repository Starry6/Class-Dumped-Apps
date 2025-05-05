@interface IESLiveSaaSRocketMarqueeView : UIView
@property (nonatomic) IESLiveSaaSAnimationRocket animation;
@property (nonatomic) @? onCompletion;
@property (nonatomic) UIView containerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gradientLayer:frame:;
- (id)initWithAnimation:diContext:;
- (void)showInView:completion:;
- (id)stopFrame:height:;
- (void)dismiss;
- (void)cancel;
- (id)containerView;
- (void)setContainerView:;
- (void)setAnimation:;
- (id)labelFont;
- (id)animation;
- (double)topMargin;
- (void).cxx_destruct;
- (id)onCompletion;
- (void)setOnCompletion:;
- (double)containerWidth;
@end
