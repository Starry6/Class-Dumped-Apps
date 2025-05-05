@interface NSFont : UIFont
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (Class)classForCoder;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)fontWithName:size:;
@end
