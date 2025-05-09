@interface AWEShareDetailWithImageViewController : UIViewController
@property (nonatomic) q sharePlatformType;
@property (nonatomic) AWESharePanelView sharePanelView;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) q settingShareMode;
@property (nonatomic) BOOL preparingShare;
@property (nonatomic) MASConstraint topContainerViewCenterY;
@property (nonatomic) MASConstraint topContainerViewTopAlignToViewBottom;
@property (nonatomic) MASConstraint topContainerViewSharePanelSpace;
@property (nonatomic) MASConstraint sharePanelTopAlignToViewBottom;
@property (nonatomic) MASConstraint sharePanelBottomAlignToViewBottom;
@property (nonatomic) UIImage rendImage;
@property (nonatomic) @? dismissHandler;
@property (nonatomic) BOOL darkSharePanel;
@property (nonatomic) NSArray sharePlatforms;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showSharePanel;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)prepareToShare;
- (void)imageSavedToPhotosAlbum:didFinishSavingWithError:contextInfo:;
- (void)setDarkSharePanel:;
- (void)doAppearAnimation;
- (void)configSharePanelMask;
- (void)setTopContainerViewTopAlignToViewBottom:;
- (void)setTopContainerViewCenterY:;
- (id)topContainerViewCenterY;
- (id)allSharePlatforms;
- (BOOL)isSharePlatformAvailable:;
- (BOOL)darkSharePanel;
- (void)setSharePanelView:;
- (id)sharePanelView;
- (void)setSharePanelTopAlignToViewBottom:;
- (void)setSharePanelBottomAlignToViewBottom:;
- (void)setTopContainerViewSharePanelSpace:;
- (id)topContainerViewSharePanelSpace;
- (id)sharePanelBottomAlignToViewBottom;
- (id)topContainerViewTopAlignToViewBottom;
- (id)sharePanelTopAlignToViewBottom;
- (id)p_maskLayerForRect:;
- (void)dismissPanel:;
- (BOOL)preparingShare;
- (void)setPreparingShare:;
- (id)rendImage;
- (long long)sharePlatformType;
- (id)saveSuccessfullyMessageForShareType:;
- (void)openAppWithShareType:;
- (id)getPlatformString:;
- (void)setSharePlatformType:;
- (id)sharePlatformUnavailableMessage:;
- (void)onImageSaveSuccessfully;
- (void)shareItemTapped:;
- (id)initWithImage:onViewController:dismissHandler:;
- (id)sharePlatforms;
- (long long)settingShareMode;
- (void)setSettingShareMode:;
- (void)setRendImage:;
- (void)setDismissHandler:;
- (id)dismissHandler;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)viewDidAppear:;
- (void)cancelButtonTapped;
- (void)setUpSubviews;
- (void)showOnViewController:;
@end
