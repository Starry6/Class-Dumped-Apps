@interface AMSMutableLazyPromise : AMSLazyPromise
- (BOOL)cancel;
- (id)initWithTimeout:block:;
- (BOOL)finishWithResult:;
- (id)initWithBlock:;
- (BOOL)finishWithError:;
- (BOOL)finishWithPromise:;
- (BOOL)finishWithResult:error:;
@end
