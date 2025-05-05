@interface AFPineBoardSystemStateObserver : NSObject
@property (nonatomic) q pineBoardSystemState;
- (void)removeListener:;
- (void)_beginGroup;
- (void)addListener:;
- (long long)pineBoardSystemState;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)_handlePineBoardStateChange:;
- (void)_startObservingPineBoardSystemState;
- (void)_endGroup;
+ (id)defaultObserver;
@end
