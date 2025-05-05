@interface BRNotificationQueue : NSObject
@property (nonatomic) Q count;
- (id)init;
- (void)dequeue:block:;
- (void)addNotification:asDead:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void)removeAllObjects;
- (void)addDequeueCallback:;
- (void)processDequeueCallbacks;
- (void).cxx_destruct;
- (void)_filterIndex:;
- (id)description;
- (unsigned long long)count;
@end
