@interface SKGroup : SKAction
- (id)init;
- (BOOL)finished;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)subactions;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:;
@end
