@interface AWEAlbumPerformanceExtension : ACCAlbumExtension
- (void)albumWillShowViewController:;
- (void)albumDidHiddenViewController:;
- (void)albumWillShowPreviewControllerBottomView:previewAsset:;
- (void)albumDidHiddenPreviewControllerBottomView:previewAsset:;
- (void)albumEarlyDidLoadPreviewController;
+ (void)setAlbumPageCustomPage;
@end
