@interface AWEDPlayerComponentScreenShot : AWEDPlayerBaseComponent
- (void)userDidTakeScreenshot:;
- (id)screenShotImage;
- (BOOL)hasAlbumPermission;
- (void)viewDidLoad;
@end
