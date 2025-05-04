@interface AWEFollowFeedLeftPanEnterProfileGuideManager : NSObject
@property (nonatomic) <AWEFollowFeedAlertShowDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedManager;
@end
