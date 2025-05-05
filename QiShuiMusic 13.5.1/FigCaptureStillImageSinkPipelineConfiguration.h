@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
