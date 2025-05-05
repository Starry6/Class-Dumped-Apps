@interface QLPXObservable : NSObject
@property (nonatomic) Q currentChanges;
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
- (void)willPerformChanges;
- (unsigned long long)currentChanges;
- (void)_applyPendingChanges;
@end
