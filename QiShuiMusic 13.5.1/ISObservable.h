@interface ISObservable : NSObject
@property (nonatomic) BOOL hasObservers;
- (BOOL)hasObservers;
- (id)mutableChangeObject;
- (id)init;
- (void)_willChange;
- (void)didPublishChanges;
- (void)performChanges:;
- (void).cxx_destruct;
- (void)_publishChanges;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)didPerformChanges;
- (void)_didChange;
- (void)unregisterChangeObserver:context:;
- (void)signalChange:;
- (void)registerChangeObserver:context:;
- (void)enumerateObserversUsingBlock:;
- (BOOL)isPerformingChanges;
- (void)willPerformChanges;
- (void)hasObserversDidChange;
- (unsigned long long)currentChanges;
- (void)_setHasObservers:;
- (void)_applyPendingChanges;
@end
