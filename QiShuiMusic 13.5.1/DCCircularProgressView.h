@interface DCCircularProgressView : UIView
@property (nonatomic) CAShapeLayer circleLayer;
@property (nonatomic) double progress;
@property (nonatomic) NSProgress observedProgress;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setProgress:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (double)progress;
- (void).cxx_destruct;
- (void)setObservedProgress:;
- (id)observedProgress;
- (id)newPathForProgress:;
- (id)circleLayer;
- (void)setCircleLayer:;
@end
