@interface AWEPostPageMusicElement : AWEPostPageCellElement
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWEPublishMusicTableViewCell publishMusicCell;
@property (nonatomic) UIView<ACCScrollStringButtonProtocol> selectMusicCapsule;
@property (nonatomic) ACCPanelViewController panelViewController;
@property (nonatomic) ACCMusicBizComponent musicBiz;
@property (nonatomic) BOOL isAutoSdelectingMusic;
@property (nonatomic) AWEPostPageMusicBeatsService beatService;
@property (nonatomic) BOOL appearing;
@property (nonatomic) BOOL isEditState;
@property (nonatomic) UIColor musicCapsuleBackgroundColor;
@property (nonatomic) RACDisposable disapose;
@property (nonatomic) UIView pickerMaskView;
@property (nonatomic) BOOL needPauseMusicTemporarily;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelViewController;
- (void)setPanelViewController:;
- (id)publishViewModel;
- (void)elementAppear;
- (id)beatService;
- (void)setBeatService:;
- (void)panelViewController:willShowPanelView:;
- (void)panelViewController:willDismissPanelView:;
- (BOOL)allowApplyAutoMusicWithEditMusicService:;
- (id)slidesService;
- (BOOL)forceReceiveEvents;
- (BOOL)imageAlbumShortenCreationEnable;
- (id)publishMusicCell;
- (id)musicBiz;
- (BOOL)isEditState;
- (void)setNeedPauseMusicTemporarily:;
- (BOOL)needPauseMusicTemporarily;
- (void)setupEditMusicEnv;
- (void)setIsAutoSdelectingMusic:;
- (void)setupMusicData;
- (void)setupSelectMusicCapsuleIfNeed;
- (void)setMusicBiz:;
- (void)updateMusicUI;
- (id)selectMusicCapsule;
- (void)setMusicCapsuleBackgroundColor:;
- (void)updateSelectMusicCapsule;
- (void)updateSelectMusicCapsuleCoverAndTitle;
- (void)updateMusicButtonLayout;
- (BOOL)isAutoSdelectingMusic;
- (id)musicCapsuleBackgroundColor;
- (void)setDisapose:;
- (void)refreshMusicWhenEditPageSaveBack;
- (void)setIsEditState:;
- (void)handleBeginTextEdit;
- (void)handleEndTextEdit;
- (id)disapose;
- (void)updateMusicTableCell;
- (unsigned long long)scrollStringAnimationType;
- (void)selectMusicCapsuleClicked;
- (void)didClickCloseButtonOnMusicCapsule;
- (void)pickerMaskViewTapped;
- (id)pickerMaskView;
- (void)didClickedClearOrChooseMusicButton:;
- (id)pickerContainerViewController;
- (void)setPublishMusicCell:;
- (void)setSelectMusicCapsule:;
- (void)setPickerMaskView:;
- (void)cleanUp;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (BOOL)isAppearing;
- (id)containerViewController;
- (void)viewWillAppear:;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (id)cell;
- (void)setAppearing:;
- (void)addObservers;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)didSelect;
- (void)showMusicPicker;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
