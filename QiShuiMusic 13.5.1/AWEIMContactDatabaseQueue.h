@interface AWEIMContactDatabaseQueue : NSObject
- (id)init;
- (void)dispatchAsync:;
- (void).cxx_destruct;
- (void)dispatchSync:;
+ (id)sharedQueue;
@end
