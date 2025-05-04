@interface AWEPoiRankBackendTypeFirstOptionModel : AWEBaseApiModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray secondBackendTypes;
- (id)secondBackendTypes;
- (void)setSecondBackendTypes:;
- (id)code;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)secondBackendTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
