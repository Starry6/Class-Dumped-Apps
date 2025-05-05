@interface TIKeyEventMap : NSObject
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)inputEventForInputString:stringWithoutModifiers:modifierFlags:keyboardState:;
- (id)remapKeyWithString:stringWithoutModifiers:modifierFlags:keyboardState:;
- (long long)candidateNumberKey:;
+ (BOOL)supportsSecureCoding;
@end
