@interface FRCScaler : NSObject
- (id)init;
- (void)dealloc;
- (void)scaleFrameSource:destination:cropRectangles:upscale:rotate:waitForCompletion:;
- (void)downScaleFrameSource:destination:rotate:waitForCompletion:;
- (void)upScaleAndCropFrameSource:destination:upscale:rotate:waitForCompletion:;
@end
