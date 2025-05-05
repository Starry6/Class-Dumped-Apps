@interface BUGestureConfiguration : NSObject
@property (nonatomic) q gestureRecognizerType;
@property (nonatomic) q slideDirection;
@property (nonatomic) double slideThreshold;
- (long long)gestureRecognizerType;
- (void)setGestureRecognizerType:;
- (void)setSlideDirection:;
- (void)setSlideThreshold:;
- (long long)slideDirection;
- (double)slideThreshold;
@end
