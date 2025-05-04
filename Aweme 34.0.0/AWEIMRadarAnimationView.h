@interface AWEIMRadarAnimationView : UIView
@property (nonatomic) CAReplicatorLayer replicatorLayer;
@property (nonatomic) CAShapeLayer circleLayer;
- (void)setRadarCircleColor:;
- (void)p_setupLayers;
- (void)setRadarCircleCount:;
- (void)setReplicatorLayer:;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setCircleLayer:;
- (id)circleLayer;
- (id)replicatorLayer;
- (void)cancelAnimation;
@end
