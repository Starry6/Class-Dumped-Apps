@interface SKFollowPath : SKAction
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)followPath:duration:;
+ (id)followPath:asOffset:orientToPath:duration:;
+ (id)followPath:speed:;
+ (id)followPath:asOffset:orientToPath:speed:;
@end
