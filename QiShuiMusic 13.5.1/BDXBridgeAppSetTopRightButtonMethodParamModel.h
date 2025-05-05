@interface BDXBridgeAppSetTopRightButtonMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString icon;
@property (nonatomic) q type;
- (void)setText:;
- (id)icon;
- (void)setType:;
- (long long)type;
- (void)setTextColor:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)textColor;
- (id)text;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
