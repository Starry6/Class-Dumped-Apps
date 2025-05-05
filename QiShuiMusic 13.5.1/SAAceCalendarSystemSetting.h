@interface SAAceCalendarSystemSetting : SADomainObject
@property (nonatomic) NSString calendarType;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)calendarType;
- (void)setCalendarType:;
+ (id)aceCalendarSystemSetting;
+ (id)aceCalendarSystemSettingWithDictionary:context:;
@end
