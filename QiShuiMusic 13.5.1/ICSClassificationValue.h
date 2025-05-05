@interface ICSClassificationValue : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)classificationValueFromICSString:;
+ (id)classificationFromCode:;
@end
