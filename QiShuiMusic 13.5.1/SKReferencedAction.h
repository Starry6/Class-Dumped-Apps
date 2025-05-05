@interface SKReferencedAction : SKAction
- (id)init;
- (void)setTimingFunction:;
- (id)initWithCoder:;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)subactions;
- (void)setTimingMode:;
- (id)reversedAction;
- (void)_ensureReferencedAction;
+ (BOOL)supportsSecureCoding;
+ (id)referenceActionWithName:duration:;
@end
