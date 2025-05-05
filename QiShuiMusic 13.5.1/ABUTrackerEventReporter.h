@interface ABUTrackerEventReporter : NSObject
@property (nonatomic) ABUTrackerHelper helper;
@property (nonatomic) NSObject<OS_dispatch_queue> reportQueue;
- (void)_addToReusePool;
- (void)_prepareToReuse;
- (void)reportWithName:paramBuilder:;
- (id)updateWithName:paramBuilder:;
- (id)init;
- (void)setReportQueue:;
- (id)helper;
- (id)reportQueue;
- (void).cxx_destruct;
- (void)setHelper:;
- (void)_reportEvent:;
+ (id)_reuseEventSet;
+ (id)reporter;
@end
