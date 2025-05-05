@interface IESLiveBigPartyKTVAnimationView : HTSEventForwardingView
@property (nonatomic) IESLiveGradientView gradientView;
@property (nonatomic) CAShapeLayer shapeLayer;
- (void)layoutSubviews;
- (id)gradientView;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void)startAnimation;
- (void)setShapeLayer:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)stopAnimation;
@end
