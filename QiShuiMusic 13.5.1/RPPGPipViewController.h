@interface RPPGPipViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)didStartPreview;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)setupPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didChangeLocalVideoAttributes:;
- (void)didChangeLocalScreenAttributes:;
- (void)cameraDidBecomeAvailableForUniqueID:;
- (void)cameraDidBecomeInterruptedForForUniqueID:reason:;
- (void)updateViewGeometry;
- (id)cameraWithPosition:;
- (void)startPipSession;
- (void)stopPipSession;
- (void)layoutPreviewLayer;
@end
