@interface ICSMethodValue : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)methodValueFromICSString:;
+ (id)methodParameterFromCode:;
@end
