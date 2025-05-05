@interface CIDocumentEnhancer : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputAmount;
- (void)setInputAmount:;
- (id)inputAmount;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
+ (id)customAttributes;
@end
