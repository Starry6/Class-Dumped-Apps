@interface AWENotificationGuideDisplay : NSObject
+ (BOOL)canDisplayNotificationViewTestEnble;
+ (BOOL)canDisplayNotificationView;
+ (void)setLastCloseTimestamp:;
+ (long long)displayDays;
+ (void)setDisplayDays:;
+ (long long)limitDays;
+ (long long)lastCloseTimestamp;
+ (long long)lastDisplayTimestamp;
+ (void)updateWithTimestamp:displayDays:;
+ (void)setLastDisplayTimestamp:;
+ (void)setLimitDays:;
@end
