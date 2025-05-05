@interface ELCalculateUtil : NSObject
+ (id)calculateDividingLeftOperand:rightOperand:;
+ (id)calculateEqualLeftOperand:rightOperand:;
+ (id)calculateGreatterEqualLeftOperand:rightOperand:;
+ (id)calculateGreatterLeftOperand:rightOperand:;
+ (id)calculateLesserEqualLeftOperand:rightOperand:;
+ (id)calculateLesserLeftOperand:rightOperand:;
+ (id)calculateLogicAndLeftOperand:rightOperand:;
+ (id)calculateLogicOrLeftOperand:rightOperand:;
+ (id)calculateMinusLeftOperand:rightOperand:;
+ (id)calculateModeLeftOperand:rightOperand:;
+ (id)calculateMultiLeftOperand:rightOperand:;
+ (id)calculateNotEqualLeftOperand:rightOperand:;
+ (id)calculateOptionsWithOperatorType:leftOperand:rightOperand:;
+ (id)calculatePlusLeftOperand:rightOperand:;
+ (id)calculateWithOperatorType:leftOperand:rightOperand:;
+ (long long)compareLogicLeftOperand:rightOperand:;
@end
