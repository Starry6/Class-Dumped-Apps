@interface BDXBridgeShowToastMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString message;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString customIcon;
@property (nonatomic) q type;
@property (nonatomic) q icon;
- (id)customIcon;
- (void)setCustomIcon:;
- (void)setMessage:;
- (long long)icon;
- (void)setType:;
- (void)setDuration:;
- (long long)type;
- (id)message;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)duration;
+ (id)iconJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
