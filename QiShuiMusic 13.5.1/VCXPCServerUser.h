@interface VCXPCServerUser : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? block;
@property (nonatomic) NSInteger eventLogLevel;
- (id)block;
- (id)init;
- (void)dealloc;
- (void)setEventLogLevel:;
- (void)setBlock:;
- (void)setQueue:;
- (id)queue;
- (int)eventLogLevel;
@end
