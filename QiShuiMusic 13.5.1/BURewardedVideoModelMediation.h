@interface BURewardedVideoModelMediation : NSObject
@property (nonatomic) NSString rewardId;
@property (nonatomic) NSString tradeId;
@property (nonatomic) NSString adnName;
@property (nonatomic) NSString ecpm;
@property (nonatomic) BOOL verifyByGroMoreS2S;
@property (nonatomic) NSString reason;
- (id)tradeId;
- (id)adnName;
- (id)ecpm;
- (id)rewardId;
- (void)setAdnName:;
- (void)setEcpm:;
- (void)setRewardId:;
- (void)setTradeId:;
- (void)setVerifyByGroMoreS2S:;
- (BOOL)verifyByGroMoreS2S;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
@end
