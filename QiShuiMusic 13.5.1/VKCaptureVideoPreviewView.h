@interface VKCaptureVideoPreviewView : UIImageView
@property (nonatomic) CIImage ciImage;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) double viewToImageScale;
- (double)screenScale;
- (id)init;
- (void)dealloc;
- (id)imageSize;
- (void).cxx_destruct;
- (void)enqueueSampleBuffer:;
- (id)regionOfInterest;
- (id)ciImage;
- (id)viewSizeInPixels;
- (double)viewToImageScale;
- (void)snapshotWithCompletion:;
@end
