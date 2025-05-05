@interface SiriAnalyticsXPCConnectionHandler : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resetLogicalClockWithCompletion:;
- (id)vendSandboxExtensionWithResource:readonly:completion:;
- (id)auditToken;
- (id)publishMessages:completion:;
- (id)sensitiveCondition:endedAt:completion:;
- (id)connection;
- (void).cxx_destruct;
- (id)resolveMessages:completion:;
- (id)sensitiveCondition:startedAt:completion:;
- (id)initWithConnection:entitlementsKey:queue:delegate:;
- (id)publishLargeMessage:completion:;
- (id)mapToAnnotatedMessage:;
@end
