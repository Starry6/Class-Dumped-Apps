@interface VCPPetsRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bound;
@property (nonatomic) float confidence;
- (float)confidence;
- (void)setConfidence:;
- (id)initWith:confidence:;
- (id)bound;
- (void)setBound:;
@end
