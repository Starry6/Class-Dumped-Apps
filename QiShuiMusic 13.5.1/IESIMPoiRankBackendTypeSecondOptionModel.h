@interface IESIMPoiRankBackendTypeSecondOptionModel : IESIMBaseApiModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray thirdBackendTypeList;
- (void)setThirdBackendTypeList:;
- (id)thirdBackendTypeList;
- (void)setName:;
- (id)code;
- (void).cxx_destruct;
- (id)name;
- (void)setCode:;
+ (id)thirdBackendTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
