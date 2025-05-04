@interface AWEUserRecommendPreloadManager : NSObject
@property (nonatomic) NSMutableDictionary preloadTasks;
@property (nonatomic) NSMutableSet userIDsToRemove;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishRemoveFansWithUser:;
- (id)preloadTasks;
- (void)setPreloadTasks:;
- (void)willDislikeUserWithContext:;
- (void)p_reset;
- (void)p_onPersonalRecommendChanged:;
- (void)preloadDataIfNeededForType:userID:enterFrom:;
- (id)p_createTaskForType:;
- (BOOL)p_removeTask:;
- (void)p_trackPreloadForType:enterFrom:eventType:;
- (id)userIDsToRemove;
- (void)p_registerObservers;
- (void)setUserIDsToRemove:;
- (void)p_unregisterObservers;
- (id)getPreloadDataControllerForType:enterFrom:preloadCompletion:;
- (id)currentPreloadTasks;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
