@interface IESLiveSaaSFeedMarkView : UIView
@property (nonatomic) CAShapeLayer markClipLayer;
@property (nonatomic) CAGradientLayer markColorLayer;
@property (nonatomic) CAShapeLayer markClipLayerForAniamtion;
@property (nonatomic) CAGradientLayer markColorLayerForAnimation;
@property (nonatomic) double width;
@property (nonatomic) double height;
- (void)_addAnimationToMarkClipLayer:;
- (void)_addSlowerAnimationToMarkClipLayer:;
- (id)markClipLayer;
- (id)markClipLayerForAniamtion;
- (id)markColorLayer;
- (id)markColorLayerForAnimation;
- (void)setMarkClipLayer:;
- (void)setMarkClipLayerForAniamtion:;
- (void)setMarkColorLayer:;
- (void)setMarkColorLayerForAnimation:;
- (void)startSlowBreathingAnimationWithView:;
- (void)setWidth:;
- (double)height;
- (id)initWithFrame:;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setGradientColor:;
@end
