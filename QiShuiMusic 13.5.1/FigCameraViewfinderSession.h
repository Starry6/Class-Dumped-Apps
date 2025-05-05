@interface FigCameraViewfinderSession : NSObject
- (id)init;
- (void)dealloc;
- (void)openPreviewStreamWithOptions:;
- (void)closePreviewStream;
@end
