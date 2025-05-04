@interface AWEConcernBellPushDataController : NSObject
+ (void)uploadBellPushStrategyWithToUserID:secUid:liveStrategy:completion:;
+ (void)fetchBellPushStrategyWithToUserID:completion:;
+ (void)updateBellPushSettingsWithCompletion:;
+ (void)uploadBellPushSettingWithType:toValue:completion:;
+ (void)uploadBellPushStrategyWithToUserID:videoStrategy:completion:;
+ (void)fetchBellPushVideoStrategyListWithCursor:count:type:strategy:completion:;
@end
