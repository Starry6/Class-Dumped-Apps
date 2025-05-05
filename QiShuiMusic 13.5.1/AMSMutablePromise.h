@interface AMSMutablePromise : AMSPromise
- (BOOL)cancel;
- (id)promiseWithTimeout:;
- (void)startTimeout:;
- (id)initWithTimeout:;
- (BOOL)finishWithResult:;
- (BOOL)finishWithPromiseResult:;
- (id)continueWithBlock:;
- (BOOL)_finishWithResult:error:logDuplicateFinishes:;
- (id)catchWithBlock:;
- (BOOL)finishWithError:;
- (id)thenWithBlock:;
- (BOOL)finishWithPromise:;
- (BOOL)finishWithResult:error:;
+ (BOOL)finishPromise:withResult:error:;
+ (id)promiseWithFlattenedPromises:;
+ (id)promiseWithAny:timeout:;
+ (BOOL)finishPromise:withError:;
+ (id)promiseWithAll:timeout:;
+ (BOOL)cancelPromise:;
+ (BOOL)finishPromise:withResult:;
+ (BOOL)_finishPromise:withResult:error:logDuplicateFinishes:;
+ (BOOL)finishPromise:withPromise:;
+ (void)startTimeoutForPromise:timeout:;
+ (id)promiseWithAll:;
+ (id)promiseWithAny:;
@end
