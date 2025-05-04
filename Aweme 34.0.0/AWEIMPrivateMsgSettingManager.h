@interface AWEIMPrivateMsgSettingManager : NSObject
+ (double)panelHeight;
+ (BOOL)p_isBetween14And18YearOld;
+ (void)showPrivateMsgSettingPanelWithResultBlock:enterFrom:enterMethod:;
+ (void)trackWhoCanMessageMeClickTo:fromValue:enterFrom:enterMethod:;
+ (void)trackWhoCanMessageMeShow:enterFrom:enterMethod:;
+ (id)trackParamFromWhoCanMessageMeValue:;
+ (BOOL)enableShowWhoCanMessageMePanel;
+ (long long)currentWhoCanMessageMeSelectValue;
+ (id)strangerTopTipsWithValue:;
+ (id)strangerTopTipsBtnTextWithValue:;
+ (void)fetchWhoCanMessageMeSettingWithCompletion:;
+ (double)panelBottomSpace;
+ (id)settingDataArray;
+ (void)trackWhoCanMessageMeBannerShow:enterFrom:;
@end
