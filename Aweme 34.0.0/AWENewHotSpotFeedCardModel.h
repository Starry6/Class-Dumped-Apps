@interface AWENewHotSpotFeedCardModel : AWEBaseApiModel
@property (nonatomic) AWENewHotSpotFeedItem itemModel;
@property (nonatomic) AWENewHotSpotLynxPrerenderModel renderModel;
@property (nonatomic) q cardType;
@property (nonatomic) NSDictionary extraDict;
- (id)extraDict;
- (void)setExtraDict:;
- (id)itemModel;
- (void)setItemModel:;
- (id)renderModel;
- (void)setRenderModel:;
- (void).cxx_destruct;
- (long long)cardType;
- (void)setCardType:;
+ (id)cardTypeJSONTransformer;
+ (id)itemModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
