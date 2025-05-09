@interface AWEInTodayPlayerViewController : UIViewController
@property (nonatomic) NSMutableArray memoriesPlayerModels;
@property (nonatomic) AWEPastMemoriesResponseModel awemeResponseModel;
@property (nonatomic) AWECKAAAssetResponseModel assetResponseModel;
@property (nonatomic) AWEInTodaySchemaData schemaData;
@property (nonatomic) AWEInTodayAggregateConfig aggregateConfig;
@property (nonatomic) UIViewController<AWEMemoriesPlayerContainerService> playerContainerViewController;
@property (nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> dataController;
@property (nonatomic) NSMutableArray awemeMemoriesPlayerModels;
@property (nonatomic) NSObject<AWEMemoriesPlayerConfigProtocol> playerConfigManager;
@property (nonatomic) NSObject<AWEMemoriesPlayerControlProtocol> playerControlManager;
@property (nonatomic) NSDateFormatter dateFormatter;
@property (nonatomic) AWEInTodayPlayerPublishHandler publishHandler;
@property (nonatomic) AWEInTodayPlayerShareHandler shareHandler;
@property (nonatomic) AWEInTodayPlayerGridHandler gridHandler;
@property (nonatomic) AWEInTodayPlayerScreenObserver screenObserver;
@property (nonatomic) UIButton listViewControllerButton;
@property (nonatomic) UIButton shareButton;
@property (nonatomic) UIButton mainButton;
@property (nonatomic) UIButton publishDiaryButton;
@property (nonatomic) BOOL isShowingSnackBar;
@property (nonatomic) BOOL isAggregated;
@property (nonatomic) BOOL hasAnchored;
@property (nonatomic) BOOL initialLocalAssetAuthority;
@property (nonatomic) BOOL isFirstEnter;
@property (nonatomic) BOOL specificMemoriesLoaded;
@property (nonatomic) NSArray themeModelFromAnchor;
@property (nonatomic) NSMutableArray playedThemeIds;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterPage;
@property (nonatomic) NSString shootWay;
@property (nonatomic) BOOL fromFlashMob;
@property (nonatomic) BOOL isOwnPhoto;
@property (nonatomic) BOOL needTransition;
@property (nonatomic) BOOL fromAnchor;
- (void)setEnterFrom:;
- (id)enterMethod;
- (id)enterFrom;
- (id)zoomTransitionEndView;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (long long)zoomTransitionItemOffset;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (id)awe_preferredTransitionProviderClassNameForContext:;
- (void)setDataController:;
- (void)setShootWay:;
- (id)shootWay;
- (BOOL)needTransition;
- (void)setNeedTransition:;
- (void)setIsFirstEnter:;
- (BOOL)isFirstEnter;
- (id)dateStringWithDate:;
- (void)shareButtonClicked:;
- (BOOL)isOwnPhoto;
- (void)setAwemeResponseModel:;
- (id)awemeResponseModel;
- (id)enterPage;
- (id)shareHandler;
- (void)setShareHandler:;
- (void)startShoot;
- (id)publishDiaryButton;
- (id)aggregateConfig;
- (void)setPublishDiaryButton:;
- (void)setAggregateConfig:;
- (id)playerControlManager;
- (void)setPlayerControlManager:;
- (BOOL)fromFlashMob;
- (id)initWithMemoriesPlayerModels:awemeResponseModel:assetResponseModel:schemaData:aggregateConfig:;
- (void)setIsOwnPhoto:;
- (void)setFromFlashMob:;
- (void)setFromAnchor:;
- (void)setEnterPage:;
- (id)gridHandler;
- (void)setGridHandler:;
- (void)msgSendSucceed:;
- (void)memoriesAuthorizationOpen:;
- (BOOL)shouldShowInTodayAggregatePhtotAuthorization;
- (void)showInTodayAggregatePhtotAuthorizationIfNeededEnterFrom:;
- (void)updateLastPhotoAuthorizationShowTime;
- (BOOL)fromAnchor;
- (void)loadPastMemoryMaterialData;
- (id)loadThemeModels;
- (void)landingIfNeeded;
- (void)loadMoreDataWithHandler:;
- (void)setAssetResponseModel:;
- (BOOL)isSuitableAweme:;
- (id)awemeMemoriesPlayerModels;
- (id)memoriesPlayerModels;
- (void)setPlayerContainerViewController:;
- (id)playerContainerViewController;
- (void)trackFirstFramePerformance;
- (void)setupPlayerConfigManager;
- (void)setupPlayerControlManager;
- (void)setupScreenObserver;
- (id)publishHandler;
- (BOOL)hasExitedFromSkyLight;
- (id)assetResponseModel;
- (void)cacheInTodayPlayerFirstExitFromSkyLight;
- (void)showInTodayEntranceInPrivateTips;
- (void)trackPlayerEnter;
- (void)setPlayerConfigManager:;
- (id)playerConfigManager;
- (void)playerSelectButtonClick:;
- (id)goGridButtonHiddenTypes;
- (void)publishButtonClick:;
- (id)shareButtonDisableTypes;
- (id)publishButtonDisableTypes;
- (id)themeModelTypes;
- (void)updateUIWithCurrentTileModel:topBuilder:;
- (void)updateSubTitleWithCurrentTileModel:topBuilder:;
- (void)reportThemeExitIfNeed:;
- (id)playedThemeIds;
- (BOOL)isTopMemoriesPlayerListViewController;
- (id)screenObserver;
- (id)listViewControllerButton;
- (BOOL)isShowingSnackBar;
- (void)setIsShowingSnackBar:;
- (void)aggregatePhotoWithCompletion:;
- (id)getDateStringOfModel:;
- (id)dateStringWithTimestamp:;
- (id)publishFrom;
- (BOOL)initialLocalAssetAuthority;
- (void)setInitialLocalAssetAuthority:;
- (void)setIsAggregated:;
- (BOOL)isAggregated;
- (void)loadMorePhotoLibraryWithAppendModels:completion:;
- (id)themeModelFromAnchor;
- (BOOL)specificMemoriesLoaded;
- (void)setSpecificMemoriesLoaded:;
- (void)setThemeModelFromAnchor:;
- (void)loadPastMemoryMaterialAwemeData:;
- (BOOL)hasAnchored;
- (void)setHasAnchored:;
- (void)publishDiaryButtonClick:;
- (void)listViewControllerButtonClick:;
- (id)initWithMemoriesPlayerModels:;
- (id)initWithMemoriesPlayerModels:awemeResponseModel:assetResponseModel:;
- (void)allMemoriesDidPlayedFinished;
- (void)setMemoriesPlayerModels:;
- (void)setAwemeMemoriesPlayerModels:;
- (void)setPublishHandler:;
- (void)setScreenObserver:;
- (void)setListViewControllerButton:;
- (void)setPlayedThemeIds:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setDateFormatter:;
- (long long)preferredStatusBarStyle;
- (id)dateFormatter;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)dataController;
- (void)setShareButton:;
- (id)shareButton;
- (void)setupPlayer;
- (id)schemaData;
- (id)mainButton;
- (void)setMainButton:;
- (void)setSchemaData:;
@end
