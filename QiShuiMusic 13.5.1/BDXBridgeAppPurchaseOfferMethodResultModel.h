@interface BDXBridgeAppPurchaseOfferMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSDictionary offer;
@property (nonatomic) BDXBridgeAppPurchaseOfferValidateResult validateResult;
@property (nonatomic) q status;
- (void)setValidateResult:;
- (id)validateResult;
- (id)offer;
- (void)setStatus:;
- (id)code;
- (void)setOffer:;
- (void).cxx_destruct;
- (long long)status;
- (void)setCode:;
- (id)msg;
- (void)setMsg:;
+ (id)validateResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
