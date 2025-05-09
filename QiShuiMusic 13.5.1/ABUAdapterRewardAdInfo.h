@interface ABUAdapterRewardAdInfo : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString rewardId;
@property (nonatomic) NSString rewardName;
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString tradeId;
@property (nonatomic) BOOL verify;
@property (nonatomic) NSString adnName;
@property (nonatomic) NSString ecpm;
@property (nonatomic) NSDictionary customData;
- (id)tradeId;
- (id)adnName;
- (id)ecpm;
- (long long)rewardAmount;
- (id)rewardId;
- (id)rewardName;
- (void)setAdnName:;
- (void)setEcpm:;
- (void)setRewardAmount:;
- (void)setRewardId:;
- (void)setRewardName:;
- (void)setTradeId:;
- (void)setVerify:;
- (BOOL)verifyByGroMoreS2S;
- (BOOL)isMemberOfClass:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (BOOL)verify;
- (id)customData;
- (void)setCustomData:;
@end
