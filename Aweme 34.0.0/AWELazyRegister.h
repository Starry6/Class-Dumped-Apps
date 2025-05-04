@interface AWELazyRegister : NSObject
+ (id)lazyRegisterRunLogParams;
+ (void)evaluateLazyRegisterForModule:;
+ (void)setFluencyABConfig:;
+ (void)openPerformanceRunLog:;
+ (void)setShouldRecordPremainCodeDuration:;
+ (void)ensureSegmentInfoLoaded;
+ (void)evaluateLazyRegisterHandler:;
+ (BOOL)doEvaluateLazyRegisterForKey:ofModule:;
+ (void)addLazyFuncTimeInfo:fileInfo:duration:;
+ (BOOL)doEvaluateLazyRegisterForModule:count:;
+ (void)addLazyItemRunInfo:count:costTime:;
+ (id)lazyRunLogLock;
+ (id)lazyRunLogParams;
+ (id)sectionRunLogParams;
+ (void)savePremainCodeTimeCost2Local;
+ (void)preloadSegmentInfoAsync;
+ (void)evaluateLazyRegisterForKey:ofModule:;
+ (BOOL)canEvaluateLazyRegisterForKey:ofModule:;
+ (id)lazyRegisterKeysInModule:;
@end
