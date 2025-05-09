@interface IESECMultiMallContext : NSObject
@property (nonatomic) BOOL hasLoaded;
@property (nonatomic) IESECMallChannelManager channelManager;
@property (nonatomic) IESECMallMultiTabResp responseModel;
@property (nonatomic) q defaultSelectedIndex;
@property (nonatomic) NSMutableDictionary tabRouterParamsMap;
@property (nonatomic) IESECMallTabTrackerManager trackerManager;
@property (nonatomic) NSDictionary tabExtraInfo;
@property (nonatomic) NSString mallEnvID;
@property (nonatomic) NSString mallContainerEnterFrom;
@property (nonatomic) NSString mallContainerReferString;
@property (nonatomic) NSString mallContainerPageName;
@property (nonatomic) NSString preferredTabID;
@property (nonatomic) NSDictionary routerParams;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) NSString openTime;
@property (nonatomic) BOOL isSafeMode;
@property (nonatomic) NSString pageTheme;
@property (nonatomic) <IESECMallTabFrameService> tabFrameService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabFrameService;
- (void)clearTabExtraInfo:;
- (BOOL)coldLaunchRequestTopMultiTab;
- (id)currentSkinContextWithTabid:;
- (id)defaultSkinInfoWithTabId:;
- (void)enterSafeMode;
- (id)hostVcWithTabId:;
- (BOOL)isColdLaunch;
- (BOOL)isSafeMode;
- (id)mallContainerEnterFrom;
- (id)mallContainerPageName;
- (id)mallContainerReferString;
- (id)mallEnvID;
- (BOOL)needClearCacheData:;
- (long long)numberOfControllers;
- (id)openTime;
- (id)preferredTabID;
- (void)prepareContextInfo;
- (void)prepareTabRouterParams;
- (id)previousPageSourceForTabID:;
- (void)requestTopMultiTabInfo;
- (id)respCacheKey;
- (id)routerParams;
- (void)setDefaultSelectedIndex:;
- (void)setIsColdLaunch:;
- (void)setIsSafeMode:;
- (void)setMallContainerEnterFrom:;
- (void)setMallContainerPageName:;
- (void)setMallContainerReferString:;
- (void)setMallEnvID:;
- (void)setOpenTime:;
- (void)setPreferredTabID:;
- (void)setRouterParams:;
- (void)setTabExtraInfo:;
- (void)setTabFrameService:;
- (void)setTabRouterParamsMap:;
- (void)setTrackerManager:;
- (id)skinCacheKey;
- (id)skinInfoWithTabId:theme:;
- (void)storeSkinInfo:;
- (id)tabExtraInfo;
- (id)tabInfoWithTabId:;
- (id)tabRouterParamsMap;
- (id)tabRouterParamsWithTabID:;
- (void)trackerColdLaunchEvent:;
- (id)trackerManager;
- (void)updateTabExtraInfo:;
- (id)viewControllerForIndex:;
- (id)init;
- (id)channelManager;
- (BOOL)hasLoaded;
- (void).cxx_destruct;
- (id)description;
- (void)setChannelManager:;
- (long long)defaultSelectedIndex;
- (id)responseModel;
- (void)setResponseModel:;
- (id)defaultResponse;
- (void)setHasLoaded:;
- (id)pageTheme;
- (void)setPageTheme:;
@end
