@interface CISparseRendererPreFiltering : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSDictionary inputTuningParameters;
@property (nonatomic) NSNumber inputApertureScaling;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputApertureScaling;
- (void)setInputApertureScaling:;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)_kernel:;
- (id)outputImage:horizontal:width:;
- (void)dumpImage:extent:prefixFilename:;
@end
