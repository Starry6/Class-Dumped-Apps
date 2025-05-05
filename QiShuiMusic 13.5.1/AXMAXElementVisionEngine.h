@interface AXMAXElementVisionEngine : AXMVisionEngine
@property (nonatomic) AXMScreenCaptureNode captureNode;
@property (nonatomic) AXMImageNode imageNode;
@property (nonatomic) AXMTextDetectorNode textDetector;
@property (nonatomic) AXMIconClassDetectorNode iconClassDetector;
@property (nonatomic) AXMBrailleEdgesDetectorNode brailleEdgeDetector;
@property (nonatomic) AXMAXElementDetectorNode axElementDetector;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (id)textDetector;
- (id)imageNode;
- (void)setImageNode:;
- (id)iconClassDetector;
- (void)setIconClassDetector:;
- (id)brailleEdgeDetector;
- (void)setBrailleEdgeDetector:;
- (id)captureNode;
- (void)setCaptureNode:;
- (void)setTextDetector:;
- (id)axElementDetector;
- (void)setAxElementDetector:;
@end
