@interface AVProxyKVOObserver : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) BOOL includeInitialValue;
@property (nonatomic) BOOL includeChanges;
@property (nonatomic) NSSet keyPaths;
@property (nonatomic) @? changesBlock;
- (id)keyPaths;
- (id)token;
- (void)_handleValueChangeForKeyPath:ofObject:oldValue:newValue:context:;
- (id)initWithObservedObject:observer:keyPaths:retainingObservedObject:includeInitialValue:includeChanges:changesBlock:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)stopObserving;
- (id)changesBlock;
- (void)startObserving:completion:;
- (void).cxx_destruct;
- (BOOL)includeInitialValue;
- (BOOL)includeChanges;
@end
