@interface CIImageWriter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSString inputFilename;
@property (nonatomic) NSNumber inputShouldDumpInputValues;
@property (nonatomic) CIFilter inputOriginalFilter;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputFilename;
- (void)setInputFilename:;
- (id)inputShouldDumpInputValues;
- (void)setInputShouldDumpInputValues:;
- (id)inputOriginalFilter;
- (void)setInputOriginalFilter:;
+ (id)customAttributes;
@end
