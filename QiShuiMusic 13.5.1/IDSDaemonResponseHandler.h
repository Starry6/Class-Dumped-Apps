@interface IDSDaemonResponseHandler : NSObject
@property (nonatomic) @ block;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL isSync;
- (id)block;
- (void).cxx_destruct;
- (id)initWithBlock:queue:;
- (id)initWithBlock:queue:isSync:;
- (BOOL)isSync;
- (id)queue;
@end
