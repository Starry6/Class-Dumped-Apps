@interface VCPSaliencyRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bound;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)plistRepresentation;
- (void)setConfidence:;
- (id)initWithPlistRepresentation:;
- (id)initWith:confidence:;
- (id)bound;
- (void)setBound:;
+ (void)attachSalientRegions:toPixelBuffer:;
+ (id)salientRegionsFromPixelBuffer:;
@end
