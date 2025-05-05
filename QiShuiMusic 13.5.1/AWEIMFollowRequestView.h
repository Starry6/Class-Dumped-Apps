@interface AWEIMFollowRequestView : UIView
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIView notificationView;
@property (nonatomic) UILabel titleLabel;
- (double)indicatorImageViewHeight;
- (id)notificationView;
- (void)setNotificationView:;
- (void)updateWithUnhandledCount:;
- (void)updateWithUnreadCount:;
- (void)setTitleLabel:;
- (void)touchesBegan:withEvent:;
- (id)indicatorImage;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)touchesEnded:withEvent:;
- (id)titleLabel;
- (void)touchesCancelled:withEvent:;
- (id)countLabel;
- (void)setUpSubviews;
- (void)setCountLabel:;
@end
