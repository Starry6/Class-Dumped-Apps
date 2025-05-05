@interface BDXBridgeReportALogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString message;
@property (nonatomic) NSString tag;
@property (nonatomic) BDXBridgeReportALogCodePosition codePosition;
@property (nonatomic) q level;
- (id)codePosition;
- (void)setCodePosition:;
- (void)setLevel:;
- (id)tag;
- (void)setMessage:;
- (long long)level;
- (void)setTag:;
- (id)message;
- (void).cxx_destruct;
+ (id)codePositionJSONTransformer;
+ (id)levelJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
