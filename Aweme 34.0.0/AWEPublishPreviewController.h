@interface AWEPublishPreviewController : UIViewController
@property (nonatomic) q tryPlayCount;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) UIView gestureMaskView;
@property (nonatomic) UIImage previewImage;
@property (nonatomic) UIView playerContainerView;
@property (nonatomic) NSArray observers;
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWEVideoImageGenerator imageGenerator;
@property (nonatomic) double currentPlayerTime;
@property (nonatomic) UIButton publishButton;
@property (nonatomic) UIButton chooseCoverButton;
@property (nonatomic) UIButton backButton;
@property (nonatomic) BOOL isTapGesture;
@property (nonatomic) BOOL isBackButtonClick;
@property (nonatomic) BOOL isPublishButtonClick;
@property (nonatomic) @? publishDidClickBlock;
@property (nonatomic) AWEStickerContainerFakeProfileView fakeFeedInfoView;
@property (nonatomic) @? didDismissBlock;
@property (nonatomic) @? chooseCoverDidClickedBlock;
@property (nonatomic) UIViewController presentationOwner;
@property (nonatomic) BOOL saveCover;
@property (nonatomic) AWEStudioComposerPublishBasicFeature basicFeature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backButtonClicked:;
- (id)didDismissBlock;
- (void)setDidDismissBlock:;
- (id)zoomTransitionEndView;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)publishViewModel;
- (void)setCurrentPlayerTime:;
- (double)currentPlayerTime;
- (void)playerCurrentPlayTimeChanged:;
- (id)publishButton;
- (void)setPublishButton:;
- (void)setPublishViewModel:;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (id)editService;
- (void)setEditService:;
- (id)basicFeature;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (void)closeSelf;
- (id)publishDidClickBlock;
- (void)setPublishDidClickBlock:;
- (id)fakeFeedInfoView;
- (void)setFakeFeedInfoView:;
- (void)setBasicFeature:;
- (void)setSaveCover:;
- (void)setChooseCoverDidClickedBlock:;
- (id)initWithPublishViewModel:editService:sequenceEditService:previewImage:;
- (void)setPresentationOwner:;
- (void)loadPlayer;
- (BOOL)isPublishButtonClick;
- (void)setIsPublishButtonClick:;
- (void)p_configUIStyle;
- (id)p_modernStickerContainerWithModels:;
- (BOOL)saveCover;
- (void)p_trackQuitEvent;
- (id)chooseCoverDidClickedBlock;
- (void)setIsBackButtonClick:;
- (BOOL)isTapGesture;
- (BOOL)isBackButtonClick;
- (id)chooseCoverButton;
- (id)p_playerFrame:boundingRect:;
- (id)p_getValidPlayerFrame:boundingRect:;
- (id)gestureMaskView;
- (BOOL)isCFFromSocialCamera;
- (void)configPublishButtonIconWithArrowGroup:;
- (void)publishButtonClicked:;
- (void)chooseButtonClicked:;
- (id)presentationOwner;
- (long long)tryPlayCount;
- (void)setTryPlayCount:;
- (void)setGestureMaskView:;
- (void)setChooseCoverButton:;
- (void)setIsTapGesture:;
- (id)backButton;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setBackButton:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)dismissViewControllerAnimated:completion:;
- (id)observers;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void)setImageGenerator:;
- (void).cxx_destruct;
- (id)imageGenerator;
- (void)setObservers:;
- (id)previewImage;
- (id)previewImageView;
- (void)setPreviewImageView:;
- (void)setPreviewImage:;
- (id)playerContainerView;
- (void)setPlayerContainerView:;
@end
