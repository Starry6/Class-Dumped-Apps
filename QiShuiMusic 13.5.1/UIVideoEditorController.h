@interface UIVideoEditorController : UINavigationController
@property (nonatomic) <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> delegate;
@property (nonatomic) NSString videoPath;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) q videoQuality;
- (id)init;
- (void)viewDidDisappear:;
- (void)setVideoQuality:;
- (void)viewWillDisappear:;
- (void)_setValue:forProperty:;
- (void)viewWillAppear:;
- (long long)videoQuality;
- (BOOL)_isSupportedInterfaceOrientation:;
- (void)viewWillUnload;
- (double)videoMaximumDuration;
- (void)setVideoMaximumDuration:;
- (void)_setProperties:;
- (void)_initializeProperties;
- (id)_properties;
- (id)_valueForProperty:;
- (BOOL)_didRevertStatusBar;
- (void)_removeAllChildren;
- (void)_autoDismiss;
- (id)_createInitialController;
- (void)_setupControllers;
- (void)editVideoViewControllerDidCancel:;
- (void)editVideoViewController:didTrimVideoWithOptions:;
- (void)editVideoViewController:didFailWithError:;
- (id)videoPath;
- (void)setVideoPath:;
- (id)_videoURL;
- (void)_setVideoURL:;
+ (BOOL)canEditVideoAtPath:;
@end
