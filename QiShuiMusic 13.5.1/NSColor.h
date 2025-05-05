@interface NSColor : UIColor
- (id)initWithCoder:;
- (Class)classForCoder;
+ (BOOL)supportsSecureCoding;
+ (id)colorWithCalibratedRed:green:blue:alpha:;
+ (id)colorWithCalibratedWhite:alpha:;
@end
