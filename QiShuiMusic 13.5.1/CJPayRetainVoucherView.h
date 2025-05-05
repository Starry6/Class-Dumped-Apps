@interface CJPayRetainVoucherView : UIView
@property (nonatomic) UILabel leftMsgLabel;
@property (nonatomic) UILabel rightMsgLabel;
@property (nonatomic) UIImageView seperateView;
@property (nonatomic) UILabel topLeftLabel;
- (id)leftMsgLabel;
- (void)p_setupUI;
- (id)rightMsgLabel;
- (id)seperateView;
- (void)setLeftMsgLabel:;
- (void)setRightMsgLabel:;
- (void)setSeperateView:;
- (void)setTopLeftLabel:;
- (id)topLeftLabel;
- (void)updateWithRetainMsgModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
