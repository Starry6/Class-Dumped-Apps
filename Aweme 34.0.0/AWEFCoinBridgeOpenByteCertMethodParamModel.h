@interface AWEFCoinBridgeOpenByteCertMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber mode;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString flow;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString identityName;
@property (nonatomic) NSString identityCode;
@property (nonatomic) NSString certAppId;
@property (nonatomic) NSDictionary h5QueryParams;
- (id)certAppId;
- (void)setCertAppId:;
- (id)h5QueryParams;
- (void)setH5QueryParams:;
- (id)identityCode;
- (void)setIdentityCode:;
- (void)setScene:;
- (id)scene;
- (void)setMode:;
- (id)mode;
- (void).cxx_destruct;
- (void)setTicket:;
- (id)ticket;
- (id)flow;
- (void)setFlow:;
- (id)identityName;
- (void)setIdentityName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
