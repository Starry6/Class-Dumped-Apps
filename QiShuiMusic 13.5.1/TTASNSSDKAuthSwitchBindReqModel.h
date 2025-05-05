@interface TTASNSSDKAuthSwitchBindReqModel : NSObject
@property (nonatomic) NSString code;
@property (nonatomic) NSString profileKey;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString authTokenSecret;
@property (nonatomic) q expireIn;
@property (nonatomic) NSString openid;
@property (nonatomic) q platformType;
@property (nonatomic) BOOL chanageBind;
- (id)authTokenSecret;
- (void)setChanageBind:;
- (BOOL)chanageBind;
- (long long)expireIn;
- (id)openid;
- (id)profileKey;
- (void)setAuthTokenSecret:;
- (void)setExpireIn:;
- (void)setOpenid:;
- (void)setProfileKey:;
- (id)authToken;
- (void)setAuthToken:;
- (id)code;
- (void).cxx_destruct;
- (void)setCode:;
- (long long)platformType;
- (void)setPlatformType:;
@end
