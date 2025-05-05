@interface BDCTVideoRecordPreviewViewController : UIViewController
@property (nonatomic) NSURL videoURL;
@property (nonatomic) <BDCTVideoRecordPreviewViewControllerDelegate> delegate;
- (void)layoutContentViews;
- (id)videoURL;
- (void)setDelegate:;
- (void)setVideoURL:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
