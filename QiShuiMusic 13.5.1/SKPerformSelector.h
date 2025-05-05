@interface SKPerformSelector : SKAction
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)perfromSelector:onTarget:;
@end
