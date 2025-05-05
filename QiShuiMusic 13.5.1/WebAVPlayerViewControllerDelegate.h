@interface WebAVPlayerViewControllerDelegate : NSObject
@property (nonatomic) ^v fullscreenInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)playerViewControllerWillStartPictureInPicture:;
- (void)playerViewControllerDidStartPictureInPicture:;
- (void)playerViewController:failedToStartPictureInPictureWithError:;
- (void)playerViewControllerWillStopPictureInPicture:;
- (void)playerViewControllerDidStopPictureInPicture:;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:;
- (void)playerViewController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:;
- (BOOL)playerViewController:shouldExitFullScreenWithReason:;
- (BOOL)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:;
- (id)fullscreenInterface;
- (void)setFullscreenInterface:;
@end
