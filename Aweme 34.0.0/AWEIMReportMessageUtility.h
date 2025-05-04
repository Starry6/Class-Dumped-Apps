@interface AWEIMReportMessageUtility : NSObject
+ (id)addReportPageParams:withConv:;
+ (BOOL)canShowReportItemInConversation:inScenes:;
+ (void)trackClickReportWithParams:;
+ (BOOL)b2cCanExposeReportItemInConversation:inScenes:;
+ (BOOL)canExposeReportItemInConversation:;
@end
