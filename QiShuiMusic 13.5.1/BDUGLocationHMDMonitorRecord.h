@interface BDUGLocationHMDMonitorRecord : NSObject
@property (nonatomic) NSMutableArray recordMonitorBlockArray;
@property (nonatomic) BOOL isMonitorInit;
- (BOOL)addMonitorBlockWithBlock:;
- (BOOL)isMonitorInit;
- (id)recordMonitorBlockArray;
- (void)reportRecordBlockMonitor;
- (void)setIsMonitorInit:;
- (void)setRecordMonitorBlockArray:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)currentMonitor;
@end
