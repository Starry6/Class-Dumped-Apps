@interface RadialFalloffFilter : CIFilter
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) CIImage inputCenter;
@property (nonatomic) NSNumber inputFalloff;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputAnisotropic;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputCenter;
- (id)inputRadius;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)inputFalloff;
- (void)setInputFalloff:;
- (id)inputAnisotropic;
- (void)setInputAnisotropic:;
@end
