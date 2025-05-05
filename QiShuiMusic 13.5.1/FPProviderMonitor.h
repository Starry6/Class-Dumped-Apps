@interface FPProviderMonitor : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)wakeProviderID:forSessionIdentifier:;
- (void)removeObserver:forProviderID:;
- (void).cxx_destruct;
- (BOOL)supportsWakesForProviderID:;
- (void)addObserver:forProviderID:;
+ (id)providerIDForApplication:sharedContainerIdentifier:;
+ (BOOL)isProviderIDForeground:;
@end
