@interface AWEEntertainmentPlayletVIPModel : AWEBaseApiModel
@property (nonatomic) NSArray vipConfigs;
@property (nonatomic) q chargeCount;
- (id)vipConfigs;
- (void)setVipConfigs:;
- (long long)chargeCount;
- (void)setChargeCount:;
- (void).cxx_destruct;
+ (id)vipConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
