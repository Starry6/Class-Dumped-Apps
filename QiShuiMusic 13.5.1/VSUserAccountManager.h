@interface VSUserAccountManager : NSObject
@property (nonatomic) VSUserAccountServiceConnection connection;
@property (nonatomic) VSRemoteNotifier remoteNotifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)remoteNotifier:didReceiveRemoteNotificationWithUserInfo:;
- (void)setRemoteNotifier:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)remoteNotifier;
- (void)updateUserAccount:completion:;
- (void)queryUserAccountsWithOptions:completion:;
- (void)deleteUserAccount:completion:;
+ (id)sharedUserAccountManager;
@end
