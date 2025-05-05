@interface QLMediaScrubberGesture : UIPanGestureRecognizer
@property (nonatomic) <QLMediaScrubberGestureDelegate> scrubberDelegate;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
- (float)minimumValue;
- (void)setMaximumValue:;
- (float)nominalFrameRate;
- (float)maximumValue;
- (id)initWithPlayer:;
- (void)setMinimumValue:;
- (void)setValue:;
- (void).cxx_destruct;
- (float)value;
- (id)scrubberDelegate;
- (void)setScrubberDelegate:;
- (float)clampedEstimatedFrameRate;
- (void)scrubbGestureDidChange:;
@end
