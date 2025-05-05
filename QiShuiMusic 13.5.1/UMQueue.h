@interface UMQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)executeWithSelf:asynchronously:;
- (void)executeWithSelf:synchronously:;
- (void).cxx_destruct;
- (void)_executeWithSelf:block:synchronously:;
- (void)setQueue:;
- (id)queue;
+ (id)server;
+ (id)client;
+ (id)userList;
@end
