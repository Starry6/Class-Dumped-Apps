@interface AWEShopAssistResponseModel : AWEBaseApiModel
@property (nonatomic) AWEShopAssistModel shopAssistHint;
- (id)shopAssistHint;
- (void)setShopAssistHint:;
- (void).cxx_destruct;
+ (id)shopAssistHintJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
