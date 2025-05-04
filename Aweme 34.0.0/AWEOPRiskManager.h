@interface AWEOPRiskManager : NSObject
+ (BOOL)hasRiskWithData:;
+ (void)mergeAuthRiskInfo:riskParams:;
+ (void)handleRiskDataIfNeeded:delegate:;
+ (void)showRiskDialogWithData:delegate:;
+ (void)showVerifyCodeViewWithData:delegate:;
+ (void)showHighRiskPageWithDelegate:;
+ (id)sharedInstance;
@end
