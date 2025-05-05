@interface IESECLiveGoodsStatusMaskView : UIView
@property (nonatomic) UIView maskView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) UILabel rightLabel;
- (void)setCornerRadius:atCorners:;
- (void)setStatusStringFont:;
- (id)maskView;
- (void)setStatusString:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setupUI;
- (id)leftLabel;
- (id)rightLabel;
- (id)statusLabel;
- (void)setStatusLabel:;
- (void)setLeftLabel:;
- (void)setRightLabel:;
@end
