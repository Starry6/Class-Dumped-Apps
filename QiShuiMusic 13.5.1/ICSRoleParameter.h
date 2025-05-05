@interface ICSRoleParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)roleParameterFromICSString:;
+ (id)roleParameterFromCode:;
@end
