@interface AWEFeedLiveMarkHeadAnimatedView : UIView
@property (nonatomic) UIView centerView;
@property (nonatomic) CAGradientLayer centerViewGradient;
@property (nonatomic) CAShapeLayer markClipLayer;
@property (nonatomic) CAGradientLayer markColorLayer;
@property (nonatomic) CAShapeLayer markClipLayerForAniamtion;
@property (nonatomic) CAGradientLayer markColorLayerForAnimation;
@property (nonatomic) UIImageView liveTextImage;
- (id)markClipLayer;
- (void)setMarkClipLayer:;
- (id)markColorLayer;
- (void)setMarkColorLayer:;
- (id)centerViewGradient;
- (id)markClipLayerForAniamtion;
- (id)markColorLayerForAnimation;
- (id)liveTextImage;
- (void)setCenterViewGradient:;
- (void)setMarkClipLayerForAniamtion:;
- (void)setMarkColorLayerForAnimation:;
- (void)setLiveTextImage:;
- (id)centerView;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setCenterView:;
- (void)layoutSubviews;
- (void)stopAnimation;
- (void)setupUI;
@end
