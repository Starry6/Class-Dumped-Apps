@interface BDXBridgeLoginMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber alreadyLoggedIn;
@property (nonatomic) Q status;
- (id)alreadyLoggedIn;
- (void)setAlreadyLoggedIn:;
- (void)setStatus:;
- (void).cxx_destruct;
- (unsigned long long)status;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
