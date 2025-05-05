@interface SKRunBlock : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)runBlock:queue:;
@end
