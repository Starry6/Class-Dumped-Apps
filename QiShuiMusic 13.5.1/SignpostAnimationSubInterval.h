@interface SignpostAnimationSubInterval : NSObject
@property (nonatomic) double timebaseRatio;
@property (nonatomic) NSMutableArray parentAnimationIntervals;
@property (nonatomic) Q startMachContinuousTime;
@property (nonatomic) Q endMachContinuousTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (float)durationSeconds;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)endMachContinuousTime;
- (id)initWithInterval:;
- (BOOL)isEqual:;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (double)timebaseRatio;
- (double)startSeconds;
- (double)endSeconds;
- (unsigned long long)startNanoseconds;
- (unsigned long long)endNanoseconds;
- (double)startMs;
- (double)endMs;
- (id)initWithStartMCT:endMCT:timebaseRatio:;
- (id)parentAnimationIntervals;
@end
