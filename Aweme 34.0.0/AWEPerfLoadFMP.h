@interface AWEPerfLoadFMP : AWEPerfLoadObject
- (void)addRequestObserver;
- (void)startWithTimeThreshold:;
- (void)addObserverWithRequest:;
- (void)manualStart;
- (void)manualStartWithTimeThreshold:;
- (id)initWithViewController:;
- (void).cxx_destruct;
- (void)start;
+ (double)timeThreshold;
@end
