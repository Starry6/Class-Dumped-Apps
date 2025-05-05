@interface BUTrackerDispatchManager : NSObject
- (id)___params_urlDecodeIfNeedWithParmas:;
- (void)___urlDecodeIfNeedWithMutDict:key:;
- (void)__appendToDict:appendKey:appendInfo:;
- (id)__paramsAppendUniversalInfoFromApplogWithOriginParams:;
- (id)__paramsAppendUniversalInfoFromStatusWithOriginParams:;
- (void)applog_eventData:;
- (void)applog_eventData:eventConfig:;
- (void)eventData:trackType:;
- (BOOL)pbu_needToReportWithParams:;
- (void)stats_eventData:;
- (void)updateNeedReportDelayInDispatchManager:;
- (id)init;
- (void)setup;
+ (id)_statsParamsWithType:trackInfo:eventExtra:;
+ (id)sharedInstance;
@end
