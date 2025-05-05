@interface ICSColor : NSObject
- (unsigned char)red;
- (unsigned char)blue;
- (unsigned char)green;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithRed:green:blue:;
+ (BOOL)supportsSecureCoding;
+ (id)symbolicColorForLegacyRGB:;
+ (BOOL)colorDetailsAreEffectivelyDifferentFirstColor:secondColor:firstSymbolicName:secondSymbolicName:;
@end
