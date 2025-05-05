@interface AWEIMPushGuideManager : NSObject
@property (nonatomic) Q currentClickedStyle;
- (unsigned long long)currentClickedStyle;
- (void)setCurrentClickedStyle:;
- (id)init;
- (void)applicationWillEnterForeground:;
+ (BOOL)p_shouldShowPushGuideWithStyle:;
+ (BOOL)canShowPushGuideViewWithStyle:;
+ (void)gotoSystemNotificationSettingWithStyle:;
+ (BOOL)isPushGuidePopupViewOnScreen;
+ (void)markPushGuideShowWithStyle:;
+ (long long)maxShowCount;
+ (long long)minDayInterval;
+ (double)p_lastTimeShowGuide:;
+ (id)p_sharedInstance;
+ (id)p_storageKeyWithStyle:;
+ (void)showPushGuidePopupViewWithStyle:;
+ (void)trackWithStyle:event:;
@end
