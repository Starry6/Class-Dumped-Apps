@interface PolyNomialExtrapolation : NSObject
- (BOOL)ready;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHistorySize:degreeOfPolynomial:;
- (void)pushPoint:;
- (id)predict;
- (void)printHistoryNamed:;
@end
