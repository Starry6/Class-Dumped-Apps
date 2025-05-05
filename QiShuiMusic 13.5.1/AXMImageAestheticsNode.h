@interface AXMImageAestheticsNode : AXMEvaluationNode
@property (nonatomic) VNClassifyImageAestheticsRequest _imageAestheticsRequest;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (id)_imageAestheticsRequest;
- (void)set_imageAestheticsRequest:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
