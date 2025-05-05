@interface RxActionWhenIdle : NSObject
@property (nonatomic) NSInvocation invocation;
- (id)invocation;
- (id)initWithInvocation:;
- (void)setInvocation:;
- (void)dealloc;
- (void)invoke;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithTarget:selector:object:;
- (void)invalidate;
- (void)addObserverToRunLoop;
+ (id)actionWhenIdleWithTarget:selector:object:;
@end
