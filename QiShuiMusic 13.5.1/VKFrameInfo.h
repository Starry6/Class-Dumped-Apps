@interface VKFrameInfo : NSObject
@property (nonatomic) Q sceneStability;
@property (nonatomic) double luminosity;
@property (nonatomic) {CGSize=dd} dimensions;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) {CGAffineTransform=dddddd} visionToLayerTransform;
@property (nonatomic) {CGAffineTransform=dddddd} visionToCroppedImageTransform;
- (id)dimensions;
- (double)luminosity;
- (void)setDimensions:;
- (id)regionOfInterest;
- (void)setRegionOfInterest:;
- (unsigned long long)sceneStability;
- (void)setSceneStability:;
- (void)setLuminosity:;
- (id)visionToLayerTransform;
- (void)setVisionToLayerTransform:;
- (id)visionToCroppedImageTransform;
- (void)setVisionToCroppedImageTransform:;
@end
