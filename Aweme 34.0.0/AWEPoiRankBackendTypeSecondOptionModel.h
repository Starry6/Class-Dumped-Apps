@interface AWEPoiRankBackendTypeSecondOptionModel : AWEBaseApiModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray thirdBackendTypeList;
- (id)thirdBackendTypeList;
- (void)setThirdBackendTypeList:;
- (id)code;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)thirdBackendTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
