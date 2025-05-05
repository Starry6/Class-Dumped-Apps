@interface BUMAdapterRewardAdInfo : BUInterfaceBaseObject
@property (nonatomic) BUMAdapterRewardAdInfo iteration;
@property (nonatomic) NSString rewardId;
@property (nonatomic) NSString rewardName;
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString tradeId;
@property (nonatomic) BOOL verify;
@property (nonatomic) NSString adnName;
@property (nonatomic) NSString ecpm;
@property (nonatomic) NSDictionary customData;
- (id)ecpm;
- (void)setEcpm:;
- (id)init;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
@end
