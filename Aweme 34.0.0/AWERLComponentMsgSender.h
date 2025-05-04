@interface AWERLComponentMsgSender : NSProxy
@property (nonatomic) NSObject<AWERLComponentProtocol> component;
@property (nonatomic) NSMutableArray targets;
- (void)handleUnknownSelector:;
- (id)targets;
- (void)setTargets:;
- (id)initWithComponent:;
- (id)component;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
- (void)setComponent:;
@end
