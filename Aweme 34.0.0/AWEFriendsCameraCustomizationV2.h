@interface AWEFriendsCameraCustomizationV2 : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) AWEStorage storage;
@property (nonatomic) ACCToolBarSortDataSource toolBarSortDataSource;
@property (nonatomic) AWEFriendsCameraModeFactory modeFactory;
@property (nonatomic) NSNumber shouldShowPopoverForSocialTextStore;
@property (nonatomic) AWEFriendsCameraScenarioDraftModel scenarioDraftModel;
@property (nonatomic) <UIViewControllerTransitioningDelegate> customTransition;
@property (nonatomic) NSArray tabConfigs;
@property (nonatomic) BOOL isFromMainRecorder;
- (void)setScenarioDraftModel:;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:dataContext:;
- (id)scenarioDraftModel;
- (id)modeFactory;
- (void)setModeFactory:;
- (void)setCustomTransition:;
- (id)ratioStatusItem;
- (id)customTransition;
- (BOOL)isFromMainRecorder;
- (void)configLivePhotoWithScenarioConfig:;
- (void)configCaptureWithScenarioConfig:;
- (void)configGestureWithScenarioConfig:;
- (void)configRecordToolBarWithScenarioConfig:;
- (void)configSpeedControlWithScenarioConfig:;
- (void)configBeautyWithScenarioConfig:;
- (void)configRecordModeWithScenarioConfig:;
- (void)configLiveWithScenarioConfig:;
- (void)configAdavanceSettingWithScenarioConfig:;
- (void)configFilterWithScenarioConfig:;
- (void)configPropWithScenarioConfig:;
- (void)configRecordCustomizedComponentsWithScenarioConfig:;
- (void)configTextModeWithScenarioConfig:;
- (void)configEditBasicWithScenarioConfig:;
- (void)configEditToolBarWithScenarioConfig:;
- (void)configEditStickerWithScenarioConfig:;
- (void)configEditFlowControlWithScenarioConfig:;
- (void)configEditCustomizedComponentsWithScenarioConfig:;
- (void)configEditPublishFlowWithScenarioConfig:;
- (void)configPublishNaviBarWithScenarioConfig:;
- (void)configPublishCoverWithScenarioConfig:;
- (void)configPublishInputWithScenarioConfig:;
- (void)configPublishPrivacySettingWithScenarioConfig:;
- (void)configPublishFooterWithScenarioConfig:;
- (void)configPublishBasicWithScenarioConfig:;
- (id)p_editTextPageConfig;
- (id)toolBarSortDataSource;
- (id)customComponentWithClass:config:;
- (id)tabConfigs;
- (BOOL)shouldShowPopoverForSocialText;
- (id)shouldShowPopoverForSocialTextStore;
- (void)setShouldShowPopoverForSocialTextStore:;
- (void)setTabConfigs:;
- (void)setIsFromMainRecorder:;
- (id)publishListTemplate;
- (id)initialModeTitle;
- (void)setToolBarSortDataSource:;
- (void)configAlbumWithScenarioConfig:;
- (void)configEditMusicWithScenarioConfig:;
- (void)configPublishUndefinedWithScenarioConfig:;
- (void)setStorage:;
- (void)setScene:;
- (id)storage;
- (unsigned long long)scene;
- (id)initialMode;
- (void).cxx_destruct;
- (id)initWithScene:;
- (id)businessIdentifier;
@end
