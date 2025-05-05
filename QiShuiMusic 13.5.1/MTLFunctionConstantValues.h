@interface MTLFunctionConstantValues : NSObject
- (void)setConstantValue:type:withName:;
- (void)setConstantValues:type:withRange:;
- (void)reset;
- (void)setConstantValue:type:atIndex:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
