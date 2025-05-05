@interface RxRunLoopScheduler : RxScheduler
@property (nonatomic) ^{__CFRunLoop=} cfRunLoop;
- (id)after:schedule:;
- (id)after:repeatingEvery:withLeeway:schedule:;
- (id)cfRunLoop;
- (id)cfRunloop;
- (id)initWithName:runloop:;
- (void)signal;
- (void)dealloc;
- (id)schedule:;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (BOOL)supportRunLoop;
@end
