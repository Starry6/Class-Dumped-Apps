@interface AWEPaySwiftImpl.CCMCommonResponseModel : MTLModel
@property (nonatomic) NSString retCode;
@property (nonatomic) NSString retMsg;
@property (nonatomic) _TtC15AWEPaySwiftImpl15CCMGatewayExtra gatewayExtra;
@property (nonatomic) NSString retStatus;
- (id)retCode;
- (void)setRetCode:;
- (id)retMsg;
- (void)setRetMsg:;
- (id)gatewayExtra;
- (void)setGatewayExtra:;
- (id)retStatus;
- (void)setRetStatus:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
