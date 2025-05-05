@interface ICSBusyStatusValue : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)busyStatusValueFromICSString:;
+ (id)busyStatusTypeFromCode:;
@end
