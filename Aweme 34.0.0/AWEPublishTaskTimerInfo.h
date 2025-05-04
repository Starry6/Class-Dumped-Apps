@interface AWEPublishTaskTimerInfo : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? timeBlock;
- (id)timeBlock;
- (void)setTimeBlock:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (id)uuid;
- (void)setQueue:;
- (void)setUuid:;
- (void).cxx_destruct;
- (id)queue;
@end
