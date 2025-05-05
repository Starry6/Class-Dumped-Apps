@interface AVRunLoopConditionRunLoopState : NSObject
@property (nonatomic) ^{__CFRunLoop=} runLoop;
@property (nonatomic) ^{__CFRunLoopSource=} signalSource;
@property (nonatomic) BOOL signaled;
- (void)dealloc;
- (id)initWithRunLoop:;
- (id)signalSource;
- (void)setSignaled:;
- (BOOL)signaled;
- (void)setSignalSource:;
- (id)runLoop;
+ (id)runLoopStateWithRunLoop:;
@end
