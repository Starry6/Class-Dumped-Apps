@interface BDXBridgeGetSettingsKeys : BDXBridgeModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString biz;
@property (nonatomic) Q type;
- (id)biz;
- (void)setBiz:;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
