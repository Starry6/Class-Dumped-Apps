@interface AWEUserServiceListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)synchronizeCookiesWithExtension;
- (void)p_didFinishLogout;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
