@interface AWEPaySwiftImpl.CCMCityInfoResponseModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) _TtC15AWEPaySwiftImpl15CCMGatewayExtra gatewayExtra;
@property (nonatomic) NSString retStatus;
@property (nonatomic) NSString localCityCode;
@property (nonatomic) NSArray recommendCityCodes;
@property (nonatomic) NSArray cityList;
- (id)localCityCode;
- (void)setLocalCityCode:;
- (id)recommendCityCodes;
- (void)setRecommendCityCodes:;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)gatewayExtra;
- (void)setGatewayExtra:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)cityList;
- (void)setCityList:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)cityListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
