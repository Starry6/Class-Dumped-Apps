@interface IESECSliceXExpressionErrorManager : NSObject
@property (nonatomic) IESECSliceXInnerTracker tracker;
@property (nonatomic) NSObject<OS_dispatch_semaphore> sema;
@property (nonatomic) NSMutableSet compilationErrors;
@property (nonatomic) NSMutableSet executionErrors;
- (id)executionErrors;
- (void)reportCompilationErrorWithExpression:context:;
- (void)reportExecutionError:expression:context:;
- (void)setCompilationErrors:;
- (void)setExecutionErrors:;
- (void)setTracker:;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)setSema:;
- (id)sema;
- (id)compilationErrors;
+ (id)shared;
@end
