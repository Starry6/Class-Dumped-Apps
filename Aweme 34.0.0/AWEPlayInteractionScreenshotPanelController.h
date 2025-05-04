@interface AWEPlayInteractionScreenshotPanelController : AWEPlayInteractionNewBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPanelShowed;
- (void)userDidTakeScreenshot:;
- (BOOL)checkGoodsFeedIsOnTop;
- (void)jumpToEcomPhotoSearchWithSchema:;
- (id)screenShotImageFilePath;
- (void)viewDidLoad;
@end
