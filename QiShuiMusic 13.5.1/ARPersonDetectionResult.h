@interface ARPersonDetectionResult : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
- (id)boundingBox;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)setBoundingBox:;
- (id)initWithBoundingBox:;
- (id)rectScaledToSizeOfPixelBuffer:;
+ (BOOL)supportsSecureCoding;
@end
