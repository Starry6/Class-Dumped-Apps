@interface BDHybridMonitorXCoreReporter : NSObject
@property (nonatomic) NSMutableArray reportBlockList;
@property (nonatomic) NSArray dataCleaningKey;
@property (nonatomic) <BDHMReportPlugin> reportPlugin;
- (id)dataCleaningKey;
- (id)reportBlockList;
- (void)reportHMDTotal:;
- (void)reportSingleDic:forService:bid:;
- (void)addGlobalReportBlock:;
- (id)alogFilterList;
- (void)dataCleaningWithDic:;
- (id)getTeaParams:data:;
- (BOOL)isFilterForService:;
- (void)reportAndFormatService:bid:data:sampleInfo:;
- (id)reportPlugin;
- (void)reportSingleDic:forService:bid:sampleInfo:;
- (void)setDataCleaningKey:;
- (void)setReportBlockList:;
- (void)setReportPlugin:;
- (BOOL)shouldReport:;
- (id)getEventType:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
