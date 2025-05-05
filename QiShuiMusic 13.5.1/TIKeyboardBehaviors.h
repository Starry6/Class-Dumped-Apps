@interface TIKeyboardBehaviors : NSObject
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)keyBehaviorsForState:;
+ (BOOL)supportsSecureCoding;
@end
