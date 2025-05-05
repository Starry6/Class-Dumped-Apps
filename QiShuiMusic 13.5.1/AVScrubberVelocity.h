@interface AVScrubberVelocity : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) double velocity;
- (double)velocity;
- (void)setVelocity:;
- (void)setTimestamp:;
- (double)timestamp;
@end
