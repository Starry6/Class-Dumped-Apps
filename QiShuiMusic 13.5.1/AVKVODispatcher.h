@interface AVKVODispatcher : NSObject
- (void)dealloc;
- (id)startObservingValueAtKeyPath:withoutKeepingAliveObservedObject:options:usingBlock:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)startObservingObject:weakObserver:forTwoPartKeyPath:options:context:;
- (id)startObservingObject:weakObserver:forKeyPath:options:context:;
- (id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:;
- (id)startObservingValueAtTwoPartKeyPath:ofObject:options:usingBlock:;
- (id)startObservingValueAtKeyPath:ofObject:options:usingBlock:;
+ (id)sharedKVODispatcher;
@end
