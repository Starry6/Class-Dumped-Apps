@interface CIRoundedRectangleGenerator : CIFilter
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) CIColor inputColor;
- (void)setInputRadius:;
- (id)inputRadius;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)inputColor;
- (void)setInputColor:;
+ (id)customAttributes;
@end
