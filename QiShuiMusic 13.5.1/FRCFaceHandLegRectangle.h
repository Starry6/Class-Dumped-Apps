@interface FRCFaceHandLegRectangle : NSObject
@property (nonatomic) Q category;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) NSNumber roll;
@property (nonatomic) NSNumber yaw;
- (id)yaw;
- (id)boundingBox;
- (id)roll;
- (void)setCategory:;
- (void).cxx_destruct;
- (unsigned long long)category;
- (void)setBoundingBox:;
- (void)setYaw:;
- (void)setRoll:;
+ (id)faceRectangleWithBoundingBox:roll:yaw:;
+ (id)handRectangleWithObservation:;
+ (id)humanRectangleWithBoundingBox:;
+ (id)bodyRectangleWithCenter:tip:category:frameAspectRatio:;
@end
