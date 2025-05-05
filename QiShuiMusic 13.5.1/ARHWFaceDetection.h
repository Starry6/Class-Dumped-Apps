@interface ARHWFaceDetection : NSObject
@property (nonatomic) q ID;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) q detectionOrientation;
@property (nonatomic) {?=qiIq} time;
- (void)setID:;
- (long long)ID;
- (void)setTime:;
- (id)boundingBox;
- (id)time;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (void)setBoundingBox:;
- (BOOL)isEqualToFaceDetection:;
- (double)rollAngleInDegrees;
- (void)setRollAngleInDegrees:;
- (long long)detectionOrientation;
- (void)setDetectionOrientation:;
+ (BOOL)supportsSecureCoding;
+ (id)faceDetectionFromDictionary:;
@end
