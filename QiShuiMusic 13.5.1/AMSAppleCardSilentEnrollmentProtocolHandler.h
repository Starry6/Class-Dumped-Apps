@interface AMSAppleCardSilentEnrollmentProtocolHandler : AMSURLProtocolHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reconfigureNewRequest:originalTask:redirect:error:;
- (void)AMSURLSession:task:handleAuthenticateRequest:completion:;
@end
