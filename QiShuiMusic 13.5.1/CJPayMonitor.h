@interface CJPayMonitor : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) double lastReportTime;
- (id)p_buildCommonCategoryParams;
- (void)p_uploadAlogWithEventName:;
- (void)p_uploadAlogWithStartTime:endTime:;
- (void)setLastReportTime:;
- (void)trackService:category:extra:;
- (void)trackService:extra:;
- (void)trackService:metric:category:extra:;
- (void)trackService:value:extra:;
- (void)trackServiceAllInOne:metric:category:extra:;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (double)lastReportTime;
+ (id)shared;
@end
