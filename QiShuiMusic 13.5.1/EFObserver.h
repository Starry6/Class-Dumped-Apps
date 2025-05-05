@interface EFObserver : NSObject
+ (id)observerWithResultBlock:;
+ (id)observerWithCompletionHandler:;
+ (id)observerWithResultBlock:completionBlock:failureBlock:;
@end
