@interface CSJRewardedAdViewModel : NSObject
@property (nonatomic) double topBarTotoalTime;
@property (nonatomic) q rewardTotoalTime;
@property (nonatomic) double rewardOriginTime;
@property (nonatomic) BOOL useFullLinkTimer;
@property (nonatomic) Q rewardTimingPageMask;
@property (nonatomic) BOOL sendRewardWhenSwitchToEndcard;
@property (nonatomic) Q rewardedSceneType;
- (double)rewardOriginTime;
- (unsigned long long)rewardTimingPageMask;
- (long long)rewardTotoalTime;
- (unsigned long long)rewardedSceneType;
- (BOOL)sendRewardWhenSwitchToEndcard;
- (void)setRewardOriginTime:;
- (void)setRewardTimingPageMask:;
- (void)setRewardTotoalTime:;
- (void)setRewardedSceneType:;
- (void)setSendRewardWhenSwitchToEndcard:;
- (void)setTopBarTotoalTime:;
- (void)setUseFullLinkTimer:;
- (void)setupWithMaterial:;
- (double)topBarTotoalTime;
- (BOOL)useFullLinkTimer;
@end
