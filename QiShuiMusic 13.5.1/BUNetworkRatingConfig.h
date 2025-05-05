@interface BUNetworkRatingConfig : NSObject
@property (nonatomic) BUNetworkRatingPlan wifiPlan;
@property (nonatomic) BUNetworkRatingPlan cellularPlan;
@property (nonatomic) q networkType;
@property (nonatomic) BUNetworkRatingPlan currentPlan;
- (void)setCurrentPlan:;
- (id)cellularPlan;
- (id)currentPlan;
- (id)initWithJsonDict:;
- (void)setCellularPlan:;
- (void)setWifiPlan:;
- (id)wifiPlan;
- (long long)networkType;
- (void)setNetworkType:;
- (void).cxx_destruct;
- (void)reset;
- (id)nextStep;
@end
