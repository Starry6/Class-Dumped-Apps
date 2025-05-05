@interface BDXBridgeGetUserInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) BOOL isLogin;
@property (nonatomic) BOOL hasLoggedIn;
@property (nonatomic) BDXBridgeGetUserInfoUserInfo userInfo;
- (void)setHasLoggedIn:;
- (BOOL)hasLoggedIn;
- (void)setIsLogin:;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (BOOL)isLogin;
+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
