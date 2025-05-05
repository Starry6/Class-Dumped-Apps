@interface BDXBridgeBulletStartRecordMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString key;
@property (nonatomic) NSNumber frequency;
@property (nonatomic) NSDictionary category;
@property (nonatomic) BOOL once;
- (id)frequency;
- (void)setFrequency:;
- (id)key;
- (void)setKey:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)category;
- (BOOL)once;
- (void)setOnce:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
