@interface EDActivityRegistry : NSObject
@property (nonatomic) EDActivityPersistence activityPersistence;
@property (nonatomic) EDPersistenceHookRegistry hookRegistry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)hookRegistry;
- (id)activityPersistence;
- (void)activityWithID:setCompletedCount:totalCount:;
- (void)activityWithID:setUserInfoObject:forKey:;
- (void)activityWithID:finishedWithError:;
- (void)startedActivity:;
- (void)removedActivityWithID:;
- (void)registerActivityObserver:completion:;
- (id)initWithHookRegistry:activityPersistence:;
+ (id)log;
@end
