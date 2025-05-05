@interface IESECSliceXExprCoreOperatorManager : NSObject
@property (nonatomic) NSMutableDictionary unaryOperators;
@property (nonatomic) NSMutableDictionary binaryOperators;
- (id)binaryOperators;
- (id)getBinaryOperatorFromSymbol:;
- (id)getUnaryOperatorFromSymbol:;
- (void)setBinaryOperators:;
- (void)setUnaryOperators:;
- (id)unaryOperators;
- (id)init;
- (void).cxx_destruct;
- (void)registerOperator:;
@end
