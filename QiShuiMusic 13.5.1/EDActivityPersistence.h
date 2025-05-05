@interface EDActivityPersistence : NSObject
@property (nonatomic) <EDActivityHookResponder> activityHookResponder;
- (void).cxx_destruct;
- (id)currentActivities;
- (id)startActivityOfType:userInfo:;
- (void)activityWithID:setCompletedCount:totalCount:;
- (void)activityWithID:setUserInfoObject:forKey:;
- (void)activityWithID:finishedWithError:;
- (id)initWithHookResponder:;
- (id)activityHookResponder;
- (void)setActivityHookResponder:;
@end
