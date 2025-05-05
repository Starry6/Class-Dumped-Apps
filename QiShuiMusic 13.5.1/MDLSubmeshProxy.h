@interface MDLSubmeshProxy : MDLSubmesh
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
