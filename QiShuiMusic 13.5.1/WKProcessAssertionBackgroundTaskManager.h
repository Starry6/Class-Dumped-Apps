@interface WKProcessAssertionBackgroundTaskManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)assertion:didInvalidateWithError:;
- (id)init;
- (void)dealloc;
- (void)assertionWillInvalidate:;
- (void)_cancelPendingReleaseTask;
- (void)addAssertionNeedingBackgroundTask:;
- (void)_handleBackgroundTaskExpirationOnMainThread;
- (void)setProcessStateMonitorEnabled:;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)_scheduleReleaseTask;
- (void)removeAssertionNeedingBackgroundTask:;
- (BOOL)_hasBackgroundTask;
- (void)_releaseBackgroundTask;
- (void).cxx_destruct;
- (void)_updateBackgroundTask;
- (id).cxx_construct;
- (void)_handleBackgroundTaskExpiration;
+ (id)shared;
@end
