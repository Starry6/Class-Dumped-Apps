@interface BDXBridgeThirdPartyAuthMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString access_token;
@property (nonatomic) NSString access_token_secret;
@property (nonatomic) NSString openid;
@property (nonatomic) NSString platform_app_id;
@property (nonatomic) NSString platform;
@property (nonatomic) NSNumber errorCode;
- (id)platform_app_id;
- (id)access_token;
- (id)access_token_secret;
- (id)openid;
- (void)setAccess_token:;
- (void)setAccess_token_secret:;
- (void)setOpenid:;
- (void)setPlatform_app_id:;
- (void)setPlatform:;
- (id)errorCode;
- (id)code;
- (void)setErrorCode:;
- (id)platform;
- (void).cxx_destruct;
- (void)setCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
