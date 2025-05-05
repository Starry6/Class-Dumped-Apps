@interface AWEIMTranspondListAlertBottomView : UIView
@property (nonatomic) UIView longSeparateView;
@property (nonatomic) UIView shortSeparateView;
@property (nonatomic) UILabel duoshanLabel;
@property (nonatomic) AWEButton cancelBtn;
@property (nonatomic) AWEButton certainBtn;
- (id)cancelBtn;
- (id)certainBtn;
- (id)duoshanLabel;
- (id)longSeparateView;
- (void)p_setupUI;
- (void)setCancelBtn:;
- (void)setCertainBtn:;
- (void)setDuoshanLabel:;
- (void)setLongSeparateView:;
- (void)setShortSeparateView:;
- (id)shortSeparateView;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
