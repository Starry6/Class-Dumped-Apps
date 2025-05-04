@interface AWELiveAnchorPerfRemindPushView : UIView
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) UILabel titleLbl;
@property (nonatomic) AWELiveAnchorPerfRemindPushContentModel anchorPerfRemindPushContentModel;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (BOOL)disableDismissPanGesture;
- (double)dismissTimerInterval;
- (id)iconImgView;
- (void)setIconImgView:;
- (void)setTitleLbl:;
- (id)titleLbl;
- (void)setAnchorPerfRemindPushContentModel:;
- (id)anchorPerfRemindPushContentModel;
- (id)intrinsicContentSize;
- (id)view;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
