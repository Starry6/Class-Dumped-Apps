@interface WhiteboardFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber stride;
- (id)stride;
- (id)inputImage;
- (void).cxx_destruct;
- (void)setInputImage:;
- (void)setStride:;
- (id)outputImage;
- (id)whiteboardFilterKernel;
+ (id)customAttributes;
@end
