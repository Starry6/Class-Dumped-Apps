@interface TTVideoEngineReportHelper : NSObject
@property (nonatomic) BOOL enableAutoReportLog;
- (void)autoReportEventlogIfNeededV1:;
- (void)autoReportEventlogIfNeededV1WithParams:;
- (void)autoReportEventlogIfNeededV2WithEventName:params:;
- (BOOL)enableAutoReportLog;
- (void)setEnableAutoReportLog:;
+ (id)sharedManager;
@end
