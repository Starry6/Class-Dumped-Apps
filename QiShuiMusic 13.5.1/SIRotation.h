@interface SIRotation : NSObject
- (void)dealloc;
- (id)getCenterCropSrcSize:dstSize:;
- (id)initForRotationDegree:resolution:pixelFormat:algorithmKey:;
- (id)_createRotationSessionByRotationDegree:;
- (BOOL)rotateImage:outputBuffer:;
- (id)rotateImage:;
- (id)rotateAndCropImage:;
- (BOOL)rotateAndCropImage:outputBuffer:;
- (id)_createCVPixelBufferWithResolution:pixelFormat:;
@end
