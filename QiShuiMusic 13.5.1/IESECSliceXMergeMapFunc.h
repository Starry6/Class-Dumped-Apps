@interface IESECSliceXMergeMapFunc : IESECSliceXExprCoreFunc
- (unsigned long long)maxArgsCount;
- (unsigned long long)minArgsCount;
- (id)symbol;
- (id)execute:error:;
@end
