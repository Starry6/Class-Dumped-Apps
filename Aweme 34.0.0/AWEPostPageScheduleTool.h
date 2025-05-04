@interface AWEPostPageScheduleTool : NSObject
+ (BOOL)isEnabledWithViewModel:;
+ (BOOL)shouldNotSupportLocalLifeOrder;
+ (BOOL)isCellElementVisibleWithViewModel:;
+ (id)disabledToastWithViewModel:;
+ (long long)cellElementSceneWithViewModel:;
+ (void)markHasLocalLifeOrder:viewModel:;
+ (BOOL)isPrivacyEnabledWithAuthorityModel:;
+ (BOOL)hasLocalLifeOrder:;
+ (unsigned long long)scheduleEntranceABTestValue;
+ (BOOL)shouldAddSchedulePostParameterWithViewModel:;
@end
