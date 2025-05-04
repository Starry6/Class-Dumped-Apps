@interface AWEDCFeedMidSearchDurationInfo : NSObject
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;
@property (nonatomic) double effectiveBeginTime;
@property (nonatomic) double effectiveDuration;
- (void)setEffectiveDuration:;
- (double)effectiveBeginTime;
- (void)setEffectiveBeginTime:;
- (double)effectiveDuration;
- (void)setDuration:;
- (double)beginTime;
- (void)setBeginTime:;
- (double)duration;
@end
