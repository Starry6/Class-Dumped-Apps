@interface AWESECAppJumpSettings : NSObject
+ (BOOL)enableABTest;
+ (id)ABTestDict;
+ (BOOL)enableDetectAllSceneBeforeReport;
+ (unsigned long long)userExceptionRate;
+ (unsigned long long)appLogRate;
+ (BOOL)globalSwitch;
+ (BOOL)enableWebContext;
+ (unsigned long long)performanceRate;
+ (BOOL)traceCollectSwitch;
+ (id)fetchArbiterWithAppJumpRisk:;
+ (id)fetchArbiterRulesWithArbiter:;
+ (unsigned long long)secLinkTimeout;
+ (id)eventFlowDetectAllRule;
+ (BOOL)enableEventFlowEngine;
+ (id)defaultWhiteListScheme;
+ (id)gatewayConfig;
+ (id)ABTestRiskControl;
+ (id)riskControl;
+ (id)arbiterControl;
+ (id)secLinkCheckRules;
+ (id)uncaughtCheckConfig;
+ (id)probeCheckRules;
+ (long long)statementNotMatchedRisk;
+ (long long)certEmptyRisk;
+ (long long)defaultRisk;
+ (unsigned long long)engineType;
+ (id)allowList;
@end
