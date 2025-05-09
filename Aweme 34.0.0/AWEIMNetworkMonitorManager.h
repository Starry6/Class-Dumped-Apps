@interface AWEIMNetworkMonitorManager : NSObject
@property (nonatomic) double startIM;
@property (nonatomic) double coldLaunch;
@property (nonatomic) double enterMessageTab;
@property (nonatomic) double lastEnterChat;
@property (nonatomic) q enterChatCount;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) Q currentPage;
@property (nonatomic) NSDictionary sceneMap;
@property (nonatomic) @ pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)startIM;
- (void)setIsFirst:;
- (void)setColdLaunch:;
- (BOOL)checkDropRequestPath:cmd:baseURL:isLongConnection:;
- (void)setStartIM:;
- (void)setEnterMessageTab:;
- (void)setLastEnterChat:;
- (long long)enterChatCount;
- (void)setEnterChatCount:;
- (void)markTimingWithScene:;
- (double)coldLaunch;
- (double)enterMessageTab;
- (double)lastEnterChat;
- (BOOL)checkDropRequestUrl:;
- (id)getRequestScene;
- (id)timingParams;
- (void)trackUploadPerformanceWithContext:uploader:;
- (id)sceneMap;
- (void)markEnterPage:;
- (void)markLeavePage:;
- (void)markPageVCForViewDidLoad:context:;
- (void)markPageVCForAppear:context:;
- (void)markPageVCForDisappear:;
- (void)setSceneMap:;
- (id)init;
- (unsigned long long)currentPage;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (BOOL)isFirst;
- (void)setPageContext:;
- (id)pageContext;
+ (id)downgradeConfig;
+ (BOOL)p_isInDowngradeTimeWithConfig:;
+ (void)p_trackDowngrade:scene:realDrop:ruleID:;
+ (id)beforeParamsWithUrl:preferMethod:extra:;
+ (id)extraParamsWithResponse:error:;
+ (id)extraParamsWithTimingInfo:error:;
+ (BOOL)enableTrackOptimize;
+ (id)extraParamsWithPayload:error:;
+ (void)trackUploadPerformanceWithContext:uploader:;
+ (id)extraParamsWithUploadRespons:error:;
+ (void)trackRequestPerformanceWithRequestIfNeed:preferMethod:;
+ (void)trackDownloadPerformanceWithRequestIfNeed:;
+ (id)sharedInstance;
@end
