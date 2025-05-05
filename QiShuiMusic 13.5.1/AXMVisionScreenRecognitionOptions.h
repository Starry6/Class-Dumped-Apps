@interface AXMVisionScreenRecognitionOptions : AXMVisionAnalysisOptions
@property (nonatomic) CIImage testingImage;
@property (nonatomic) BOOL disableCoagulator;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} fullRect;
@property (nonatomic) q orientation;
@property (nonatomic) BOOL isRTL;
- (long long)orientation;
- (void).cxx_destruct;
- (BOOL)isRTL;
- (void)setOrientation:;
- (void)setIsRTL:;
- (id)testingImage;
- (void)setTestingImage:;
- (BOOL)disableCoagulator;
- (void)setDisableCoagulator:;
- (id)fullRect;
- (void)setFullRect:;
@end
