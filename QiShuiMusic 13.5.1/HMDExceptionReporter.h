@interface HMDExceptionReporter : NSObject
@property (nonatomic) NSMutableDictionary reporterMap;
@property (nonatomic) NSLock reporterMapLock;
- (id)reporterMapLock;
- (void)cleanupExceptionDataWithConfig:;
- (void)setReporterMap:;
- (void)addReportModule:;
- (id)allDebugRealExceptionDataWithConfig:;
- (id)allReporters;
- (id)debugRealExceptionDataWithConfig:exceptionTypes:;
- (void)enumerateAllReportersUsingBlock:;
- (void)removeReportModule:;
- (void)reportAllDebugRealExceptionData:;
- (void)reportAllExceptionData;
- (void)reportDebugRealExceptionData:exceptionTypes:;
- (void)reportExceptionDataWithExceptionTypes:;
- (id)reporterMap;
- (id)reporterWithExceptionType:;
- (id)reporterWithExceptionType:createIfNeed:;
- (id)reporterWithModule:;
- (id)reporterWithModule:createIfNeed:;
- (void)setReporterMapLock:;
- (void)updateConfig:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
