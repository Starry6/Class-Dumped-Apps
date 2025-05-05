@interface IESLiveGiftForbidUnderageConsumeTipHelper : NSObject
+ (unsigned long long)forbidUnderageConsumeTipCurrentGapDays;
+ (id)forbidUnderageConsumeTipLastShowDate;
+ (unsigned long long)forbidUnderageConsumeTipShowTimesToday;
+ (unsigned long long)giftPanelOpenTimesToday;
+ (void)saveForbidUnderageConsumeTipCurrentGapDays:;
+ (void)saveForbidUnderageConsumeTipLastShowDate:;
+ (void)saveForbidUnderageConsumeTipShowTimesToday:;
+ (void)saveGiftPanelOpenTimesToday:;
@end
