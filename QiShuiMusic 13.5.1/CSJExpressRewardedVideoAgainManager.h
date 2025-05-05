@interface CSJExpressRewardedVideoAgainManager : NSObject
@property (nonatomic) CSJExpressRewardedVideoAgainConfiguration configuration;
@property (nonatomic) CSJExpressRewardedVideoAgainAd rewardAgainAd;
- (id)rewardAgainAd;
- (void)setRewardAgainAd:;
- (void)showRewardAgainAdSuccess:failure:;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
@end
