@interface VIImageScaler : NSObject
- (id)init;
- (void)dealloc;
- (int)setScalingMode:;
- (int)setVTTransferSessionProperties:;
- (int)setFillColorBGRA:;
- (int)unsetFillColor;
- (id)createScaledImageWithSource:size:;
- (id)createCroppedImageWithSource:regionOfInterest:;
- (id)createImageWithSource:format:;
- (int)scaleImageFromSource:destination:;
- (int)cropScaleImageFromSource:destination:regionOfInterest:;
- (int)cropScaleImageFromSource:destination:normalizedBoundingBox:bottomLeftBoxOrigin:;
@end
