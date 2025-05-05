@interface IESLiveSaaSFeedLiveMarkView : UIView
@property (nonatomic) CAShapeLayer markClipLayer;
@property (nonatomic) CAGradientLayer markColorLayer;
@property (nonatomic) CAShapeLayer markClipLayerForAniamtion;
@property (nonatomic) CAGradientLayer markColorLayerForAnimation;
@property (nonatomic) BOOL isAddMarkAnimation;
@property (nonatomic) UIImageView liveTag;
- (id)liveTag;
- (void)_addSlowerAnimationToMarkClipLayer:timeOffset:;
- (BOOL)isAddMarkAnimation;
- (id)markClipLayer;
- (id)markClipLayerForAniamtion;
- (id)markColorLayer;
- (id)markColorLayerForAnimation;
- (void)setIsAddMarkAnimation:;
- (void)setLiveTag:;
- (void)setMarkClipLayer:;
- (void)setMarkClipLayerForAniamtion:;
- (void)setMarkColorLayer:;
- (void)setMarkColorLayerForAnimation:;
- (void)setMarkLayerGradientColor:;
- (void)startNewBreatheAnimationWithView:syncStartTime:;
- (void)startSlowerAnimationWithView:syncStartTime:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
