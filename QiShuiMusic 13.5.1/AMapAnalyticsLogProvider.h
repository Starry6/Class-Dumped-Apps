@interface AMapAnalyticsLogProvider : NSObject
+ (id)JSONErrorLogWithLogs:;
+ (id)decodeLogDicFromLogData:;
+ (void)decodeLogDicFromLogData:analysisJson:;
+ (id)errorLogHeader;
+ (id)errorLogWithType:name:detail:component:;
+ (id)eventLogWithID:params:component:;
+ (id)eventLogWithLogs:;
+ (id)logStringWithDictionary:encrypted:appendComma:;
@end
