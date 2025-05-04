@interface AWEPaySwiftImpl.TransportCityModel : MTLModel
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSString cityName;
@property (nonatomic) NSString cityPinyin;
@property (nonatomic) NSString businessDesc;
@property (nonatomic) BOOL sceneShowTabFlag;
@property (nonatomic) BOOL sceneShowIconFlag;
- (id)cityPinyin;
- (void)setCityPinyin:;
- (id)businessDesc;
- (void)setBusinessDesc:;
- (BOOL)sceneShowTabFlag;
- (void)setSceneShowTabFlag:;
- (BOOL)sceneShowIconFlag;
- (void)setSceneShowIconFlag:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)cityCode;
- (void)setCityCode:;
- (id)cityName;
- (void)setCityName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
