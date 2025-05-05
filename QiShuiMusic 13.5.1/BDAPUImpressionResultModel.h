@interface BDAPUImpressionResultModel : BDXBridgeModel
@property (nonatomic) q code;
@property (nonatomic) NSString result;
- (id)initWithCode:result:;
- (id)result;
- (long long)code;
- (void).cxx_destruct;
- (void)setCode:;
- (void)setResult:;
+ (id)JSONKeyPathsByPropertyKey;
@end
