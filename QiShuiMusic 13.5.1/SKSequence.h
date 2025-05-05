@interface SKSequence : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)subactions;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithActions:;
@end
