@interface BDXBridgeAccountSetVerifyStatusMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString verifyWay;
@property (nonatomic) NSString verifyTicket;
@property (nonatomic) NSDictionary verifyExtraParams;
@property (nonatomic) NSDictionary extraBizParams;
- (id)extraBizParams;
- (void)setExtraBizParams:;
- (void)setVerifyExtraParams:;
- (void)setVerifyTicket:;
- (void)setVerifyWay:;
- (id)verifyExtraParams;
- (id)verifyTicket;
- (id)verifyWay;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
