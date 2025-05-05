@interface FPProviderDomainChangesReceiver : NSObject
@property (nonatomic) NSDictionary cachedProviderDomainsByID;
- (id)cachedProviderDomainsByID;
- (void)signalChange;
- (void)removeChangesHandlerToken:;
- (void)providerDomainsHaveChanged:error:;
- (void).cxx_destruct;
- (id)_init;
- (void)callChangesHandlersWithProviderDomains:error:;
- (void)updateProviderDomainsWithAttemptCount:;
- (void)_t_discardCache;
- (id)addChangesHandler:;
+ (id)sharedChangesReceiver;
+ (id)sharedChangesReceiverIfAvailable;
+ (id)_sharedChangesReceiverInitIfNeeded:;
@end
