@interface AMSOpenURL : NSObject
@property (nonatomic) NSMutableSet attemptedTargets;
@property (nonatomic) NSURL URL;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) <AMSBagProtocol> bag;
- (void)setClientInfo:;
- (id)clientInfo;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)URL;
- (id)initWithURL:clientInfo:bag:;
- (id)_performOpen;
- (BOOL)_openURL:bundleInfo:;
- (BOOL)_shouldOpenURL:;
- (id)attemptedTargets;
- (void)setAttemptedTargets:;
+ (BOOL)openStandardURL:;
+ (void)openURL:account:preferredClient:;
+ (id)openURL:clientInfo:bag:;
+ (id)_modifiedURLFromURL:bundleInfo:;
+ (BOOL)_shouldOpenStandardURL:inApp:withLinks:;
+ (unsigned long long)_openModeForStandardURL:inApp:withLinks:;
+ (BOOL)_openURLWithLaunchServices:;
+ (BOOL)_openURL:inApp:;
@end
