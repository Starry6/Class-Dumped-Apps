@interface IESECSliceXExprCoreOperatorCommand : IESECSliceXExprCoreCommand
@property (nonatomic) IESECSliceXExprCoreOperator operator;
- (BOOL)execute:withEnv:error:;
- (id)operator;
- (void).cxx_destruct;
- (id)initWithOperator:;
@end
