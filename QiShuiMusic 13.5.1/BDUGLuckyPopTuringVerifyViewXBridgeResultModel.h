@interface BDUGLuckyPopTuringVerifyViewXBridgeResultModel : BDXBridgeModel
@property (nonatomic) q code;
@property (nonatomic) BOOL success;
- (long long)code;
- (BOOL)success;
- (void)setSuccess:;
- (void)setCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
