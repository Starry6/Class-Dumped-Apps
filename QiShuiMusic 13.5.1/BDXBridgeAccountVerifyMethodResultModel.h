@interface BDXBridgeAccountVerifyMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString verifyWay;
@property (nonatomic) NSString verifyTicket;
@property (nonatomic) NSDictionary verifyExtraParams;
@property (nonatomic) NSDictionary bizParams;
- (id)bizParams;
- (void)setBizParams:;
- (void)setVerifyExtraParams:;
- (void)setVerifyTicket:;
- (void)setVerifyWay:;
- (id)verifyExtraParams;
- (id)verifyTicket;
- (id)verifyWay;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
