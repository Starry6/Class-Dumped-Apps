@interface IESECSliceXExpressionCompiler : NSObject
@property (nonatomic) IESECSliceXExprCoreRunner exprRunner;
- (id)executeExpr:env:error:;
- (id)exprRunner;
- (id)init_private;
- (id)mergeEnvData:withGlobalEnv:;
- (BOOL)precompileWithExpr:;
- (void)setExprRunner:;
- (void).cxx_destruct;
+ (id)allocWithZone:;
+ (id)shared;
@end
