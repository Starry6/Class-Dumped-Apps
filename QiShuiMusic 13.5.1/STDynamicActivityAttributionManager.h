@interface STDynamicActivityAttributionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAttributedAppForClient:;
- (id)init;
- (void)subscribeToUpdates:;
- (void)setAttributionLocalizableKey:maskingClientAuditToken:forClient:;
- (void)setAttributionWebsiteString:maskingClientAuditToken:forClient:;
- (void)setAttributionStringWithFormat:maskingClientAuditToken:forClient:;
- (void).cxx_destruct;
- (id)currentAttributionForAttribution:;
- (id)currentAttributionKeyForClient:;
- (void)unsubscribeFromUpdates:;
- (void)setLocalizableAttributionKey:andApplication:forClient:;
- (id)currentAttributionForClient:;
@end
