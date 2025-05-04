@interface AWEDislikeDimension : AWEBaseApiModel
@property (nonatomic) q dimensionID;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray entitys;
- (id)entitys;
- (long long)dimensionID;
- (void)setDimensionID:;
- (void)setEntitys:;
- (void)setIdentifier:;
- (id)icon;
- (id)identifier;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJSONTransformer;
+ (id)entitysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
