@interface AWESplashComplianceAreaModel : MTLModel
@property (nonatomic) q style;
@property (nonatomic) AWESplashLongPressModel longPressInfo;
@property (nonatomic) AWESplashRoundAreaModel roundAreaInfo;
@property (nonatomic) NSDictionary twistImageInfo;
@property (nonatomic) NSDictionary goodsCardInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)longPressInfo;
- (id)twistImageInfo;
- (id)goodsCardInfo;
- (void)setLongPressInfo:;
- (id)roundAreaInfo;
- (void)setRoundAreaInfo:;
- (void)setTwistImageInfo:;
- (void)setGoodsCardInfo:;
- (long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)longClickInfoJSONTransformer;
+ (id)roundAreaInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
