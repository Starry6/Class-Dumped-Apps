@interface SSBinaryPromise : NSObject
@property (nonatomic) SSPromise backingPromise;
- (id)completionHandlerAdapter;
- (id)init;
- (BOOL)resultWithError:;
- (id)promiseAdapter;
- (void)addFinishBlock:;
- (void)waitUntilFinished;
- (BOOL)finishWithSuccess;
- (void)addSuccessBlock:;
- (void).cxx_destruct;
- (void)setBackingPromise:;
- (id)backingPromise;
- (BOOL)finishWithError:;
- (BOOL)resultWithTimeout:error:;
- (void)waitUntilFinishedWithTimeout:;
- (void)addErrorBlock:;
- (void)_removeFromGlobalPromiseStorage;
+ (id)promiseWithPromise:;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (id)promiseWithSuccess;
+ (id)promiseWithError:;
@end
