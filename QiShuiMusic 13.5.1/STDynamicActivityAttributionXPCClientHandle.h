@interface STDynamicActivityAttributionXPCClientHandle : NSObject
@property (nonatomic) <STDynamicActivityAttributionServerHandle> serverHandle;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serverHandle;
- (void)setCurrentAttributionWebsiteString:maskingClientAuditToken:reply:;
- (void)subscribeToUpdates;
- (id)initWithXPCConnection:serverHandle:;
- (id)auditToken;
- (void)currentAttributionsDidChange:;
- (id)connection;
- (void).cxx_destruct;
- (void)setCurrentAttributionStringWithFormat:maskingClientAuditToken:reply:;
- (void)setCurrentAttributionKey:application:reply:;
- (void)setCurrentAttributionLocalizableKey:maskingClientAuditToken:reply:;
@end
