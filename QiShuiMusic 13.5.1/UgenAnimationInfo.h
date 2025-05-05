@interface UgenAnimationInfo : NSObject
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) q repeatCount;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) CAMediaTimingFunction timingFunction;
- (long long)repeatCount_playCount_fromDict:;
- (BOOL)autoreverses_playDirection_fromDict:;
- (double)beginTime_delay_fromDict:;
- (double)duration_fromDict:;
- (id)timingFunction_fromDict:;
- (long long)repeatCount;
- (void)setAutoreverses:;
- (void)setRepeatCount:;
- (BOOL)autoreverses;
- (void)setTimingFunction:;
- (id)initWithDictionary:;
- (double)delay;
- (void)setDelay:;
- (void)setDuration:;
- (id)timingFunction;
- (void).cxx_destruct;
- (double)duration;
@end
