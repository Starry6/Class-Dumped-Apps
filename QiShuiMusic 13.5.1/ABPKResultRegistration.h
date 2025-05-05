@interface ABPKResultRegistration : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) ^ joints2d;
@property (nonatomic) ^ joints3dWrtBody;
@property (nonatomic) ^ joints3dWrtCamera;
@property (nonatomic) {?=[3]} intrinsics;
@property (nonatomic)  distortion;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) {?=[4]} cameraFromBodyPose;
- (id)imageSize;
- (BOOL)success;
- (void)setSuccess:;
- (void)setImageSize:;
- (id)intrinsics;
- (id)cameraFromBodyPose;
- (void)setIntrinsics:;
- (id)distortion;
- (void)setDistortion:;
- (id)joints2d;
- (void)setJoints2d:;
- (id)joints3dWrtBody;
- (void)setJoints3dWrtBody:;
- (id)joints3dWrtCamera;
- (void)setJoints3dWrtCamera:;
- (void)setCameraFromBodyPose:;
@end
