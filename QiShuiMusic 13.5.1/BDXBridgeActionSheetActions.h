@interface BDXBridgeActionSheetActions : BDXBridgeModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) q type;
- (void)setType:;
- (void)setSubtitle:;
- (void)setTitle:;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
