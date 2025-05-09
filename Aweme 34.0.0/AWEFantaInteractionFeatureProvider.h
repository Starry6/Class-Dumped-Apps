@interface AWEFantaInteractionFeatureProvider : NSObject
@property (nonatomic) AWEFantaInteractionCollection lastSessionInteractionCollection;
@property (nonatomic) AWEFantaInteractionCollection currentSessionInteractionCollection;
@property (nonatomic) AWEFantaInteractionCollection feedInteractionCollection;
@property (nonatomic) q lastFeedRequestVideoCount;
@property (nonatomic) NSString launchModeV2;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} feedRequestAndLaunchLock;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} interactionLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onDataCollector:collectData:;
- (void)p_addObserver;
- (id)featureForKey:;
- (void)onApplicationWillTerminate:;
- (void)onSessionStart:;
- (id)currentSessionInteractionCollection;
- (id)feedInteractionCollection;
- (id)lastSessionInteractionCollection;
- (void)setLastFeedRequestVideoCount:;
- (void)setLastSessionInteractionCollection:;
- (long long)lastFeedRequestVideoCount;
- (void)recordWithPlayInteraction:referString:;
- (void)setLaunchModeV2:;
- (void)updateLastFeedRequestVideoCount:;
- (void)handleInteractionFeatureWithType:toDict:;
- (id)launchModeV2;
- (long long)interactionCountWithLifeCycle:playInteraction:referString:;
- (void)fantaFeatureUpdateWithKey:info:;
- (void)loadPlayInteractionFeatureProvider;
- (void)setCurrentSessionInteractionCollection:;
- (void)setFeedInteractionCollection:;
- (id)feedRequestAndLaunchLock;
- (void)setFeedRequestAndLaunchLock:;
- (id)interactionLock;
- (void)setInteractionLock:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
