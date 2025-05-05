@interface CalChronometry : NSObject
+ (id)currentLanguageCode;
+ (void)_currentLocaleDidChange:;
+ (void)_currentTimeZoneDidChange:;
+ (void)_updateForLocaleChange;
+ (void)_configureChronometry;
+ (void)_updateEveything;
+ (id)activeTimeZone;
+ (void)setActiveTimeZone:;
+ (void)_updateActiveTimeZone;
+ (void)_updateActiveCalendar;
+ (id)activeCalendar;
+ (id)currentLocationCode;
@end
