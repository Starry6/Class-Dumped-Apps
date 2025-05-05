@interface AFMemoryPressureObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeListener:;
- (void)removeAllListeners;
- (void)addListener:;
- (void)dealloc;
- (void)_removeAllListeners;
- (id)initWithOptions:;
- (void)_handleMemoryPressureWithFlags:;
- (void)_startObservingMemoryPressureWithOptions:;
- (void)getCurrentConditionWithCompletion:;
- (void)_stopObservingMemoryPressure;
- (void)_removeListener:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_addListener:;
+ (id)sharedObserver;
@end
