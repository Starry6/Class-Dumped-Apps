@interface AXVNEspressoDetectedObject : NSObject
@property (nonatomic) q objectType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) float confidence;
- (id)center;
- (float)confidence;
- (void)setConfidence:;
- (long long)objectType;
- (void)setBounds:;
- (id)bounds;
- (void)setObjectType:;
- (id)initWithObjectType:boundingBox:confidence:;
@end
