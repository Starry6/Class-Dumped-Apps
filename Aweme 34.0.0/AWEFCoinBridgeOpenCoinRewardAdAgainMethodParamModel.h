@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString creatorId;
@property (nonatomic) NSString adFrom;
@property (nonatomic) NSString token;
@property (nonatomic) NSDictionary rewardInfo;
@property (nonatomic) NSString reqFrom;
- (void)setAdFrom:;
- (id)adFrom;
- (void)setRewardInfo:;
- (id)rewardInfo;
- (void)setReqFrom:;
- (id)reqFrom;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)creatorId;
- (void)setCreatorId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
