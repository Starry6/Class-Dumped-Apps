@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) BOOL quadraHighResCaptureEnabled;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (int)sinkType;
- (void)setQuadraHighResCaptureEnabled:;
- (BOOL)quadraHighResCaptureEnabled;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
