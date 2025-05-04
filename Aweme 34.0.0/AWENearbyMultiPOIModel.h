@interface AWENearbyMultiPOIModel : AWEBaseApiModel
@property (nonatomic) NSArray poiInfoArray;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString secTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
@property (nonatomic) q UIStyle;
@property (nonatomic) NSString cardID;
- (id)poiInfoArray;
- (void)setPoiInfoArray:;
- (long long)UIStyle;
- (void)setUIStyle:;
- (id)secTitle;
- (void)setSecTitle:;
- (id)schema;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)mainTitle;
- (void)setMainTitle:;
- (id)cardID;
- (void)setCardID:;
+ (id)poiInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
