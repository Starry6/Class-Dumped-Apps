@interface AWENetworkPackageLoss : NSObject
@property (nonatomic) double packageLossRate;
@property (nonatomic) double packageLossRateUpStream;
@property (nonatomic) double packageLossRateDownStream;
@property (nonatomic) double packageLossRateUpStreamVariance;
@property (nonatomic) double packageLossRateDownStreamVariance;
- (double)packageLossRate;
- (void)setPackageLossRate:;
- (double)packageLossRateUpStream;
- (double)packageLossRateUpStreamVariance;
- (double)packageLossRateDownStream;
- (double)packageLossRateDownStreamVariance;
- (id)initWithUpLossRate:upLossRateVari:downLossRate:downLossRateVari:;
- (void)setPackageLossRateUpStream:;
- (void)setPackageLossRateDownStream:;
- (void)setPackageLossRateUpStreamVariance:;
- (void)setPackageLossRateDownStreamVariance:;
- (id)displayString;
- (id)copyWithZone:;
@end
