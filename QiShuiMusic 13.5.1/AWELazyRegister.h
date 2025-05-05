@interface AWELazyRegister : NSObject
+ (void)addLazyFuncTimeInfo:fileInfo:duration:;
+ (void)addLazyItemRunInfo:count:costTime:;
+ (BOOL)canEvaluateLazyRegisterForKey:ofModule:;
+ (BOOL)doEvaluateLazyRegisterForKey:ofModule:;
+ (BOOL)doEvaluateLazyRegisterForModule:count:;
+ (void)ensureSegmentInfoLoaded;
+ (void)evaluateLazyRegisterForKey:ofModule:;
+ (void)evaluateLazyRegisterForModule:;
+ (void)evaluateLazyRegisterHandler:;
+ (id)lazyRegisterKeysInModule:;
+ (id)lazyRegisterRunLogParams;
+ (id)lazyRunLogLock;
+ (id)lazyRunLogParams;
+ (void)openPerformanceRunLog:;
+ (void)preloadSegmentInfoAsync;
+ (void)savePremainCodeTimeCost2Local;
+ (id)sectionRunLogParams;
+ (void)setShouldRecordPremainCodeDuration:;
@end
