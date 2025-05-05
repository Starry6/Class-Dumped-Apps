@interface ABPKRegistrationData : NSObject
@property (nonatomic) r^ imagePoints;
@property (nonatomic) Q imagePointsCount;
@property (nonatomic) r^ jointsLifted3D;
@property (nonatomic) Q jointsLifted3DCount;
@property (nonatomic) {?=[3]} cameraIntrinsics;
@property (nonatomic) {CGSize=dd} imageDimensions;
@property (nonatomic) {?=[4]} cameraFromBodyPose;
@property (nonatomic) BOOL registrationValid;
- (id)imageDimensions;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)cameraIntrinsics;
- (id)cameraFromBodyPose;
- (BOOL)registrationValid;
- (id)jointsLifted3D;
- (unsigned long long)jointsLifted3DCount;
- (id)imagePoints;
- (unsigned long long)imagePointsCount;
- (id)initWithImagePoints:imagePointsCount:jointsLifted3D:jointsLifted3DCount:cameraIntrinsics:imageDimensions:cameraFromBodyPose:registrationValid:;
@end
