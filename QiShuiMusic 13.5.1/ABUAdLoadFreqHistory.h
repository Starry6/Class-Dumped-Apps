@interface ABUAdLoadFreqHistory : ABUAdHistory
@property (nonatomic) q loadCount;
@property (nonatomic) q startTime;
@property (nonatomic) q period;
@property (nonatomic) q times;
- (BOOL)canUse;
- (void)setStartTime:;
- (id)initWithCoder:;
- (long long)startTime;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (long long)period;
- (id)initWithRule:;
- (void)setPeriod:;
- (long long)loadCount;
- (void)setLoadCount:;
- (long long)times;
- (void)setTimes:;
@end
