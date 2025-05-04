@interface AWEUserLaunchTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)init;
- (void)dealloc;
+ (void)onAppLaunch;
+ (id)encryptedUserID;
+ (id)historicalUserIDs;
+ (void)setupBindDeviceTask;
+ (id)userID;
+ (id)sharedInstance;
@end
