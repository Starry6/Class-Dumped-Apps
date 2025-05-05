@interface ABPKAlgInput : NSObject
@property (nonatomic) ^{__CVBuffer=} image;
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) {?=[3]} imageCameraIntrinsics;
@property (nonatomic) ABPKImagePreProcessingParams imagePreProcessingParams;
@property (nonatomic) ^{__CVBuffer=} depthMap;
@property (nonatomic) ^{__CVBuffer=} depthConfidenceBuffer;
@property (nonatomic) BOOL isDepthDataValid;
@property (nonatomic) double timestamp;
- (id)init;
- (void)setImage:;
- (void)setTimestamp:;
- (double)timestamp;
- (id)image;
- (id)imageResolution;
- (void)setImageResolution:;
- (id)depthMap;
- (void)setDepthMap:;
- (void)setDepthConfidenceBuffer:;
- (id)depthConfidenceBuffer;
- (BOOL)isDepthDataValid;
- (void)setIsDepthDataValid:;
- (id)imageCameraIntrinsics;
- (void)setImageCameraIntrinsics:;
- (id)imagePreProcessingParams;
- (void)setImagePreProcessingParams:;
@end
