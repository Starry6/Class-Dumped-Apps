@interface VNRecognizeDocumentElementsRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) VNRecognizeDocumentElementsRequestElementConfiguration documentElements;
@property (nonatomic) VNRecognizeDocumentElementsRequestElementConfiguration textElements;
@property (nonatomic) VNRecognizeDocumentElementsRequestElementConfiguration machineReadableCodeElements;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (id)documentElements;
- (id)textElements;
- (id)machineReadableCodeElements;
@end
