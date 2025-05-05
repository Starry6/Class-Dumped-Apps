@interface ICSParticipationStatusParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)participationStatusParameterFromICSString:;
+ (id)participationStatusParameterFromCode:;
@end
