@interface AWESequencePublishPreviewController : UIViewController
@property (nonatomic) AWESequencePublishPreviewConfig config;
@property (nonatomic) UIView preSuperview;
@property (nonatomic) UIView exitView;
@property (nonatomic) BOOL preEnableAutoplay;
@property (nonatomic) BOOL preShowPreview;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) UIButton publishButton;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton chooseCoverButton;
@property (nonatomic) AWEStickerContainerFakeProfileView fakeFeedInfoView;
@property (nonatomic) BOOL isPublishButtonClick;
@property (nonatomic) @? publishDidClickBlock;
@property (nonatomic) @? didDismissBlock;
@property (nonatomic) @? chooseCoverDidClickedBlock;
@property (nonatomic) BOOL saveCover;
@property (nonatomic) BOOL enableNoteStyleCover;
@property (nonatomic) AWEStudioComposerPublishBasicFeature basicFeature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backButtonClicked:;
- (id)didDismissBlock;
- (void)setDidDismissBlock:;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:;
- (void)setIsFirstAppear:;
- (void)playerCurrentPlayTimeChanged:;
- (id)publishButton;
- (void)setPublishButton:;
- (void)p_dismiss;
- (void)updatePreviewImage;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (id)basicFeature;
- (id)exitView;
- (void)setExitView:;
- (id)publishDidClickBlock;
- (void)setPublishDidClickBlock:;
- (id)fakeFeedInfoView;
- (void)setFakeFeedInfoView:;
- (void)setBasicFeature:;
- (void)setSaveCover:;
- (void)setChooseCoverDidClickedBlock:;
- (void)setEnableNoteStyleCover:;
- (BOOL)isPublishButtonClick;
- (void)setIsPublishButtonClick:;
- (BOOL)saveCover;
- (id)chooseCoverDidClickedBlock;
- (id)chooseCoverButton;
- (void)configPublishButtonIconWithArrowGroup:;
- (void)publishButtonClicked:;
- (void)chooseButtonClicked:;
- (void)setChooseCoverButton:;
- (void)setPreSuperview:;
- (void)handleBecomeActiveNotice:;
- (void)setPreEnableAutoplay:;
- (BOOL)useNewSlidesCoverEdit;
- (id)preSuperview;
- (BOOL)enableNoteStyleCover;
- (BOOL)preEnableAutoplay;
- (BOOL)preShowPreview;
- (void)setPreShowPreview:;
- (id)backButton;
- (void)setConfig:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (id)initWithConfig:;
- (id)config;
- (void)viewDidLoad;
- (void)setBackButton:;
- (void)dismissViewControllerAnimated:completion:;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)previewImageView;
- (void)setPreviewImageView:;
- (BOOL)isFirstAppear;
- (void)resetPlayer;
- (void)tapAction:;
@end
