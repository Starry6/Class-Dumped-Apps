@interface TTPacketLossMetrics : NSObject
@property (nonatomic) q protocol;
@property (nonatomic) double upstreamLossRate;
@property (nonatomic) double upstreamLossRateVariance;
@property (nonatomic) double downstreamLossRate;
@property (nonatomic) double downstreamLossRateVariance;
- (double)downstreamLossRate;
- (double)downstreamLossRateVariance;
- (void)setDownstreamLossRate:;
- (void)setDownstreamLossRateVariance:;
- (void)setUpstreamLossRate:;
- (void)setUpstreamLossRateVariance:;
- (double)upstreamLossRate;
- (double)upstreamLossRateVariance;
- (long long)protocol;
- (void)setProtocol:;
- (id)init;
@end
