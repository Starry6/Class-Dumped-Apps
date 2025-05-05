@interface SIPersonDetectorBoundingBox : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) float confidence;
- (float)confidence;
- (void)setConfidence:;
- (id)boundingBox;
- (void)setBoundingBox:;
- (id)initWithBoundingBox:confidence:;
@end
