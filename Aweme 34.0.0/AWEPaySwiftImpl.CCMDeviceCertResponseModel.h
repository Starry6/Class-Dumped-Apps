@interface AWEPaySwiftImpl.CCMDeviceCertResponseModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) _TtC15AWEPaySwiftImpl15CCMGatewayExtra gatewayExtra;
@property (nonatomic) _TtC15AWEPaySwiftImpl18CCMDeviceCertModel deviceCert;
@property (nonatomic) _TtC15AWEPaySwiftImpl16CCMOperationCard operationCard;
- (id)deviceCert;
- (void)setDeviceCert:;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)gatewayExtra;
- (void)setGatewayExtra:;
- (id)operationCard;
- (void)setOperationCard:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
