@interface AWEGoodsServiceSubscribeResponseModel : AWEBaseApiModel
@property (nonatomic) AWEGoodsServiceSubscribeInfo subscribeInfo;
- (id)subscribeInfo;
- (void)setSubscribeInfo:;
- (void).cxx_destruct;
+ (id)subscribeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
