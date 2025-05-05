@interface PFAssertionHandler : NSAssertionHandler
@property (nonatomic) <PFAssertionPolicyHandler> policy;
- (void)setPolicy:;
- (id)init;
- (id)policy;
- (id)defaultPolicy;
- (void).cxx_destruct;
- (void)handleFailureInMethod:object:file:lineNumber:description:;
- (void)handleFailureInFunction:file:lineNumber:description:;
- (id)defaultTestingPolicy;
- (void)_install;
- (id)newAssertionInfoInMethod:object:function:file:lineNumber:description:arguments:;
- (void)handleFailureInFunction:file:lineNumber:description:arguments:;
- (void)continueAfterAssertInFunction:file:lineNumber:description:arguments:;
+ (id)currentHandler;
+ (void)install;
+ (BOOL)runningUnitTests;
+ (BOOL)runningUnderDebugger;
@end
