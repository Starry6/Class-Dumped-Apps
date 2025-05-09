@interface IESLiveRevenueInteractXPlayGameInstance : NSObject
@property (nonatomic) <IESLiveRevenueInteractProvider> provider;
@property (nonatomic) IESLiveRevenueInteractPlayBuilder builder;
@property (nonatomic) IESLiveRevenueInteractGameModel model;
@property (nonatomic) <IESLivePlayerProtocol> player;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) IESLivePKModel pkModel;
@property (nonatomic) NSString streamUrl;
@property (nonatomic) UIViewController XPlayContainerVC;
@property (nonatomic) IESLiveXPlayGameConfiguration xPlayConfig;
@property (nonatomic) NSString appID;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL normalGameFinish;
@property (nonatomic) BOOL hasRetryRequestList;
@property (nonatomic) IESLiveRevenueInteractDurationTrackHelper durationTrackHelper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveGameXplayContainer> container;
- (id)pkModel;
- (void)setXPlayConfig:;
- (id)XPlayContainerVC;
- (void)bindAction;
- (void)changeLiveCoreAndRTCExtra;
- (id)disposable;
- (id)durationTrackHelper;
- (void)endAfterRTCMix;
- (id)gameLiveCoreExtInfo;
- (id)gameRTCExtInfo;
- (void)handleXPlayDidReceivePushCDNFailed:;
- (BOOL)hasRetryRequestList;
- (id)initWithDIContext:builder:;
- (void)initXPlayGameContainerWillAppear:;
- (void)loadXPlayGamePlayer;
- (BOOL)mixXPlayStream;
- (BOOL)normalGameFinish;
- (void)notifyLynxEvent:extraParams:;
- (void)onStartXPlayPluginListResponseReceived:;
- (void)onXPlayInstanceDestroy;
- (void)onXPlayPluginStartWithData:;
- (id)pkProvider;
- (void)retryGetPlayerStreamByListApi;
- (void)sendFrameBufferToAppId:pixelBuffer:rotation:withCMTime:;
- (void)setDisposable:;
- (void)setDurationTrackHelper:;
- (void)setHasRetryRequestList:;
- (void)setIsAnchor:;
- (void)setNormalGameFinish:;
- (void)setPkModel:;
- (void)setXPlayContainerVC:;
- (void)startAfterRTCMix;
- (void)startInteractXPlayGameComponent:linkerExtra:;
- (void)trackAudienceGameStart;
- (void)trackGameStatusBegin;
- (void)trackGameStatusEnd;
- (void)trackGameWatchDurationByChangeMode:;
- (id)xPlayConfig;
- (void)xPlayGameDidUpdateStatus:sceneType:container:;
- (void)xplayPushStreamTypeChangeToAppId:type:;
- (void)updateLayoutIfNeeded;
- (void)setProvider:;
- (id)model;
- (void)setContainer:;
- (void)setModel:;
- (id)container;
- (BOOL)isAnchor;
- (id)builder;
- (id)provider;
- (void)setAppID:;
- (id)player;
- (id)appID;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)addObserver;
- (id)controller;
- (void)messageReceived:;
- (id)streamUrl;
- (void)setStreamUrl:;
- (void)setBuilder:;
@end
