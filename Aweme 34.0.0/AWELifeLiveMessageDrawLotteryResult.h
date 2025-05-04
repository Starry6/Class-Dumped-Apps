@interface AWELifeLiveMessageDrawLotteryResult : MTLModel
@property (nonatomic) NSArray luckyUids;
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString componentId;
@property (nonatomic) NSString lotteryId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)luckyUids;
- (id)lotteryId;
- (void)setLotteryId:;
- (void)setLuckyUids:;
- (void).cxx_destruct;
- (id)cardId;
- (void)setCardId:;
- (void)setComponentId:;
- (id)componentId;
+ (id)JSONKeyPathsByPropertyKey;
@end
