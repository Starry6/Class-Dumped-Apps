@interface IESLiveIMPaaSProxy : NSObject
- (id)dispatcherWith:;
- (id)clientWith:;
- (id)completeWorkerWith:;
- (id)workerWith:;
- (id)wrdsManagerWith:;
+ (id)sharedInstance;
@end
