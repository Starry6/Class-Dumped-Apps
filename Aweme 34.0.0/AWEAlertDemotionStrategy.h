@interface AWEAlertDemotionStrategy : NSObject
+ (id)demotionStrategyWithContext:;
+ (id)p_demotionStrategyAlerts;
+ (long long)p_hitDemotionStrategyWithContext:strategyItem:;
+ (BOOL)p_prepareTimeoutDisabled;
+ (id)demotionStrategyWithWithContext:;
+ (void)prepareTimeoutHandleWithAlert:onCompletion:;
+ (void)onCloseTimeoutHandleWithAlert:onClose:;
+ (void)closeCallbackTimeoutWithForceAlert:closeCallback:;
@end
