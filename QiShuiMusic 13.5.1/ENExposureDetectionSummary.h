@interface ENExposureDetectionSummary : NSObject
@property (nonatomic) NSArray attenuationDurations;
@property (nonatomic) q daysSinceLastExposure;
@property (nonatomic) Q matchedKeyCount;
@property (nonatomic) C maximumRiskScore;
@property (nonatomic) double maximumRiskScoreFullRange;
@property (nonatomic) double riskScoreSumFullRange;
@property (nonatomic) NSArray daySummaries;
@property (nonatomic) NSDictionary metadata;
- (void)encodeWithXPCObject:;
- (id)metadata;
- (id)initWithXPCObject:error:;
- (void).cxx_destruct;
- (id)description;
- (void)setMaximumRiskScore:;
- (void)setDaySummaries:;
- (void)setMaximumRiskScoreFullRange:;
- (void)setDaysSinceLastExposure:;
- (void)setAttenuationDurations:;
- (void)setRiskScoreSumFullRange:;
- (id)daySummaries;
- (id)attenuationDurations;
- (unsigned long long)matchedKeyCount;
- (void)setMatchedKeyCount:;
- (long long)daysSinceLastExposure;
- (unsigned char)maximumRiskScore;
- (double)maximumRiskScoreFullRange;
- (double)riskScoreSumFullRange;
@end
