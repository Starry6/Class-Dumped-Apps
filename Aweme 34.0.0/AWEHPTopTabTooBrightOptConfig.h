@interface AWEHPTopTabTooBrightOptConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray maskConfig;
@property (nonatomic) NSArray tabConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabConfig;
- (void)setTabConfig:;
- (id)maskConfig;
- (void)setMaskConfig:;
- (BOOL)enable;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)maskConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tabConfigJSONTransformer;
@end
