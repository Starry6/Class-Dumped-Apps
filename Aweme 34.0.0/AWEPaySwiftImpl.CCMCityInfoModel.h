@interface AWEPaySwiftImpl.CCMCityInfoModel : MTLModel
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSString cityName;
@property (nonatomic) NSString cityPinyin;
@property (nonatomic) NSArray trafficList;
- (id)trafficList;
- (void)setTrafficList:;
- (id)cityPinyin;
- (void)setCityPinyin:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)cityCode;
- (void)setCityCode:;
- (id)cityName;
- (void)setCityName:;
+ (id)trafficListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
