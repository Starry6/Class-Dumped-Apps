@interface AWESyncUnloginUserInfoManager : NSObject
@property (nonatomic) NSMutableDictionary userInfos;
@property (nonatomic) NSDictionary unloginUserInfos;
@property (nonatomic) BOOL syncUserInfoSuccess;
- (id)unloginUserInfos;
- (void)setUnloginUserInfos:;
- (void)mergeUserInfo:;
- (BOOL)syncUserInfoSuccess;
- (void)setSyncUserInfoSuccess:;
- (void)removeLoginUserInfoWithUserID:;
- (void)syncUserInfo:withUserID:retryCount:completion:;
- (id)storateKeyWithUserID:;
- (id)loadLoginUserInfoWithUserID:;
- (void)saveLoginUserInfo:userID:;
- (void)removeUserInfoForKey:;
- (void)syncUserInfoWithUserID:completion:;
- (void)clearAllUserInfo;
- (id)init;
- (void).cxx_destruct;
- (void)setUserInfos:;
- (id)userInfos;
- (BOOL)isLogin;
- (id)currentLoginUserID;
+ (id)sharedManager;
@end
