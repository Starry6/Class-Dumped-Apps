@interface AWESearchTranscodeMonitorHelper : NSObject
@property (nonatomic) NSMutableDictionary nonContextMonitorCache;
- (id)nonContextMonitorCache;
- (void)setNonContextMonitorCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)p_createAMonitorValueFromContext:forLogType:;
+ (id)p_getMonitorValueFromContext:forLogType:;
+ (void)p_removeAMonitorValueFromContext:forLogType:;
+ (id)p_getNonContextMonitorValueForLogType:;
+ (void)p_removeANonContextMonitorValueForLogType:;
+ (void)bindTranscodeContext:logType:data:;
+ (void)finishTranscodeMonitorWithContext:logType:data:;
+ (id)getSearchTranscodeResultFailReasonForCode:;
+ (void)p_staticCostAMonitorValueFromContext:forLogType:;
+ (void)transcodeResultReportForLogType:data:;
+ (void)startTranscodeMonitorWithContext:logType:data:;
+ (id)sharedHelper;
@end
