@interface IESLiveOpenByteCertParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber mode;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString flow;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString identityName;
@property (nonatomic) NSString identityCode;
@property (nonatomic) NSString certAppId;
@property (nonatomic) NSDictionary h5QueryParams;
- (id)certAppId;
- (id)h5QueryParams;
- (id)identityCode;
- (void)setCertAppId:;
- (void)setH5QueryParams:;
- (void)setIdentityCode:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)mode;
- (void)setMode:;
- (id)ticket;
- (void)setTicket:;
- (id)flow;
- (void)setFlow:;
- (id)identityName;
- (void)setIdentityName:;
+ (id)modelCustomPropertyMapper;
@end
