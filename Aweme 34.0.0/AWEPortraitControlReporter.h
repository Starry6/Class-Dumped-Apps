@interface AWEPortraitControlReporter : NSObject
@property (nonatomic) NSDateFormatter yyyyMMddFormatter;
@property (nonatomic) AWEStorage storage;
@property (nonatomic) AWEPortraitUsageData todayUsageData;
@property (nonatomic) NSObject<OS_dispatch_queue> dataQueue;
- (void)checkAndReport;
- (void)checkAndSaveUsage;
- (id)yyyyMMddFormatter;
- (void)setTodayUsageData:;
- (id)todayUsageData;
- (void)setYyyyMMddFormatter:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void)setup;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
- (id)dataQueue;
- (void)setDataQueue:;
+ (id)sharedInstance;
@end
