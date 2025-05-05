@interface ASDLazyPromise : ASDPromise
- (void)thenPerform:orCatchError:onScheduler:;
- (id)initOnScheduler:withExecutor:;
- (id)joinWithPromise:;
- (void).cxx_destruct;
@end
