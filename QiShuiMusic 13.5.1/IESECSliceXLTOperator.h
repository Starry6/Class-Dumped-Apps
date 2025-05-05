@interface IESECSliceXLTOperator : IESECSliceXExprCoreBinaryOperator
- (id)symbol;
- (id)execute:error:;
- (unsigned long long)priority;
@end
