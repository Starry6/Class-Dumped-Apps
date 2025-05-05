@interface BDUGLuckyADRewardedVideoXBridgeModel : BDUGLuckyBridgeModel
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString taskKey;
@property (nonatomic) NSString amount;
@property (nonatomic) NSString amountType;
@property (nonatomic) NSString adRit;
@property (nonatomic) NSString adAliasPosition;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString token;
- (id)adAliasPosition;
- (id)taskKey;
- (id)adRit;
- (void)setAdAliasPosition:;
- (void)setAdRit:;
- (void)setTaskKey:;
- (void)setScene:;
- (id)token;
- (id)scene;
- (id)taskId;
- (id)dictionaryValue;
- (void)setToken:;
- (void).cxx_destruct;
- (id)amount;
- (void)setAmount:;
- (id)amountType;
- (void)setAmountType:;
- (void)setTaskId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
