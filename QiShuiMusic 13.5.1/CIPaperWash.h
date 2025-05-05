@interface CIPaperWash : CIFilter
@property (nonatomic) NSNumber inputSaturation;
@property (nonatomic) NSNumber inputGreyscale;
- (id)outputImage;
- (id)inputSaturation;
- (void)setInputSaturation:;
- (id)inputGreyscale;
- (void)setInputGreyscale:;
+ (id)customAttributes;
@end
