@interface ICSScheduleAgentParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)scheduleAgentParameterFromICSString:;
+ (id)scheduleAgentParameterFromCode:;
@end
