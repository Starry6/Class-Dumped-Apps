@interface OptimizedSyncedTimeHelper : NSObject
- (void)clearSyncedTime:;
- (double)getSyncedTime;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
