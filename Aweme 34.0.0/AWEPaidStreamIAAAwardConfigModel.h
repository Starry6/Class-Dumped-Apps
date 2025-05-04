@interface AWEPaidStreamIAAAwardConfigModel : AWEBaseApiModel
@property (nonatomic) q index;
@property (nonatomic) NSArray awardInfos;
@property (nonatomic) AWEPaidStreamIAAUIConfig awardUIConfigs;
- (id)awardInfos;
- (void)setAwardInfos:;
- (id)awardUIConfigs;
- (void)setAwardUIConfigs:;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
+ (id)awardInfosJSONTransformer;
+ (id)awardUIConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
