@interface ICSCalendarServerAccessValue : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)calendarServerAccessFromICSString:;
+ (id)calendarServerAccessFromCode:;
@end
