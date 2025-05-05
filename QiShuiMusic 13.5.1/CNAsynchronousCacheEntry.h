@interface CNAsynchronousCacheEntry : NSObject
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) @ currentValue;
@property (nonatomic) NSPointerArray delegates;
@property (nonatomic) double timestampOfCurrentValue;
- (void)addDelegate:;
- (id)init;
- (id)delegates;
- (id)currentValue;
- (void)setCurrentValue:;
- (id)schedulerProvider;
- (id)initWithSchedulerProvider:;
- (void).cxx_destruct;
- (id)description;
- (void)withLock_addDelegate:;
- (void)removeDelegates:;
- (void)updateValue:;
- (void)withLock_compactDelegates;
- (void)withLock_compactAndRemoveDelegates:;
- (double)timestampOfCurrentValue;
@end
