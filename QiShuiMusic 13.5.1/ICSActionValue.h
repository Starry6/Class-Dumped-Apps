@interface ICSActionValue : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)actionValueFromICSString:;
+ (id)actionParameterFromCode:;
@end
