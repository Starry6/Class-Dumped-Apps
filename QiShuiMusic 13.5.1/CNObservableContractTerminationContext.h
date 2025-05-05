@interface CNObservableContractTerminationContext : NSObject
@property (nonatomic) NSArray callStack;
@property (nonatomic) Q threadId;
- (id)callStack;
- (void).cxx_destruct;
- (unsigned long long)threadId;
- (id)initWithCallStack:threadId:;
+ (id)currentContext;
+ (unsigned long long)currentThreadId;
@end
