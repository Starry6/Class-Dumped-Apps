@interface BDARVSDKMonitor : NSObject
@property (nonatomic) BUASDKMonitor monitor;
@property (nonatomic) NSMutableArray teaEvent;
- (void)addNeedTeaEvent:;
- (void)monitorService:value:category:extra:;
- (void)monitorWithAlog:eventInfo:;
- (void)setTeaEvent:;
- (id)teaEvent;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)bdarSDKVersion;
+ (id)shareInstance;
@end
