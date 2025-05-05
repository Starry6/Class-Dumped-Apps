@interface IESIMPoiRankBackendTypeFirstOptionModel : IESIMBaseApiModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray secondBackendTypes;
- (id)secondBackendTypes;
- (void)setSecondBackendTypes:;
- (void)setName:;
- (id)code;
- (void).cxx_destruct;
- (id)name;
- (void)setCode:;
+ (id)secondBackendTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
