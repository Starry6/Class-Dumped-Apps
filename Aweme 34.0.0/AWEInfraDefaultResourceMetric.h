@interface AWEInfraDefaultResourceMetric : NSObject
@property (nonatomic) NSArray paths;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
- (void)setPaths:;
- (id)init;
- (id)paths;
- (void)dealloc;
- (id)workQueue;
- (void)setWorkQueue:;
- (void)setup;
- (void).cxx_destruct;
- (void)metric;
- (void)start;
@end
