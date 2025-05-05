@interface AXMIconVisionEngine : AXMVisionEngine
@property (nonatomic) AXMImageNode imageNode;
@property (nonatomic) AXMIconClassDetectorNode iconClassDetector;
@property (nonatomic) AXMBrailleEdgesDetectorNode brailleEdgeDetector;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (id)classifyImages:withTimeout:;
- (id)imageNode;
- (void)setImageNode:;
- (id)iconClassDetector;
- (void)setIconClassDetector:;
- (id)brailleEdgeDetector;
- (void)setBrailleEdgeDetector:;
+ (id)sharedInstance;
@end
