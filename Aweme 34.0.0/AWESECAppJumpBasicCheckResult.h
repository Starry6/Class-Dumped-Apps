@interface AWESECAppJumpBasicCheckResult : NSObject
@property (nonatomic) Q startTime;
@property (nonatomic) Q riskLevel;
@property (nonatomic) Q timeCost;
- (void)setRiskLevel:;
- (unsigned long long)timeCost;
- (void)setTimeCost:;
- (id)init;
- (void)setStartTime:;
- (void)end;
- (unsigned long long)startTime;
- (void)start;
- (unsigned long long)riskLevel;
@end
