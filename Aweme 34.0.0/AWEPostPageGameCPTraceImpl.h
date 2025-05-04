@interface AWEPostPageGameCPTraceImpl : HTSService
@property (nonatomic) NSDictionary baseTraceInfo;
@property (nonatomic) NSDictionary gamePromoteTraceSettingDict;
@property (nonatomic) NSDictionary cacheAnchorListResDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)task:didEndWithResult:error:;
- (void)traceMonitorStep:params:;
- (void)configBaseTraceParams:;
- (void)checkReportCache;
- (id)cacheAnchorListResDict;
- (BOOL)traceStepEnable:;
- (void)traceMonitorEvent:stepName:params:metric:category:;
- (id)stepNameFromType:;
- (BOOL)isSaveToCache:params:;
- (void)traceMonitorStepName:params:metric:category:;
- (id)gamePromoteTraceSettingDict;
- (BOOL)stepInBlockList:;
- (BOOL)typeArray:hasTypeName:;
- (id)baseTraceInfo;
- (void)setBaseTraceInfo:;
- (void)setGamePromoteTraceSettingDict:;
- (void)setCacheAnchorListResDict:;
- (void)dealloc;
- (void).cxx_destruct;
@end
