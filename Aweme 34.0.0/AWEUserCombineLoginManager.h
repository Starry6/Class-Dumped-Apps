@interface AWEUserCombineLoginManager : NSObject
@property (nonatomic) NSArray combineUsers;
@property (nonatomic) <AWEUserCombineLoginUser> sharedUser;
- (void)enableShowCombineLogin:;
- (void)queryCanShowUsers;
- (BOOL)canShowCombineLogin;
- (id)combineUsers;
- (id)queryTrustLoginUsers;
- (id)querySharedLoginUser;
- (void)setSharedUser:;
- (void)setCombineUsers:;
- (id)sharedUser;
- (id)combineLoginUsers;
- (BOOL)canJumpAuthWithUser:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
