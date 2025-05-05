@interface ARCoachingAnimTime : NSObject
@property (nonatomic) double absoluteTime;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double oscillatingTime;
@property (nonatomic) double delta;
@property (nonatomic) double deltaPercentage;
- (double)delta;
- (id)init;
- (void)setStartTime:;
- (double)startTime;
- (void)setDuration:;
- (double)absoluteTime;
- (double)duration;
- (void)setAbsoluteTime:;
- (double)oscillatingTime;
- (double)deltaPercentage;
@end
