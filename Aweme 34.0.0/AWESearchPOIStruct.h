@interface AWESearchPOIStruct : AWEBaseApiModel
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiDescription;
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray iconList;
@property (nonatomic) NSArray iconListLight;
@property (nonatomic) AWEURLModel cover;
- (id)cover;
- (void)setCover:;
- (id)poiName;
- (id)iconList;
- (void)setIconList:;
- (void)setPoiName:;
- (id)poiDescription;
- (void)setPoiDescription:;
- (id)iconListLight;
- (void)setIconListLight:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)coverJSONTransformer;
+ (id)iconListJSONTransformer;
+ (id)iconListLightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
