@interface MNXPCTransactionManager : NSObject
- (void).cxx_destruct;
- (void)addHighMemoryThresholdRequest:;
- (void)removeHighMemoryThresholdRequest:afterDelay:;
+ (id)sharedInstance;
@end
