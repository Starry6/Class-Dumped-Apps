@interface HMDCPUMonitorRecord : HMDMonitorRecord
@property (nonatomic) double totalUsage;
@property (nonatomic) double systemUsage;
@property (nonatomic) double userUsage;
@property (nonatomic) double appUsage;
@property (nonatomic) double nice;
@property (nonatomic) double idle;
@property (nonatomic) double gpu;
@property (nonatomic) Q isBackground;
@property (nonatomic) NSDictionary threadDict;
@property (nonatomic) NSString service;
- (double)gpu;
- (void)setSystemUsage:;
- (void)setGpu:;
- (double)appUsage;
- (double)nice;
- (void)setAppUsage:;
- (void)setNice:;
- (void)setThreadDict:;
- (void)setUserUsage:;
- (double)systemUsage;
- (id)threadDict;
- (double)userUsage;
- (unsigned long long)isBackground;
- (void)setService:;
- (id)service;
- (void)setIsBackground:;
- (double)idle;
- (void).cxx_destruct;
- (double)value;
- (id)copyWithZone:;
- (void)setIdle:;
- (double)totalUsage;
- (void)setTotalUsage:;
- (id)reportDictionary;
+ (id)aggregateCPURecords:;
+ (id)aggregateCPUThreadRecords:;
+ (id)aggregateDataWithRecords:;
@end
