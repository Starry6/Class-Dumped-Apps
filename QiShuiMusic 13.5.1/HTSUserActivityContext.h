@interface HTSUserActivityContext : NSObject
@property (nonatomic) NSString activityType;
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) NSError userActivityError;
@property (nonatomic) @? restoreHandler;
- (id)restoreHandler;
- (void)setRestoreHandler:;
- (void)setUserActivityError:;
- (id)userActivityError;
- (id)activityType;
- (void)setActivityType:;
- (void).cxx_destruct;
- (id)userActivity;
- (void)setUserActivity:;
@end
