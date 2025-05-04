@interface AWEVideoSpeedRecordManager : NSObject
@property (nonatomic) NSMutableArray records;
- (id)records;
- (void)setRecords:;
- (void).cxx_destruct;
+ (id)getSpeedMonitorParams;
+ (void)addNewRecord:;
+ (id)sharedInstance;
@end
