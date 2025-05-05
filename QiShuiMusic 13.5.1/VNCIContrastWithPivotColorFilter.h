@interface VNCIContrastWithPivotColorFilter : VNCIFilter
@property (nonatomic) NSNumber inputContrast;
@property (nonatomic) NSNumber inputPivot;
- (id)init;
- (id)inputContrast;
- (void).cxx_destruct;
- (void)setInputContrast:;
- (id)outputImage;
- (id)initWithInputParameters:;
- (void)setInputPivot:;
- (id)inputPivot;
@end
