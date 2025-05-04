@interface AWECommerceSettingManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)starAtlasProfileLink;
+ (BOOL)enablePreloadComponent;
+ (BOOL)useNewEggVersion;
+ (id)byteAdSDKConfig;
+ (BOOL)enableAwesomeSplashCacheStrongCheck;
+ (long long)adGapInteractiveDuration;
+ (long long)adGapInteractiveDetailNum;
+ (long long)longVideoAdThreshold;
+ (BOOL)enableTimeObserverBoundaryCheck;
+ (BOOL)enableIAPInterception;
+ (id)enableSendStagingAdLog;
+ (id)getAdTrackerEventWithNoVideo;
+ (BOOL)enableAppStorCallInAsyncThread;
+ (BOOL)isValidCommerceAppStoreAction;
+ (id)lightMissionReportTime;
+ (BOOL)shouldAnchorLandingPageHandoverToLynxPage;
+ (BOOL)shouldUseAppStoreSDK;
+ (BOOL)forbidAnchorListRequest;
+ (BOOL)shouldRequestAppManager;
+ (BOOL)shouldOpenSplashTaskInHotsoon;
+ (BOOL)isForbidSKStoreProductViewController;
+ (BOOL)enableNewSearchTrackingCallback;
@end
