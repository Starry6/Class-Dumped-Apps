@interface AWEPersonalRecommendSettingItemModel : AWESettingItemModel
- (void)addNotification;
- (BOOL)shouldUseSimpleText;
- (double)maxDetailWidth;
- (double)defaultDetailWidth;
- (void)didReceivePersonalRecommendSwitchStatusChangedNotification:;
- (id)initWithFontAdapter:;
- (void)setup;
- (double)titleWidth;
@end
