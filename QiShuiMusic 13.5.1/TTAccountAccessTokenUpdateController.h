@interface TTAccountAccessTokenUpdateController : NSObject
@property (nonatomic) <TTAccountAccessTokenUpdateCommand> executingCommand;
@property (nonatomic) NSMutableArray waitingCommands;
@property (nonatomic) BOOL enableAuthExpireOptimize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAccountLogout;
- (id)waitingCommands;
- (void)command:didFinishWithResult:error:;
- (BOOL)enableAuthExpireOptimize;
- (id)executingCommand;
- (void)onAccountAuthPlatformStatusChanged:platform:error:;
- (void)onAccountLogin;
- (void)p_tryStartNextCommand;
- (void)setEnableAuthExpireOptimize:;
- (void)setExecutingCommand:;
- (void)setWaitingCommands:;
- (id)init;
- (void)dealloc;
- (void)addCommand:;
- (void).cxx_destruct;
+ (void)douyinPlatformDidConfig:;
+ (BOOL)enableAuthExpireOptimize;
+ (void)refreshAccessTokenWithWithAuthPlatform:trackParams:completion:;
+ (void)updateAuthorizeInfoWithAuthPlatform:authResponse:trackParams:completion:;
+ (id)controller;
@end
