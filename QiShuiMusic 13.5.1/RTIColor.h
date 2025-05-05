@interface RTIColor : NSObject
- (void)dealloc;
- (id)cgColor;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)colorWithRed:green:blue:alpha:;
+ (id)colorWithCGColor:;
+ (id)colorWithWhite:alpha:;
@end
