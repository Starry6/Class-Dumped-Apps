@interface DS_TKeyValueObserverGlue : NSObject
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFunctor:observedObjects:observedKeyPath:;
- (id)initWithFunctorWithChange:observedObjects:observedKeyPath:;
- (void)initCommon:observedKeyPath:;
@end
