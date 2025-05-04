@interface AWEPaySwiftImpl.TransportCityTabListCache : MTLModel
@property (nonatomic) _TtC15AWEPaySwiftImpl18TransportCityModel cityInfo;
@property (nonatomic) NSArray citySceneList;
- (void)setCityInfo:;
- (id)cityInfo;
- (id)citySceneList;
- (void)setCitySceneList:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)citySceneListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
