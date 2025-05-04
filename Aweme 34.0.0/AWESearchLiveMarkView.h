@interface AWESearchLiveMarkView : UIView
@property (nonatomic) UIImageView liveTagView;
@property (nonatomic) CAShapeLayer markClipLayer;
@property (nonatomic) CAGradientLayer markColorLayer;
@property (nonatomic) CAShapeLayer markClipLayerForAniamtion;
@property (nonatomic) CAGradientLayer markColorLayerForAnimation;
- (id)liveTagView;
- (void)setLiveTagView:;
- (id)markClipLayer;
- (void)setMarkClipLayer:;
- (id)markColorLayer;
- (void)setMarkColorLayer:;
- (id)markClipLayerForAniamtion;
- (id)markColorLayerForAnimation;
- (void)setMarkClipLayerForAniamtion:;
- (void)setMarkColorLayerForAnimation:;
- (void)startAnimationWithView:liveType:showTag:;
- (void)resetLiveMarkWithView:;
- (void)_addAnimationToMarkClipLayerTagType:;
- (void)setMarkLayerColorType:;
- (id)init;
- (void).cxx_destruct;
@end
