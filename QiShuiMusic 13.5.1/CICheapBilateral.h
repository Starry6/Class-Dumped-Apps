@interface CICheapBilateral : CIFilter
@property (nonatomic) CIImage inputSource;
@property (nonatomic) NSNumber inputSigmaSpace;
@property (nonatomic) NSNumber inputSigmaRange;
- (id)outputImage;
- (id)inputSource;
- (void)setInputSource:;
- (id)inputSigmaSpace;
- (void)setInputSigmaSpace:;
- (id)inputSigmaRange;
- (void)setInputSigmaRange:;
+ (id)customAttributes;
@end
