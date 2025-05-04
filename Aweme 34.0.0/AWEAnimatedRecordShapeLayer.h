@interface AWEAnimatedRecordShapeLayer : CALayer
@property (nonatomic) CALayer maskLayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createScaleAnimationWithRatio:duration:;
- (id)createHollowOutAnimationWithRatio:duration:;
- (void)setInitialHollowRatio:;
- (id)createBreathingAnimationWithFromRatio:toRatio:duration:;
- (void)addCirclelayer;
- (double)calculateMaskLayerLineWidthWithRatio:;
- (id)createColorChangeAnimationWithColor:duration:;
- (id)createCornerRadiusAnimationWithCornerRadius:duration:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)maskLayer;
- (void)setMaskLayer:;
@end
