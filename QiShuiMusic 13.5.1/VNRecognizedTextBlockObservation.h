@interface VNRecognizedTextBlockObservation : VNRecognizedTextObservation
@property (nonatomic) VNRecognizedTextBlock vk_textBlock;
@property (nonatomic) NSArray children;
@property (nonatomic) NSString transcript;
@property (nonatomic) NSArray lines;
@property (nonatomic) BOOL shouldBeWrappedWithNextLine;
@property (nonatomic) NSArray recognizedLanguages;
- (id)vk_textBlock;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)topCandidates:;
- (id)getDataDetectorResults:;
- (id)boundingBoxForRange:error:;
- (id)getTranscript;
- (id)initWithRequestRevision:crOutputRegion:;
- (id)getCROutputRegion;
- (id)getRecognizedLanguages;
- (id)getChildren;
- (id)getLines;
- (BOOL)shouldBeWrappedWithNextLine;
@end
