@interface CNPromise : NSObject
@property (nonatomic) CNFuture future;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorOnlyCompletionHandlerAdapter;
- (id)completionHandlerAdapter;
- (id)init;
- (id)future;
- (BOOL)finishWithResult:;
- (id)boolErrorCompletionHandlerAdapter;
- (id)initWithSchedulerProvider:;
- (void).cxx_destruct;
- (BOOL)finishWithError:;
- (id)completionHandlerAdapterWithDefaultValue:;
- (BOOL)finishWithResult:error:;
@end
