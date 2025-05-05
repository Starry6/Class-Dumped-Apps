@interface SaaSIESLiveECUserServiceIESECBridger : NSObject
@property (nonatomic) <IESLiveUserService> protoObj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loginWithUserInfo:completion:;
- (id)protoObj;
- (id)registerFollowStatusChangedWithCallback:;
- (id)registerLoginStatusChangedWithCallback:;
- (void)setProtoObj:;
- (void).cxx_destruct;
- (BOOL)isLogin;
+ (id)bridgedProtocol;
+ (id)bridgedInstanceWithObj:;
@end
