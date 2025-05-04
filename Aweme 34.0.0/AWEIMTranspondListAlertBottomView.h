@interface AWEIMTranspondListAlertBottomView : UIView
@property (nonatomic) UIView longSeparateView;
@property (nonatomic) UIView shortSeparateView;
@property (nonatomic) UILabel duoshanLabel;
@property (nonatomic) AWEButton cancelBtn;
@property (nonatomic) AWEButton certainBtn;
- (void)p_setupUI;
- (id)cancelBtn;
- (void)setCancelBtn:;
- (id)duoshanLabel;
- (id)longSeparateView;
- (id)shortSeparateView;
- (id)certainBtn;
- (void)setCertainBtn:;
- (void)setLongSeparateView:;
- (void)setShortSeparateView:;
- (void)setDuoshanLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
