@interface AWETeenQualityService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) AWETeenQualityScene activeScene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activeScene;
- (void)teenModeDidChange:isLogout:;
- (void)onSceneStart:subSceneName:;
- (void)p_setupNotification;
- (void)reportCustomMonitor:params:;
- (void)onSectionStart:subSceneName:identifier:sectionName:;
- (void)onSectionFinish:subSceneName:identifier:sectionName:;
- (void)onSceneStart:subSceneName:identifier:description:;
- (void)onSceneFinishBySuccess:identifier:subSceneName:description:;
- (void)onSceneFinishByCancel:identifier:subSceneName:isNetworkError:description:;
- (void)onSceneFinishByFail:identifier:subSceneName:isNetworkError:description:;
- (void)removeSceneWithKey:;
- (void)onSceneStart:subSceneName:identifier:;
- (void)applicationEnterBackgroundNotification;
- (void)applicationEnterForegroundNotification;
- (void)applicationTerminateNotification;
- (void)setActiveScene:;
- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
+ (id)sharedInstanced;
@end
