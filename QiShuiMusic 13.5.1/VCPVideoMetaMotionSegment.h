@interface VCPVideoMetaMotionSegment : VCPMetaSegment
@property (nonatomic) float absMotion;
@property (nonatomic) float stabilityScore;
- (void)mergeSegment:;
- (void)finalizeAtTime:;
- (id)initWithAbsMotion:atTime:;
- (void)resetSegment:atTime:;
- (void)updateSegment:atTime:;
- (float)absMotion;
- (void)setAbsMotion:;
- (float)stabilityScore;
- (void)setStabilityScore:;
@end
