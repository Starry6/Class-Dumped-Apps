@interface AWEServiceEntryManager : NSObject
@property (nonatomic) NSMutableSet hideEntryServices;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} serviceEntryLock;
@property (nonatomic) BOOL enabled;
- (id)getHTSServiceInstanceFor:available:;
- (Class)getHTSServiceClassFor:available:;
- (void)registUnavailableService:;
- (BOOL)p_isHTSServiceEntryAvailable:;
- (id)p_getHideEntryServices;
- (void)preloadServiceEntryInfoAsync;
- (void)ensureAllServiceEntryLoaded;
- (id)hideEntryServices;
- (void)setHideEntryServices:;
- (id)serviceEntryLock;
- (void)setServiceEntryLock:;
- (id)init;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
+ (BOOL)isHTSServiceEntryAvailable:;
+ (void)_aweLazyRegisterLoad;
+ (id)getHTSServiceInstanceFor:available:;
+ (id)getHTSServiceClassFor:available:;
+ (void)registUnavailableService:;
+ (id)p_getHideEntryServices;
+ (id)sharedManager;
+ (BOOL)enabled;
@end
