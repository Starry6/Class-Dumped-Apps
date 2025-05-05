@interface NSInvocationOperation : NSOperation
@property (nonatomic) NSInvocation invocation;
@property (nonatomic) @ result;
- (id)result;
- (id)invocation;
- (id)initWithInvocation:;
- (id)init;
- (void)dealloc;
- (void)main;
- (id)initWithTarget:selector:object:;
@end
