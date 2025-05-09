@interface AWENewPrivacySettingViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString highlightCellID;
@property (nonatomic) AWEBubble nearbyNoticeBubble;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSString defaultOpen;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL hasShownPasteboardSetting;
@property (nonatomic) AWENewPrivacySettingDataController dataController;
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) BOOL isUserPrivate;
@property (nonatomic) BOOL needInvisibleToast;
@property (nonatomic) NSArray sectionTitleArray;
@property (nonatomic) BOOL privacySettingOptimize;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) q sourceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (void)removeLoadingView;
- (void)setDataController:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)backBtnClicked:;
- (BOOL)hasAppear;
- (void)setHasAppear:;
- (void)configDataSource;
- (void)setNeedInvisibleToast:;
- (void)highlightCellIfNeeded;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (id)identifierForCardUIStyleWithOriginalID:;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (BOOL)privacySettingOptimize;
- (void)setPrivacySettingOptimize:;
- (void)setIsUserPrivate:;
- (void)p_addModel:intoArray:;
- (void)p_addLiveSetting:;
- (void)p_trackCellSelected:;
- (BOOL)isUserPrivate;
- (id)p_findSameModelFromRealyDataSourceWithModel:;
- (void)listControlDidChange;
- (void)setHighlightCellID:;
- (void)setDefaultOpen:;
- (void)__onUserPrivacySettingChange;
- (id)vcBGColor;
- (void)__addLoadingViewToVC;
- (void)__removeLoadingViewFromVC;
- (void)__tryOpenChatPrivacySetting;
- (void)__openChatPrivacySettingIfNeed;
- (id)defaultOpen;
- (void)handleSelectCellBlock:indexPath:;
- (void)refreshSettings:;
- (id)nearbyNoticeBubble;
- (void)_removeNearbyNoticeBubble;
- (id)sectionTitleArray;
- (BOOL)needInvisibleToast;
- (void)p_highlightCellIfNeeded;
- (id)highlightCellID;
- (id)__indexPathForUniqueIDString:;
- (void)highlightCellWithIndex:;
- (void)configDataSourceV1;
- (void)p_addViewerAndVisitorSettingToArray:;
- (void)p_addSystemAuthorizationSetting:;
- (void)p_addLearnAndManagerAdPushSetting:;
- (void)setSectionTitleArray:;
- (void)setNearbyNoticeBubble:;
- (BOOL)hasShownPasteboardSetting;
- (void)setHasShownPasteboardSetting:;
- (void)setSourceType:;
- (long long)sourceType;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (void)reload;
- (id)tableView;
- (id)loadingView;
- (void)scrollViewDidScroll:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForHeaderInSection:;
- (id)dataArray;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)setDataArray:;
- (void)addLoadingView;
- (void)configData;
- (id)dataController;
- (id)sheet;
- (void)setSheet:;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
+ (id)settingSearchRegisterDicV1;
+ (id)settingSearchRegisterArray_interaction;
+ (id)settingSearchRegisterArray_relationAndAccount;
+ (id)settingSearchRegisterArray_findMyWay;
+ (id)settingSearchRegisterArray_relation;
+ (id)settingSearchRegisterArray_awemeAndStory;
+ (id)settingSearchRegisterArray_interactionV1;
+ (id)settingSearchRegisterArray_others;
@end
