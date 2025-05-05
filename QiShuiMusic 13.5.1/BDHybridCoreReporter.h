@interface BDHybridCoreReporter : NSObject
@property (nonatomic) NSMutableArray reportBlockList;
@property (nonatomic) NSMutableArray filterList;
@property (nonatomic) BOOL kHMDReportSwitch;
- (id)reportBlockList;
- (void)filterAllReport;
- (void)addGlobalReportBlock:;
- (id)alogFilterList;
- (id)filterList;
- (void)filterReportWithAid:;
- (void)filterReportWithAid:serviceList:;
- (BOOL)isFilterForService:;
- (BOOL)kHMDReportSwitch;
- (void)reportPVToTea:;
- (void)reportSingleDic:forService:;
- (void)setFilterList:;
- (void)setHMDReportSwitch:;
- (void)setKHMDReportSwitch:;
- (void)setReportBlockList:;
- (BOOL)shouldReport:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
