@interface MTColor : NSObject
- (id)_rgbColor;
- (void)dealloc;
- (id)CGColor;
- (id)colorDescription;
- (id)colorWithAlphaComponent:;
- (id)sourceOverColorMatrix;
- (id)_initWithCGColor:;
- (id)colorWithAdditionalAlphaComponent:;
- (id)colorBlendedWithColor:;
- (id)_initWithDescription:;
+ (id)colorWithRed:green:blue:alpha:;
+ (id)blackColor;
+ (id)colorWithDescription:;
+ (id)whiteColor;
+ (id)colorWithCGColor:;
+ (id)colorWithWhite:alpha:;
+ (id)pinkColor;
@end
