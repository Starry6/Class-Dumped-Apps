@interface AWEEcAlbumScanMethodImpl : AWEEcAlbumScanMethod
@property (nonatomic) AWEModalTransitionDelegate transitionDelegate;
@property (nonatomic) BOOL isDetectingQRCode;
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) @? complete;
- (void)callWithParamModel:completionHandler:;
- (void)p_presentUploadVideoViewControllerWithCompletionHandler:;
- (void)selectedPhotoForScanWithImage:;
- (BOOL)isDetectingQRCode;
- (void)setIsDetectingQRCode:;
- (id)complete;
- (void)setNavigationController:;
- (void).cxx_destruct;
- (id)navigationController;
- (void)setComplete:;
- (void)setTransitionDelegate:;
- (id)transitionDelegate;
@end
