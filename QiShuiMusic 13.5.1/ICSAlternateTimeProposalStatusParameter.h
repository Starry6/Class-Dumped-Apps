@interface ICSAlternateTimeProposalStatusParameter : ICSPredefinedValue
- (void)_ICSStringWithOptions:appendingToString:;
- (Class)classForCoder;
+ (id)statusParameterFromICSString:;
+ (id)statusParameterFromCode:;
@end
