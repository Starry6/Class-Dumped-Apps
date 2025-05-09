@interface AWEPublishAdvanceSettingsDataController : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEPublishAdvanceSettingsDuetPermissionItem duetPermissionItem;
@property (nonatomic) AWEPublishAdvanceSettingsDuetPermissionItem duetOnlyPermissionItem;
@property (nonatomic) AWEPublishAdvanceSettingsDuetPermissionItem storyPermissionItem;
@property (nonatomic) AWEPublishAdvanceSettingsJoinMixItem joinMixItem;
@property (nonatomic) AWEPublishAdvanceSettingsItem downloadPermissionItem;
@property (nonatomic) AWEPublishAdvanceSettingsItem paymentPermissionItem;
@property (nonatomic) AWEPublishAdvanceSettingsItem rewardPermissionItem;
@property (nonatomic) AWEPublishAlbumManager albumSetting;
@property (nonatomic) AWEPublishAdvanceSettingsItem productDetectItem;
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSArray editorSections;
@property (nonatomic) NSArray publisherSections;
@property (nonatomic) NSArray duplicateSections;
@property (nonatomic) NSArray lastPublishAndAdvanceSettingsPopupItems;
@property (nonatomic) <AWEPublishAdvanceSettingsDataControllerDelegate> delegate;
@property (nonatomic) NSArray sections;
@property (nonatomic) NSMutableArray cellClassArray;
@property (nonatomic) double menuHeight;
@property (nonatomic) double subMenuHeight;
@property (nonatomic) q scene;
@property (nonatomic) AWEVideoPublishViewModel model;
@property (nonatomic) double contentHeightWithoutNavigationView;
@property (nonatomic) double headerHeight;
@property (nonatomic) double navigationViewHeight;
@property (nonatomic) BOOL isShowingDecouplingTips;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) <AWEPublishAndAdvanceSettingsPopup> popup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)aAWEStudioGlobalConfig;
- (BOOL)isPrivateAccount;
- (id)downloadForbidToast;
- (id)duetForbidToast;
- (id)storyForbidToast;
- (id)cellClassArray;
- (id)shareToStorySettingTitle;
- (id)duetPermissionTextDictEnglish;
- (void)setCellClassArray:;
- (id)duetPermissionInitialState;
- (BOOL)shouldForbidDownload;
- (BOOL)downloadPermissionInitialState;
- (void)setDownloadPermissionItem:;
- (id)commentPermissionTextDict;
- (BOOL)shouldForbidDuet;
- (id)duetPermissionTextDict;
- (BOOL)shouldForbidShareAsStory;
- (void)updateSelecterSettings:atIndex:withCompletion:;
- (id)downloadPermissionItem;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (id)aAWEStudioPublishAwemeAdapter;
- (id)aACCMidVideoCreationProtocol;
- (BOOL)needUseChapterPoint;
- (void)addUserDeclarationItemIfNeeded;
- (void)createDuplicate;
- (void)recoverByDuplicate;
- (void)prepareForAdvanceSettingsCellClickedWithCompletion:;
- (BOOL)isShowingDecouplingTips;
- (void)setIsShowingDecouplingTips:;
- (id)albumSetting;
- (void)setAlbumSetting:;
- (id)aAWEStudioChapterAdapter;
- (void)reloadPaymentItemIfNeeded:;
- (id)userDeclarationIndicatorText;
- (id)productDetectModel;
- (void)configDuetDownloadStatusWithoutAdvanceSettings;
- (void)constructItems;
- (id)publisherSections;
- (void)setDuplicateSections:;
- (id)duplicateSections;
- (void)updateSwitcherSetting:atIndex:withCompletion:;
- (id)itemOrderForCardStyle;
- (id)itemWithKey:scene:;
- (void)setEditorSections:;
- (void)setPublisherSections:;
- (id)editorSections;
- (id)lastPublishAndAdvanceSettingsPopupItems;
- (void)setLastPublishAndAdvanceSettingsPopupItems:;
- (void)sortAdvanceItemsArray;
- (id)paymentPermissionItem;
- (void)p_trackPublishShareStatus:platform:;
- (void)trackClickAdvancedSettingsEvent;
- (void)updateAdvanceConstructItems;
- (BOOL)shouldShowDecouplingPopupForPrivateAccount;
- (void)showDecouplingPopupForPrivateAccountWithCompletion:;
- (id)commentPermissionTextDictEnglish;
- (id)danmakuPermissionTextDict;
- (void)closeDownloadPermissionItemWithGrayed:;
- (void)closeDuetPermissionItemWithGrayed:;
- (void)closeDuetOnlyPermissionItemWithGrayed:;
- (void)closeStoryPermissionItemWithGrayed:;
- (BOOL)enableOnlyEditPageShowAdvanceSetting;
- (void)p_updateAdvanceConstructItemsToSimplifiedPanel;
- (void)p_updateAdvanceConstructItemsToNormalPanel;
- (BOOL)p_isNeedFilterWithSettingKey:;
- (void)updatePaymentPermissionItemTitleIfNeed;
- (void)addDownloadPermissionItemIfNeed;
- (void)addDuetPermissionItemIfNeed;
- (id)duetPermissionItem;
- (id)duetOnlyPermissionItem;
- (id)storyPermissionItem;
- (void)addChapterItemIfNeed;
- (id)storyPermissionInitialState;
- (void)addSaveDraftWhenSaveAlbumItemIfNeed;
- (void)addSaveAlbumItemIfNeed;
- (void)addSaveWithWatermarkItemIfNeed;
- (void)addHDPublishItemIfNeed;
- (void)addPaymentPermissionItemIfNeed;
- (void)addJoinMixItemIfNeed;
- (void)addProductDetectItemAndBindViewModelIfNeed;
- (void)addCommentPermissionItemIfNeed;
- (void)addDanmakuPostPermissionItemIfNeed;
- (BOOL)setupUserDeclarationItemIfNeeded;
- (void)handleProductDetectItemIfNeed;
- (void)p_notifyProductDetectAbilityChangedNeedToast:;
- (BOOL)shouldAddDownloadItem;
- (void)setPaymentPermissionItem:;
- (BOOL)shouldAddJoinMix;
- (void)setJoinMixItem:;
- (id)joinMixItem;
- (void)addDuetPermissionItemIfNeedWhenEnablePermissionOptimation;
- (void)addDuetPermissionItemIfNeedWhenDisablePermissionOptimation;
- (id)commentPermissionInitialState;
- (id)danmakuPermissionInitialState;
- (id)productDetectItem;
- (void)updateJoinMixStatusIfNeed;
- (void)updateAdvanceSettingsOpenedToFriends;
- (BOOL)shouldAddDuetItem;
- (void)setDuetPermissionItem:;
- (double)navigationViewHeight;
- (void)setSubMenuHeight:;
- (void)setDuetOnlyPermissionItem:;
- (BOOL)p_isDailyPath;
- (void)setStoryPermissionItem:;
- (BOOL)p_shouldShowProductDetect;
- (void)setProductDetectItem:;
- (double)menuHeight;
- (double)subMenuHeight;
- (void)setMenuHeight:;
- (void)updateAdvanceSettingsWithPrivacyOption:originalPrivacyType:;
- (void)reloadChapterItemIfNeeded;
- (void)advanceSettingPageWillAppear;
- (void)prepareForAdvanceSettingsCellClickedWithCompletion:isNeedTrack:;
- (void)markDecouplingPopupAndHintForPrivateAccountIfNeeded;
- (void)updateAdvanceSettingsForPopup;
- (id)indexPathWithSettingKey:;
- (double)contentHeightWithoutNavigationView;
- (void)highlightDownloadPermissionItem;
- (void)highlightDuetPermissionItem;
- (void)highlightDuetOnlyPermissionItem;
- (void)highlightStoryPermissionItem;
- (BOOL)shouldAddRewardItem;
- (id)indexPathsWithIndexSet:;
- (id)rewardPermissionItem;
- (void)setRewardPermissionItem:;
- (void)setModel:;
- (double)headerHeight;
- (void)setScene:;
- (id)items;
- (id)delegate;
- (long long)scene;
- (void)setItems:;
- (id)sections;
- (id)initWithModel:;
- (id)model;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setDelegate:;
- (id)popup;
- (void)setPopup:;
- (double)cellHeight;
- (double)bottomOffset;
+ (Class)aAWEStudioGlobalConfigClass;
+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (Class)aACCMidVideoCreationProtocolClass;
+ (Class)aAWEStudioChapterAdapterClass;
@end
