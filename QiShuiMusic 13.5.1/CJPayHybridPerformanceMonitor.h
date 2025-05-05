@interface CJPayHybridPerformanceMonitor : NSObject
@property (nonatomic) NSString urlStr;
@property (nonatomic) CJPayHybridPerformanceModel performanceModel;
@property (nonatomic) NSString kernelTypeStr;
- (id)initWith:callAPITime:;
- (id)kernelTypeStr;
- (void)p_uploadPerformaceFirstPageStartedLog;
- (id)performanceModel;
- (void)setKernelTypeStr:;
- (void)setPerformanceModel:;
- (void)setUrlStr:;
- (void)trackPerformanceStage:defaultTimeStamp:;
- (id)urlStr;
- (void).cxx_destruct;
- (id)initWith:;
@end
