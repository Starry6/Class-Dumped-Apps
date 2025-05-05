@interface ABPKInput : NSObject
@property (nonatomic) ^{__CVBuffer=} image;
@property (nonatomic) ^{__CVBuffer=} depthMap;
@property (nonatomic) ^{__CVBuffer=} depthConfidenceBuffer;
@property (nonatomic) BOOL isDepthDataValid;
@property (nonatomic) {?=[4]} vioPose;
@property (nonatomic) BOOL isVioPoseValid;
@property (nonatomic) double timestamp;
@property (nonatomic) ABPKCameraParams cameraParams;
- (id)init;
- (void)setImage:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)image;
- (id)depthMap;
- (void)setDepthMap:;
- (void)setDepthConfidenceBuffer:;
- (id)depthConfidenceBuffer;
- (int)saveDataToDir:withFileNamePrefix:;
- (BOOL)isDepthDataValid;
- (void)setIsDepthDataValid:;
- (id)vioPose;
- (void)setVioPose:;
- (BOOL)isVioPoseValid;
- (void)setIsVioPoseValid:;
- (id)cameraParams;
- (void)setCameraParams:;
@end
