@interface FigCaptureSessionProxy : NSObject
@property (nonatomic) q identifier;
- (void)dealloc;
- (long long)identifier;
- (void)closePreviewTap;
- (int)openPreviewTapWithDelegate:;
- (id)initWithFigCaptureSession:identifier:;
@end
