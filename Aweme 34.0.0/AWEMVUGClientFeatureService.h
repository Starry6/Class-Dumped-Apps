@interface AWEMVUGClientFeatureService : HTSService
@property (nonatomic) NSDictionary features;
@property (nonatomic) Q outerFlowCounter;
@property (nonatomic) Q innerFlowCounter;
@property (nonatomic) NSNumber activeTimestamp;
@property (nonatomic) NSString currentActiveUrl;
@property (nonatomic) NSString currentActiveFeature;
@property (nonatomic) BOOL needAspectEventForMVPush;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEnable;
- (void)onAppDidBecomeActive;
- (id)currentFeatures;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)onAppLaunchWithUrl:;
- (void)onAppHandleOpenUrl:;
- (void)onAppHandleUserActivity:;
- (void)onAppHandleNotification:;
- (BOOL)startIfNeededWithUrl:tag:;
- (id)featuresForFeedType:;
- (void)requestCounterPlusOneForType:;
- (id)createInnerDataControllerForUGFeature:;
- (BOOL)isNeedAspectEventForMVPush:referString:eventName:;
- (void)setAspectEventForMVPushStatus:;
- (BOOL)disableInsertVideosForPush:;
- (unsigned long long)innerFlowCounter;
- (unsigned long long)outerFlowCounter;
- (void)setOuterFlowCounter:;
- (void)setInnerFlowCounter:;
- (void)setActiveTimestamp:;
- (void)setCurrentActiveUrl:;
- (void)setCurrentActiveFeature:;
- (id)currentActiveUrl;
- (id)currentActiveFeature;
- (id)activeTimestamp;
- (BOOL)p_isValidFeature:;
- (BOOL)needAspectEventForMVPush;
- (void)setNeedAspectEventForMVPush:;
- (long long)timestamp;
- (void)reset:;
- (id)features;
- (void)setFeatures:;
- (void).cxx_destruct;
- (BOOL)isActive;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
