@interface AWEIMHalfScreenMuteSettingsViewModel : NSObject
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) RxPromise ongoingRequestingPromise;
@property (nonatomic) BOOL currentAccountIsGroupOwner;
@property (nonatomic) NSArray muteSettingsViewModels;
@property (nonatomic) NSArray muteSettingsFiltersViewModels;
@property (nonatomic) NSArray didUpatedIndexs;
@property (nonatomic) q mutingMask;
@property (nonatomic) BOOL isFolded;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double collectionViewInsetHeight;
@property (nonatomic) BOOL shouldDisplayMutingFilterEntry;
@property (nonatomic) BOOL removeServerFlag;
@property (nonatomic) <AWEIMHalfScreenMuteSettingsDelegate> delegate;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)con;
- (void)setCon:;
- (void)setIsFolded:;
- (BOOL)shouldDisplayMutingFilterEntry;
- (id)initWithCon:extraParams:;
- (void)vc_viewDidLoad;
- (void)didTapOnCloseBtn;
- (id)muteSettingsViewModels;
- (void)didSwitchToSetting:;
- (void)didConfirmChangingFilter;
- (void)didCancelChangingFilter;
- (id)muteSettingsFiltersViewModels;
- (void)didSelectFilter:;
- (void)setShouldDisplayMutingFilterEntry:;
- (void)setCollectionViewInsetHeight:;
- (void)setRemoveServerFlag:;
- (void)__setupDataSource:;
- (BOOL)currentAccountIsGroupOwner;
- (BOOL)removeServerFlag;
- (void)setMuteSettingsFiltersViewModels:;
- (BOOL)__enableFoldChatOption;
- (void)setMuteSettingsViewModels:;
- (void)setMutingMask:;
- (long long)mutingMask;
- (BOOL)__importantMessagesFiltingIsVisible;
- (void)__updateImportantMessagesOnlySubtitle:;
- (void)__updateTypeMuteAnyMessagesSubtitle:isMutingAllMessages:;
- (double)collectionViewInsetHeight;
- (void)setDidUpatedIndexs:;
- (id)__confirmChangeToMask:__confirmChangeToSettingSwitch:;
- (void)__requestUpdateToSettingMask:foldStatus:;
- (void)p_trackMuteChangeWithMast:;
- (id)__commonTrackingParams;
- (id)ongoingRequestingPromise;
- (void)setOngoingRequestingPromise:;
- (void)__restoreToLocalCachedStatus;
- (void)__updateDataSourceWithMuteSettingsMask;
- (id)__trackStringMap;
- (void)__trackChatMuteClick;
- (id)didUpatedIndexs;
- (void)setCurrentAccountIsGroupOwner:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)collectionViewHeight;
- (void)setCollectionViewHeight:;
- (BOOL)isFolded;
@end
