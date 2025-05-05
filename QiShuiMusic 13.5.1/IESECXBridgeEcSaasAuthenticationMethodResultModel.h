@interface IESECXBridgeEcSaasAuthenticationMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString authorization;
- (id)openId;
- (void)setOpenId:;
- (void)setStatus:;
- (id)authorization;
- (void)setAuthorization:;
- (void).cxx_destruct;
- (id)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
