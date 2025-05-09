@interface AWEPublishAdvanceSettingPreviewVideoController : UIViewController
@property (nonatomic) UIView previewVideoContainerView;
@property (nonatomic) UIView previewVideoView;
@property (nonatomic) UILabel previewLabel;
@property (nonatomic) AWEPublishPaymentPreviewProgressView progressSlider;
@property (nonatomic) UILabel progressTimeLabel;
@property (nonatomic) UIButton playButton;
@property (nonatomic) UIView configTimeView;
@property (nonatomic) UIScrollView timeSuggestView;
@property (nonatomic) UILabel timeConfigLabel;
@property (nonatomic) AWEDiscoverDInsetLabel currentSelectLabel;
@property (nonatomic) DUXBasicSheet currentSheet;
@property (nonatomic) double currentSheetDefaultHeight;
@property (nonatomic) UIButton saveButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) q playerStatus;
@property (nonatomic) double configSeconds;
@property (nonatomic) double trialStartSeconds;
@property (nonatomic) double trialEndSeconds;
@property (nonatomic) NSArray defaultTimeConfigs;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) BOOL isResourceLoadCompleted;
@property (nonatomic) UILabel trialDurationLabel;
@property (nonatomic) AWEPublishPaymentPreviewSlider slider;
@property (nonatomic) AWEPublishPaymentPreviewTimeInfoView startTimeInfoView;
@property (nonatomic) AWEPublishPaymentPreviewTimeInfoView endTimeInfoView;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) <AWEPostPageReeditService> reeditService;
@property (nonatomic) AWECodeGenDouyinContentPayChargeRecommendConfigResponse recommendConfigModel;
@property (nonatomic) Q currentPreviewType;
@property (nonatomic) AWEPublishPaymentPreviewItem item;
@property (nonatomic) @? updateItemBlock;
@property (nonatomic) @? updatePreviewTypeBlock;
@property (nonatomic) NSArray recommendPreviewTimes;
@property (nonatomic) q totalDuration;
@property (nonatomic) NSString previousName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (id)publishViewModel;
- (void)configureUI;
- (void)slider:valueDidChanged:;
- (void)playStatusChanged:;
- (id)trackCommonParams;
- (BOOL)hasAppear;
- (void)setHasAppear:;
- (void)playerCurrentPlayTimeChanged:;
- (void)setPublishViewModel:;
- (id)editService;
- (void)setEditService:;
- (id)previewLabel;
- (void)setPreviewLabel:;
- (void)setReeditService:;
- (id)reeditService;
- (id)createSuggestLabel;
- (id)updateItemBlock;
- (void)suggestLabelTapped:;
- (void)setUpdateItemBlock:;
- (id)recommendConfigModel;
- (void)setRecommendConfigModel:;
- (double)configSeconds;
- (unsigned long long)currentPreviewType;
- (void)setCurrentSheetDefaultHeight:;
- (void)setRecommendPreviewTimes:;
- (void)setCurrentPreviewType:;
- (void)setUpdatePreviewTypeBlock:;
- (void)resetEditService;
- (double)currentSheetDefaultHeight;
- (void)setupConfigTimeView;
- (void)configureInitialData;
- (id)previewVideoView;
- (id)previewVideoSize;
- (id)trialDurationLabel;
- (id)startTimeInfoView;
- (id)endTimeInfoView;
- (id)previewVideoContainerView;
- (void)updateTimeLabelWithCurrentTime:;
- (id)progressTimeLabel;
- (id)configTimeView;
- (void)transToConfigMore;
- (void)setTimeConfigLabel:;
- (void)setTimeSuggestView:;
- (id)defaultTimeConfigs;
- (void)setIsResourceLoadCompleted:;
- (void)setTrialStartSeconds:;
- (void)setTrialEndSeconds:;
- (void)configDefaultTrialTimeInfo;
- (double)trialStartSeconds;
- (double)trialEndSeconds;
- (void)updateTrialDurationLabelWithDuration:;
- (id)timeSuggestView;
- (void)updateSelectLabel:;
- (void)loadPlayer;
- (id)currentSelectLabel;
- (BOOL)isResourceLoadCompleted;
- (void)trackSaveButtonClick;
- (id)updatePreviewTypeBlock;
- (void)trackCloseTrytimeToastClickWithButtonType:;
- (void)trackCloseTrytimeToastShow;
- (void)setCurrentSelectLabel:;
- (void)setDefaultTimeConfigs:;
- (void)updateSaveButtonEnabledStatus;
- (id)timeConfigLabel;
- (void)showTimePickerWithBarTitle:maxDuration:minDuration:initialTime:didSelectTimeHandler:;
- (BOOL)canUseSlider;
- (void)paymentPreviewProgressView:sliderTouchBegan:;
- (void)paymentPreviewProgressView:sliderValueChanged:;
- (void)paymentPreviewProgressView:sliderTouchEnded:;
- (void)slider:beganSlideForThumb:;
- (void)slider:endSlideForThumb:;
- (id)slider:customValueTitleForNotOverValue:;
- (id)sliderValueTitleForOverMinValue:;
- (id)sliderValueTitleForOverMaxValue:;
- (id)sliderValueLabelBoundaryView:;
- (id)recommendPreviewTimes;
- (void)setPreviewVideoContainerView:;
- (void)setPreviewVideoView:;
- (void)setProgressTimeLabel:;
- (void)setConfigTimeView:;
- (void)setTrialDurationLabel:;
- (void)setStartTimeInfoView:;
- (void)setEndTimeInfoView:;
- (id)slider;
- (void)setSlider:;
- (void)addObserver;
- (void)viewDidLoad;
- (void)setItem:;
- (long long)totalDuration;
- (id)item;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)keyboardWillShow:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)saveButton;
- (void)setSaveButton:;
- (id)playButton;
- (void)setTotalDuration:;
- (void)closeButtonTapped;
- (long long)playerStatus;
- (void)setPlayButton:;
- (void)setPlayerStatus:;
- (id)progressSlider;
- (void)setProgressSlider:;
- (void)resetPlayer;
- (void)playButtonTapped;
- (id)previousName;
- (void)setPreviousName:;
- (void)saveButtonTapped;
- (id)currentSheet;
- (void)setCurrentSheet:;
@end
