@interface LAUIPhysicalButtonViewAnimation : NSObject
- (void)end;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)update;
- (void)begin;
- (double)duration;
- (void)beginWithDelay:;
- (void)endImmediately;
- (id)initWith:layer:;
- (void)addAdditiveAnimation:to:keyPath:;
@end
