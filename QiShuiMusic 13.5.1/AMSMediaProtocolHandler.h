@interface AMSMediaProtocolHandler : AMSURLProtocolHandler
@property (nonatomic) <AMSMediaTokenServiceProtocol> tokenService;
- (void)reconfigureNewRequest:originalTask:redirect:error:;
- (id)tokenService;
- (id)handleResponse:task:;
- (void).cxx_destruct;
- (id)initWithTokenService:;
@end
