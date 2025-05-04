@interface AWESettingThemeHelper : NSObject
@property (nonatomic) NSTimeZone timezone;
@property (nonatomic) NSCalendar calendar;
- (id)localTime:;
- (void)setTimezone:;
- (void)setCalendar:;
- (id)timezone;
- (void).cxx_destruct;
- (id)calendar;
+ (id)settingThemeHelper;
@end
