@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler
@property (nonatomic) @? reconfigureRequestHandler;
- (void)reconfigureNewRequest:originalTask:redirect:error:;
- (void)setReconfigureRequestHandler:;
- (id)reconfigureRequestHandler;
- (void).cxx_destruct;
@end
