@interface SKRadialGravityFieldNode : SKFieldNode
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)_initialize;
- (id)_descriptionClassName;
+ (BOOL)supportsSecureCoding;
@end
