@interface BDXBridgeRequestPermissionMethodResultModel : BDXBridgeModel
@property (nonatomic) Q status;
@property (nonatomic) NSNumber alertResult;
- (void)setAlertResult:;
- (id)alertResult;
- (void)setStatus:;
- (void).cxx_destruct;
- (unsigned long long)status;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
