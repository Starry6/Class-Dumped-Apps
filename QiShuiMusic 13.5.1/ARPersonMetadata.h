@interface ARPersonMetadata : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) double meanDepth;
- (id)boundingBox;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (double)meanDepth;
- (id)rectScaledToSize:;
- (id)initWithDepthBasedPersonDetectionResult:;
- (id)initWithBoundingBox:meanDepth:;
+ (BOOL)supportsSecureCoding;
@end
