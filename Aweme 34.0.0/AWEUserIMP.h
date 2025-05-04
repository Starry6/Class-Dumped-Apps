@interface AWEUserIMP : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)login:;
- (void)login:withTrackerInformation:;
- (void)trackSource:position:;
- (BOOL)isConfirmUserProtocol;
- (void)syncUser:;
- (id)currentUser;
- (void)logout;
- (id)sessionID;
- (BOOL)isCurrentUser:;
- (BOOL)isLogin;
@end
