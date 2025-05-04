@interface AWENewVideoCoverPreviewController : UIViewController
@property (nonatomic) AWENewVideoCoverPreviewView previewView;
- (void)bottomViewDidSelectGalleryImage:;
- (unsigned long long)videoCoverAiFrameType;
- (void)updatePreviewAreaSize:cutAreaSize:previewFitCutAreaSize:videoPreviewSize:videoOriginSize:;
- (void)setPreviewView:;
- (id)previewView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupUI;
@end
