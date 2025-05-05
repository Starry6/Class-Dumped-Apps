@interface ABPKCameraParams : NSObject
@property (nonatomic) {?=[3]} intrinsics;
@property (nonatomic) {?=[4]} extrinsics;
@property (nonatomic)  distortion;
@property (nonatomic) {CGSize=dd} inputRes;
@property (nonatomic) q deviceType;
@property (nonatomic) BOOL isImageRectified;
@property (nonatomic) q deviceOrientation;
- (long long)deviceType;
- (void)setDeviceOrientation:;
- (void)setDeviceType:;
- (id)initWithDictionary:;
- (long long)deviceOrientation;
- (id)intrinsics;
- (id)toDict;
- (void)setIntrinsics:;
- (id)initWithIntrinsics:andExtrinsics:andDistortion:;
- (id)initWithIntrinsics:andExtrinsics:andDistortion:andInputResolution:;
- (id)extrinsics;
- (void)setExtrinsics:;
- (id)distortion;
- (void)setDistortion:;
- (id)inputRes;
- (void)setInputRes:;
- (BOOL)isImageRectified;
- (void)setIsImageRectified:;
@end
