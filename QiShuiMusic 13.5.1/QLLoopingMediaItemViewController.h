@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController
- (void)dealloc;
- (BOOL)play;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)player;
- (void).cxx_destruct;
- (BOOL)pause;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (void)previewDidAppear:;
- (void)setupPlayerWithMediaAsset:;
- (void)startObservingItem;
- (void)stopObservingItem;
@end
