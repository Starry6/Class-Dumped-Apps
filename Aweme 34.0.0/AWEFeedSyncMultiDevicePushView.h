@interface AWEFeedSyncMultiDevicePushView : UIView
@property (nonatomic) UIView contentBaseView;
@property (nonatomic) UIButton agreeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView coverView;
@property (nonatomic) <AWEFeedSyncMultiDevicePushViewDelegate> delegate;
- (void)p_setupUI;
- (id)contentBaseView;
- (void)setContentBaseView:;
- (id)agreeButton;
- (void)setAgreeButton:;
- (void)updateViewWithURLs:;
- (id)delegate;
- (id)initWithDelegate:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)coverView;
- (void)setCoverView:;
@end
