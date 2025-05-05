@interface IESECSliceXTimePackHoursUntilFunc : IESECSliceXExprCoreFunc
- (id)execute:withGlobalEnv:error:;
- (unsigned long long)maxArgsCount;
- (unsigned long long)minArgsCount;
- (BOOL)needGlobalEnv;
- (id)symbol;
@end
