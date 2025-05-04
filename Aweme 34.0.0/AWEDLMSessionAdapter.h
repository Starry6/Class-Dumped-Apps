@interface AWEDLMSessionAdapter : NSObject
+ (void)flowMonitorCustomReportWithError:openURL:isFromOutsideRoute:routeParams:;
+ (id)getBDFlowSessionFromDLMSession:;
+ (id)mapToScene:;
@end
