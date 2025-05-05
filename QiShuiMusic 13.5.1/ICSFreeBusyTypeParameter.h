@interface ICSFreeBusyTypeParameter : ICSPredefinedValue
- (Class)classForCoder;
+ (id)freeBusyTypeParameterFromICSString:;
+ (id)freeBusyTypeParameterFromCode:;
@end
