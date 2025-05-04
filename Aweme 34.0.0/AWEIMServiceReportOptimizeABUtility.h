@interface AWEIMServiceReportOptimizeABUtility : NSObject
+ (void)registerABExperiments;
+ (BOOL)shouldEnableTopOfficialCardOptimize;
+ (BOOL)shouldEnableFollowViewShowOptimize:;
+ (BOOL)b2cLongPressUseReportOptimizeWithConversation:;
+ (BOOL)b2cMultiSelectUseReportOptimizeWithConversation:;
+ (BOOL)b2cDetailUseReportOptimizeWithConversation:;
+ (BOOL)b2cFEUseReportOptimizeWithConversation:;
+ (BOOL)shouldEnableDynamicViewShowOptimize:;
+ (id)b2cReportOptimizeExpr:;
+ (id)messageVCFollowViewShowOptimize;
+ (id)messageVCDynamicViewShowOptimize;
+ (id)messageVCTopOfficalCardOptimize;
+ (id)b2cChatOptimizeReportExprWithConversation:;
@end
