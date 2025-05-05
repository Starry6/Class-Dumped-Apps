@interface BDXBridgeAppSendHybridMetricsParams : BDXBridgeModel
@property (nonatomic) NSString type;
@property (nonatomic) NSNumber error_code;
@property (nonatomic) NSString error_message;
@property (nonatomic) NSString fatal_type;
- (id)fatal_type;
- (void)setFatal_type:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)error_code;
- (void)setError_code:;
- (id)error_message;
- (void)setError_message:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
