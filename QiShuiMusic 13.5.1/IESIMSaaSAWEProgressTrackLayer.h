@interface IESIMSaaSAWEProgressTrackLayer : CAShapeLayer
@property (nonatomic) double circleWidth;
@property (nonatomic) CAShapeLayer defaultTrackLayer;
- (void)setCircleWidth:;
- (id)defaultTrackLayer;
- (void)setDefaultTrackLayer:;
- (id)initWithSize:;
- (void)layoutSublayers;
- (void)setup;
- (void).cxx_destruct;
- (double)circleWidth;
@end
