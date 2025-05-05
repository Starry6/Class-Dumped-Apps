@interface BDXBridgeLogoutMethodResultModel : BDXBridgeModel
@property (nonatomic) Q status;
- (void)setStatus:;
- (unsigned long long)status;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
