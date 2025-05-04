@interface AWEECOMIMCardComponentCommonTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEECOMIMCardCountdownLabel countDownLabel;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) <AWEECOMIMCardCountdownDelegate> delegate;
- (id)countDownLabel;
- (void)setCountDownLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateWithData:;
- (void)setDelegate:;
- (void)setStatusLabel:;
- (id)statusLabel;
+ (double)designHeight;
+ (id)cardTitleFont;
+ (double)cardTitleHeight;
@end
