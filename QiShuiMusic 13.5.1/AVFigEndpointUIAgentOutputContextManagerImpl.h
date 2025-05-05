@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject
@property (nonatomic) AVOutputContextManager parentOutputContextManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)parentOutputContextManager;
- (void)setParentOutputContextManager:;
- (void).cxx_destruct;
- (id)initWithEndpointUIAgent:;
- (void)_showErrorPromptForRouteDescriptor:reason:;
+ (id)copySharedEndpointUIAgent;
@end
