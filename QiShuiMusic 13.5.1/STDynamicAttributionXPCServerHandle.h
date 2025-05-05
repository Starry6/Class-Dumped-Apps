@interface STDynamicAttributionXPCServerHandle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)subscribeToUpdates:;
- (void)setAttributionLocalizableKey:maskingClientAuditToken:forClient:;
- (void)currentAttributionsDidChange:;
- (void)setAttributionWebsiteString:maskingClientAuditToken:forClient:;
- (void)setAttributionStringWithFormat:maskingClientAuditToken:forClient:;
- (void).cxx_destruct;
- (id)initWithXPCConnectionProvider:;
- (void)unsubscribeFromUpdates:;
- (void)setLocalizableAttributionKey:andApplication:forClient:;
+ (id)sharedMachServiceServerHandle;
@end
