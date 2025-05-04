@interface AWEPaySwiftImpl.CCMCardCertResponseModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) _TtC15AWEPaySwiftImpl15CCMGatewayExtra gatewayExtra;
@property (nonatomic) BOOL srvRetFlag;
@property (nonatomic) NSString srvRetCmd;
@property (nonatomic) _TtC15AWEPaySwiftImpl16CCMCardCertModel cardCertInfo;
@property (nonatomic) _TtC15AWEPaySwiftImpl16CCMOperationCard operationCard;
- (BOOL)srvRetFlag;
- (void)setSrvRetFlag:;
- (id)srvRetCmd;
- (void)setSrvRetCmd:;
- (id)cardCertInfo;
- (void)setCardCertInfo:;
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
