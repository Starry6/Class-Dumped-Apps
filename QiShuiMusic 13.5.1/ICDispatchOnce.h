@interface ICDispatchOnce : NSObject
- (void)_invalidate;
- (void)failWithError:;
- (void).cxx_destruct;
- (id)initWithBooleanHandler:;
- (id)initWithObjectHandler:;
- (void)finishWithBooleanResult:error:;
- (void)finishWithObjectResult:error:;
- (void)startWithTimeout:;
- (void)startWithTimeout:queue:;
@end
