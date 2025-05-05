@interface VPVREye : NSObject
@property (nonatomic) Q type;
@property (nonatomic) q scopicType;
@property (nonatomic) {?=[4]} eyeMatrix;
@property (nonatomic) {?=[4]} projectionMatrix;
@property (nonatomic) {?=dddddd} viewport;
@property (nonatomic) float zoom;
- (id)distortionMesh;
- (id)eyeMatrix;
- (id)eyeTextureDescription;
- (id)initWithType:textureSize:scopicType:fovAngle:configData:;
- (long long)scopicType;
- (void)updateParams;
- (void)setZoom:;
- (float)zoom;
- (void)dealloc;
- (void)setType:;
- (id)viewport;
- (unsigned long long)type;
- (id)projectionMatrix;
+ (id)eyeWithType:textureSize:scopicType:fovAngle:configData:;
@end
