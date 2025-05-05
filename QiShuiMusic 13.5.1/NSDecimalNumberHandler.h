@interface NSDecimalNumberHandler : NSObject
- (id)exceptionDuringOperation:error:leftOperand:rightOperand:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithRoundingMode:scale:raiseOnExactness:raiseOnOverflow:raiseOnUnderflow:raiseOnDivideByZero:;
- (short)scale;
- (unsigned long long)roundingMode;
+ (id)decimalNumberHandlerWithRoundingMode:scale:raiseOnExactness:raiseOnOverflow:raiseOnUnderflow:raiseOnDivideByZero:;
+ (id)defaultDecimalNumberHandler;
@end
