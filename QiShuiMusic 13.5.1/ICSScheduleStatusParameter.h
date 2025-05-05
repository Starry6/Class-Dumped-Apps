@interface ICSScheduleStatusParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)scheduleStatusParameterFromICSString:;
+ (id)scheduleStatusParameterFromCode:;
@end
