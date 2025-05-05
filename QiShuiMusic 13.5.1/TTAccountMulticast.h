@interface TTAccountMulticast : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) NSMutableArray delegatesInfoArray;
- (void)broadcastAccountSessionExpired:;
- (void)broadcastLogout;
- (void)broadcastAccountProfileChanged:error:;
- (void)broadcastExpireAccountAuthPlatform:error:;
- (void)broadcastGetUserInfo;
- (void)broadcastLoginAccountAuthPlatform:error:;
- (void)broadcastLoginSuccess:platform:reason:;
- (void)broadcastLogoutAccountAuthPlatform:error:;
- (void)broadcastLogoutInScene:;
- (id)delegatesInfoArray;
- (void)setDelegatesInfoArray:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)registerDelegate:;
- (void).cxx_destruct;
- (void)unregisterDelegate:;
+ (id)sharedInstance;
@end
