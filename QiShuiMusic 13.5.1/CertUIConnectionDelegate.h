@interface CertUIConnectionDelegate : NSObject
@property (nonatomic) @ forwardingDelegate;
@property (nonatomic) NSString connectionDisplayName;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)connection:didReceiveAuthenticationChallenge:;
- (BOOL)connection:canAuthenticateAgainstProtectionSpace:;
- (id)forwardingDelegate;
- (void)setConnectionDisplayName:;
- (void)setForwardingDelegate:;
- (void)_continueConnectionWithResponse:challenge:service:;
- (id)connectionDisplayName;
+ (id)defaultServiceForProtocol:;
@end
