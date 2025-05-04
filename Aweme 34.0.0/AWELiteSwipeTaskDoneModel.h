@interface AWELiteSwipeTaskDoneModel : AWELiteBaseApiModel
@property (nonatomic) AWELiteSwipeTaskModel swipeTask;
@property (nonatomic) NSString toast;
@property (nonatomic) AWELiteSwipeRewardToastModel rewardToast;
- (id)rewardToast;
- (void)setRewardToast:;
- (id)swipeTask;
- (void)setSwipeTask:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
+ (id)JSONKeyPathsByPropertyKey;
@end
