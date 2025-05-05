@interface IESLiveSaaSMonitorWrapper : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) IESLiveTraceService traceService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEventWith:;
- (void)ieslivesaas_trackService:metric:category:extra:reportToHost:;
- (void)reportSDKPV:;
- (BOOL)reportToHost;
- (void)setTraceService:;
- (void)setupTraceService;
- (id)traceService;
- (void)trackData:logTypeStr:;
- (void)trackService:metric:category:extra:;
- (void)trackService:metric:category:extra:reportToHost:;
- (void)trackService:status:extra:;
- (void)trackService:value:extra:;
- (void)vsTrackService:metric:category:extra:;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
+ (id)sharedInstance;
@end
