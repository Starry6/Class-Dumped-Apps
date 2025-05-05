@interface AWEIMStrangerTipView : UIView
@property (nonatomic) NSString tip;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeBlock;
@property (nonatomic) UIView lineView;
- (id)closeBlock;
- (void)didClickCloseButton:;
- (id)initWithFrame:block:;
- (void)setCloseBlock:;
- (id)init;
- (void)layoutSubviews;
- (id)tip;
- (void)setTip:;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (id)lineView;
- (void)setLineView:;
- (id)closeButton;
- (void)setCloseButton:;
@end
