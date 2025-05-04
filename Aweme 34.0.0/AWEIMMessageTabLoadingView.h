@interface AWEIMMessageTabLoadingView : UIView
@property (nonatomic) AWEIMMessageLoadingCircleView loadingAnimView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel ellipsisLabel;
@property (nonatomic) Q currentStatus;
- (void)p_addViews;
- (void)changeStatus:normalTitle:;
- (void)p_layoutViews;
- (void)p_handleLoadingAnimView:;
- (void)p_handleTitleLabel:normalTitle:;
- (id)loadingAnimView;
- (id)ellipsisLabel;
- (void)setLoadingAnimView:;
- (void)setEllipsisLabel:;
- (void)setCurrentStatus:;
- (unsigned long long)currentStatus;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
