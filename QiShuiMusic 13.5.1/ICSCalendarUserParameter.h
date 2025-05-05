@interface ICSCalendarUserParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)calendarUserTypeParameterFromICSString:;
+ (id)calendarUserTypeParameterFromCode:;
@end
