@interface CKRecordObserverManager : NSObject
- (id)init;
- (void)removeRecordObserver:;
- (void).cxx_destruct;
- (void)handleRecordChange:container:completionHandler:;
- (void)addRecordObserver:block:;
+ (id)sharedManager;
@end
