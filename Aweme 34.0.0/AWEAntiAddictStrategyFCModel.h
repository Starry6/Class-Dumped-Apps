@interface AWEAntiAddictStrategyFCModel : MTLModel
@property (nonatomic) NSNumber pDaysPerPeriod;
@property (nonatomic) NSNumber pMaxTimesPerPeriod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)secondsPerPeriod;
- (long long)maxTimesPerPeriod;
- (id)pDaysPerPeriod;
- (id)pMaxTimesPerPeriod;
- (id)initWithSecondsPerPeriod:maxTimesPerperiod:;
- (void)setPDaysPerPeriod:;
- (void)setPMaxTimesPerPeriod:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
