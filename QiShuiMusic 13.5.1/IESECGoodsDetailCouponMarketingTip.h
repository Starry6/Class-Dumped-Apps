@interface IESECGoodsDetailCouponMarketingTip : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSArray tipComponents;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (void)setTipComponents:;
- (id)tipComponents;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
+ (id)tipComponentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
