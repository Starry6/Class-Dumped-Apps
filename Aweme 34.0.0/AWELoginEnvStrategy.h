@interface AWELoginEnvStrategy : NSObject
@property (nonatomic) BOOL hasRequested;
- (BOOL)hasRequested;
- (void)setHasRequested:;
- (void)requestDataIfNeed;
- (void)startUpLoginEnv;
- (void)startRequest;
+ (BOOL)accountSupportGoogleLogin;
+ (BOOL)accountSupportEmailLogin;
+ (void)startUp;
+ (id)sharedInstance;
@end
