@interface AWEIMInitJobManagerSdkUserObserver : NSObject
@property (nonatomic) BOOL hasLogin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (BOOL)hasLogin;
- (void)setHasLogin:;
- (void)observe;
+ (id)sharedInstance;
@end
