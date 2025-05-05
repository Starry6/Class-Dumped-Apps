@interface ICSScheduleForceSendParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)scheduleForceSendParameterFromICSString:;
+ (id)scheduleForceSendParameterFromCode:;
@end
