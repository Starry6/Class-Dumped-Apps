@interface TCDataReport : NSObject
+ (void)cgiShareReport:type:totype:acttype:touin:reporttype:callsource:;
+ (void)cgiLoginReport:reporttype:;
+ (void)cgiOauthReportWithOpenId:;
+ (void)cgiStatisticReport:reporttype:;
+ (id)commParamValue;
+ (void)getCurrentModelWithCallback:;
+ (void)reportCheck:ret:code:currentModel:detail:;
+ (void)reportCheck:ret:code:detail:;
@end
