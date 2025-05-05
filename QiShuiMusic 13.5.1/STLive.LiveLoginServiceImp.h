@interface STLive.LiveLoginServiceImp : NSObject
@property (nonatomic) @? loginBlock;
- (id)odin_tt;
- (id)currentOpenID;
- (id)douyinUserName;
- (void)getOAuthInfoWithUserInfo:completion:;
- (id)hostAvatarURLString;
- (id)hostDouyinUid;
- (void)hostLoginWithCompletion:;
- (id)hostNickname;
- (id)hostSecUserID;
- (id)hostUserID;
- (id)ignoreAuthErrorCodes;
- (BOOL)isHostLogin;
- (BOOL)isLoginWithDouYin;
- (BOOL)isUseAuthV2;
- (id)loginBlock;
- (BOOL)needSDKFetchOpenId;
- (void)refreshAccessTokenWithCompletion:;
- (void)setLoginBlock:;
- (void)unbindOAuth;
- (id)init;
- (id)accessToken;
- (void).cxx_destruct;
- (id)currentSessionID;
@end
