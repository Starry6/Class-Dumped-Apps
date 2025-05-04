@interface AWEFeedGeneralActivityButtonController : NSObject
@property (nonatomic) NSArray activityButtonArray;
@property (nonatomic) NSMutableSet dismissedActivitySet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDismissedActivitySet:;
- (void)setActivityButtonArray:;
- (id)getDismissedRecordKeyWithActivityType:andActivityTag:;
- (id)getCurrentActivityButtonElementWithActivityType:activityTag:addDelayTime:;
- (id)activityButtonArray;
- (void)updateActivityButtonInfoWithArray:;
- (BOOL)shouldShowActivityElementWithActivityType:activityTag:andVideoPlayType:;
- (id)getCurrentActivityButtonModelWithinElement:;
- (void)recordDismissActionWithActivityType:andActivityTag:;
- (id)dismissedActivitySet;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedController;
@end
