@interface ICSTransparencyValue : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)transparencyValueFromICSString:;
+ (id)transparencyTypeFromCode:;
@end
