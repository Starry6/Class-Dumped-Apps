@interface IESECLiveCheckPromotionModel : IESECLiveApiBaseModel
@property (nonatomic) NSString orderUrl;
@property (nonatomic) IESECLiveGoodsJumpDestination jumpDestination;
@property (nonatomic) IESECLiveGoodsCheckAction checkAction;
@property (nonatomic) IESECLiveAddCartParam addCartParam;
@property (nonatomic) IESECLiveEditCartParam editCartParam;
@property (nonatomic) q ultimateBuyAB;
- (id)jumpDestination;
- (void)setCheckAction:;
- (id)addCartParam;
- (id)checkAction;
- (id)editCartParam;
- (id)orderUrl;
- (void)setAddCartParam:;
- (void)setEditCartParam:;
- (void)setJumpDestination:;
- (void)setOrderUrl:;
- (void)setUltimateBuyAB:;
- (long long)ultimateBuyAB;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
