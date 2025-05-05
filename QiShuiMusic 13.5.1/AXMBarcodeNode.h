@interface AXMBarcodeNode : AXMEvaluationNode
@property (nonatomic) AVCaptureMetadataOutput captureOutput;
- (void).cxx_destruct;
- (id)captureOutput;
- (void)setCaptureOutput:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
