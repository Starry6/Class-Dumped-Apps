@interface CNObserver : NSObject
+ (void)sendObserver:resultsOfBlock:;
+ (void)sendResult:error:toObserver:;
+ (id)observerWithResultBlock:;
+ (id)observerWithCompletionHandler:;
+ (id)observerWithWeakTarget:resultSelector:;
+ (void)sendArray:error:toObserver:untilCanceled:;
+ (id)blockObserverOfClass:withResultBlock:completionBlock:failureBlock:;
+ (id)observerWithResultBlock:completionBlock:failureBlock:;
+ (void)sendArray:error:toObserver:;
@end
