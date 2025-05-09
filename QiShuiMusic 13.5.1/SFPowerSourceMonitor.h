@interface SFPowerSourceMonitor : NSObject
@property (nonatomic) I changeFlags;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) BOOL skipCoalescing;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? powerSourcesFoundHandler;
@property (nonatomic) @? powerSourcesLostHandler;
@property (nonatomic) @? powerSourcesChangedHandler;
- (void)_cleanup;
- (id)powerSourcesLostHandler;
- (unsigned int)changeFlags;
- (void)setChangeFlags:;
- (void)_update;
- (void)setSkipCoalescing:;
- (id)init;
- (void)dealloc;
- (void)_updatePowerSource:desc:adapterDesc:;
- (void)_handlePowerSourcesLost:;
- (void)_foundPowerSource:desc:adapterDesc:;
- (void)setPowerSourcesLostHandler:;
- (id)dispatchQueue;
- (void)_updatePowerSourcesWithInfo:sources:sourcesCount:;
- (void)setDispatchQueue:;
- (void)_updatePowerSources;
- (void)_triggerUpdatePowerSources;
- (void)_handlePowerSourcesFound:;
- (BOOL)skipCoalescing;
- (BOOL)powerSourcesListWithOutInfo:outSources:outSourcesCount:;
- (void)activateWithCompletion:;
- (id)powerSourcesFoundHandler;
- (void)setPowerSourcesFoundHandler:;
- (void).cxx_destruct;
- (void)_handlePowerSourcesChanged:changes:;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)powerSourcesChangedHandler;
- (void)_removePowerSources:;
- (void)invalidate;
- (void)setPowerSourcesChangedHandler:;
@end
