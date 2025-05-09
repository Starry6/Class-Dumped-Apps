@interface CIInpaintingFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputMaskImage;
@property (nonatomic) CIVector inputMaskBoundingBox;
@property (nonatomic) NSArray inputFaceBoundingBoxes;
@property (nonatomic) NSArray inputInpaintingProcessingResolutions;
@property (nonatomic) NSNumber inputInpaintingBlendingRadius;
@property (nonatomic) NSNumber inputInpaintingMode;
@property (nonatomic) NSInteger lastProcessingResolution;
@property (nonatomic) double lastExecutionTime;
@property (nonatomic) InpaintingExecutionContext executionContext;
- (void)setInputInpaintingMode:;
- (id)init;
- (id)performMultiresolutionInpaintingWithParameters:;
- (void)dealloc;
- (id)inputMaskBoundingBoxAsValidCGRect;
- (id)inputFaceBoundingBoxes;
- (id)performFullPipelineInpaintingWithParameters:;
- (double)getLastExecutionTime;
- (id)inputInpaintingBlendingRadius;
- (int)getLastProcessingResolution;
- (id)inputMaskImage;
- (BOOL)shouldFaceSpecificModelBeUsed;
- (id)executionContext;
- (id)getSelectedGeneralInpaintingModelDescriptor;
- (void)setInputInpaintingProcessingResolutions:;
- (void)setInputMaskImage:;
- (void)setInputMaskBoundingBox:;
- (id)inputImage;
- (id)inputInpaintingMode;
- (id)performSinglePassInpaintingWithParameters:;
- (void)setInputImage:;
- (id)inputInpaintingProcessingResolutions;
- (id)getSelectedFacesInpaintingModelDescriptor;
- (id)inputMaskBoundingBox;
- (void)setInputInpaintingBlendingRadius:;
- (id)performTilingPipelineInpaintingWithParameters:;
- (void)setInputFaceBoundingBoxes:;
- (id)outputImage;
+ (id)getEspressoResources;
+ (id)customAttributes;
@end
