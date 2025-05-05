@interface BDXBridgeCustomShowToastMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString message;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber dismissWhenPageChanged;
@property (nonatomic) Q type;
- (id)dismissWhenPageChanged;
- (void)setDismissWhenPageChanged:;
- (void)setMessage:;
- (void)setType:;
- (void)setDuration:;
- (unsigned long long)type;
- (id)message;
- (void).cxx_destruct;
- (id)duration;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
