@interface ARODTResult : NSObject
@property (nonatomic) Q detectedObjectID;
@property (nonatomic) {?=[4]} visionTransform;
@property (nonatomic) ^v imageContext;
@property (nonatomic) double estimatedScaleFactor;
- (id)visionTransform;
- (void)setVisionTransform:;
- (double)estimatedScaleFactor;
- (void)setEstimatedScaleFactor:;
- (unsigned long long)detectedObjectID;
- (void)setDetectedObjectID:;
- (id)imageContext;
- (void)setImageContext:;
@end
