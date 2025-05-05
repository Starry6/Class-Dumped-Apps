@interface IESECSliceXExprCoreFunctionCommand : IESECSliceXExprCoreCommand
@property (nonatomic) IESECSliceXExprCoreFunc func;
@property (nonatomic) Q argsCount;
- (unsigned long long)argsCount;
- (BOOL)execute:withEnv:error:;
- (id)func;
- (id)initWithFunc:argsCount:;
- (void).cxx_destruct;
@end
