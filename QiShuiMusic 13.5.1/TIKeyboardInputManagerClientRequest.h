@interface TIKeyboardInputManagerClientRequest : NSObject
@property (nonatomic) NSInvocation invocation;
@property (nonatomic) Q errorCount;
- (id)invocation;
- (id)initWithInvocation:;
- (id)init;
- (unsigned long long)errorCount;
- (void).cxx_destruct;
- (void)setErrorCount:;
+ (id)untargetedInvocationWithInvocation:withCompletion:;
@end
