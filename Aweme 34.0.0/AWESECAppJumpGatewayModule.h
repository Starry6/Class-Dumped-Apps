@interface AWESECAppJumpGatewayModule : NSObject
+ (long long)appJumpContext:confirmAction:cancelAction:source:;
+ (id)findArbiterWithRiskLevel:source:;
+ (void)recordErrorToThreadWithArbiter:;
+ (long long)executeArbiter:confirmAction:cancelAction:;
+ (id)blockToastWithRulerResult:;
+ (id)createDialogBluePrintWithRulerResult:;
+ (void)executeSecLinkArbiterInMainThreadByForce:confirmAction:cancelAction:;
+ (void)executeSecLinkArbiter:confirmAction:cancelAction:;
+ (id)decisionMaker;
@end
