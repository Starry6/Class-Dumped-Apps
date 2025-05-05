@interface LTMStats : NSObject
- (int)allocateResources;
- (void).cxx_destruct;
- (int)purgeResources;
- (id)initWithMetalContext:;
- (int)prewarmShaders;
- (int)calculateHITHStatistics:ltmGeometry:inputDriverMetadata:outputProcHITHStat:optimized:calcGlobalHistOnROI:;
- (void)fillProcHITHStat:with:;
@end
