@interface AWERecordSelectMusicComponent : NSObject
@property (nonatomic) FPWritableStateFlow stateFlow;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) AWERecordSelectMusicLayoutAction layoutAction;
@property (nonatomic) <ACCMusicModelProtocol> lastMusicOnHotSwitch;
@property (nonatomic) ACCRecordSelectMusicServiceImpl viewModel;
@property (nonatomic) ACCVideoEditMusicViewModel editMusicViewModel;
@property (nonatomic) ACCRecorSelectMusicSubscriber serviceSubscriber;
@property (nonatomic) ACCRecordSelectMusicPanel musicPanelService;
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) <ACCRecordPropService> propService;
@property (nonatomic) <ACCRecordSelectMusicAutoPlayService> selectMusicAutoPlayService;
@property (nonatomic) <ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (nonatomic) BOOL hasSelectMusic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) FPWritableStateFlow typeErasedStateFlow;
- (void)didMount;
- (id)typeErasedStateFlow;
- (id)initWith:serviceProvider:;
- (void)loadViewState;
- (id)cameraService;
- (void)setCameraService:;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)bindViewModel;
- (id)switchModeService;
- (id)propService;
- (void)setSwitchModeService:;
- (void)setPropService:;
- (void)switchModeServiceWillChangeToMode:oldMode:;
- (void)lengthModeDidChanged;
- (id)duetSessionSwtichService;
- (id)caculateMusicId;
- (void)willSwitchToDuetMode;
- (void)didSwitchToDuetMode;
- (void)finishSwitchToNormalMode;
- (void)setDuetSessionSwtichService:;
- (void)setHasSelectMusic:;
- (BOOL)hasSelectMusic;
- (id)stateFlow;
- (void)p_readExistData;
- (void)didClickSelectMusicButton;
- (id)editMusicViewModel;
- (id)serviceSubscriber;
- (void)updateSelectMusic;
- (void)didClickCloseButtonOnMusicButton;
- (void)updateSelectMusicEnable;
- (void)updateSelectMusicButtonStatus;
- (void)startAsyncLoadingMusic;
- (void)endAsyncLoadingMusic;
- (BOOL)canShowMusicView;
- (id)musicPanelService;
- (void)setEditMusicViewModel:;
- (void)setServiceSubscriber:;
- (void)setMusicPanelService:;
- (void)setSelectMusicAutoPlayService:;
- (id)selectMusicAutoPlayService;
- (void)setStateFlow:;
- (void)bindLifecycle;
- (void)setLastMusicOnHotSwitch:;
- (id)lastMusicOnHotSwitch;
- (void)dealloc;
- (id)repository;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setRepository:;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (void)setViewContainer:;
- (id)viewContainer;
- (id)layoutAction;
- (void)setLayoutAction:;
+ (id)initialUIStateWith:;
+ (Class)stateType;
@end
