@interface AWEProfileServiceComponentToolBarView : UIView
@property (nonatomic) AWEUserModel user;
@property (nonatomic) UIImageView noticeImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView clickImageView;
- (BOOL)canShow;
- (id)styleModel;
- (id)toolBarModel;
- (double)estimateHeight;
- (void)postRecordWithReportType:;
- (double)adaptAutoLength:;
- (void)onTapGestureAction;
- (id)noticeImageView;
- (id)clickImageView;
- (id)initWithFrame:user:;
- (void)setNoticeImageView:;
- (void)setClickImageView:;
- (id)user;
- (void)setUser:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)viewDidAppear;
- (void)setupUI;
- (BOOL)isLightTheme;
@end
