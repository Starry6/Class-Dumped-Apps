@interface AWEIMServiceComponentConfig : MTLModel
@property (nonatomic) NSString scene;
@property (nonatomic) NSArray componentItemConfigs;
@property (nonatomic) q showCount;
@property (nonatomic) NSArray baseConfigNameArray;
@property (nonatomic) NSString configName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setComponentItemConfigs:;
- (id)baseConfigNameArray;
- (id)componentItemConfigs;
- (id)compactWithIndexNodes;
- (void)recoverFromIndexNodes:;
- (void)setBaseConfigNameArray:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setShowCount:;
- (long long)showCount;
- (id)configName;
- (void)setConfigName:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)componentItemConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
