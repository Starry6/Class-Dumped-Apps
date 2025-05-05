@interface ABPKCameraRegistration : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)estimateCameraPoseFromMatchingwithImageIntrinsics:imageResolution:joints2d:jointsLifted3D:jointsLifted3DCount:;
- (id)runCameraRegistrationWithImageIntrinsics:imageResolution:liftingResult:;
- (void)_startRunCameraRegistrationSignpost;
- (void)_endRunCameraRegistrationSignpost;
@end
