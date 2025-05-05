@interface ASDPromise : NSObject
@property (nonatomic) BOOL resolved;
@property (nonatomic) ASDPromiseResult result;
- (id)completionHandlerAdapter;
- (id)result;
- (id)init;
- (id)initWithError:;
- (id)mapUsingTransformer:onScheduler:;
- (BOOL)isResolved;
- (void)thenPerform:orCatchError:onScheduler:;
- (void)catchError:onScheduler:;
- (void)resolveWithValue:;
- (id)initOnScheduler:withExecutor:;
- (id)joinWithPromise:;
- (void).cxx_destruct;
- (id)flatMapUsingTransformer:onScheduler:;
- (void)rejectWithError:;
- (void)alwaysPerform:onScheduler:;
- (id)initWithValue:;
+ (id)promiseWithError:;
+ (id)onScheduler:usingBlock:;
+ (id)promiseWithValue:;
@end
