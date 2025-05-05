@interface ACCHWComponentAuth : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)authenticateVeridianWithChallenge:completionHandler:;
- (void)setXpcConnection:;
- (void)authenticateBatteryWithChallenge:completionHandler:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)_init;
- (void)signVeridianChallenge:completionHandler:;
- (void)authenticateTouchControllerWithChallenge:completionHandler:updateRegistry:;
- (void)authenticateTouchControllerWithChallenge:completionHandler:;
+ (id)sharedManager;
@end
